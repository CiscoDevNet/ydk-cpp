
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_8.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Source()
    :
    fixed_id{YType::str, "fixed-id"}
    	,
    destination(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "include-ports"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::~Source()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_data() const
{
    return fixed_id.is_set
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Destination()
    :
    fixed_id{YType::str, "fixed-id"}
    	,
    gtp(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::~Destination()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_data() const
{
    return fixed_id.is_set
	|| (gtp !=  nullptr && gtp->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| (gtp !=  nullptr && gtp->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gtp")
    {
        if(gtp == nullptr)
        {
            gtp = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp>();
        }
        return gtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gtp != nullptr)
    {
        children["gtp"] = gtp;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gtp" || name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::Gtp()
    :
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "gtp"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::~Gtp()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_data() const
{
    return fixed_id.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/source/destination/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::KeyControl::KeyControl()
{

    yang_name = "key-control"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::KeyControl::~KeyControl()
{
}

bool Native::Ip::Cef::LoadSharing::KeyControl::has_data() const
{
    return false;
}

bool Native::Ip::Cef::LoadSharing::KeyControl::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ip::Cef::LoadSharing::KeyControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::KeyControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::KeyControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::KeyControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::KeyControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::LoadSharing::KeyControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::KeyControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::KeyControl::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Domain::Domain()
    :
    lookup{YType::boolean, "lookup"},
    name{YType::str, "name"}
    	,
    list(std::make_shared<Native::Ip::Domain::List>())
	,lookup_settings(std::make_shared<Native::Ip::Domain::LookupSettings>())
{
    list->parent = this;
    lookup_settings->parent = this;

    yang_name = "domain"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Domain::~Domain()
{
}

bool Native::Ip::Domain::has_data() const
{
    return lookup.is_set
	|| name.is_set
	|| (list !=  nullptr && list->has_data())
	|| (lookup_settings !=  nullptr && lookup_settings->has_data());
}

bool Native::Ip::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lookup.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (lookup_settings !=  nullptr && lookup_settings->has_operation());
}

std::string Native::Ip::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup.is_set || is_set(lookup.yfilter)) leaf_name_data.push_back(lookup.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Ip::Domain::List>();
        }
        return list;
    }

    if(child_yang_name == "lookup-settings")
    {
        if(lookup_settings == nullptr)
        {
            lookup_settings = std::make_shared<Native::Ip::Domain::LookupSettings>();
        }
        return lookup_settings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(lookup_settings != nullptr)
    {
        children["lookup-settings"] = lookup_settings;
    }

    return children;
}

void Native::Ip::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lookup")
    {
        lookup = value;
        lookup.value_namespace = name_space;
        lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lookup")
    {
        lookup.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "lookup-settings" || name == "lookup" || name == "name")
        return true;
    return false;
}

Native::Ip::Domain::List::List()
    :
    domain_name{YType::str, "domain-name"}
    	,
    vrf(std::make_shared<Native::Ip::Domain::List::Vrf>())
{
    vrf->parent = this;

    yang_name = "list"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Domain::List::~List()
{
}

bool Native::Ip::Domain::List::has_data() const
{
    return domain_name.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Ip::Domain::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Ip::Domain::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Ip::Domain::List::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Ip::Domain::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "domain-name")
        return true;
    return false;
}

Native::Ip::Domain::List::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    domain_name{YType::str, "domain-name"}
{

    yang_name = "vrf"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Domain::List::Vrf::~Vrf()
{
}

bool Native::Ip::Domain::List::Vrf::has_data() const
{
    return vrf_name.is_set
	|| domain_name.is_set;
}

bool Native::Ip::Domain::List::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(domain_name.yfilter);
}

std::string Native::Ip::Domain::List::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::List::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::List::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::List::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::List::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Domain::List::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::List::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::List::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "domain-name")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::LookupSettings()
    :
    name{YType::str, "name"}
    	,
    lookup(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup>())
{
    lookup->parent = this;

    yang_name = "lookup-settings"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Domain::LookupSettings::~LookupSettings()
{
}

bool Native::Ip::Domain::LookupSettings::has_data() const
{
    return name.is_set
	|| (lookup !=  nullptr && lookup->has_data());
}

bool Native::Ip::Domain::LookupSettings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lookup !=  nullptr && lookup->has_operation());
}

std::string Native::Ip::Domain::LookupSettings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lookup-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lookup")
    {
        if(lookup == nullptr)
        {
            lookup = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup>();
        }
        return lookup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lookup != nullptr)
    {
        children["lookup"] = lookup;
    }

    return children;
}

void Native::Ip::Domain::LookupSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lookup" || name == "name")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::Lookup()
    :
    nsap{YType::empty, "nsap"}
    	,
    source_interface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "lookup"; yang_parent_name = "lookup-settings"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Domain::LookupSettings::Lookup::~Lookup()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::has_data() const
{
    return nsap.is_set
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Domain::LookupSettings::Lookup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsap.yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Domain::LookupSettings::Lookup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lookup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsap.is_set || is_set(nsap.yfilter)) leaf_name_data.push_back(nsap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsap")
    {
        nsap = value;
        nsap.value_namespace = name_space;
        nsap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsap")
    {
        nsap.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "nsap")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "lookup"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::DomainLookupConf::DomainLookupConf()
    :
    domain_lookup{YType::boolean, "domain-lookup"}
{

    yang_name = "domain-lookup-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::DomainLookupConf::~DomainLookupConf()
{
}

bool Native::Ip::DomainLookupConf::has_data() const
{
    return domain_lookup.is_set;
}

bool Native::Ip::DomainLookupConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_lookup.yfilter);
}

std::string Native::Ip::DomainLookupConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookupConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-lookup-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookupConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookupConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookupConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainLookupConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookupConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookupConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-lookup")
        return true;
    return false;
}

Native::Ip::DomainLookup::DomainLookup()
    :
    nsap{YType::empty, "nsap"}
    	,
    source_interface(std::make_shared<Native::Ip::DomainLookup::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "domain-lookup"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::DomainLookup::~DomainLookup()
{
}

bool Native::Ip::DomainLookup::has_data() const
{
    return nsap.is_set
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::DomainLookup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsap.yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::DomainLookup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-lookup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsap.is_set || is_set(nsap.yfilter)) leaf_name_data.push_back(nsap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::DomainLookup::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::DomainLookup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsap")
    {
        nsap = value;
        nsap.value_namespace = name_space;
        nsap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsap")
    {
        nsap.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "nsap")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "domain-lookup"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::DomainLookup::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::DomainLookup::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::DomainLookup::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ip::DomainLookup::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Dns::Dns()
    :
    server(nullptr) // presence node
{

    yang_name = "dns"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dns::~Dns()
{
}

bool Native::Ip::Dns::has_data() const
{
    return (server !=  nullptr && server->has_data());
}

bool Native::Ip::Dns::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Dns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Dns::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Ip::Dns::Server::Server()
{

    yang_name = "server"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dns::Server::~Server()
{
}

bool Native::Ip::Dns::Server::has_data() const
{
    return false;
}

bool Native::Ip::Dns::Server::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ip::Dns::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dns/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dns::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dns::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dns::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dns::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dns::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dns::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dns::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Dhcp::Dhcp()
    :
    smart_relay{YType::empty, "Cisco-IOS-XE-dhcp:smart-relay"}
    	,
    bootp(std::make_shared<Native::Ip::Dhcp::Bootp>())
	,conflict(std::make_shared<Native::Ip::Dhcp::Conflict>())
	,relay(std::make_shared<Native::Ip::Dhcp::Relay>())
	,snooping_conf(std::make_shared<Native::Ip::Dhcp::SnoopingConf>())
	,snooping(std::make_shared<Native::Ip::Dhcp::Snooping>())
{
    bootp->parent = this;
    conflict->parent = this;
    relay->parent = this;
    snooping_conf->parent = this;
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::~Dhcp()
{
}

bool Native::Ip::Dhcp::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<excluded_address.size(); index++)
    {
        if(excluded_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return smart_relay.is_set
	|| (bootp !=  nullptr && bootp->has_data())
	|| (conflict !=  nullptr && conflict->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping_conf !=  nullptr && snooping_conf->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Ip::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<excluded_address.size(); index++)
    {
        if(excluded_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(smart_relay.yfilter)
	|| (bootp !=  nullptr && bootp->has_operation())
	|| (conflict !=  nullptr && conflict->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping_conf !=  nullptr && snooping_conf->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (smart_relay.is_set || is_set(smart_relay.yfilter)) leaf_name_data.push_back(smart_relay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dhcp:bootp")
    {
        if(bootp == nullptr)
        {
            bootp = std::make_shared<Native::Ip::Dhcp::Bootp>();
        }
        return bootp;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:conflict")
    {
        if(conflict == nullptr)
        {
            conflict = std::make_shared<Native::Ip::Dhcp::Conflict>();
        }
        return conflict;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:excluded-address")
    {
        for(auto const & c : excluded_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::ExcludedAddress>();
        c->parent = this;
        excluded_address.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:snooping-conf")
    {
        if(snooping_conf == nullptr)
        {
            snooping_conf = std::make_shared<Native::Ip::Dhcp::SnoopingConf>();
        }
        return snooping_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bootp != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:bootp"] = bootp;
    }

    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    if(conflict != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:conflict"] = conflict;
    }

    for (auto const & c : excluded_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(relay != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:relay"] = relay;
    }

    for (auto const & c : pool)
    {
        children[c->get_segment_path()] = c;
    }

    if(snooping_conf != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:snooping-conf"] = snooping_conf;
    }

    if(snooping != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:snooping"] = snooping;
    }

    return children;
}

void Native::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-dhcp:smart-relay")
    {
        smart_relay = value;
        smart_relay.value_namespace = name_space;
        smart_relay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "smart-relay")
    {
        smart_relay.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootp" || name == "class" || name == "conflict" || name == "excluded-address" || name == "relay" || name == "pool" || name == "snooping-conf" || name == "snooping" || name == "smart-relay")
        return true;
    return false;
}

Native::Ip::Dhcp::Bootp::Bootp()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "bootp"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Bootp::~Bootp()
{
}

bool Native::Ip::Dhcp::Bootp::has_data() const
{
    return ignore.is_set;
}

bool Native::Ip::Dhcp::Bootp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Ip::Dhcp::Bootp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Bootp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:bootp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Bootp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Bootp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Bootp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Bootp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Bootp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Bootp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Ip::Dhcp::Class_::Class_()
    :
    id{YType::str, "id"},
    remark{YType::str, "remark"}
    	,
    relay(std::make_shared<Native::Ip::Dhcp::Class_::Relay>())
{
    relay->parent = this;

    yang_name = "class"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Class_::~Class_()
{
}

bool Native::Ip::Dhcp::Class_::has_data() const
{
    return id.is_set
	|| remark.is_set
	|| (relay !=  nullptr && relay->has_data());
}

bool Native::Ip::Dhcp::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Ip::Dhcp::Class_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:class" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Ip::Dhcp::Class_::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    return children;
}

void Native::Ip::Dhcp::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay" || name == "id" || name == "remark")
        return true;
    return false;
}

Native::Ip::Dhcp::Class_::Relay::Relay()
    :
    agent(std::make_shared<Native::Ip::Dhcp::Class_::Relay::Agent>())
{
    agent->parent = this;

    yang_name = "relay"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Class_::Relay::~Relay()
{
}

bool Native::Ip::Dhcp::Class_::Relay::has_data() const
{
    return (agent !=  nullptr && agent->has_data());
}

bool Native::Ip::Dhcp::Class_::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string Native::Ip::Dhcp::Class_::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class_::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class_::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Native::Ip::Dhcp::Class_::Relay::Agent>();
        }
        return agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class_::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    return children;
}

void Native::Ip::Dhcp::Class_::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Class_::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Class_::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

Native::Ip::Dhcp::Class_::Relay::Agent::Agent()
    :
    information{YType::empty, "information"}
{

    yang_name = "agent"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Class_::Relay::Agent::~Agent()
{
}

bool Native::Ip::Dhcp::Class_::Relay::Agent::has_data() const
{
    return information.is_set;
}

bool Native::Ip::Dhcp::Class_::Relay::Agent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(information.yfilter);
}

std::string Native::Ip::Dhcp::Class_::Relay::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class_::Relay::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information.is_set || is_set(information.yfilter)) leaf_name_data.push_back(information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class_::Relay::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class_::Relay::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Class_::Relay::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "information")
    {
        information = value;
        information.value_namespace = name_space;
        information.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Class_::Relay::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "information")
    {
        information.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Class_::Relay::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Ip::Dhcp::Conflict::Conflict()
    :
    logging{YType::boolean, "logging"}
    	,
    resolution(nullptr) // presence node
{

    yang_name = "conflict"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Conflict::~Conflict()
{
}

bool Native::Ip::Dhcp::Conflict::has_data() const
{
    return logging.is_set
	|| (resolution !=  nullptr && resolution->has_data());
}

bool Native::Ip::Dhcp::Conflict::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| (resolution !=  nullptr && resolution->has_operation());
}

std::string Native::Ip::Dhcp::Conflict::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Conflict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:conflict";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Conflict::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Conflict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resolution")
    {
        if(resolution == nullptr)
        {
            resolution = std::make_shared<Native::Ip::Dhcp::Conflict::Resolution>();
        }
        return resolution;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Conflict::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resolution != nullptr)
    {
        children["resolution"] = resolution;
    }

    return children;
}

void Native::Ip::Dhcp::Conflict::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Conflict::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Conflict::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolution" || name == "logging")
        return true;
    return false;
}

Native::Ip::Dhcp::Conflict::Resolution::Resolution()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "resolution"; yang_parent_name = "conflict"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Conflict::Resolution::~Resolution()
{
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_data() const
{
    return interval.is_set;
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Dhcp::Conflict::Resolution::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:conflict/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Conflict::Resolution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Conflict::Resolution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Conflict::Resolution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Conflict::Resolution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Conflict::Resolution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Conflict::Resolution::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Ip::Dhcp::ExcludedAddress::ExcludedAddress()
    :
    low_address{YType::str, "low-address"},
    vrf{YType::str, "vrf"},
    high_address{YType::str, "high-address"}
{

    yang_name = "excluded-address"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::ExcludedAddress::~ExcludedAddress()
{
}

bool Native::Ip::Dhcp::ExcludedAddress::has_data() const
{
    return low_address.is_set
	|| vrf.is_set
	|| high_address.is_set;
}

bool Native::Ip::Dhcp::ExcludedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low_address.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(high_address.yfilter);
}

std::string Native::Ip::Dhcp::ExcludedAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::ExcludedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:excluded-address" <<"[low-address='" <<low_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::ExcludedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low_address.is_set || is_set(low_address.yfilter)) leaf_name_data.push_back(low_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (high_address.is_set || is_set(high_address.yfilter)) leaf_name_data.push_back(high_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::ExcludedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::ExcludedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::ExcludedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low-address")
    {
        low_address = value;
        low_address.value_namespace = name_space;
        low_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-address")
    {
        high_address = value;
        high_address.value_namespace = name_space;
        high_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::ExcludedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low-address")
    {
        low_address.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "high-address")
    {
        high_address.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::ExcludedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low-address" || name == "vrf" || name == "high-address")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Ip::Dhcp::Relay::has_data() const
{
    return (information !=  nullptr && information->has_data());
}

bool Native::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Ip::Dhcp::Relay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Information::Information()
    :
    trust_all{YType::empty, "trust-all"}
    	,
    option(std::make_shared<Native::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Ip::Dhcp::Relay::Information::has_data() const
{
    return trust_all.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_all.yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::Relay::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:relay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_all.is_set || is_set(trust_all.yfilter)) leaf_name_data.push_back(trust_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-all")
    {
        trust_all = value;
        trust_all.value_namespace = name_space;
        trust_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-all")
    {
        trust_all.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "trust-all")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Information::Option::Option()
    :
    option_default{YType::empty, "option-default"},
    vpn{YType::empty, "vpn"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return option_default.is_set
	|| vpn.is_set;
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option_default.yfilter)
	|| ydk::is_set(vpn.yfilter);
}

std::string Native::Ip::Dhcp::Relay::Information::Option::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:relay/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_default.is_set || is_set(option_default.yfilter)) leaf_name_data.push_back(option_default.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-default")
    {
        option_default = value;
        option_default.value_namespace = name_space;
        option_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-default")
    {
        option_default.yfilter = yfilter;
    }
    if(value_path == "vpn")
    {
        vpn.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-default" || name == "vpn")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Pool()
    :
    id{YType::str, "id"},
    vrf{YType::str, "vrf"},
    default_router{YType::str, "default-router"},
    dns_server{YType::str, "dns-server"},
    domain_name{YType::str, "domain-name"}
    	,
    option(std::make_shared<Native::Ip::Dhcp::Pool::Option>())
	,network(std::make_shared<Native::Ip::Dhcp::Pool::Network>())
{
    option->parent = this;
    network->parent = this;

    yang_name = "pool"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Pool::~Pool()
{
}

bool Native::Ip::Dhcp::Pool::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lease.size(); index++)
    {
        if(lease[index]->has_data())
            return true;
    }
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| vrf.is_set
	|| domain_name.is_set
	|| (option !=  nullptr && option->has_data())
	|| (network !=  nullptr && network->has_data());
}

bool Native::Ip::Dhcp::Pool::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lease.size(); index++)
    {
        if(lease[index]->has_operation())
            return true;
    }
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(default_router.yfilter)
	|| ydk::is_set(dns_server.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| (option !=  nullptr && option->has_operation())
	|| (network !=  nullptr && network->has_operation());
}

std::string Native::Ip::Dhcp::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:pool" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    auto default_router_name_datas = default_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_router_name_datas.begin(), default_router_name_datas.end());
    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Pool::Option>();
        }
        return option;
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    if(child_yang_name == "lease")
    {
        for(auto const & c : lease)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Lease>();
        c->parent = this;
        lease.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Ip::Dhcp::Pool::Network>();
        }
        return network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lease)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-router")
    {
        default_router.append(value);
    }
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "default-router")
    {
        default_router.yfilter = yfilter;
    }
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "class" || name == "lease" || name == "network" || name == "id" || name == "vrf" || name == "default-router" || name == "dns-server" || name == "domain-name")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::Option()
{

    yang_name = "option"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Option::~Option()
{
}

bool Native::Ip::Dhcp::Pool::Option::has_data() const
{
    for (std::size_t index=0; index<option_range.size(); index++)
    {
        if(option_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Dhcp::Pool::Option::has_operation() const
{
    for (std::size_t index=0; index<option_range.size(); index++)
    {
        if(option_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Dhcp::Pool::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-range")
    {
        for(auto const & c : option_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange>();
        c->parent = this;
        option_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : option_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-range")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::OptionRange()
    :
    option_range{YType::uint8, "option-range"},
    ascii{YType::str, "ascii"},
    ip{YType::str, "ip"}
    	,
    hex(std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange::Hex>())
{
    hex->parent = this;

    yang_name = "option-range"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::~OptionRange()
{
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_data() const
{
    for (auto const & leaf : ip.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return option_range.is_set
	|| ascii.is_set
	|| (hex !=  nullptr && hex->has_data());
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_operation() const
{
    for (auto const & leaf : ip.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_range.yfilter)
	|| ydk::is_set(ascii.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (hex !=  nullptr && hex->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Option::OptionRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-range" <<"[option-range='" <<option_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::OptionRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_range.is_set || is_set(option_range.yfilter)) leaf_name_data.push_back(option_range.get_name_leafdata());
    if (ascii.is_set || is_set(ascii.yfilter)) leaf_name_data.push_back(ascii.get_name_leafdata());

    auto ip_name_datas = ip.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_name_datas.begin(), ip_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Option::OptionRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hex")
    {
        if(hex == nullptr)
        {
            hex = std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange::Hex>();
        }
        return hex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Option::OptionRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hex != nullptr)
    {
        children["hex"] = hex;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-range")
    {
        option_range = value;
        option_range.value_namespace = name_space;
        option_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii")
    {
        ascii = value;
        ascii.value_namespace = name_space;
        ascii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip.append(value);
    }
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-range")
    {
        option_range.yfilter = yfilter;
    }
    if(value_path == "ascii")
    {
        ascii.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex" || name == "option-range" || name == "ascii" || name == "ip")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::Hex()
    :
    hex_line{YType::str, "hex-line"},
    none{YType::empty, "none"}
{

    yang_name = "hex"; yang_parent_name = "option-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::~Hex()
{
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_data() const
{
    return hex_line.is_set
	|| none.is_set;
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_line.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_line.is_set || is_set(hex_line.yfilter)) leaf_name_data.push_back(hex_line.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-line")
    {
        hex_line = value;
        hex_line.value_namespace = name_space;
        hex_line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-line")
    {
        hex_line.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-line" || name == "none")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class_::Class_()
    :
    name{YType::str, "name"}
    	,
    address(std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address>())
{
    address->parent = this;

    yang_name = "class"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Class_::~Class_()
{
}

bool Native::Ip::Dhcp::Pool::Class_::has_data() const
{
    return name.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ip::Dhcp::Pool::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class_::Address::Address()
    :
    range(std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address::Range>())
{
    range->parent = this;

    yang_name = "address"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Class_::Address::~Address()
{
}

bool Native::Ip::Dhcp::Pool::Class_::Address::has_data() const
{
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Dhcp::Pool::Class_::Address::has_operation() const
{
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Class_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Class_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Class_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Class_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class_::Address::Range::Range()
    :
    ipv4_start{YType::str, "ipv4-start"},
    ipv4_end{YType::str, "ipv4-end"}
{

    yang_name = "range"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Class_::Address::Range::~Range()
{
}

bool Native::Ip::Dhcp::Pool::Class_::Address::Range::has_data() const
{
    return ipv4_start.is_set
	|| ipv4_end.is_set;
}

bool Native::Ip::Dhcp::Pool::Class_::Address::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_start.yfilter)
	|| ydk::is_set(ipv4_end.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Class_::Address::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class_::Address::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_start.is_set || is_set(ipv4_start.yfilter)) leaf_name_data.push_back(ipv4_start.get_name_leafdata());
    if (ipv4_end.is_set || is_set(ipv4_end.yfilter)) leaf_name_data.push_back(ipv4_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class_::Address::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class_::Address::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Class_::Address::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-start")
    {
        ipv4_start = value;
        ipv4_start.value_namespace = name_space;
        ipv4_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-end")
    {
        ipv4_end = value;
        ipv4_end.value_namespace = name_space;
        ipv4_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Class_::Address::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-start")
    {
        ipv4_start.yfilter = yfilter;
    }
    if(value_path == "ipv4-end")
    {
        ipv4_end.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Class_::Address::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-start" || name == "ipv4-end")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Lease::Lease()
    :
    days{YType::uint16, "Days"},
    hours{YType::uint8, "Hours"},
    minutes{YType::uint8, "Minutes"}
{

    yang_name = "lease"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Lease::~Lease()
{
}

bool Native::Ip::Dhcp::Pool::Lease::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::Ip::Dhcp::Pool::Lease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease" <<"[Days='" <<days <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Lease::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Lease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Lease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "Hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "Minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Lease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Days" || name == "Hours" || name == "Minutes")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Network::Network()
    :
    number{YType::str, "number"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "network"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Network::~Network()
{
}

bool Native::Ip::Dhcp::Pool::Network::has_data() const
{
    return number.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Ip::Dhcp::Pool::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Ip::Dhcp::SnoopingConf::SnoopingConf()
    :
    snooping{YType::empty, "snooping"}
{

    yang_name = "snooping-conf"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::SnoopingConf::~SnoopingConf()
{
}

bool Native::Ip::Dhcp::SnoopingConf::has_data() const
{
    return snooping.is_set;
}

bool Native::Ip::Dhcp::SnoopingConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snooping.yfilter);
}

std::string Native::Ip::Dhcp::SnoopingConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::SnoopingConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::SnoopingConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::SnoopingConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::SnoopingConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::SnoopingConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snooping")
    {
        snooping = value;
        snooping.value_namespace = name_space;
        snooping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::SnoopingConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snooping")
    {
        snooping.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::SnoopingConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Snooping()
    :
    vlan{YType::str, "vlan"}
    	,
    database(std::make_shared<Native::Ip::Dhcp::Snooping::Database>())
	,information(std::make_shared<Native::Ip::Dhcp::Snooping::Information>())
	,track(std::make_shared<Native::Ip::Dhcp::Snooping::Track>())
	,verify(std::make_shared<Native::Ip::Dhcp::Snooping::Verify>())
{
    database->parent = this;
    information->parent = this;
    track->parent = this;
    verify->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Ip::Dhcp::Snooping::has_data() const
{
    return vlan.is_set
	|| (database !=  nullptr && database->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (database !=  nullptr && database->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Ip::Dhcp::Snooping::Database>();
        }
        return database;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Ip::Dhcp::Snooping::Information>();
        }
        return information;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Ip::Dhcp::Snooping::Track>();
        }
        return track;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Ip::Dhcp::Snooping::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(track != nullptr)
    {
        children["track"] = track;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "information" || name == "track" || name == "verify" || name == "vlan")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Database::Database()
    :
    url{YType::str, "url"},
    timeout{YType::uint32, "timeout"},
    write_delay{YType::uint32, "write-delay"}
{

    yang_name = "database"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::Database::~Database()
{
}

bool Native::Ip::Dhcp::Snooping::Database::has_data() const
{
    return url.is_set
	|| timeout.is_set
	|| write_delay.is_set;
}

bool Native::Ip::Dhcp::Snooping::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(write_delay.yfilter);
}

std::string Native::Ip::Dhcp::Snooping::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (write_delay.is_set || is_set(write_delay.yfilter)) leaf_name_data.push_back(write_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Snooping::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-delay")
    {
        write_delay = value;
        write_delay.value_namespace = name_space;
        write_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "write-delay")
    {
        write_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "timeout" || name == "write-delay")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Information::Information()
    :
    option_conf{YType::boolean, "option-conf"}
    	,
    option(nullptr) // presence node
{

    yang_name = "information"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::Information::~Information()
{
}

bool Native::Ip::Dhcp::Snooping::Information::has_data() const
{
    return option_conf.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option_conf.yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_conf.is_set || is_set(option_conf.yfilter)) leaf_name_data.push_back(option_conf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-conf")
    {
        option_conf = value;
        option_conf.value_namespace = name_space;
        option_conf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-conf")
    {
        option_conf.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "option-conf")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Information::Option::Option()
    :
    allow_untrusted{YType::empty, "allow-untrusted"}
    	,
    format(std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format>())
{
    format->parent = this;

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::Information::Option::~Option()
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_data() const
{
    return allow_untrusted.is_set
	|| (format !=  nullptr && format->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_untrusted.yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.yfilter)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(format != nullptr)
    {
        children["format"] = format;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
        allow_untrusted.value_namespace = name_space;
        allow_untrusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "allow-untrusted")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::Format()
    :
    remote_id(std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId>())
{
    remote_id->parent = this;

    yang_name = "format"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::~Format()
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::has_data() const
{
    return (remote_id !=  nullptr && remote_id->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::has_operation() const
{
    return is_set(yfilter)
	|| (remote_id !=  nullptr && remote_id->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::Format::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/information/option/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Information::Option::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::Option::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId>();
        }
        return remote_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::Option::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_id != nullptr)
    {
        children["remote-id"] = remote_id;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::Option::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Snooping::Information::Option::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-id")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::RemoteId()
    :
    hostname{YType::empty, "hostname"},
    string{YType::str, "string"}
{

    yang_name = "remote-id"; yang_parent_name = "format"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::~RemoteId()
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::has_data() const
{
    return hostname.is_set
	|| string.is_set;
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/information/option/format/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "string")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Track::Track()
    :
    host{YType::empty, "host"}
{

    yang_name = "track"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::Track::~Track()
{
}

bool Native::Ip::Dhcp::Snooping::Track::has_data() const
{
    return host.is_set;
}

bool Native::Ip::Dhcp::Snooping::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Ip::Dhcp::Snooping::Track::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Snooping::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Verify::Verify()
    :
    mac_address{YType::empty, "mac-address"},
    no_relay_agent_address{YType::empty, "no-relay-agent-address"}
{

    yang_name = "verify"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::Verify::~Verify()
{
}

bool Native::Ip::Dhcp::Snooping::Verify::has_data() const
{
    return mac_address.is_set
	|| no_relay_agent_address.is_set;
}

bool Native::Ip::Dhcp::Snooping::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(no_relay_agent_address.yfilter);
}

std::string Native::Ip::Dhcp::Snooping::Verify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (no_relay_agent_address.is_set || is_set(no_relay_agent_address.yfilter)) leaf_name_data.push_back(no_relay_agent_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Snooping::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-relay-agent-address")
    {
        no_relay_agent_address = value;
        no_relay_agent_address.value_namespace = name_space;
        no_relay_agent_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "no-relay-agent-address")
    {
        no_relay_agent_address.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "no-relay-agent-address")
        return true;
    return false;
}

Native::Ip::ForwardProtocol::ForwardProtocol()
    :
    protocol{YType::enumeration, "protocol"}
    	,
    spanning_tree(nullptr) // presence node
	,udp(std::make_shared<Native::Ip::ForwardProtocol::Udp>())
{
    udp->parent = this;

    yang_name = "forward-protocol"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ForwardProtocol::~ForwardProtocol()
{
}

bool Native::Ip::ForwardProtocol::has_data() const
{
    return protocol.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Ip::ForwardProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Ip::ForwardProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ForwardProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ForwardProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ForwardProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Ip::ForwardProtocol::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Ip::ForwardProtocol::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ForwardProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Ip::ForwardProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ForwardProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Ip::ForwardProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spanning-tree" || name == "udp" || name == "protocol")
        return true;
    return false;
}

Native::Ip::ForwardProtocol::SpanningTree::SpanningTree()
    :
    any_local_broadcast{YType::empty, "any-local-broadcast"}
{

    yang_name = "spanning-tree"; yang_parent_name = "forward-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ForwardProtocol::SpanningTree::~SpanningTree()
{
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_data() const
{
    return any_local_broadcast.is_set;
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any_local_broadcast.yfilter);
}

std::string Native::Ip::ForwardProtocol::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/forward-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ForwardProtocol::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ForwardProtocol::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_local_broadcast.is_set || is_set(any_local_broadcast.yfilter)) leaf_name_data.push_back(any_local_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ForwardProtocol::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ForwardProtocol::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ForwardProtocol::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-local-broadcast")
    {
        any_local_broadcast = value;
        any_local_broadcast.value_namespace = name_space;
        any_local_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ForwardProtocol::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-local-broadcast")
    {
        any_local_broadcast.yfilter = yfilter;
    }
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any-local-broadcast")
        return true;
    return false;
}

Native::Ip::ForwardProtocol::Udp::Udp()
    :
    biff{YType::boolean, "biff"},
    bootpc{YType::boolean, "bootpc"},
    bootps{YType::boolean, "bootps"},
    discard{YType::boolean, "discard"},
    dnsix{YType::boolean, "dnsix"},
    domain{YType::boolean, "domain"},
    echo{YType::boolean, "echo"},
    isakmp{YType::boolean, "isakmp"},
    mobile_ip{YType::boolean, "mobile-ip"},
    nameserver{YType::boolean, "nameserver"},
    netbios_dgm{YType::boolean, "netbios-dgm"},
    netbios_ns{YType::boolean, "netbios-ns"},
    netbios_ss{YType::boolean, "netbios-ss"},
    non500_isakmp{YType::boolean, "non500-isakmp"},
    ntp{YType::boolean, "ntp"},
    pim_auto_rp{YType::boolean, "pim-auto-rp"},
    rip{YType::boolean, "rip"},
    snmp{YType::boolean, "snmp"},
    snmptrap{YType::boolean, "snmptrap"},
    sunrpc{YType::boolean, "sunrpc"},
    syslog{YType::boolean, "syslog"},
    tacacs{YType::boolean, "tacacs"},
    talk{YType::boolean, "talk"},
    tftp{YType::boolean, "tftp"},
    time{YType::boolean, "time"},
    who{YType::boolean, "who"},
    xdmcp{YType::boolean, "xdmcp"}
{

    yang_name = "udp"; yang_parent_name = "forward-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ForwardProtocol::Udp::~Udp()
{
}

bool Native::Ip::ForwardProtocol::Udp::has_data() const
{
    return biff.is_set
	|| bootpc.is_set
	|| bootps.is_set
	|| discard.is_set
	|| dnsix.is_set
	|| domain.is_set
	|| echo.is_set
	|| isakmp.is_set
	|| mobile_ip.is_set
	|| nameserver.is_set
	|| netbios_dgm.is_set
	|| netbios_ns.is_set
	|| netbios_ss.is_set
	|| non500_isakmp.is_set
	|| ntp.is_set
	|| pim_auto_rp.is_set
	|| rip.is_set
	|| snmp.is_set
	|| snmptrap.is_set
	|| sunrpc.is_set
	|| syslog.is_set
	|| tacacs.is_set
	|| talk.is_set
	|| tftp.is_set
	|| time.is_set
	|| who.is_set
	|| xdmcp.is_set;
}

bool Native::Ip::ForwardProtocol::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(biff.yfilter)
	|| ydk::is_set(bootpc.yfilter)
	|| ydk::is_set(bootps.yfilter)
	|| ydk::is_set(discard.yfilter)
	|| ydk::is_set(dnsix.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(echo.yfilter)
	|| ydk::is_set(isakmp.yfilter)
	|| ydk::is_set(mobile_ip.yfilter)
	|| ydk::is_set(nameserver.yfilter)
	|| ydk::is_set(netbios_dgm.yfilter)
	|| ydk::is_set(netbios_ns.yfilter)
	|| ydk::is_set(netbios_ss.yfilter)
	|| ydk::is_set(non500_isakmp.yfilter)
	|| ydk::is_set(ntp.yfilter)
	|| ydk::is_set(pim_auto_rp.yfilter)
	|| ydk::is_set(rip.yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(snmptrap.yfilter)
	|| ydk::is_set(sunrpc.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(tacacs.yfilter)
	|| ydk::is_set(talk.yfilter)
	|| ydk::is_set(tftp.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(who.yfilter)
	|| ydk::is_set(xdmcp.yfilter);
}

std::string Native::Ip::ForwardProtocol::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/forward-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ForwardProtocol::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ForwardProtocol::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (biff.is_set || is_set(biff.yfilter)) leaf_name_data.push_back(biff.get_name_leafdata());
    if (bootpc.is_set || is_set(bootpc.yfilter)) leaf_name_data.push_back(bootpc.get_name_leafdata());
    if (bootps.is_set || is_set(bootps.yfilter)) leaf_name_data.push_back(bootps.get_name_leafdata());
    if (discard.is_set || is_set(discard.yfilter)) leaf_name_data.push_back(discard.get_name_leafdata());
    if (dnsix.is_set || is_set(dnsix.yfilter)) leaf_name_data.push_back(dnsix.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (isakmp.is_set || is_set(isakmp.yfilter)) leaf_name_data.push_back(isakmp.get_name_leafdata());
    if (mobile_ip.is_set || is_set(mobile_ip.yfilter)) leaf_name_data.push_back(mobile_ip.get_name_leafdata());
    if (nameserver.is_set || is_set(nameserver.yfilter)) leaf_name_data.push_back(nameserver.get_name_leafdata());
    if (netbios_dgm.is_set || is_set(netbios_dgm.yfilter)) leaf_name_data.push_back(netbios_dgm.get_name_leafdata());
    if (netbios_ns.is_set || is_set(netbios_ns.yfilter)) leaf_name_data.push_back(netbios_ns.get_name_leafdata());
    if (netbios_ss.is_set || is_set(netbios_ss.yfilter)) leaf_name_data.push_back(netbios_ss.get_name_leafdata());
    if (non500_isakmp.is_set || is_set(non500_isakmp.yfilter)) leaf_name_data.push_back(non500_isakmp.get_name_leafdata());
    if (ntp.is_set || is_set(ntp.yfilter)) leaf_name_data.push_back(ntp.get_name_leafdata());
    if (pim_auto_rp.is_set || is_set(pim_auto_rp.yfilter)) leaf_name_data.push_back(pim_auto_rp.get_name_leafdata());
    if (rip.is_set || is_set(rip.yfilter)) leaf_name_data.push_back(rip.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (snmptrap.is_set || is_set(snmptrap.yfilter)) leaf_name_data.push_back(snmptrap.get_name_leafdata());
    if (sunrpc.is_set || is_set(sunrpc.yfilter)) leaf_name_data.push_back(sunrpc.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (tacacs.is_set || is_set(tacacs.yfilter)) leaf_name_data.push_back(tacacs.get_name_leafdata());
    if (talk.is_set || is_set(talk.yfilter)) leaf_name_data.push_back(talk.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (who.is_set || is_set(who.yfilter)) leaf_name_data.push_back(who.get_name_leafdata());
    if (xdmcp.is_set || is_set(xdmcp.yfilter)) leaf_name_data.push_back(xdmcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ForwardProtocol::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ForwardProtocol::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ForwardProtocol::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "biff")
    {
        biff = value;
        biff.value_namespace = name_space;
        biff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootpc")
    {
        bootpc = value;
        bootpc.value_namespace = name_space;
        bootpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootps")
    {
        bootps = value;
        bootps.value_namespace = name_space;
        bootps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard")
    {
        discard = value;
        discard.value_namespace = name_space;
        discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsix")
    {
        dnsix = value;
        dnsix.value_namespace = name_space;
        dnsix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp")
    {
        isakmp = value;
        isakmp.value_namespace = name_space;
        isakmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile-ip")
    {
        mobile_ip = value;
        mobile_ip.value_namespace = name_space;
        mobile_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nameserver")
    {
        nameserver = value;
        nameserver.value_namespace = name_space;
        nameserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios-dgm")
    {
        netbios_dgm = value;
        netbios_dgm.value_namespace = name_space;
        netbios_dgm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios-ns")
    {
        netbios_ns = value;
        netbios_ns.value_namespace = name_space;
        netbios_ns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios-ss")
    {
        netbios_ss = value;
        netbios_ss.value_namespace = name_space;
        netbios_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non500-isakmp")
    {
        non500_isakmp = value;
        non500_isakmp.value_namespace = name_space;
        non500_isakmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp")
    {
        ntp = value;
        ntp.value_namespace = name_space;
        ntp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-auto-rp")
    {
        pim_auto_rp = value;
        pim_auto_rp.value_namespace = name_space;
        pim_auto_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rip")
    {
        rip = value;
        rip.value_namespace = name_space;
        rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmptrap")
    {
        snmptrap = value;
        snmptrap.value_namespace = name_space;
        snmptrap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sunrpc")
    {
        sunrpc = value;
        sunrpc.value_namespace = name_space;
        sunrpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tacacs")
    {
        tacacs = value;
        tacacs.value_namespace = name_space;
        tacacs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "talk")
    {
        talk = value;
        talk.value_namespace = name_space;
        talk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "who")
    {
        who = value;
        who.value_namespace = name_space;
        who.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xdmcp")
    {
        xdmcp = value;
        xdmcp.value_namespace = name_space;
        xdmcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ForwardProtocol::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "biff")
    {
        biff.yfilter = yfilter;
    }
    if(value_path == "bootpc")
    {
        bootpc.yfilter = yfilter;
    }
    if(value_path == "bootps")
    {
        bootps.yfilter = yfilter;
    }
    if(value_path == "discard")
    {
        discard.yfilter = yfilter;
    }
    if(value_path == "dnsix")
    {
        dnsix.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "echo")
    {
        echo.yfilter = yfilter;
    }
    if(value_path == "isakmp")
    {
        isakmp.yfilter = yfilter;
    }
    if(value_path == "mobile-ip")
    {
        mobile_ip.yfilter = yfilter;
    }
    if(value_path == "nameserver")
    {
        nameserver.yfilter = yfilter;
    }
    if(value_path == "netbios-dgm")
    {
        netbios_dgm.yfilter = yfilter;
    }
    if(value_path == "netbios-ns")
    {
        netbios_ns.yfilter = yfilter;
    }
    if(value_path == "netbios-ss")
    {
        netbios_ss.yfilter = yfilter;
    }
    if(value_path == "non500-isakmp")
    {
        non500_isakmp.yfilter = yfilter;
    }
    if(value_path == "ntp")
    {
        ntp.yfilter = yfilter;
    }
    if(value_path == "pim-auto-rp")
    {
        pim_auto_rp.yfilter = yfilter;
    }
    if(value_path == "rip")
    {
        rip.yfilter = yfilter;
    }
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "snmptrap")
    {
        snmptrap.yfilter = yfilter;
    }
    if(value_path == "sunrpc")
    {
        sunrpc.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "tacacs")
    {
        tacacs.yfilter = yfilter;
    }
    if(value_path == "talk")
    {
        talk.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "who")
    {
        who.yfilter = yfilter;
    }
    if(value_path == "xdmcp")
    {
        xdmcp.yfilter = yfilter;
    }
}

bool Native::Ip::ForwardProtocol::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "biff" || name == "bootpc" || name == "bootps" || name == "discard" || name == "dnsix" || name == "domain" || name == "echo" || name == "isakmp" || name == "mobile-ip" || name == "nameserver" || name == "netbios-dgm" || name == "netbios-ns" || name == "netbios-ss" || name == "non500-isakmp" || name == "ntp" || name == "pim-auto-rp" || name == "rip" || name == "snmp" || name == "snmptrap" || name == "sunrpc" || name == "syslog" || name == "tacacs" || name == "talk" || name == "tftp" || name == "time" || name == "who" || name == "xdmcp")
        return true;
    return false;
}

Native::Ip::GratuitousArpsConf::GratuitousArpsConf()
    :
    gratuitous_arps{YType::boolean, "gratuitous-arps"}
{

    yang_name = "gratuitous-arps-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::GratuitousArpsConf::~GratuitousArpsConf()
{
}

bool Native::Ip::GratuitousArpsConf::has_data() const
{
    return gratuitous_arps.is_set;
}

bool Native::Ip::GratuitousArpsConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gratuitous_arps.yfilter);
}

std::string Native::Ip::GratuitousArpsConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::GratuitousArpsConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gratuitous-arps-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::GratuitousArpsConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gratuitous_arps.is_set || is_set(gratuitous_arps.yfilter)) leaf_name_data.push_back(gratuitous_arps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::GratuitousArpsConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::GratuitousArpsConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::GratuitousArpsConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gratuitous-arps")
    {
        gratuitous_arps = value;
        gratuitous_arps.value_namespace = name_space;
        gratuitous_arps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::GratuitousArpsConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gratuitous-arps")
    {
        gratuitous_arps.yfilter = yfilter;
    }
}

bool Native::Ip::GratuitousArpsConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gratuitous-arps")
        return true;
    return false;
}

Native::Ip::Ftp::Ftp()
    :
    passive{YType::empty, "passive"},
    username{YType::str, "username"}
    	,
    source_interface(std::make_shared<Native::Ip::Ftp::SourceInterface>())
	,password(std::make_shared<Native::Ip::Ftp::Password>())
{
    source_interface->parent = this;
    password->parent = this;

    yang_name = "ftp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ftp::~Ftp()
{
}

bool Native::Ip::Ftp::has_data() const
{
    return passive.is_set
	|| username.is_set
	|| (source_interface !=  nullptr && source_interface->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Ftp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Ftp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Ftp::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Ftp::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Ip::Ftp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "password" || name == "passive" || name == "username")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "ftp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ftp::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Ftp::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Ftp::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Ftp::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ip::Ftp::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ftp::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Ftp::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ftp::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ftp::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Ftp::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ftp::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Ftp::Password::Password()
    :
    password_container(std::make_shared<Native::Ip::Ftp::Password::PasswordContainer>())
{
    password_container->parent = this;

    yang_name = "password"; yang_parent_name = "ftp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ftp::Password::~Password()
{
}

bool Native::Ip::Ftp::Password::has_data() const
{
    return (password_container !=  nullptr && password_container->has_data());
}

bool Native::Ip::Ftp::Password::has_operation() const
{
    return is_set(yfilter)
	|| (password_container !=  nullptr && password_container->has_operation());
}

std::string Native::Ip::Ftp::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-container")
    {
        if(password_container == nullptr)
        {
            password_container = std::make_shared<Native::Ip::Ftp::Password::PasswordContainer>();
        }
        return password_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password_container != nullptr)
    {
        children["password-container"] = password_container;
    }

    return children;
}

void Native::Ip::Ftp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ftp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ftp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-container")
        return true;
    return false;
}

Native::Ip::Ftp::Password::PasswordContainer::PasswordContainer()
    :
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "password-container"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ftp::Password::PasswordContainer::~PasswordContainer()
{
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_data() const
{
    return encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Ftp::Password::PasswordContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ftp::Password::PasswordContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ftp::Password::PasswordContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ftp::Password::PasswordContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::Password::PasswordContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ftp::Password::PasswordContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ftp::Password::PasswordContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Telnet::Telnet()
    :
    source_interface{YType::str, "source-interface"}
{

    yang_name = "telnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Telnet::~Telnet()
{
}

bool Native::Ip::Telnet::has_data() const
{
    return source_interface.is_set;
}

bool Native::Ip::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Native::Ip::Telnet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Ip::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Host::~Host()
{
}

bool Native::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<host_list.size(); index++)
    {
        if(host_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<host_list.size(); index++)
    {
        if(host_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-list")
    {
        for(auto const & c : host_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Host::HostList>();
        c->parent = this;
        host_list.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<Native::Ip::Host::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-list" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Host::HostList::HostList()
    :
    name{YType::str, "name"},
    ip{YType::str, "ip"}
{

    yang_name = "host-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Host::HostList::~HostList()
{
}

bool Native::Ip::Host::HostList::has_data() const
{
    return name.is_set
	|| ip.is_set;
}

bool Native::Ip::Host::HostList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Ip::Host::HostList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Host::HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::HostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Host::HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Host::HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Host::HostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Host::HostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Ip::Host::HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ip")
        return true;
    return false;
}

Native::Ip::Host::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Host::Vrf::~Vrf()
{
}

bool Native::Ip::Host::Vrf::has_data() const
{
    for (std::size_t index=0; index<host_name.size(); index++)
    {
        if(host_name[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Native::Ip::Host::Vrf::has_operation() const
{
    for (std::size_t index=0; index<host_name.size(); index++)
    {
        if(host_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Native::Ip::Host::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Host::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Host::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-name")
    {
        for(auto const & c : host_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Host::Vrf::HostName>();
        c->parent = this;
        host_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Host::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Host::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Host::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Ip::Host::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "vrf-name")
        return true;
    return false;
}

Native::Ip::Host::Vrf::HostName::HostName()
    :
    host_name{YType::str, "host-name"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "host-name"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Host::Vrf::HostName::~HostName()
{
}

bool Native::Ip::Host::Vrf::HostName::has_data() const
{
    return host_name.is_set
	|| ipv4_address.is_set;
}

bool Native::Ip::Host::Vrf::HostName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Native::Ip::Host::Vrf::HostName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-name" <<"[host-name='" <<host_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Host::Vrf::HostName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Host::Vrf::HostName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Host::Vrf::HostName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Host::Vrf::HostName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Host::Vrf::HostName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Native::Ip::Host::Vrf::HostName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "ipv4-address")
        return true;
    return false;
}

Native::Ip::Multicast::Multicast()
    :
    route_limit{YType::uint32, "Cisco-IOS-XE-multicast:route-limit"}
    	,
    multipath(nullptr) // presence node
{

    yang_name = "multicast"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Multicast::~Multicast()
{
}

bool Native::Ip::Multicast::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return route_limit.is_set
	|| (multipath !=  nullptr && multipath->has_data());
}

bool Native::Ip::Multicast::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| (multipath !=  nullptr && multipath->has_operation());
}

std::string Native::Ip::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-multicast:multipath")
    {
        if(multipath == nullptr)
        {
            multipath = std::make_shared<Native::Ip::Multicast::Multipath>();
        }
        return multipath;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Multicast::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multipath != nullptr)
    {
        children["Cisco-IOS-XE-multicast:multipath"] = multipath;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-multicast:route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipath" || name == "vrf" || name == "route-limit")
        return true;
    return false;
}

Native::Ip::Multicast::Multipath::Multipath()
    :
    s_g_hash{YType::enumeration, "s-g-hash"}
{

    yang_name = "multipath"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Multicast::Multipath::~Multipath()
{
}

bool Native::Ip::Multicast::Multipath::has_data() const
{
    return s_g_hash.is_set;
}

bool Native::Ip::Multicast::Multipath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s_g_hash.yfilter);
}

std::string Native::Ip::Multicast::Multipath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::Multipath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multipath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Multipath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s_g_hash.is_set || is_set(s_g_hash.yfilter)) leaf_name_data.push_back(s_g_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Multipath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Multipath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Multicast::Multipath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash = value;
        s_g_hash.value_namespace = name_space;
        s_g_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Multipath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Multipath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s-g-hash")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    multipath(nullptr) // presence node
	,route_limit(std::make_shared<Native::Ip::Multicast::Vrf::RouteLimit>())
	,rpf(std::make_shared<Native::Ip::Multicast::Vrf::Rpf>())
{
    route_limit->parent = this;
    rpf->parent = this;

    yang_name = "vrf"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Multicast::Vrf::~Vrf()
{
}

bool Native::Ip::Multicast::Vrf::has_data() const
{
    return name.is_set
	|| (multipath !=  nullptr && multipath->has_data())
	|| (route_limit !=  nullptr && route_limit->has_data())
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Native::Ip::Multicast::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (multipath !=  nullptr && multipath->has_operation())
	|| (route_limit !=  nullptr && route_limit->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation());
}

std::string Native::Ip::Multicast::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Multicast::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multipath")
    {
        if(multipath == nullptr)
        {
            multipath = std::make_shared<Native::Ip::Multicast::Vrf::Multipath>();
        }
        return multipath;
    }

    if(child_yang_name == "route-limit")
    {
        if(route_limit == nullptr)
        {
            route_limit = std::make_shared<Native::Ip::Multicast::Vrf::RouteLimit>();
        }
        return route_limit;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Native::Ip::Multicast::Vrf::Rpf>();
        }
        return rpf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multipath != nullptr)
    {
        children["multipath"] = multipath;
    }

    if(route_limit != nullptr)
    {
        children["route-limit"] = route_limit;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipath" || name == "route-limit" || name == "rpf" || name == "name")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Multipath::Multipath()
    :
    s_g_hash{YType::enumeration, "s-g-hash"}
{

    yang_name = "multipath"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::Multipath::~Multipath()
{
}

bool Native::Ip::Multicast::Vrf::Multipath::has_data() const
{
    return s_g_hash.is_set;
}

bool Native::Ip::Multicast::Vrf::Multipath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s_g_hash.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Multipath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multipath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Multipath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s_g_hash.is_set || is_set(s_g_hash.yfilter)) leaf_name_data.push_back(s_g_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Multipath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Multipath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Multicast::Vrf::Multipath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash = value;
        s_g_hash.value_namespace = name_space;
        s_g_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Multipath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s-g-hash")
    {
        s_g_hash.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Multipath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s-g-hash")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::RouteLimit::RouteLimit()
    :
    no_routes{YType::uint32, "no-routes"},
    warning_threshold{YType::uint32, "warning-threshold"}
{

    yang_name = "route-limit"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::RouteLimit::~RouteLimit()
{
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_data() const
{
    return no_routes.is_set
	|| warning_threshold.is_set;
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_routes.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Ip::Multicast::Vrf::RouteLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::RouteLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_routes.is_set || is_set(no_routes.yfilter)) leaf_name_data.push_back(no_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::RouteLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::RouteLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Multicast::Vrf::RouteLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-routes")
    {
        no_routes = value;
        no_routes.value_namespace = name_space;
        no_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::RouteLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-routes")
    {
        no_routes.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::RouteLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-routes" || name == "warning-threshold")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Rpf()
    :
    select(std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select>())
{
    select->parent = this;

    yang_name = "rpf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::Rpf::~Rpf()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::has_data() const
{
    return (select !=  nullptr && select->has_data());
}

bool Native::Ip::Multicast::Vrf::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| (select !=  nullptr && select->has_operation());
}

std::string Native::Ip::Multicast::Vrf::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select>();
        }
        return select;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(select != nullptr)
    {
        children["select"] = select;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Multicast::Vrf::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Multicast::Vrf::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Select()
{

    yang_name = "select"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::Rpf::Select::~Select()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Multicast::Vrf::Rpf::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::Vrf_()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::~Vrf_()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_data() const
{
    for (std::size_t index=0; index<group_list.size(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_operation() const
{
    for (std::size_t index=0; index<group_list.size(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        for(auto const & c : group_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList>();
        c->parent = this;
        group_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::GroupList()
    :
    group_list_name{YType::str, "group-list-name"}
{

    yang_name = "group-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::~GroupList()
{
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_data() const
{
    return group_list_name.is_set;
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_list_name.yfilter);
}

std::string Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list" <<"[group-list-name='" <<group_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_list_name.is_set || is_set(group_list_name.yfilter)) leaf_name_data.push_back(group_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
        group_list_name.value_namespace = name_space;
        group_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-list-name")
    {
        group_list_name.yfilter = yfilter;
    }
}

bool Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list-name")
        return true;
    return false;
}

Native::Ip::NameServer::NameServer()
    :
    no_vrf{YType::str, "no-vrf"}
{

    yang_name = "name-server"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::NameServer::~NameServer()
{
}

bool Native::Ip::NameServer::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (auto const & leaf : no_vrf.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::NameServer::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (auto const & leaf : no_vrf.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(no_vrf.yfilter);
}

std::string Native::Ip::NameServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::NameServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::NameServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto no_vrf_name_datas = no_vrf.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), no_vrf_name_datas.begin(), no_vrf_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::NameServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::NameServer::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::NameServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::NameServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-vrf")
    {
        no_vrf.append(value);
    }
}

void Native::Ip::NameServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-vrf")
    {
        no_vrf.yfilter = yfilter;
    }
}

bool Native::Ip::NameServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "no-vrf")
        return true;
    return false;
}

Native::Ip::NameServer::Vrf::Vrf()
    :
    word{YType::str, "word"},
    server_ip{YType::str, "server-ip"}
{

    yang_name = "vrf"; yang_parent_name = "name-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::NameServer::Vrf::~Vrf()
{
}

bool Native::Ip::NameServer::Vrf::has_data() const
{
    return word.is_set
	|| server_ip.is_set;
}

bool Native::Ip::NameServer::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(server_ip.yfilter);
}

std::string Native::Ip::NameServer::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/name-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::NameServer::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::NameServer::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (server_ip.is_set || is_set(server_ip.yfilter)) leaf_name_data.push_back(server_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::NameServer::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::NameServer::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::NameServer::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-ip")
    {
        server_ip = value;
        server_ip.value_namespace = name_space;
        server_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::NameServer::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "server-ip")
    {
        server_ip.yfilter = yfilter;
    }
}

bool Native::Ip::NameServer::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "server-ip")
        return true;
    return false;
}

Native::Ip::Pim::Pim()
    :
    register_source{YType::str, "Cisco-IOS-XE-multicast:register-source"}
    	,
    accept_register(std::make_shared<Native::Ip::Pim::AcceptRegister>())
	,autorp(nullptr) // presence node
	,spt_threshold_container(std::make_shared<Native::Ip::Pim::SptThresholdContainer>())
	,send_rp_announce(std::make_shared<Native::Ip::Pim::SendRpAnnounce>())
	,send_rp_discovery(std::make_shared<Native::Ip::Pim::SendRpDiscovery>())
	,ssm(std::make_shared<Native::Ip::Pim::Ssm>())
{
    accept_register->parent = this;
    spt_threshold_container->parent = this;
    send_rp_announce->parent = this;
    send_rp_discovery->parent = this;
    ssm->parent = this;

    yang_name = "pim"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::~Pim()
{
}

bool Native::Ip::Pim::has_data() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return register_source.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (autorp !=  nullptr && autorp->has_data())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_data())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_data())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Native::Ip::Pim::has_operation() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (autorp !=  nullptr && autorp->has_operation())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_operation())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_operation())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Native::Ip::Pim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-multicast:accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:autorp")
    {
        if(autorp == nullptr)
        {
            autorp = std::make_shared<Native::Ip::Pim::Autorp>();
        }
        return autorp;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:rp-address")
    {
        for(auto const & c : rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::RpAddress>();
        c->parent = this;
        rp_address.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:spt-threshold")
    {
        for(auto const & c : spt_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::SptThreshold>();
        c->parent = this;
        spt_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:spt-threshold-container")
    {
        if(spt_threshold_container == nullptr)
        {
            spt_threshold_container = std::make_shared<Native::Ip::Pim::SptThresholdContainer>();
        }
        return spt_threshold_container;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:send-rp-announce")
    {
        if(send_rp_announce == nullptr)
        {
            send_rp_announce = std::make_shared<Native::Ip::Pim::SendRpAnnounce>();
        }
        return send_rp_announce;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:send-rp-discovery")
    {
        if(send_rp_discovery == nullptr)
        {
            send_rp_discovery = std::make_shared<Native::Ip::Pim::SendRpDiscovery>();
        }
        return send_rp_discovery;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Native::Ip::Pim::Ssm>();
        }
        return ssm;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_register != nullptr)
    {
        children["Cisco-IOS-XE-multicast:accept-register"] = accept_register;
    }

    if(autorp != nullptr)
    {
        children["Cisco-IOS-XE-multicast:autorp"] = autorp;
    }

    for (auto const & c : rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : spt_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    if(spt_threshold_container != nullptr)
    {
        children["Cisco-IOS-XE-multicast:spt-threshold-container"] = spt_threshold_container;
    }

    if(send_rp_announce != nullptr)
    {
        children["Cisco-IOS-XE-multicast:send-rp-announce"] = send_rp_announce;
    }

    if(send_rp_discovery != nullptr)
    {
        children["Cisco-IOS-XE-multicast:send-rp-discovery"] = send_rp_discovery;
    }

    if(ssm != nullptr)
    {
        children["Cisco-IOS-XE-multicast:ssm"] = ssm;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-multicast:register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "autorp" || name == "rp-address" || name == "spt-threshold" || name == "spt-threshold-container" || name == "send-rp-announce" || name == "send-rp-discovery" || name == "ssm" || name == "vrf" || name == "register-source")
        return true;
    return false;
}

Native::Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Ip::Pim::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Pim::AcceptRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Pim::Autorp::Autorp()
    :
    listener{YType::empty, "listener"}
{

    yang_name = "autorp"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::Autorp::~Autorp()
{
}

bool Native::Ip::Pim::Autorp::has_data() const
{
    return listener.is_set;
}

bool Native::Ip::Pim::Autorp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(listener.yfilter);
}

std::string Native::Ip::Pim::Autorp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::Autorp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:autorp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Autorp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listener.is_set || is_set(listener.yfilter)) leaf_name_data.push_back(listener.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Autorp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Autorp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Autorp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "listener")
    {
        listener = value;
        listener.value_namespace = name_space;
        listener.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Autorp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "listener")
    {
        listener.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Autorp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listener")
        return true;
    return false;
}

Native::Ip::Pim::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    override{YType::empty, "override"}
{

    yang_name = "rp-address"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::RpAddress::~RpAddress()
{
}

bool Native::Ip::Pim::RpAddress::has_data() const
{
    return address.is_set
	|| access_list.is_set
	|| override.is_set;
}

bool Native::Ip::Pim::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::Ip::Pim::RpAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:rp-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "access-list" || name == "override")
        return true;
    return false;
}

Native::Ip::Pim::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"},
    group_list{YType::str, "group-list"}
{

    yang_name = "spt-threshold"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::SptThreshold::has_data() const
{
    return how.is_set
	|| group_list.is_set;
}

bool Native::Ip::Pim::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter)
	|| ydk::is_set(group_list.yfilter);
}

std::string Native::Ip::Pim::SptThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:spt-threshold" <<"[how='" <<how <<"']" <<"[group-list='" <<group_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how" || name == "group-list")
        return true;
    return false;
}

Native::Ip::Pim::SptThresholdContainer::SptThresholdContainer()
    :
    spt_threshold(std::make_shared<Native::Ip::Pim::SptThresholdContainer::SptThreshold>())
{
    spt_threshold->parent = this;

    yang_name = "spt-threshold-container"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SptThresholdContainer::~SptThresholdContainer()
{
}

bool Native::Ip::Pim::SptThresholdContainer::has_data() const
{
    return (spt_threshold !=  nullptr && spt_threshold->has_data());
}

bool Native::Ip::Pim::SptThresholdContainer::has_operation() const
{
    return is_set(yfilter)
	|| (spt_threshold !=  nullptr && spt_threshold->has_operation());
}

std::string Native::Ip::Pim::SptThresholdContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThresholdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:spt-threshold-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThresholdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThresholdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spt-threshold")
    {
        if(spt_threshold == nullptr)
        {
            spt_threshold = std::make_shared<Native::Ip::Pim::SptThresholdContainer::SptThreshold>();
        }
        return spt_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThresholdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spt_threshold != nullptr)
    {
        children["spt-threshold"] = spt_threshold;
    }

    return children;
}

void Native::Ip::Pim::SptThresholdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::SptThresholdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::SptThresholdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spt-threshold")
        return true;
    return false;
}

Native::Ip::Pim::SptThresholdContainer::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"}
{

    yang_name = "spt-threshold"; yang_parent_name = "spt-threshold-container"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SptThresholdContainer::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_data() const
{
    return how.is_set;
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter);
}

std::string Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:spt-threshold-container/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SptThresholdContainer::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SptThresholdContainer::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::SendRpAnnounce()
{

    yang_name = "send-rp-announce"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SendRpAnnounce::~SendRpAnnounce()
{
}

bool Native::Ip::Pim::SendRpAnnounce::has_data() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Pim::SendRpAnnounce::has_operation() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Pim::SendRpAnnounce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:send-rp-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface_list")
    {
        for(auto const & c : interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList>();
        c->parent = this;
        interface_list.push_back(c);
        return c;
    }

    if(child_yang_name == "Port-channel")
    {
        for(auto const & c : port_channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::SendRpAnnounce::PortChannel>();
        c->parent = this;
        port_channel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_channel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Pim::SendRpAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::SendRpAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::SendRpAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_list" || name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::InterfaceList()
    :
    if_name{YType::str, "if-name"}
    	,
    scope(std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope>())
{
    scope->parent = this;

    yang_name = "interface_list"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::~InterfaceList()
{
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::has_data() const
{
    return if_name.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_name.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:send-rp-announce/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_list" <<"[if-name='" <<if_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "if-name")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::Scope()
    :
    pkt_ttl{YType::uint8, "pkt-ttl"}
    	,
    group_list(std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList>())
{
    group_list->parent = this;

    yang_name = "scope"; yang_parent_name = "interface_list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::~Scope()
{
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::has_data() const
{
    return pkt_ttl.is_set
	|| (group_list !=  nullptr && group_list->has_data());
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_ttl.yfilter)
	|| (group_list !=  nullptr && group_list->has_operation());
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_ttl.is_set || is_set(pkt_ttl.yfilter)) leaf_name_data.push_back(pkt_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        if(group_list == nullptr)
        {
            group_list = std::make_shared<Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList>();
        }
        return group_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_list != nullptr)
    {
        children["group-list"] = group_list;
    }

    return children;
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl = value;
        pkt_ttl.value_namespace = name_space;
        pkt_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list" || name == "pkt-ttl")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::GroupList()
    :
    acl_ref{YType::uint8, "acl-ref"},
    std_acl{YType::str, "std-acl"}
{

    yang_name = "group-list"; yang_parent_name = "scope"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::~GroupList()
{
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::has_data() const
{
    return acl_ref.is_set
	|| std_acl.is_set;
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_ref.yfilter)
	|| ydk::is_set(std_acl.yfilter);
}

std::string Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_ref.is_set || is_set(acl_ref.yfilter)) leaf_name_data.push_back(acl_ref.get_name_leafdata());
    if (std_acl.is_set || is_set(std_acl.yfilter)) leaf_name_data.push_back(std_acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-ref")
    {
        acl_ref = value;
        acl_ref.value_namespace = name_space;
        acl_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "std-acl")
    {
        std_acl = value;
        std_acl.value_namespace = name_space;
        std_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-ref")
    {
        acl_ref.yfilter = yfilter;
    }
    if(value_path == "std-acl")
    {
        std_acl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-ref" || name == "std-acl")
        return true;
    return false;
}

Native::Ip::Pim::SendRpAnnounce::PortChannel::PortChannel()
    :
    name{YType::uint32, "name"},
    scope{YType::uint8, "scope"}
{

    yang_name = "Port-channel"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SendRpAnnounce::PortChannel::~PortChannel()
{
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_data() const
{
    return name.is_set
	|| scope.is_set;
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::SendRpAnnounce::PortChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:send-rp-announce/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpAnnounce::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpAnnounce::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SendRpAnnounce::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpAnnounce::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::SendRpDiscovery::SendRpDiscovery()
    :
    scope{YType::uint8, "scope"}
{

    yang_name = "send-rp-discovery"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::SendRpDiscovery::~SendRpDiscovery()
{
}

bool Native::Ip::Pim::SendRpDiscovery::has_data() const
{
    return scope.is_set;
}

bool Native::Ip::Pim::SendRpDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::SendRpDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::SendRpDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:send-rp-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::SendRpDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SendRpDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::SendRpDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::SendRpDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::Ssm::Ssm()
    :
    range{YType::str, "range"},
    default_{YType::empty, "default"}
{

    yang_name = "ssm"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::Ssm::~Ssm()
{
}

bool Native::Ip::Pim::Ssm::has_data() const
{
    return range.is_set
	|| default_.is_set;
}

bool Native::Ip::Pim::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Ip::Pim::Ssm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:ssm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Ssm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "default")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::Vrf()
    :
    id{YType::str, "id"},
    register_source{YType::str, "register-source"}
    	,
    accept_register(std::make_shared<Native::Ip::Pim::Vrf::AcceptRegister>())
	,autorp(nullptr) // presence node
	,spt_threshold_container(std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer>())
	,send_rp_announce(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce>())
	,send_rp_discovery(std::make_shared<Native::Ip::Pim::Vrf::SendRpDiscovery>())
	,ssm(std::make_shared<Native::Ip::Pim::Vrf::Ssm>())
{
    accept_register->parent = this;
    spt_threshold_container->parent = this;
    send_rp_announce->parent = this;
    send_rp_discovery->parent = this;
    ssm->parent = this;

    yang_name = "vrf"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Pim::Vrf::~Vrf()
{
}

bool Native::Ip::Pim::Vrf::has_data() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_data())
            return true;
    }
    return id.is_set
	|| register_source.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (autorp !=  nullptr && autorp->has_data())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_data())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_data())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Native::Ip::Pim::Vrf::has_operation() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (autorp !=  nullptr && autorp->has_operation())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_operation())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_operation())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Native::Ip::Pim::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Pim::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Ip::Pim::Vrf::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "autorp")
    {
        if(autorp == nullptr)
        {
            autorp = std::make_shared<Native::Ip::Pim::Vrf::Autorp>();
        }
        return autorp;
    }

    if(child_yang_name == "rp-address")
    {
        for(auto const & c : rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::RpAddress>();
        c->parent = this;
        rp_address.push_back(c);
        return c;
    }

    if(child_yang_name == "spt-threshold")
    {
        for(auto const & c : spt_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::SptThreshold>();
        c->parent = this;
        spt_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "spt-threshold-container")
    {
        if(spt_threshold_container == nullptr)
        {
            spt_threshold_container = std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer>();
        }
        return spt_threshold_container;
    }

    if(child_yang_name == "send-rp-announce")
    {
        if(send_rp_announce == nullptr)
        {
            send_rp_announce = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce>();
        }
        return send_rp_announce;
    }

    if(child_yang_name == "send-rp-discovery")
    {
        if(send_rp_discovery == nullptr)
        {
            send_rp_discovery = std::make_shared<Native::Ip::Pim::Vrf::SendRpDiscovery>();
        }
        return send_rp_discovery;
    }

    if(child_yang_name == "ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Native::Ip::Pim::Vrf::Ssm>();
        }
        return ssm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_register != nullptr)
    {
        children["accept-register"] = accept_register;
    }

    if(autorp != nullptr)
    {
        children["autorp"] = autorp;
    }

    for (auto const & c : rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : spt_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    if(spt_threshold_container != nullptr)
    {
        children["spt-threshold-container"] = spt_threshold_container;
    }

    if(send_rp_announce != nullptr)
    {
        children["send-rp-announce"] = send_rp_announce;
    }

    if(send_rp_discovery != nullptr)
    {
        children["send-rp-discovery"] = send_rp_discovery;
    }

    if(ssm != nullptr)
    {
        children["ssm"] = ssm;
    }

    return children;
}

void Native::Ip::Pim::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "autorp" || name == "rp-address" || name == "spt-threshold" || name == "spt-threshold-container" || name == "send-rp-announce" || name == "send-rp-discovery" || name == "ssm" || name == "id" || name == "register-source")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::AcceptRegister::~AcceptRegister()
{
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Pim::Vrf::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::Autorp::Autorp()
    :
    listener{YType::empty, "listener"}
{

    yang_name = "autorp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::Autorp::~Autorp()
{
}

bool Native::Ip::Pim::Vrf::Autorp::has_data() const
{
    return listener.is_set;
}

bool Native::Ip::Pim::Vrf::Autorp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(listener.yfilter);
}

std::string Native::Ip::Pim::Vrf::Autorp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::Autorp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listener.is_set || is_set(listener.yfilter)) leaf_name_data.push_back(listener.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::Autorp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::Autorp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::Autorp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "listener")
    {
        listener = value;
        listener.value_namespace = name_space;
        listener.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::Autorp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "listener")
    {
        listener.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::Autorp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listener")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    override{YType::empty, "override"}
{

    yang_name = "rp-address"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::RpAddress::~RpAddress()
{
}

bool Native::Ip::Pim::Vrf::RpAddress::has_data() const
{
    return address.is_set
	|| access_list.is_set
	|| override.is_set;
}

bool Native::Ip::Pim::Vrf::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::Ip::Pim::Vrf::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "access-list" || name == "override")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"},
    group_list{YType::str, "group-list"}
{

    yang_name = "spt-threshold"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_data() const
{
    return how.is_set
	|| group_list.is_set;
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter)
	|| ydk::is_set(group_list.yfilter);
}

std::string Native::Ip::Pim::Vrf::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold" <<"[how='" <<how <<"']" <<"[group-list='" <<group_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how" || name == "group-list")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThresholdContainer()
    :
    spt_threshold(std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold>())
{
    spt_threshold->parent = this;

    yang_name = "spt-threshold-container"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SptThresholdContainer::~SptThresholdContainer()
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_data() const
{
    return (spt_threshold !=  nullptr && spt_threshold->has_data());
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_operation() const
{
    return is_set(yfilter)
	|| (spt_threshold !=  nullptr && spt_threshold->has_operation());
}

std::string Native::Ip::Pim::Vrf::SptThresholdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SptThresholdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SptThresholdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spt-threshold")
    {
        if(spt_threshold == nullptr)
        {
            spt_threshold = std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold>();
        }
        return spt_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SptThresholdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spt_threshold != nullptr)
    {
        children["spt-threshold"] = spt_threshold;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spt-threshold")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"}
{

    yang_name = "spt-threshold"; yang_parent_name = "spt-threshold-container"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_data() const
{
    return how.is_set;
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(how.yfilter);
}

std::string Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.yfilter)) leaf_name_data.push_back(how.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "how")
    {
        how = value;
        how.value_namespace = name_space;
        how.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "how")
    {
        how.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "how")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::SendRpAnnounce()
{

    yang_name = "send-rp-announce"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::~SendRpAnnounce()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_data() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_operation() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-rp-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface_list")
    {
        for(auto const & c : interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList>();
        c->parent = this;
        interface_list.push_back(c);
        return c;
    }

    if(child_yang_name == "Port-channel")
    {
        for(auto const & c : port_channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel>();
        c->parent = this;
        port_channel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_channel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_list" || name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::InterfaceList()
    :
    if_name{YType::str, "if-name"}
    	,
    scope(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope>())
{
    scope->parent = this;

    yang_name = "interface_list"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::~InterfaceList()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::has_data() const
{
    return if_name.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_name.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_list" <<"[if-name='" <<if_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "if-name")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::Scope()
    :
    pkt_ttl{YType::uint8, "pkt-ttl"}
    	,
    group_list(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList>())
{
    group_list->parent = this;

    yang_name = "scope"; yang_parent_name = "interface_list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::~Scope()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::has_data() const
{
    return pkt_ttl.is_set
	|| (group_list !=  nullptr && group_list->has_data());
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_ttl.yfilter)
	|| (group_list !=  nullptr && group_list->has_operation());
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_ttl.is_set || is_set(pkt_ttl.yfilter)) leaf_name_data.push_back(pkt_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        if(group_list == nullptr)
        {
            group_list = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList>();
        }
        return group_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_list != nullptr)
    {
        children["group-list"] = group_list;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl = value;
        pkt_ttl.value_namespace = name_space;
        pkt_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list" || name == "pkt-ttl")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::GroupList()
    :
    acl_ref{YType::uint8, "acl-ref"},
    std_acl{YType::str, "std-acl"}
{

    yang_name = "group-list"; yang_parent_name = "scope"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::~GroupList()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::has_data() const
{
    return acl_ref.is_set
	|| std_acl.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_ref.yfilter)
	|| ydk::is_set(std_acl.yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_ref.is_set || is_set(acl_ref.yfilter)) leaf_name_data.push_back(acl_ref.get_name_leafdata());
    if (std_acl.is_set || is_set(std_acl.yfilter)) leaf_name_data.push_back(std_acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-ref")
    {
        acl_ref = value;
        acl_ref.value_namespace = name_space;
        acl_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "std-acl")
    {
        std_acl = value;
        std_acl.value_namespace = name_space;
        std_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-ref")
    {
        acl_ref.yfilter = yfilter;
    }
    if(value_path == "std-acl")
    {
        std_acl.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-ref" || name == "std-acl")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::PortChannel()
    :
    name{YType::uint32, "name"},
    scope{YType::uint8, "scope"}
{

    yang_name = "Port-channel"; yang_parent_name = "send-rp-announce"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::~PortChannel()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_data() const
{
    return name.is_set
	|| scope.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::SendRpDiscovery::SendRpDiscovery()
    :
    scope{YType::uint8, "scope"}
{

    yang_name = "send-rp-discovery"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::SendRpDiscovery::~SendRpDiscovery()
{
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_data() const
{
    return scope.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scope.yfilter);
}

std::string Native::Ip::Pim::Vrf::SendRpDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-rp-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::SendRpDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SendRpDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::SendRpDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Ip::Pim::Vrf::Ssm::Ssm()
    :
    range{YType::str, "range"},
    default_{YType::empty, "default"}
{

    yang_name = "ssm"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Pim::Vrf::Ssm::~Ssm()
{
}

bool Native::Ip::Pim::Vrf::Ssm::has_data() const
{
    return range.is_set
	|| default_.is_set;
}

bool Native::Ip::Pim::Vrf::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Ip::Pim::Vrf::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Pim::Vrf::Ssm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Pim::Vrf::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Ip::Pim::Vrf::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "default")
        return true;
    return false;
}

Native::Ip::PrefixList::PrefixList()
    :
    sequence_number{YType::empty, "sequence-number"}
{

    yang_name = "prefix-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::PrefixList::~PrefixList()
{
}

bool Native::Ip::PrefixList::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return sequence_number.is_set;
}

bool Native::Ip::PrefixList::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Native::Ip::PrefixList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "sequence-number")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Prefixes()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    permit(std::make_shared<Native::Ip::PrefixList::Prefixes::Permit>())
	,deny(std::make_shared<Native::Ip::PrefixList::Prefixes::Deny>())
{
    permit->parent = this;
    deny->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefix-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::PrefixList::Prefixes::~Prefixes()
{
}

bool Native::Ip::PrefixList::Prefixes::has_data() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| (permit !=  nullptr && permit->has_data())
	|| (deny !=  nullptr && deny->has_data());
}

bool Native::Ip::PrefixList::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (permit !=  nullptr && permit->has_operation())
	|| (deny !=  nullptr && deny->has_operation());
}

std::string Native::Ip::PrefixList::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::PrefixList::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::PrefixList::Prefixes::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::PrefixList::Prefixes::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "seq")
    {
        for(auto const & c : seq)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes::Seq>();
        c->parent = this;
        seq.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    for (auto const & c : seq)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit" || name == "deny" || name == "seq" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Permit::Permit()
{

    yang_name = "permit"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Permit::~Permit()
{
}

bool Native::Ip::PrefixList::Prefixes::Permit::has_data() const
{
    for (std::size_t index=0; index<permit_list.size(); index++)
    {
        if(permit_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::PrefixList::Prefixes::Permit::has_operation() const
{
    for (std::size_t index=0; index<permit_list.size(); index++)
    {
        if(permit_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit-list")
    {
        for(auto const & c : permit_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes::Permit::PermitList>();
        c->parent = this;
        permit_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : permit_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::PrefixList::Prefixes::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::PrefixList::Prefixes::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Permit::PermitList::PermitList()
    :
    prefix{YType::str, "prefix"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "permit-list"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Permit::PermitList::~PermitList()
{
}

bool Native::Ip::PrefixList::Prefixes::Permit::PermitList::has_data() const
{
    return prefix.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Permit::PermitList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Permit::PermitList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Permit::PermitList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Permit::PermitList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Deny::Deny()
{

    yang_name = "deny"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Deny::~Deny()
{
}

bool Native::Ip::PrefixList::Prefixes::Deny::has_data() const
{
    for (std::size_t index=0; index<deny_list.size(); index++)
    {
        if(deny_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::PrefixList::Prefixes::Deny::has_operation() const
{
    for (std::size_t index=0; index<deny_list.size(); index++)
    {
        if(deny_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny-list")
    {
        for(auto const & c : deny_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes::Deny::DenyList>();
        c->parent = this;
        deny_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : deny_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::PrefixList::Prefixes::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::PrefixList::Prefixes::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Deny::DenyList::DenyList()
    :
    prefix{YType::str, "prefix"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "deny-list"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Deny::DenyList::~DenyList()
{
}

bool Native::Ip::PrefixList::Prefixes::Deny::DenyList::has_data() const
{
    return prefix.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Deny::DenyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Deny::DenyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Deny::DenyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Deny::DenyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Seq::Seq()
    :
    no{YType::uint32, "no"}
    	,
    deny(std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Deny>())
	,permit(std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "seq"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Seq::~Seq()
{
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::PrefixList::Prefixes::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Seq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::Seq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Seq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Seq::Deny::Deny()
    :
    ip{YType::str, "ip"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "deny"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Seq::Deny::~Deny()
{
}

bool Native::Ip::PrefixList::Prefixes::Seq::Deny::has_data() const
{
    return ip.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Seq::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Seq::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Seq::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Seq::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Seq::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Seq::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Seq::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Seq::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ip::PrefixList::Prefixes::Seq::Permit::Permit()
    :
    ip{YType::str, "ip"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "permit"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::PrefixList::Prefixes::Seq::Permit::~Permit()
{
}

bool Native::Ip::PrefixList::Prefixes::Seq::Permit::has_data() const
{
    return ip.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Seq::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ip::PrefixList::Prefixes::Seq::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::PrefixList::Prefixes::Seq::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Seq::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Seq::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Seq::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::PrefixList::Prefixes::Seq::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ip::PrefixList::Prefixes::Seq::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ip::Route::Route()
    :
    profile{YType::empty, "profile"}
    	,
    static_(std::make_shared<Native::Ip::Route::Static_>())
{
    static_->parent = this;

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::~Route()
{
}

bool Native::Ip::Route::has_data() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return profile.is_set
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Route::has_operation() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-route-interface-forwarding-list")
    {
        for(auto const & c : ip_route_interface_forwarding_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::IpRouteInterfaceForwardingList>();
        c->parent = this;
        ip_route_interface_forwarding_list.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Route::Static_>();
        }
        return static_;
    }

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
        auto c = std::make_shared<Native::Ip::Route::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_route_interface_forwarding_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-route-interface-forwarding-list" || name == "static" || name == "vrf" || name == "profile")
        return true;
    return false;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::IpRouteInterfaceForwardingList()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"}
{

    yang_name = "ip-route-interface-forwarding-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::~IpRouteInterfaceForwardingList()
{
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_data() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| mask.is_set
	|| dhcp.is_set
	|| metric.is_set;
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_operation() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-route-interface-forwarding-list" <<"[prefix='" <<prefix <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::IpRouteInterfaceForwardingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::IpRouteInterfaceForwardingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwd-list")
    {
        for(auto const & c : fwd_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList>();
        c->parent = this;
        fwd_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::IpRouteInterfaceForwardingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fwd_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwd-list" || name == "prefix" || name == "mask" || name == "dhcp" || name == "metric")
        return true;
    return false;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::FwdList()
    :
    fwd{YType::str, "fwd"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{

    yang_name = "fwd-list"; yang_parent_name = "ip-route-interface-forwarding-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::~FwdList()
{
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_data() const
{
    for (std::size_t index=0; index<interface_next_hop.size(); index++)
    {
        if(interface_next_hop[index]->has_data())
            return true;
    }
    return fwd.is_set
	|| dhcp.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_operation() const
{
    for (std::size_t index=0; index<interface_next_hop.size(); index++)
    {
        if(interface_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fwd.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-list" <<"[fwd='" <<fwd <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.yfilter)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-next-hop")
    {
        for(auto const & c : interface_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop>();
        c->parent = this;
        interface_next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_next_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwd")
    {
        fwd = value;
        fwd.value_namespace = name_space;
        fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwd")
    {
        fwd.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-next-hop" || name == "fwd" || name == "dhcp" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::InterfaceNextHop()
    :
    ip_address{YType::str, "ip-address"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{

    yang_name = "interface-next-hop"; yang_parent_name = "fwd-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::~InterfaceNextHop()
{
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_data() const
{
    return ip_address.is_set
	|| dhcp.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-next-hop" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "dhcp" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::Static_::Static_()
    :
    adjust_time{YType::uint8, "adjust-time"},
    inter_vrf{YType::empty, "inter-vrf"}
    	,
    bfd(std::make_shared<Native::Ip::Route::Static_::Bfd>())
	,install_routes_recurse_via_nexthop(std::make_shared<Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop>())
{
    bfd->parent = this;
    install_routes_recurse_via_nexthop->parent = this;

    yang_name = "static"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::Static_::~Static_()
{
}

bool Native::Ip::Route::Static_::has_data() const
{
    return adjust_time.is_set
	|| inter_vrf.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (install_routes_recurse_via_nexthop !=  nullptr && install_routes_recurse_via_nexthop->has_data());
}

bool Native::Ip::Route::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_time.yfilter)
	|| ydk::is_set(inter_vrf.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (install_routes_recurse_via_nexthop !=  nullptr && install_routes_recurse_via_nexthop->has_operation());
}

std::string Native::Ip::Route::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_time.is_set || is_set(adjust_time.yfilter)) leaf_name_data.push_back(adjust_time.get_name_leafdata());
    if (inter_vrf.is_set || is_set(inter_vrf.yfilter)) leaf_name_data.push_back(inter_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Ip::Route::Static_::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "install-routes-recurse-via-nexthop")
    {
        if(install_routes_recurse_via_nexthop == nullptr)
        {
            install_routes_recurse_via_nexthop = std::make_shared<Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop>();
        }
        return install_routes_recurse_via_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(install_routes_recurse_via_nexthop != nullptr)
    {
        children["install-routes-recurse-via-nexthop"] = install_routes_recurse_via_nexthop;
    }

    return children;
}

void Native::Ip::Route::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-time")
    {
        adjust_time = value;
        adjust_time.value_namespace = name_space;
        adjust_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-vrf")
    {
        inter_vrf = value;
        inter_vrf.value_namespace = name_space;
        inter_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-time")
    {
        adjust_time.yfilter = yfilter;
    }
    if(value_path == "inter-vrf")
    {
        inter_vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "install-routes-recurse-via-nexthop" || name == "adjust-time" || name == "inter-vrf")
        return true;
    return false;
}

Native::Ip::Route::Static_::Bfd::Bfd()
    :
    interface{YType::str, "interface"},
    gateway_ip{YType::str, "gateway-ip"}
{

    yang_name = "bfd"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::Static_::Bfd::~Bfd()
{
}

bool Native::Ip::Route::Static_::Bfd::has_data() const
{
    return interface.is_set
	|| gateway_ip.is_set;
}

bool Native::Ip::Route::Static_::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(gateway_ip.yfilter);
}

std::string Native::Ip::Route::Static_::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static_::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static_::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (gateway_ip.is_set || is_set(gateway_ip.yfilter)) leaf_name_data.push_back(gateway_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Static_::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Static_::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::Static_::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-ip")
    {
        gateway_ip = value;
        gateway_ip.value_namespace = name_space;
        gateway_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static_::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "gateway-ip")
    {
        gateway_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static_::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "gateway-ip")
        return true;
    return false;
}

Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::InstallRoutesRecurseViaNexthop()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "install-routes-recurse-via-nexthop"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::~InstallRoutesRecurseViaNexthop()
{
}

bool Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::has_data() const
{
    return vrf.is_set;
}

bool Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-routes-recurse-via-nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ip::Route::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Route::Vrf::~Vrf()
{
}

bool Native::Ip::Route::Vrf::has_data() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Route::Vrf::has_operation() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Route::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-route-interface-forwarding-list")
    {
        for(auto const & c : ip_route_interface_forwarding_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList>();
        c->parent = this;
        ip_route_interface_forwarding_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_route_interface_forwarding_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-route-interface-forwarding-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::IpRouteInterfaceForwardingList()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"}
{

    yang_name = "ip-route-interface-forwarding-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::~IpRouteInterfaceForwardingList()
{
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_data() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| mask.is_set
	|| dhcp.is_set
	|| metric.is_set;
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_operation() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-route-interface-forwarding-list" <<"[prefix='" <<prefix <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwd-list")
    {
        for(auto const & c : fwd_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList>();
        c->parent = this;
        fwd_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fwd_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwd-list" || name == "prefix" || name == "mask" || name == "dhcp" || name == "metric")
        return true;
    return false;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::FwdList()
    :
    fwd{YType::str, "fwd"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{

    yang_name = "fwd-list"; yang_parent_name = "ip-route-interface-forwarding-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::~FwdList()
{
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_data() const
{
    for (std::size_t index=0; index<interface_next_hop.size(); index++)
    {
        if(interface_next_hop[index]->has_data())
            return true;
    }
    return fwd.is_set
	|| dhcp.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_operation() const
{
    for (std::size_t index=0; index<interface_next_hop.size(); index++)
    {
        if(interface_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fwd.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-list" <<"[fwd='" <<fwd <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.yfilter)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-next-hop")
    {
        for(auto const & c : interface_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop>();
        c->parent = this;
        interface_next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_next_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwd")
    {
        fwd = value;
        fwd.value_namespace = name_space;
        fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwd")
    {
        fwd.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-next-hop" || name == "fwd" || name == "dhcp" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::InterfaceNextHop()
    :
    ip_address{YType::str, "ip-address"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{

    yang_name = "interface-next-hop"; yang_parent_name = "fwd-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::~InterfaceNextHop()
{
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_data() const
{
    return ip_address.is_set
	|| dhcp.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-next-hop" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "dhcp" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Routing::Routing()
    :
    protocol(std::make_shared<Native::Ip::Routing::Protocol>())
{
    protocol->parent = this;

    yang_name = "routing"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Routing::~Routing()
{
}

bool Native::Ip::Routing::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::Ip::Routing::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Ip::Routing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Routing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Ip::Routing::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Ip::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Ip::Routing::Protocol::Protocol()
    :
    purge(std::make_shared<Native::Ip::Routing::Protocol::Purge>())
{
    purge->parent = this;

    yang_name = "protocol"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Routing::Protocol::~Protocol()
{
}

bool Native::Ip::Routing::Protocol::has_data() const
{
    return (purge !=  nullptr && purge->has_data());
}

bool Native::Ip::Routing::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (purge !=  nullptr && purge->has_operation());
}

std::string Native::Ip::Routing::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Routing::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Routing::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Routing::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "purge")
    {
        if(purge == nullptr)
        {
            purge = std::make_shared<Native::Ip::Routing::Protocol::Purge>();
        }
        return purge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Routing::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(purge != nullptr)
    {
        children["purge"] = purge;
    }

    return children;
}

void Native::Ip::Routing::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Routing::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Routing::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "purge")
        return true;
    return false;
}

Native::Ip::Routing::Protocol::Purge::Purge()
    :
    interface{YType::boolean, "interface"}
{

    yang_name = "purge"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Routing::Protocol::Purge::~Purge()
{
}

bool Native::Ip::Routing::Protocol::Purge::has_data() const
{
    return interface.is_set;
}

bool Native::Ip::Routing::Protocol::Purge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Ip::Routing::Protocol::Purge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/routing/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Routing::Protocol::Purge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "purge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Routing::Protocol::Purge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Routing::Protocol::Purge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Routing::Protocol::Purge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Routing::Protocol::Purge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Routing::Protocol::Purge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Ip::Routing::Protocol::Purge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Ip::ExplicitPath::ExplicitPath()
{

    yang_name = "explicit-path"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExplicitPath::~ExplicitPath()
{
}

bool Native::Ip::ExplicitPath::has_data() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExplicitPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        for(auto const & c : identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExplicitPath::Identifier>();
        c->parent = this;
        identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExplicitPath::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : identifier)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Identifier::Identifier()
    :
    pnum{YType::uint16, "pnum"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "identifier"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExplicitPath::Identifier::~Identifier()
{
}

bool Native::Ip::ExplicitPath::Identifier::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return pnum.is_set
	|| mode.is_set;
}

bool Native::Ip::ExplicitPath::Identifier::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pnum.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Ip::ExplicitPath::Identifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/explicit-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExplicitPath::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[pnum='" <<pnum <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pnum.is_set || is_set(pnum.yfilter)) leaf_name_data.push_back(pnum.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExplicitPath::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        for(auto const & c : index_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExplicitPath::Identifier::Index_>();
        c->parent = this;
        index_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExplicitPath::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : index_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExplicitPath::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pnum")
    {
        pnum = value;
        pnum.value_namespace = name_space;
        pnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pnum")
    {
        pnum.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "pnum" || name == "mode")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Identifier::Index_::Index_()
    :
    idx{YType::uint32, "idx"},
    next_label{YType::uint32, "next-label"},
    exclude_address{YType::str, "exclude-address"},
    exclude_srlg{YType::str, "exclude-srlg"}
    	,
    next_address(std::make_shared<Native::Ip::ExplicitPath::Identifier::Index_::NextAddress>())
{
    next_address->parent = this;

    yang_name = "index"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExplicitPath::Identifier::Index_::~Index_()
{
}

bool Native::Ip::ExplicitPath::Identifier::Index_::has_data() const
{
    return idx.is_set
	|| next_label.is_set
	|| exclude_address.is_set
	|| exclude_srlg.is_set
	|| (next_address !=  nullptr && next_address->has_data());
}

bool Native::Ip::ExplicitPath::Identifier::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(next_label.yfilter)
	|| ydk::is_set(exclude_address.yfilter)
	|| ydk::is_set(exclude_srlg.yfilter)
	|| (next_address !=  nullptr && next_address->has_operation());
}

std::string Native::Ip::ExplicitPath::Identifier::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Identifier::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (exclude_address.is_set || is_set(exclude_address.yfilter)) leaf_name_data.push_back(exclude_address.get_name_leafdata());
    if (exclude_srlg.is_set || is_set(exclude_srlg.yfilter)) leaf_name_data.push_back(exclude_srlg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExplicitPath::Identifier::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-address")
    {
        if(next_address == nullptr)
        {
            next_address = std::make_shared<Native::Ip::ExplicitPath::Identifier::Index_::NextAddress>();
        }
        return next_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExplicitPath::Identifier::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_address != nullptr)
    {
        children["next-address"] = next_address;
    }

    return children;
}

void Native::Ip::ExplicitPath::Identifier::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-address")
    {
        exclude_address = value;
        exclude_address.value_namespace = name_space;
        exclude_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg")
    {
        exclude_srlg = value;
        exclude_srlg.value_namespace = name_space;
        exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Identifier::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
    if(value_path == "exclude-address")
    {
        exclude_address.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg")
    {
        exclude_srlg.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Identifier::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-address" || name == "idx" || name == "next-label" || name == "exclude-address" || name == "exclude-srlg")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::NextAddress()
    :
    loose{YType::empty, "loose"},
    ipv4{YType::str, "ipv4"}
{

    yang_name = "next-address"; yang_parent_name = "index"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::~NextAddress()
{
}

bool Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::has_data() const
{
    return loose.is_set
	|| ipv4.is_set;
}

bool Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loose.yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loose.is_set || is_set(loose.yfilter)) leaf_name_data.push_back(loose.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loose")
    {
        loose = value;
        loose.value_namespace = name_space;
        loose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loose")
    {
        loose.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Identifier::Index_::NextAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose" || name == "ipv4")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Name::Name()
    :
    pname{YType::str, "pname"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "name"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExplicitPath::Name::~Name()
{
}

bool Native::Ip::ExplicitPath::Name::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return pname.is_set
	|| mode.is_set;
}

bool Native::Ip::ExplicitPath::Name::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pname.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Ip::ExplicitPath::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/explicit-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExplicitPath::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[pname='" <<pname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pname.is_set || is_set(pname.yfilter)) leaf_name_data.push_back(pname.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExplicitPath::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        for(auto const & c : index_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExplicitPath::Name::Index_>();
        c->parent = this;
        index_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExplicitPath::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : index_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExplicitPath::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pname")
    {
        pname = value;
        pname.value_namespace = name_space;
        pname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pname")
    {
        pname.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "pname" || name == "mode")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Name::Index_::Index_()
    :
    idx{YType::uint32, "idx"},
    next_label{YType::uint32, "next-label"},
    exclude_address{YType::str, "exclude-address"},
    exclude_srlg{YType::str, "exclude-srlg"}
    	,
    next_address(std::make_shared<Native::Ip::ExplicitPath::Name::Index_::NextAddress>())
{
    next_address->parent = this;

    yang_name = "index"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExplicitPath::Name::Index_::~Index_()
{
}

bool Native::Ip::ExplicitPath::Name::Index_::has_data() const
{
    return idx.is_set
	|| next_label.is_set
	|| exclude_address.is_set
	|| exclude_srlg.is_set
	|| (next_address !=  nullptr && next_address->has_data());
}

bool Native::Ip::ExplicitPath::Name::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(next_label.yfilter)
	|| ydk::is_set(exclude_address.yfilter)
	|| ydk::is_set(exclude_srlg.yfilter)
	|| (next_address !=  nullptr && next_address->has_operation());
}

std::string Native::Ip::ExplicitPath::Name::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[idx='" <<idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Name::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (exclude_address.is_set || is_set(exclude_address.yfilter)) leaf_name_data.push_back(exclude_address.get_name_leafdata());
    if (exclude_srlg.is_set || is_set(exclude_srlg.yfilter)) leaf_name_data.push_back(exclude_srlg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExplicitPath::Name::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-address")
    {
        if(next_address == nullptr)
        {
            next_address = std::make_shared<Native::Ip::ExplicitPath::Name::Index_::NextAddress>();
        }
        return next_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExplicitPath::Name::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_address != nullptr)
    {
        children["next-address"] = next_address;
    }

    return children;
}

void Native::Ip::ExplicitPath::Name::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-address")
    {
        exclude_address = value;
        exclude_address.value_namespace = name_space;
        exclude_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg")
    {
        exclude_srlg = value;
        exclude_srlg.value_namespace = name_space;
        exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Name::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
    if(value_path == "exclude-address")
    {
        exclude_address.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg")
    {
        exclude_srlg.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Name::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-address" || name == "idx" || name == "next-label" || name == "exclude-address" || name == "exclude-srlg")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Name::Index_::NextAddress::NextAddress()
    :
    loose{YType::empty, "loose"},
    ipv4{YType::str, "ipv4"}
{

    yang_name = "next-address"; yang_parent_name = "index"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExplicitPath::Name::Index_::NextAddress::~NextAddress()
{
}

bool Native::Ip::ExplicitPath::Name::Index_::NextAddress::has_data() const
{
    return loose.is_set
	|| ipv4.is_set;
}

bool Native::Ip::ExplicitPath::Name::Index_::NextAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loose.yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Ip::ExplicitPath::Name::Index_::NextAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Name::Index_::NextAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loose.is_set || is_set(loose.yfilter)) leaf_name_data.push_back(loose.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExplicitPath::Name::Index_::NextAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExplicitPath::Name::Index_::NextAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExplicitPath::Name::Index_::NextAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loose")
    {
        loose = value;
        loose.value_namespace = name_space;
        loose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Name::Index_::NextAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loose")
    {
        loose.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Name::Index_::NextAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose" || name == "ipv4")
        return true;
    return false;
}

Native::Ip::Scp::Scp()
    :
    server(std::make_shared<Native::Ip::Scp::Server>())
{
    server->parent = this;

    yang_name = "scp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Scp::~Scp()
{
}

bool Native::Ip::Scp::has_data() const
{
    return (server !=  nullptr && server->has_data());
}

bool Native::Ip::Scp::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Scp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Scp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Scp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Scp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Scp::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Scp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Scp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Scp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Scp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Ip::Scp::Server::Server()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "server"; yang_parent_name = "scp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Scp::Server::~Server()
{
}

bool Native::Ip::Scp::Server::has_data() const
{
    return enable.is_set;
}

bool Native::Ip::Scp::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Ip::Scp::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/scp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Scp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Scp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Scp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Scp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Scp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Scp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Scp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Ip::Spd::Spd()
    :
    mode{YType::enumeration, "mode"}
    	,
    queue(std::make_shared<Native::Ip::Spd::Queue>())
{
    queue->parent = this;

    yang_name = "spd"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Spd::~Spd()
{
}

bool Native::Ip::Spd::has_data() const
{
    return mode.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Ip::Spd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Ip::Spd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Spd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Spd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Spd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Ip::Spd::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Spd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Ip::Spd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Spd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Ip::Spd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "mode")
        return true;
    return false;
}

Native::Ip::Spd::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "queue"; yang_parent_name = "spd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Spd::Queue::~Queue()
{
}

bool Native::Ip::Spd::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Ip::Spd::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::Ip::Spd::Queue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/spd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Spd::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Spd::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Spd::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Spd::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Spd::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Spd::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Spd::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::Ip::Bootp::Bootp()
    :
    server{YType::boolean, "server"}
{

    yang_name = "bootp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Bootp::~Bootp()
{
}

bool Native::Ip::Bootp::has_data() const
{
    return server.is_set;
}

bool Native::Ip::Bootp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Ip::Bootp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Bootp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Bootp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Bootp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Bootp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Bootp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Bootp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Ip::Bootp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Ip::Ssh::Ssh()
    :
    authentication_retries{YType::uint8, "authentication-retries"},
    dscp{YType::uint8, "dscp"},
    precedence{YType::uint8, "precedence"},
    source_interface{YType::str, "source-interface"},
    time_out{YType::uint8, "time-out"},
    version{YType::uint8, "version"},
    maxstartups{YType::uint8, "maxstartups"}
    	,
    client(std::make_shared<Native::Ip::Ssh::Client>())
	,logging(std::make_shared<Native::Ip::Ssh::Logging>())
	,pubkey_chain(std::make_shared<Native::Ip::Ssh::PubkeyChain>())
	,rsa(std::make_shared<Native::Ip::Ssh::Rsa>())
	,server(std::make_shared<Native::Ip::Ssh::Server>())
{
    client->parent = this;
    logging->parent = this;
    pubkey_chain->parent = this;
    rsa->parent = this;
    server->parent = this;

    yang_name = "ssh"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::~Ssh()
{
}

bool Native::Ip::Ssh::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return authentication_retries.is_set
	|| dscp.is_set
	|| precedence.is_set
	|| source_interface.is_set
	|| time_out.is_set
	|| version.is_set
	|| maxstartups.is_set
	|| (client !=  nullptr && client->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_data())
	|| (rsa !=  nullptr && rsa->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Ip::Ssh::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authentication_retries.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(time_out.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(maxstartups.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Ssh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_retries.is_set || is_set(authentication_retries.yfilter)) leaf_name_data.push_back(authentication_retries.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (time_out.is_set || is_set(time_out.yfilter)) leaf_name_data.push_back(time_out.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (maxstartups.is_set || is_set(maxstartups.yfilter)) leaf_name_data.push_back(maxstartups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Ip::Ssh::Client>();
        }
        return client;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::Ssh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "pubkey-chain")
    {
        if(pubkey_chain == nullptr)
        {
            pubkey_chain = std::make_shared<Native::Ip::Ssh::PubkeyChain>();
        }
        return pubkey_chain;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Ip::Ssh::Rsa>();
        }
        return rsa;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Ssh::Server>();
        }
        return server;
    }

    if(child_yang_name == "port")
    {
        for(auto const & c : port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Ssh::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(pubkey_chain != nullptr)
    {
        children["pubkey-chain"] = pubkey_chain;
    }

    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    for (auto const & c : port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-retries")
    {
        authentication_retries = value;
        authentication_retries.value_namespace = name_space;
        authentication_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-out")
    {
        time_out = value;
        time_out.value_namespace = name_space;
        time_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxstartups")
    {
        maxstartups = value;
        maxstartups.value_namespace = name_space;
        maxstartups.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-retries")
    {
        authentication_retries.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "time-out")
    {
        time_out.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "maxstartups")
    {
        maxstartups.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "logging" || name == "pubkey-chain" || name == "rsa" || name == "server" || name == "port" || name == "authentication-retries" || name == "dscp" || name == "precedence" || name == "source-interface" || name == "time-out" || name == "version" || name == "maxstartups")
        return true;
    return false;
}

Native::Ip::Ssh::Client::Client()
    :
    algorithm(std::make_shared<Native::Ip::Ssh::Client::Algorithm>())
{
    algorithm->parent = this;

    yang_name = "client"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Client::~Client()
{
}

bool Native::Ip::Ssh::Client::has_data() const
{
    return (algorithm !=  nullptr && algorithm->has_data());
}

bool Native::Ip::Ssh::Client::has_operation() const
{
    return is_set(yfilter)
	|| (algorithm !=  nullptr && algorithm->has_operation());
}

std::string Native::Ip::Ssh::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ip::Ssh::Client::Algorithm>();
        }
        return algorithm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    return children;
}

void Native::Ip::Ssh::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Ip::Ssh::Client::Algorithm::Algorithm()
    :
    encryption(std::make_shared<Native::Ip::Ssh::Client::Algorithm::Encryption>())
{
    encryption->parent = this;

    yang_name = "algorithm"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Client::Algorithm::~Algorithm()
{
}

bool Native::Ip::Ssh::Client::Algorithm::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data());
}

bool Native::Ip::Ssh::Client::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Ip::Ssh::Client::Algorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Client::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Client::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Client::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Ip::Ssh::Client::Algorithm::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Client::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Native::Ip::Ssh::Client::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Client::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Client::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}

Native::Ip::Ssh::Client::Algorithm::Encryption::Encryption()
    :
    aes128_ctr{YType::empty, "aes128-ctr"},
    aes192_ctr{YType::empty, "aes192-ctr"},
    aes256_ctr{YType::empty, "aes256-ctr"}
{

    yang_name = "encryption"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Client::Algorithm::Encryption::~Encryption()
{
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_data() const
{
    return aes128_ctr.is_set
	|| aes192_ctr.is_set
	|| aes256_ctr.is_set;
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes128_ctr.yfilter)
	|| ydk::is_set(aes192_ctr.yfilter)
	|| ydk::is_set(aes256_ctr.yfilter);
}

std::string Native::Ip::Ssh::Client::Algorithm::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/client/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Client::Algorithm::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Client::Algorithm::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes128_ctr.is_set || is_set(aes128_ctr.yfilter)) leaf_name_data.push_back(aes128_ctr.get_name_leafdata());
    if (aes192_ctr.is_set || is_set(aes192_ctr.yfilter)) leaf_name_data.push_back(aes192_ctr.get_name_leafdata());
    if (aes256_ctr.is_set || is_set(aes256_ctr.yfilter)) leaf_name_data.push_back(aes256_ctr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Client::Algorithm::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Client::Algorithm::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::Client::Algorithm::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr = value;
        aes128_ctr.value_namespace = name_space;
        aes128_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr = value;
        aes192_ctr.value_namespace = name_space;
        aes192_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr = value;
        aes256_ctr.value_namespace = name_space;
        aes256_ctr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Client::Algorithm::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr.yfilter = yfilter;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr.yfilter = yfilter;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes128-ctr" || name == "aes192-ctr" || name == "aes256-ctr")
        return true;
    return false;
}

Native::Ip::Ssh::Logging::Logging()
    :
    events{YType::empty, "events"}
{

    yang_name = "logging"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Logging::~Logging()
{
}

bool Native::Ip::Ssh::Logging::has_data() const
{
    return events.is_set;
}

bool Native::Ip::Ssh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events.yfilter);
}

std::string Native::Ip::Ssh::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events.is_set || is_set(events.yfilter)) leaf_name_data.push_back(events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events")
    {
        events = value;
        events.value_namespace = name_space;
        events.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events")
    {
        events.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::PubkeyChain()
{

    yang_name = "pubkey-chain"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::PubkeyChain::~PubkeyChain()
{
}

bool Native::Ip::Ssh::PubkeyChain::has_data() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Ssh::PubkeyChain::has_operation() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        for(auto const & c : username)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Ssh::PubkeyChain::Username>();
        c->parent = this;
        username.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : username)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Ssh::PubkeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::PubkeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::PubkeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::Username::Username()
    :
    name{YType::str, "name"}
{

    yang_name = "username"; yang_parent_name = "pubkey-chain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::PubkeyChain::Username::~Username()
{
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_data() const
{
    for (std::size_t index=0; index<key_hash.size(); index++)
    {
        if(key_hash[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_operation() const
{
    for (std::size_t index=0; index<key_hash.size(); index++)
    {
        if(key_hash[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/pubkey-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::PubkeyChain::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::PubkeyChain::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-hash")
    {
        for(auto const & c : key_hash)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Ssh::PubkeyChain::Username::KeyHash>();
        c->parent = this;
        key_hash.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::PubkeyChain::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_hash)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Ssh::PubkeyChain::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::PubkeyChain::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-hash" || name == "name")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::ForwardProtocol::Protocol::nd {0, "nd"};
const Enum::YLeaf Native::Ip::ForwardProtocol::Protocol::sdns {1, "sdns"};
const Enum::YLeaf Native::Ip::ForwardProtocol::Protocol::turbo_flood {2, "turbo-flood"};

const Enum::YLeaf Native::Ip::Multicast::Multipath::SGHash::basic {0, "basic"};
const Enum::YLeaf Native::Ip::Multicast::Multipath::SGHash::next_hop_based {1, "next-hop-based"};

const Enum::YLeaf Native::Ip::Multicast::Vrf::Multipath::SGHash::basic {0, "basic"};
const Enum::YLeaf Native::Ip::Multicast::Vrf::Multipath::SGHash::next_hop_based {1, "next-hop-based"};

const Enum::YLeaf Native::Ip::Pim::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::SptThresholdContainer::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::SptThresholdContainer::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::Vrf::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::Vrf::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::How::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::How::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::Fwd::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::Fwd::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ip::ExplicitPath::Identifier::Mode::enable {0, "enable"};
const Enum::YLeaf Native::Ip::ExplicitPath::Identifier::Mode::disable {1, "disable"};

const Enum::YLeaf Native::Ip::ExplicitPath::Name::Mode::enable {0, "enable"};
const Enum::YLeaf Native::Ip::ExplicitPath::Name::Mode::disable {1, "disable"};

const Enum::YLeaf Native::Ip::Spd::Mode::aggressive {0, "aggressive"};


}
}

