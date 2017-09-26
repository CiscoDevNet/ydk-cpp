
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_178.hpp"
#include "Cisco_IOS_XE_native_179.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::System::Mode::Maintenance::ConfigMaintenance::ConfigMaintenance()
    :
    failsafe{YType::uint8, "failsafe"},
    template_{YType::str, "template"},
    timeout{YType::uint8, "timeout"}
    	,
    on_reload(std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload>())
{
    on_reload->parent = this;

    yang_name = "config-maintenance"; yang_parent_name = "maintenance"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::~ConfigMaintenance()
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::has_data() const
{
    return failsafe.is_set
	|| template_.is_set
	|| timeout.is_set
	|| (on_reload !=  nullptr && on_reload->has_data());
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failsafe.yfilter)
	|| ydk::is_set(template_.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (on_reload !=  nullptr && on_reload->has_operation());
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/maintenance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mode::Maintenance::ConfigMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failsafe.is_set || is_set(failsafe.yfilter)) leaf_name_data.push_back(failsafe.get_name_leafdata());
    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Mode::Maintenance::ConfigMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-reload")
    {
        if(on_reload == nullptr)
        {
            on_reload = std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload>();
        }
        return on_reload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mode::Maintenance::ConfigMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_reload != nullptr)
    {
        children["on-reload"] = on_reload;
    }

    return children;
}

void Native::System::Mode::Maintenance::ConfigMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failsafe")
    {
        failsafe = value;
        failsafe.value_namespace = name_space;
        failsafe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Mode::Maintenance::ConfigMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failsafe")
    {
        failsafe.yfilter = yfilter;
    }
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-reload" || name == "failsafe" || name == "template" || name == "timeout")
        return true;
    return false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::OnReload()
    :
    reset_reason(std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason>())
{
    reset_reason->parent = this;

    yang_name = "on-reload"; yang_parent_name = "config-maintenance"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::~OnReload()
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::has_data() const
{
    return (reset_reason !=  nullptr && reset_reason->has_data());
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::has_operation() const
{
    return is_set(yfilter)
	|| (reset_reason !=  nullptr && reset_reason->has_operation());
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/maintenance/config-maintenance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reset-reason")
    {
        if(reset_reason == nullptr)
        {
            reset_reason = std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason>();
        }
        return reset_reason;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reset_reason != nullptr)
    {
        children["reset-reason"] = reset_reason;
    }

    return children;
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset-reason")
        return true;
    return false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::ResetReason()
    :
    maintenance{YType::empty, "maintenance"}
{

    yang_name = "reset-reason"; yang_parent_name = "on-reload"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::~ResetReason()
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::has_data() const
{
    return maintenance.is_set;
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance.yfilter);
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/maintenance/config-maintenance/on-reload/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-reason";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance.is_set || is_set(maintenance.yfilter)) leaf_name_data.push_back(maintenance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance")
    {
        maintenance = value;
        maintenance.value_namespace = name_space;
        maintenance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance")
    {
        maintenance.yfilter = yfilter;
    }
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintenance")
        return true;
    return false;
}

Native::System::ModeButton::ModeButton()
    :
    reset{YType::empty, "reset"}
{

    yang_name = "mode-button"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::ModeButton::~ModeButton()
{
}

bool Native::System::ModeButton::has_data() const
{
    return reset.is_set;
}

bool Native::System::ModeButton::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reset.yfilter);
}

std::string Native::System::ModeButton::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::ModeButton::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mode-button";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::ModeButton::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::ModeButton::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::ModeButton::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::ModeButton::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::ModeButton::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
}

bool Native::System::ModeButton::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset")
        return true;
    return false;
}

Native::System::Mtu::Mtu()
    :
    jumbo{YType::uint16, "jumbo"},
    routing{YType::uint16, "routing"},
    size{YType::uint16, "size"}
{

    yang_name = "mtu"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Mtu::~Mtu()
{
}

bool Native::System::Mtu::has_data() const
{
    return jumbo.is_set
	|| routing.is_set
	|| size.is_set;
}

bool Native::System::Mtu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jumbo.yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::System::Mtu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mtu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jumbo.is_set || is_set(jumbo.yfilter)) leaf_name_data.push_back(jumbo.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Mtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Mtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jumbo")
    {
        jumbo = value;
        jumbo.value_namespace = name_space;
        jumbo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Mtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jumbo")
    {
        jumbo.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::System::Mtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jumbo" || name == "routing" || name == "size")
        return true;
    return false;
}

Native::TableMap::TableMap()
    :
    name{YType::str, "name"},
    default_{YType::str, "Cisco-IOS-XE-qos:default"}
{

    yang_name = "table-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TableMap::~TableMap()
{
}

bool Native::TableMap::has_data() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return name.is_set
	|| default_.is_set;
}

bool Native::TableMap::has_operation() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::TableMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TableMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TableMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TableMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        for(auto const & c : map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::TableMap::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TableMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::TableMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TableMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::TableMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "name" || name == "default")
        return true;
    return false;
}

Native::TableMap::Map::Map()
    :
    from{YType::uint8, "from"},
    to{YType::uint8, "to"}
{

    yang_name = "map"; yang_parent_name = "table-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::TableMap::Map::~Map()
{
}

bool Native::TableMap::Map::has_data() const
{
    return from.is_set
	|| to.is_set;
}

bool Native::TableMap::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter);
}

std::string Native::TableMap::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:map" <<"[from='" <<from <<"']" <<"[to='" <<to <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TableMap::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TableMap::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TableMap::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TableMap::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TableMap::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
}

bool Native::TableMap::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to")
        return true;
    return false;
}

Native::Tacacs::Tacacs()
{

    yang_name = "tacacs"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Tacacs::~Tacacs()
{
}

bool Native::Tacacs::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Tacacs::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Tacacs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Tacacs::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Tacacs::Server::Server()
    :
    name{YType::str, "name"}
    	,
    address(std::make_shared<Native::Tacacs::Server::Address>())
	,key(std::make_shared<Native::Tacacs::Server::Key>())
{
    address->parent = this;
    key->parent = this;

    yang_name = "server"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Tacacs::Server::~Server()
{
}

bool Native::Tacacs::Server::has_data() const
{
    return name.is_set
	|| (address !=  nullptr && address->has_data())
	|| (key !=  nullptr && key->has_data());
}

bool Native::Tacacs::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Tacacs::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Tacacs::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Tacacs::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Tacacs::Server::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Tacacs::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "key" || name == "name")
        return true;
    return false;
}

Native::Tacacs::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Tacacs::Server::Address::~Address()
{
}

bool Native::Tacacs::Server::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Tacacs::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Tacacs::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Tacacs::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Tacacs::Server::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Tacacs::Server::Key::~Key()
{
}

bool Native::Tacacs::Server::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Tacacs::Server::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Tacacs::Server::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::Server::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Tacacs::Server::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::TacacsServer::TacacsServer()
    :
    timeout{YType::uint16, "Cisco-IOS-XE-aaa:timeout"}
    	,
    directed_request(nullptr) // presence node
	,key(std::make_shared<Native::TacacsServer::Key>())
{
    key->parent = this;

    yang_name = "tacacs-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::~TacacsServer()
{
}

bool Native::TacacsServer::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return timeout.is_set
	|| (directed_request !=  nullptr && directed_request->has_data())
	|| (key !=  nullptr && key->has_data());
}

bool Native::TacacsServer::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (directed_request !=  nullptr && directed_request->has_operation())
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::TacacsServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "directed-request")
    {
        if(directed_request == nullptr)
        {
            directed_request = std::make_shared<Native::TacacsServer::DirectedRequest>();
        }
        return directed_request;
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::TacacsServer::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::TacacsServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(directed_request != nullptr)
    {
        children["directed-request"] = directed_request;
    }

    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::TacacsServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::TacacsServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "directed-request" || name == "host" || name == "key" || name == "timeout")
        return true;
    return false;
}

Native::TacacsServer::DirectedRequest::DirectedRequest()
    :
    no_truncate{YType::empty, "no-truncate"},
    restricted{YType::empty, "restricted"}
{

    yang_name = "directed-request"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::DirectedRequest::~DirectedRequest()
{
}

bool Native::TacacsServer::DirectedRequest::has_data() const
{
    return no_truncate.is_set
	|| restricted.is_set;
}

bool Native::TacacsServer::DirectedRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_truncate.yfilter)
	|| ydk::is_set(restricted.yfilter);
}

std::string Native::TacacsServer::DirectedRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::DirectedRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:directed-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::DirectedRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_truncate.is_set || is_set(no_truncate.yfilter)) leaf_name_data.push_back(no_truncate.get_name_leafdata());
    if (restricted.is_set || is_set(restricted.yfilter)) leaf_name_data.push_back(restricted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::DirectedRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::DirectedRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TacacsServer::DirectedRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-truncate")
    {
        no_truncate = value;
        no_truncate.value_namespace = name_space;
        no_truncate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restricted")
    {
        restricted = value;
        restricted.value_namespace = name_space;
        restricted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::DirectedRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-truncate")
    {
        no_truncate.yfilter = yfilter;
    }
    if(value_path == "restricted")
    {
        restricted.yfilter = yfilter;
    }
}

bool Native::TacacsServer::DirectedRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-truncate" || name == "restricted")
        return true;
    return false;
}

Native::TacacsServer::Host::Host()
    :
    name{YType::str, "name"},
    encryption_key{YType::str, "encryption-key"},
    key{YType::str, "key"},
    port{YType::uint16, "port"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "host"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::Host::~Host()
{
}

bool Native::TacacsServer::Host::has_data() const
{
    return name.is_set
	|| encryption_key.is_set
	|| key.is_set
	|| port.is_set
	|| timeout.is_set;
}

bool Native::TacacsServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encryption_key.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::TacacsServer::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:host" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encryption_key.is_set || is_set(encryption_key.yfilter)) leaf_name_data.push_back(encryption_key.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TacacsServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-key")
    {
        encryption_key = value;
        encryption_key.value_namespace = name_space;
        encryption_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encryption-key")
    {
        encryption_key.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::TacacsServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "encryption-key" || name == "key" || name == "port" || name == "timeout")
        return true;
    return false;
}

Native::TacacsServer::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::Key::~Key()
{
}

bool Native::TacacsServer::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::TacacsServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::TacacsServer::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TacacsServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::TacacsServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::TftpServer::TftpServer()
    :
    name{YType::str, "name"}
{

    yang_name = "tftp-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TftpServer::~TftpServer()
{
}

bool Native::TftpServer::has_data() const
{
    return name.is_set;
}

bool Native::TftpServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::TftpServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TftpServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-server" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TftpServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TftpServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TftpServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TftpServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TftpServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::TftpServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::TimeRange::TimeRange()
    :
    word{YType::str, "word"}
    	,
    absolute(std::make_shared<Native::TimeRange::Absolute>())
{
    absolute->parent = this;

    yang_name = "time-range"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TimeRange::~TimeRange()
{
}

bool Native::TimeRange::has_data() const
{
    return word.is_set
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::TimeRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::TimeRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TimeRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-range" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TimeRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TimeRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::TimeRange::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::TimeRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TimeRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::TimeRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "word")
        return true;
    return false;
}

Native::TimeRange::Absolute::Absolute()
    :
    start(std::make_shared<Native::TimeRange::Absolute::Start>())
{
    start->parent = this;

    yang_name = "absolute"; yang_parent_name = "time-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::TimeRange::Absolute::~Absolute()
{
}

bool Native::TimeRange::Absolute::has_data() const
{
    return (start !=  nullptr && start->has_data());
}

bool Native::TimeRange::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| (start !=  nullptr && start->has_operation());
}

std::string Native::TimeRange::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TimeRange::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TimeRange::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<Native::TimeRange::Absolute::Start>();
        }
        return start;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start != nullptr)
    {
        children["start"] = start;
    }

    return children;
}

void Native::TimeRange::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::TimeRange::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::TimeRange::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start")
        return true;
    return false;
}

Native::TimeRange::Absolute::Start::Start()
    :
    day_of_month{YType::uint8, "day-of-month"},
    month{YType::str, "month"},
    start_time{YType::str, "start-time"},
    year{YType::uint16, "year"}
{

    yang_name = "start"; yang_parent_name = "absolute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::TimeRange::Absolute::Start::~Start()
{
}

bool Native::TimeRange::Absolute::Start::has_data() const
{
    return day_of_month.is_set
	|| month.is_set
	|| start_time.is_set
	|| year.is_set;
}

bool Native::TimeRange::Absolute::Start::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::TimeRange::Absolute::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TimeRange::Absolute::Start::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TimeRange::Absolute::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::Absolute::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TimeRange::Absolute::Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TimeRange::Absolute::Start::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::TimeRange::Absolute::Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "month" || name == "start-time" || name == "year")
        return true;
    return false;
}

Native::TodClock::TodClock()
    :
    input_source(std::make_shared<Native::TodClock::InputSource>())
{
    input_source->parent = this;

    yang_name = "tod-clock"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TodClock::~TodClock()
{
}

bool Native::TodClock::has_data() const
{
    return (input_source !=  nullptr && input_source->has_data());
}

bool Native::TodClock::has_operation() const
{
    return is_set(yfilter)
	|| (input_source !=  nullptr && input_source->has_operation());
}

std::string Native::TodClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TodClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tod-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TodClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TodClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-source")
    {
        if(input_source == nullptr)
        {
            input_source = std::make_shared<Native::TodClock::InputSource>();
        }
        return input_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_source != nullptr)
    {
        children["input-source"] = input_source;
    }

    return children;
}

void Native::TodClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::TodClock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::TodClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-source")
        return true;
    return false;
}

Native::TodClock::InputSource::InputSource()
    :
    priority{YType::uint8, "priority"}
    	,
    ptp(std::make_shared<Native::TodClock::InputSource::Ptp>())
{
    ptp->parent = this;

    yang_name = "input-source"; yang_parent_name = "tod-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TodClock::InputSource::~InputSource()
{
}

bool Native::TodClock::InputSource::has_data() const
{
    return priority.is_set
	|| (ptp !=  nullptr && ptp->has_data());
}

bool Native::TodClock::InputSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (ptp !=  nullptr && ptp->has_operation());
}

std::string Native::TodClock::InputSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tod-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TodClock::InputSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TodClock::InputSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TodClock::InputSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::TodClock::InputSource::Ptp>();
        }
        return ptp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::InputSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ptp != nullptr)
    {
        children["ptp"] = ptp;
    }

    return children;
}

void Native::TodClock::InputSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TodClock::InputSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::TodClock::InputSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptp" || name == "priority")
        return true;
    return false;
}

Native::TodClock::InputSource::Ptp::Ptp()
    :
    domain{YType::uint8, "domain"}
{

    yang_name = "ptp"; yang_parent_name = "input-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TodClock::InputSource::Ptp::~Ptp()
{
}

bool Native::TodClock::InputSource::Ptp::has_data() const
{
    return domain.is_set;
}

bool Native::TodClock::InputSource::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::TodClock::InputSource::Ptp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tod-clock/input-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TodClock::InputSource::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TodClock::InputSource::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TodClock::InputSource::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::InputSource::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TodClock::InputSource::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TodClock::InputSource::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::TodClock::InputSource::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::Track::Track()
    :
    resolution(std::make_shared<Native::Track::Resolution>())
	,timer(std::make_shared<Native::Track::Timer>())
{
    resolution->parent = this;
    timer->parent = this;

    yang_name = "track"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::~Track()
{
}

bool Native::Track::has_data() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return (resolution !=  nullptr && resolution->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Track::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (resolution !=  nullptr && resolution->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Track::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resolution")
    {
        if(resolution == nullptr)
        {
            resolution = std::make_shared<Native::Track::Resolution>();
        }
        return resolution;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Track::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "tracked-object")
    {
        for(auto const & c : tracked_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Track::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resolution != nullptr)
    {
        children["resolution"] = resolution;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    for (auto const & c : tracked_object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolution" || name == "timer" || name == "tracked-object")
        return true;
    return false;
}

Native::Track::Resolution::Resolution()
    :
    ip(std::make_shared<Native::Track::Resolution::Ip>())
{
    ip->parent = this;

    yang_name = "resolution"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Resolution::~Resolution()
{
}

bool Native::Track::Resolution::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Track::Resolution::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Track::Resolution::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:resolution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Resolution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::Resolution::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Track::Resolution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Resolution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Resolution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Track::Resolution::Ip::Ip()
    :
    route(std::make_shared<Native::Track::Resolution::Ip::Route>())
{
    route->parent = this;

    yang_name = "ip"; yang_parent_name = "resolution"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Resolution::Ip::~Ip()
{
}

bool Native::Track::Resolution::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::Resolution::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::Resolution::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:resolution/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Resolution::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Resolution::Ip::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::Resolution::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Resolution::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Resolution::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::Resolution::Ip::Route::Route()
    :
    bgp{YType::uint32, "bgp"},
    eigrp{YType::uint32, "eigrp"},
    isis{YType::uint32, "isis"},
    ospf{YType::uint32, "ospf"},
    static_{YType::uint32, "static"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Resolution::Ip::Route::~Route()
{
}

bool Native::Track::Resolution::Ip::Route::has_data() const
{
    return bgp.is_set
	|| eigrp.is_set
	|| isis.is_set
	|| ospf.is_set
	|| static_.is_set;
}

bool Native::Track::Resolution::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Track::Resolution::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:resolution/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Resolution::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Resolution::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Resolution::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Track::Resolution::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "isis" || name == "ospf" || name == "static")
        return true;
    return false;
}

Native::Track::Timer::Timer()
    :
    interface(std::make_shared<Native::Track::Timer::Interface>())
	,ip(std::make_shared<Native::Track::Timer::Ip>())
	,ipv6(std::make_shared<Native::Track::Timer::Ipv6>())
	,list(std::make_shared<Native::Track::Timer::List>())
	,stub_object(std::make_shared<Native::Track::Timer::StubObject>())
{
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    list->parent = this;
    stub_object->parent = this;

    yang_name = "timer"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::~Timer()
{
}

bool Native::Track::Timer::has_data() const
{
    return (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (stub_object !=  nullptr && stub_object->has_data());
}

bool Native::Track::Timer::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (stub_object !=  nullptr && stub_object->has_operation());
}

std::string Native::Track::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Track::Timer::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::Timer::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::Timer::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Track::Timer::List>();
        }
        return list;
    }

    if(child_yang_name == "stub-object")
    {
        if(stub_object == nullptr)
        {
            stub_object = std::make_shared<Native::Track::Timer::StubObject>();
        }
        return stub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(stub_object != nullptr)
    {
        children["stub-object"] = stub_object;
    }

    return children;
}

void Native::Track::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip" || name == "ipv6" || name == "list" || name == "stub-object")
        return true;
    return false;
}

Native::Track::Timer::Interface::Interface()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "interface"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Interface::~Interface()
{
}

bool Native::Track::Timer::Interface::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ms.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Track::Timer::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ms" || name == "seconds")
        return true;
    return false;
}

Native::Track::Timer::Ip::Ip()
    :
    route(std::make_shared<Native::Track::Timer::Ip::Route>())
	,sla(std::make_shared<Native::Track::Timer::Ip::Sla>())
{
    route->parent = this;
    sla->parent = this;

    yang_name = "ip"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ip::~Ip()
{
}

bool Native::Track::Timer::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data())
	|| (sla !=  nullptr && sla->has_data());
}

bool Native::Track::Timer::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation())
	|| (sla !=  nullptr && sla->has_operation());
}

std::string Native::Track::Timer::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Timer::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Track::Timer::Ip::Sla>();
        }
        return sla;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(sla != nullptr)
    {
        children["sla"] = sla;
    }

    return children;
}

void Native::Track::Timer::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "sla")
        return true;
    return false;
}

Native::Track::Timer::Ip::Route::Route()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ip::Route::~Route()
{
}

bool Native::Track::Timer::Ip::Route::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ms.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Track::Timer::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ms" || name == "seconds")
        return true;
    return false;
}

Native::Track::Timer::Ip::Sla::Sla()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ip::Sla::~Sla()
{
}

bool Native::Track::Timer::Ip::Sla::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::Ip::Sla::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ms.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Track::Timer::Ip::Sla::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ms" || name == "seconds")
        return true;
    return false;
}

Native::Track::Timer::Ipv6::Ipv6()
    :
    route(std::make_shared<Native::Track::Timer::Ipv6::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ipv6::~Ipv6()
{
}

bool Native::Track::Timer::Ipv6::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::Timer::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::Timer::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Timer::Ipv6::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::Timer::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::Timer::Ipv6::Route::Route()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "route"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ipv6::Route::~Route()
{
}

bool Native::Track::Timer::Ipv6::Route::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::Ipv6::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ms.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Track::Timer::Ipv6::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ipv6::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ipv6::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ipv6::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ipv6::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ms" || name == "seconds")
        return true;
    return false;
}

Native::Track::Timer::List::List()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "list"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::List::~List()
{
}

bool Native::Track::Timer::List::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ms.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Track::Timer::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Track::Timer::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ms" || name == "seconds")
        return true;
    return false;
}

Native::Track::Timer::StubObject::StubObject()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "stub-object"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::StubObject::~StubObject()
{
}

bool Native::Track::Timer::StubObject::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::StubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ms.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Track::Timer::StubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::StubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::StubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::StubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::StubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::StubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::StubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Track::Timer::StubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ms" || name == "seconds")
        return true;
    return false;
}

Native::Track::TrackedObject::TrackedObject()
    :
    object_number{YType::uint32, "object-number"},
    default_state{YType::enumeration, "default-state"},
    stub_object{YType::empty, "stub-object"}
    	,
    default_(std::make_shared<Native::Track::TrackedObject::Default_>())
	,delay(std::make_shared<Native::Track::TrackedObject::Delay>())
	,interface(std::make_shared<Native::Track::TrackedObject::Interface>())
	,ip(std::make_shared<Native::Track::TrackedObject::Ip>())
	,ip_object(std::make_shared<Native::Track::TrackedObject::IpObject>())
	,ipv6(std::make_shared<Native::Track::TrackedObject::Ipv6>())
	,ipv6_object(std::make_shared<Native::Track::TrackedObject::Ipv6Object>())
	,list(std::make_shared<Native::Track::TrackedObject::List>())
{
    default_->parent = this;
    delay->parent = this;
    interface->parent = this;
    ip->parent = this;
    ip_object->parent = this;
    ipv6->parent = this;
    ipv6_object->parent = this;
    list->parent = this;

    yang_name = "tracked-object"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::TrackedObject::~TrackedObject()
{
}

bool Native::Track::TrackedObject::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return object_number.is_set
	|| default_state.is_set
	|| stub_object.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ip_object !=  nullptr && ip_object->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv6_object !=  nullptr && ipv6_object->has_data())
	|| (list !=  nullptr && list->has_data());
}

bool Native::Track::TrackedObject::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object_number.yfilter)
	|| ydk::is_set(default_state.yfilter)
	|| ydk::is_set(stub_object.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ip_object !=  nullptr && ip_object->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv6_object !=  nullptr && ipv6_object->has_operation())
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Track::TrackedObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:tracked-object" <<"[object-number='" <<object_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_number.is_set || is_set(object_number.yfilter)) leaf_name_data.push_back(object_number.get_name_leafdata());
    if (default_state.is_set || is_set(default_state.yfilter)) leaf_name_data.push_back(default_state.get_name_leafdata());
    if (stub_object.is_set || is_set(stub_object.yfilter)) leaf_name_data.push_back(stub_object.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Track::TrackedObject::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Track::TrackedObject::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::TrackedObject::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ip-object")
    {
        if(ip_object == nullptr)
        {
            ip_object = std::make_shared<Native::Track::TrackedObject::IpObject>();
        }
        return ip_object;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::TrackedObject::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv6-object")
    {
        if(ipv6_object == nullptr)
        {
            ipv6_object = std::make_shared<Native::Track::TrackedObject::Ipv6Object>();
        }
        return ipv6_object;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Track::TrackedObject::List>();
        }
        return list;
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Track::TrackedObject::Object>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ip_object != nullptr)
    {
        children["ip-object"] = ip_object;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv6_object != nullptr)
    {
        children["ipv6-object"] = ipv6_object;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Track::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-number")
    {
        object_number = value;
        object_number.value_namespace = name_space;
        object_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-state")
    {
        default_state = value;
        default_state.value_namespace = name_space;
        default_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-object")
    {
        stub_object = value;
        stub_object.value_namespace = name_space;
        stub_object.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-number")
    {
        object_number.yfilter = yfilter;
    }
    if(value_path == "default-state")
    {
        default_state.yfilter = yfilter;
    }
    if(value_path == "stub-object")
    {
        stub_object.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "delay" || name == "interface" || name == "ip" || name == "ip-object" || name == "ipv6" || name == "ipv6-object" || name == "list" || name == "object" || name == "object-number" || name == "default-state" || name == "stub-object")
        return true;
    return false;
}

Native::Track::TrackedObject::Default_::Default_()
    :
    default_state{YType::enumeration, "default-state"}
    	,
    delay(nullptr) // presence node
	,ip(std::make_shared<Native::Track::TrackedObject::Default_::Ip>())
	,ipv6(std::make_shared<Native::Track::TrackedObject::Default_::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "default"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::~Default_()
{
}

bool Native::Track::TrackedObject::Default_::has_data() const
{
    return default_state.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Track::TrackedObject::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_state.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Track::TrackedObject::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_state.is_set || is_set(default_state.yfilter)) leaf_name_data.push_back(default_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Default_::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::TrackedObject::Default_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::TrackedObject::Default_::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Track::TrackedObject::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-state")
    {
        default_state = value;
        default_state.value_namespace = name_space;
        default_state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-state")
    {
        default_state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "ip" || name == "ipv6" || name == "default-state")
        return true;
    return false;
}

Native::Track::TrackedObject::Default_::Delay::Delay()
{

    yang_name = "delay"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::Delay::~Delay()
{
}

bool Native::Track::TrackedObject::Default_::Delay::has_data() const
{
    return false;
}

bool Native::Track::TrackedObject::Default_::Delay::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Track::TrackedObject::Default_::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Default_::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Default_::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Track::TrackedObject::Default_::Ip::Ip()
    :
    vrf{YType::empty, "vrf"}
{

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::Ip::~Ip()
{
}

bool Native::Track::TrackedObject::Default_::Ip::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Default_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::Default_::Ipv6::Ipv6()
    :
    vrf{YType::empty, "vrf"}
{

    yang_name = "ipv6"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::Ipv6::~Ipv6()
{
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Default_::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default_::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::Delay::Delay()
    :
    down{YType::uint32, "down"},
    up{YType::uint32, "up"}
{

    yang_name = "delay"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Delay::~Delay()
{
}

bool Native::Track::TrackedObject::Delay::has_data() const
{
    return down.is_set
	|| up.is_set;
}

bool Native::Track::TrackedObject::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Native::Track::TrackedObject::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up")
        return true;
    return false;
}

Native::Track::TrackedObject::Interface::Interface()
    :
    name{YType::str, "name"},
    protocol{YType::enumeration, "protocol"},
    routing{YType::empty, "routing"}
{

    yang_name = "interface"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Interface::~Interface()
{
}

bool Native::Track::TrackedObject::Interface::has_data() const
{
    return name.is_set
	|| protocol.is_set
	|| routing.is_set;
}

bool Native::Track::TrackedObject::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(routing.yfilter);
}

std::string Native::Track::TrackedObject::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "protocol" || name == "routing")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Ip()
    :
    route(std::make_shared<Native::Track::TrackedObject::Ip::Route>())
	,sla(std::make_shared<Native::Track::TrackedObject::Ip::Sla>())
{
    route->parent = this;
    sla->parent = this;

    yang_name = "ip"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ip::~Ip()
{
}

bool Native::Track::TrackedObject::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data())
	|| (sla !=  nullptr && sla->has_data());
}

bool Native::Track::TrackedObject::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation())
	|| (sla !=  nullptr && sla->has_operation());
}

std::string Native::Track::TrackedObject::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::TrackedObject::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Track::TrackedObject::Ip::Sla>();
        }
        return sla;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(sla != nullptr)
    {
        children["sla"] = sla;
    }

    return children;
}

void Native::Track::TrackedObject::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "sla")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Route::Route()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    metric{YType::enumeration, "metric"},
    reachability{YType::empty, "reachability"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ip::Route::~Route()
{
}

bool Native::Track::TrackedObject::Ip::Route::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| metric.is_set
	|| reachability.is_set;
}

bool Native::Track::TrackedObject::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(reachability.yfilter);
}

std::string Native::Track::TrackedObject::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "metric" || name == "reachability")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Sla::Sla()
    :
    number{YType::uint32, "number"},
    reachability{YType::empty, "reachability"},
    state{YType::empty, "state"}
{

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ip::Sla::~Sla()
{
}

bool Native::Track::TrackedObject::Ip::Sla::has_data() const
{
    return number.is_set
	|| reachability.is_set
	|| state.is_set;
}

bool Native::Track::TrackedObject::Ip::Sla::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Native::Track::TrackedObject::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "reachability" || name == "state")
        return true;
    return false;
}

Native::Track::TrackedObject::IpObject::IpObject()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "ip-object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::IpObject::~IpObject()
{
}

bool Native::Track::TrackedObject::IpObject::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::IpObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::IpObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::IpObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::IpObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::IpObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::IpObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::IpObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::IpObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6::Ipv6()
    :
    route(std::make_shared<Native::Track::TrackedObject::Ipv6::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ipv6::~Ipv6()
{
}

bool Native::Track::TrackedObject::Ipv6::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::TrackedObject::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::TrackedObject::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::TrackedObject::Ipv6::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::TrackedObject::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6::Route::Route()
    :
    address{YType::str, "address"},
    metric{YType::enumeration, "metric"},
    reachability{YType::empty, "reachability"}
{

    yang_name = "route"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ipv6::Route::~Route()
{
}

bool Native::Track::TrackedObject::Ipv6::Route::has_data() const
{
    return address.is_set
	|| metric.is_set
	|| reachability.is_set;
}

bool Native::Track::TrackedObject::Ipv6::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(reachability.yfilter);
}

std::string Native::Track::TrackedObject::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ipv6::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ipv6::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ipv6::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "metric" || name == "reachability")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6Object::Ipv6Object()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv6-object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ipv6Object::~Ipv6Object()
{
}

bool Native::Track::TrackedObject::Ipv6Object::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Ipv6Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Ipv6Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ipv6Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ipv6Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ipv6Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::List::List()
    :
    boolean{YType::enumeration, "boolean"},
    threshold{YType::enumeration, "threshold"}
{

    yang_name = "list"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::List::~List()
{
}

bool Native::Track::TrackedObject::List::has_data() const
{
    return boolean.is_set
	|| threshold.is_set;
}

bool Native::Track::TrackedObject::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boolean.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Track::TrackedObject::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boolean.is_set || is_set(boolean.yfilter)) leaf_name_data.push_back(boolean.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boolean")
    {
        boolean = value;
        boolean.value_namespace = name_space;
        boolean.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boolean")
    {
        boolean.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boolean" || name == "threshold")
        return true;
    return false;
}

Native::Track::TrackedObject::Object::Object()
    :
    number{YType::uint32, "number"},
    not_{YType::empty, "not"}
{

    yang_name = "object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Object::~Object()
{
}

bool Native::Track::TrackedObject::Object::has_data() const
{
    return number.is_set
	|| not_.is_set;
}

bool Native::Track::TrackedObject::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(not_.yfilter);
}

std::string Native::Track::TrackedObject::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (not_.is_set || is_set(not_.yfilter)) leaf_name_data.push_back(not_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not")
    {
        not_ = value;
        not_.value_namespace = name_space;
        not_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "not")
    {
        not_.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "not")
        return true;
    return false;
}

Native::Transceiver::Transceiver()
    :
    type(std::make_shared<Native::Transceiver::Type>())
{
    type->parent = this;

    yang_name = "transceiver"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Transceiver::~Transceiver()
{
}

bool Native::Transceiver::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::Transceiver::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Transceiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Transceiver::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Transceiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Transceiver::Type::Type()
    :
    all(std::make_shared<Native::Transceiver::Type::All>())
{
    all->parent = this;

    yang_name = "type"; yang_parent_name = "transceiver"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Transceiver::Type::~Type()
{
}

bool Native::Transceiver::Type::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Native::Transceiver::Type::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Transceiver::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/transceiver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Transceiver::Type::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Transceiver::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Transceiver::Type::All::All()
    :
    monitoring(nullptr) // presence node
{

    yang_name = "all"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Transceiver::Type::All::~All()
{
}

bool Native::Transceiver::Type::All::has_data() const
{
    return (monitoring !=  nullptr && monitoring->has_data());
}

bool Native::Transceiver::Type::All::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Native::Transceiver::Type::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/transceiver/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::Type::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::Type::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::Type::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Native::Transceiver::Type::All::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitoring != nullptr)
    {
        children["monitoring"] = monitoring;
    }

    return children;
}

void Native::Transceiver::Type::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::Type::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::Type::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring")
        return true;
    return false;
}

Native::Transceiver::Type::All::Monitoring::Monitoring()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "monitoring"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Transceiver::Type::All::Monitoring::~Monitoring()
{
}

bool Native::Transceiver::Type::All::Monitoring::has_data() const
{
    return interval.is_set;
}

bool Native::Transceiver::Type::All::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Transceiver::Type::All::Monitoring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/transceiver/type/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::Type::All::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::Type::All::Monitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::Type::All::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::All::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Transceiver::Type::All::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Transceiver::Type::All::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Transceiver::Type::All::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Udld::Udld()
    :
    aggressive{YType::empty, "Cisco-IOS-XE-udld:aggressive"},
    enable{YType::empty, "Cisco-IOS-XE-udld:enable"}
    	,
    message(std::make_shared<Native::Udld::Message>())
	,recovery(nullptr) // presence node
{
    message->parent = this;

    yang_name = "udld"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Udld::~Udld()
{
}

bool Native::Udld::has_data() const
{
    return aggressive.is_set
	|| enable.is_set
	|| (message !=  nullptr && message->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Udld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (message !=  nullptr && message->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Udld::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Udld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message")
    {
        if(message == nullptr)
        {
            message = std::make_shared<Native::Udld::Message>();
        }
        return message;
    }

    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Udld::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message != nullptr)
    {
        children["message"] = message;
    }

    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Udld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Udld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Udld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message" || name == "recovery" || name == "aggressive" || name == "enable")
        return true;
    return false;
}

Native::Udld::Message::Message()
    :
    time{YType::uint8, "time"}
{

    yang_name = "message"; yang_parent_name = "udld"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Udld::Message::~Message()
{
}

bool Native::Udld::Message::has_data() const
{
    return time.is_set;
}

bool Native::Udld::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Udld::Message::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/udld/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Udld::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Udld::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Udld::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Udld::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Udld::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Udld::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Udld::Recovery::Recovery()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "recovery"; yang_parent_name = "udld"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Udld::Recovery::~Recovery()
{
}

bool Native::Udld::Recovery::has_data() const
{
    return interval.is_set;
}

bool Native::Udld::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Udld::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/udld/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Udld::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Udld::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Udld::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Udld::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Udld::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Udld::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Upgrade::Upgrade()
    :
    fpd(std::make_shared<Native::Upgrade::Fpd>())
{
    fpd->parent = this;

    yang_name = "upgrade"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Upgrade::~Upgrade()
{
}

bool Native::Upgrade::has_data() const
{
    return (fpd !=  nullptr && fpd->has_data());
}

bool Native::Upgrade::has_operation() const
{
    return is_set(yfilter)
	|| (fpd !=  nullptr && fpd->has_operation());
}

std::string Native::Upgrade::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Upgrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgrade";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Upgrade::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Upgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd")
    {
        if(fpd == nullptr)
        {
            fpd = std::make_shared<Native::Upgrade::Fpd>();
        }
        return fpd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Upgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fpd != nullptr)
    {
        children["fpd"] = fpd;
    }

    return children;
}

void Native::Upgrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Upgrade::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Upgrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd")
        return true;
    return false;
}

Native::Upgrade::Fpd::Fpd()
    :
    auto_{YType::empty, "auto"},
    path{YType::str, "path"}
{

    yang_name = "fpd"; yang_parent_name = "upgrade"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Upgrade::Fpd::~Fpd()
{
}

bool Native::Upgrade::Fpd::has_data() const
{
    return auto_.is_set
	|| path.is_set;
}

bool Native::Upgrade::Fpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string Native::Upgrade::Fpd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/upgrade/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Upgrade::Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Upgrade::Fpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Upgrade::Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Upgrade::Fpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Upgrade::Fpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Upgrade::Fpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool Native::Upgrade::Fpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "path")
        return true;
    return false;
}

Native::Username::Username()
    :
    name{YType::str, "name"},
    one_time{YType::empty, "one-time"},
    privilege{YType::uint8, "privilege"}
    	,
    password(std::make_shared<Native::Username::Password>())
	,secret(std::make_shared<Native::Username::Secret>())
{
    password->parent = this;
    secret->parent = this;

    yang_name = "username"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Username::~Username()
{
}

bool Native::Username::has_data() const
{
    return name.is_set
	|| one_time.is_set
	|| privilege.is_set
	|| (password !=  nullptr && password->has_data())
	|| (secret !=  nullptr && secret->has_data());
}

bool Native::Username::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(one_time.yfilter)
	|| ydk::is_set(privilege.yfilter)
	|| (password !=  nullptr && password->has_operation())
	|| (secret !=  nullptr && secret->has_operation());
}

std::string Native::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (one_time.is_set || is_set(one_time.yfilter)) leaf_name_data.push_back(one_time.get_name_leafdata());
    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Username::Password>();
        }
        return password;
    }

    if(child_yang_name == "secret")
    {
        if(secret == nullptr)
        {
            secret = std::make_shared<Native::Username::Secret>();
        }
        return secret;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(secret != nullptr)
    {
        children["secret"] = secret;
    }

    return children;
}

void Native::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-time")
    {
        one_time = value;
        one_time.value_namespace = name_space;
        one_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "one-time")
    {
        one_time.yfilter = yfilter;
    }
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
}

bool Native::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "secret" || name == "name" || name == "one-time" || name == "privilege")
        return true;
    return false;
}

Native::Username::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "password"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Username::Password::~Password()
{
}

bool Native::Username::Password::has_data() const
{
    return encryption.is_set
	|| password.is_set;
}

bool Native::Username::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Username::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Username::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Username::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Username::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Username::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Username::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Username::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Username::Secret::Secret()
    :
    encryption{YType::enumeration, "encryption"},
    secret{YType::str, "secret"}
{

    yang_name = "secret"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Username::Secret::~Secret()
{
}

bool Native::Username::Secret::has_data() const
{
    return encryption.is_set
	|| secret.is_set;
}

bool Native::Username::Secret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Username::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Username::Secret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Username::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Username::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Username::Secret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Username::Secret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Username::Secret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "secret")
        return true;
    return false;
}

Native::Utd::Utd()
{

    yang_name = "utd"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Utd::~Utd()
{
}

bool Native::Utd::has_data() const
{
    return false;
}

bool Native::Utd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Utd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::UtdEngine::UtdEngine()
    :
    utd(std::make_shared<Native::UtdEngine::Utd>())
{
    utd->parent = this;

    yang_name = "utd-engine"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::~UtdEngine()
{
}

bool Native::UtdEngine::has_data() const
{
    return (utd !=  nullptr && utd->has_data());
}

bool Native::UtdEngine::has_operation() const
{
    return is_set(yfilter)
	|| (utd !=  nullptr && utd->has_operation());
}

std::string Native::UtdEngine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd-engine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::UtdEngine::Utd>();
        }
        return utd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    return children;
}

void Native::UtdEngine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utd")
        return true;
    return false;
}

Native::UtdEngine::Utd::Utd()
    :
    engine(std::make_shared<Native::UtdEngine::Utd::Engine>())
	,whitelist(std::make_shared<Native::UtdEngine::Utd::Whitelist>())
{
    engine->parent = this;
    whitelist->parent = this;

    yang_name = "utd"; yang_parent_name = "utd-engine"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::~Utd()
{
}

bool Native::UtdEngine::Utd::has_data() const
{
    return (engine !=  nullptr && engine->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdEngine::Utd::has_operation() const
{
    return is_set(yfilter)
	|| (engine !=  nullptr && engine->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdEngine::Utd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "engine")
    {
        if(engine == nullptr)
        {
            engine = std::make_shared<Native::UtdEngine::Utd::Engine>();
        }
        return engine;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdEngine::Utd::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(engine != nullptr)
    {
        children["engine"] = engine;
    }

    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::UtdEngine::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "engine" || name == "whitelist")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Engine()
    :
    advanced(std::make_shared<Native::UtdEngine::Utd::Engine::Advanced>())
	,standard(std::make_shared<Native::UtdEngine::Utd::Engine::Standard>())
{
    advanced->parent = this;
    standard->parent = this;

    yang_name = "engine"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::~Engine()
{
}

bool Native::UtdEngine::Utd::Engine::has_data() const
{
    return (advanced !=  nullptr && advanced->has_data())
	|| (standard !=  nullptr && standard->has_data());
}

bool Native::UtdEngine::Utd::Engine::has_operation() const
{
    return is_set(yfilter)
	|| (advanced !=  nullptr && advanced->has_operation())
	|| (standard !=  nullptr && standard->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advanced")
    {
        if(advanced == nullptr)
        {
            advanced = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced>();
        }
        return advanced;
    }

    if(child_yang_name == "standard")
    {
        if(standard == nullptr)
        {
            standard = std::make_shared<Native::UtdEngine::Utd::Engine::Standard>();
        }
        return standard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advanced != nullptr)
    {
        children["advanced"] = advanced;
    }

    if(standard != nullptr)
    {
        children["standard"] = standard;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced" || name == "standard")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Advanced::Advanced()
    :
    default_(std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Default_>())
	,threat(nullptr) // presence node
{
    default_->parent = this;

    yang_name = "advanced"; yang_parent_name = "engine"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Advanced::~Advanced()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (threat !=  nullptr && threat->has_data());
}

bool Native::UtdEngine::Utd::Engine::Advanced::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (threat !=  nullptr && threat->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Advanced::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Advanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Advanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "threat")
    {
        if(threat == nullptr)
        {
            threat = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Threat>();
        }
        return threat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(threat != nullptr)
    {
        children["threat"] = threat;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Advanced::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "threat")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::Default_()
    :
    threat(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::~Default_()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::has_data() const
{
    return (threat !=  nullptr && threat->has_data());
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (threat !=  nullptr && threat->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/advanced/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Advanced::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threat")
    {
        if(threat == nullptr)
        {
            threat = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat>();
        }
        return threat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threat != nullptr)
    {
        children["threat"] = threat;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Advanced::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threat")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::Threat()
{

    yang_name = "threat"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::~Threat()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::has_data() const
{
    return false;
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/advanced/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::UtdEngine::Utd::Engine::Advanced::Threat::Threat()
    :
    detection{YType::empty, "detection"}
{

    yang_name = "threat"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Advanced::Threat::~Threat()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Threat::has_data() const
{
    return detection.is_set;
}

bool Native::UtdEngine::Utd::Engine::Advanced::Threat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Threat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/advanced/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Threat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Advanced::Threat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.yfilter)) leaf_name_data.push_back(detection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::Threat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::Threat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::Threat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection")
    {
        detection = value;
        detection.value_namespace = name_space;
        detection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Advanced::Threat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection")
    {
        detection.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Advanced::Threat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Standard()
    :
    policy{YType::enumeration, "policy"},
    threat{YType::enumeration, "threat"},
    whitelist{YType::empty, "whitelist"}
    	,
    default_(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Default_>())
	,logging(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging>())
	,signature(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature>())
{
    default_->parent = this;
    logging->parent = this;
    signature->parent = this;

    yang_name = "standard"; yang_parent_name = "engine"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::~Standard()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::has_data() const
{
    return policy.is_set
	|| threat.is_set
	|| whitelist.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (signature !=  nullptr && signature->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(threat.yfilter)
	|| ydk::is_set(whitelist.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (signature !=  nullptr && signature->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (threat.is_set || is_set(threat.yfilter)) leaf_name_data.push_back(threat.get_name_leafdata());
    if (whitelist.is_set || is_set(whitelist.yfilter)) leaf_name_data.push_back(whitelist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "signature")
    {
        if(signature == nullptr)
        {
            signature = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature>();
        }
        return signature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(signature != nullptr)
    {
        children["signature"] = signature;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threat")
    {
        threat = value;
        threat.value_namespace = name_space;
        threat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "whitelist")
    {
        whitelist = value;
        whitelist.value_namespace = name_space;
        whitelist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "threat")
    {
        threat.yfilter = yfilter;
    }
    if(value_path == "whitelist")
    {
        whitelist.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "logging" || name == "signature" || name == "policy" || name == "threat" || name == "whitelist")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Default_::Default_()
    :
    policy{YType::empty, "policy"},
    threat{YType::empty, "threat"}
{

    yang_name = "default"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Default_::~Default_()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Default_::has_data() const
{
    return policy.is_set
	|| threat.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(threat.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (threat.is_set || is_set(threat.yfilter)) leaf_name_data.push_back(threat.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threat")
    {
        threat = value;
        threat.value_namespace = name_space;
        threat.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "threat")
    {
        threat.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "threat")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Logging()
    :
    server(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging::Server>())
	,syslog(nullptr) // presence node
{
    server->parent = this;

    yang_name = "logging"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Logging::~Logging()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::has_data() const
{
    return (server !=  nullptr && server->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging::Server>();
        }
        return server;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "syslog")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Server::Server()
    :
    level{YType::enumeration, "level"},
    name{YType::str, "name"},
    syslog{YType::empty, "syslog"}
{

    yang_name = "server"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Server::~Server()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Server::has_data() const
{
    return level.is_set
	|| name.is_set
	|| syslog.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(syslog.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "name" || name == "syslog")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::Syslog()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "syslog"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::~Syslog()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::has_data() const
{
    return level.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Signature()
    :
    update(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update>())
{
    update->parent = this;

    yang_name = "signature"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::~Signature()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::has_data() const
{
    return (update !=  nullptr && update->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::has_operation() const
{
    return is_set(yfilter)
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Signature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Update()
    :
    occur_at(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt>())
	,server(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server>())
{
    occur_at->parent = this;
    server->parent = this;

    yang_name = "update"; yang_parent_name = "signature"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::~Update()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::has_data() const
{
    return (occur_at !=  nullptr && occur_at->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::has_operation() const
{
    return is_set(yfilter)
	|| (occur_at !=  nullptr && occur_at->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "occur-at")
    {
        if(occur_at == nullptr)
        {
            occur_at = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt>();
        }
        return occur_at;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(occur_at != nullptr)
    {
        children["occur-at"] = occur_at;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "occur-at" || name == "server")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::OccurAt()
    :
    daily(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily>())
	,monthly(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly>())
	,weekly(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly>())
{
    daily->parent = this;
    monthly->parent = this;
    weekly->parent = this;

    yang_name = "occur-at"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::~OccurAt()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (monthly !=  nullptr && monthly->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (monthly !=  nullptr && monthly->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "occur-at";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "monthly")
    {
        if(monthly == nullptr)
        {
            monthly = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly>();
        }
        return monthly;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(monthly != nullptr)
    {
        children["monthly"] = monthly;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "monthly" || name == "weekly")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::Daily()
    :
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{

    yang_name = "daily"; yang_parent_name = "occur-at"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::~Daily()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::has_data() const
{
    return hours.is_set
	|| minutes.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/occur-at/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::Monthly()
    :
    days{YType::str, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{

    yang_name = "monthly"; yang_parent_name = "occur-at"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::~Monthly()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/occur-at/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monthly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::Weekly()
    :
    days{YType::str, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{

    yang_name = "weekly"; yang_parent_name = "occur-at"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::~Weekly()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/occur-at/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Server()
    :
    cisco(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco>())
	,url(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url>())
{
    cisco->parent = this;
    url->parent = this;

    yang_name = "server"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::~Server()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::has_data() const
{
    return (cisco !=  nullptr && cisco->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::has_operation() const
{
    return is_set(yfilter)
	|| (cisco !=  nullptr && cisco->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco")
    {
        if(cisco == nullptr)
        {
            cisco = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco>();
        }
        return cisco;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco != nullptr)
    {
        children["cisco"] = cisco;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "url")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::Cisco()
    :
    password{YType::str, "password"},
    username{YType::str, "username"}
{

    yang_name = "cisco"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::~Cisco()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::has_data() const
{
    return password.is_set
	|| username.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "username")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::Url()
    :
    name{YType::str, "name"}
    	,
    all(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All>())
{
    all->parent = this;

    yang_name = "url"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::~Url()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::has_data() const
{
    return name.is_set
	|| (all !=  nullptr && all->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "name")
        return true;
    return false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::All()
    :
    name{YType::str, "name"},
    password{YType::str, "password"},
    username{YType::str, "username"}
{

    yang_name = "all"; yang_parent_name = "url"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::~All()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::has_data() const
{
    return name.is_set
	|| password.is_set
	|| username.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/server/url/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password" || name == "username")
        return true;
    return false;
}

Native::UtdEngine::Utd::Whitelist::Whitelist()
    :
    signature(std::make_shared<Native::UtdEngine::Utd::Whitelist::Signature>())
{
    signature->parent = this;

    yang_name = "whitelist"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Whitelist::~Whitelist()
{
}

bool Native::UtdEngine::Utd::Whitelist::has_data() const
{
    return (signature !=  nullptr && signature->has_data());
}

bool Native::UtdEngine::Utd::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (signature !=  nullptr && signature->has_operation());
}

std::string Native::UtdEngine::Utd::Whitelist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signature")
    {
        if(signature == nullptr)
        {
            signature = std::make_shared<Native::UtdEngine::Utd::Whitelist::Signature>();
        }
        return signature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signature != nullptr)
    {
        children["signature"] = signature;
    }

    return children;
}

void Native::UtdEngine::Utd::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdEngine::Utd::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdEngine::Utd::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signature")
        return true;
    return false;
}

Native::UtdEngine::Utd::Whitelist::Signature::Signature()
    :
    comment{YType::str, "comment"},
    id{YType::uint64, "id"}
{

    yang_name = "signature"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdEngine::Utd::Whitelist::Signature::~Signature()
{
}

bool Native::UtdEngine::Utd::Whitelist::Signature::has_data() const
{
    return comment.is_set
	|| id.is_set;
}

bool Native::UtdEngine::Utd::Whitelist::Signature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comment.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::UtdEngine::Utd::Whitelist::Signature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/whitelist/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdEngine::Utd::Whitelist::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdEngine::Utd::Whitelist::Signature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Whitelist::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Whitelist::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Whitelist::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdEngine::Utd::Whitelist::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::UtdEngine::Utd::Whitelist::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comment" || name == "id")
        return true;
    return false;
}

Native::VirtualService::VirtualService()
    :
    name{YType::str, "name"},
    activate{YType::empty, "Cisco-IOS-XE-vservice:activate"},
    profile{YType::str, "Cisco-IOS-XE-vservice:profile"}
    	,
    ip(std::make_shared<Native::VirtualService::Ip>())
	,vnic(std::make_shared<Native::VirtualService::Vnic>())
{
    ip->parent = this;
    vnic->parent = this;

    yang_name = "virtual-service"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::VirtualService::~VirtualService()
{
}

bool Native::VirtualService::has_data() const
{
    return name.is_set
	|| activate.is_set
	|| profile.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (vnic !=  nullptr && vnic->has_data());
}

bool Native::VirtualService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (vnic !=  nullptr && vnic->has_operation());
}

std::string Native::VirtualService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::VirtualService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-service" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::VirtualService::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "vnic")
    {
        if(vnic == nullptr)
        {
            vnic = std::make_shared<Native::VirtualService::Vnic>();
        }
        return vnic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(vnic != nullptr)
    {
        children["vnic"] = vnic;
    }

    return children;
}

void Native::VirtualService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::VirtualService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "vnic" || name == "name" || name == "activate" || name == "profile")
        return true;
    return false;
}

Native::VirtualService::Ip::Ip()
    :
    shared(std::make_shared<Native::VirtualService::Ip::Shared>())
{
    shared->parent = this;

    yang_name = "ip"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Ip::~Ip()
{
}

bool Native::VirtualService::Ip::has_data() const
{
    return (shared !=  nullptr && shared->has_data());
}

bool Native::VirtualService::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (shared !=  nullptr && shared->has_operation());
}

std::string Native::VirtualService::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vservice:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shared")
    {
        if(shared == nullptr)
        {
            shared = std::make_shared<Native::VirtualService::Ip::Shared>();
        }
        return shared;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shared != nullptr)
    {
        children["shared"] = shared;
    }

    return children;
}

void Native::VirtualService::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared")
        return true;
    return false;
}

Native::VirtualService::Ip::Shared::Shared()
    :
    host_interface(std::make_shared<Native::VirtualService::Ip::Shared::HostInterface>())
{
    host_interface->parent = this;

    yang_name = "shared"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Ip::Shared::~Shared()
{
}

bool Native::VirtualService::Ip::Shared::has_data() const
{
    return (host_interface !=  nullptr && host_interface->has_data());
}

bool Native::VirtualService::Ip::Shared::has_operation() const
{
    return is_set(yfilter)
	|| (host_interface !=  nullptr && host_interface->has_operation());
}

std::string Native::VirtualService::Ip::Shared::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Ip::Shared::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Ip::Shared::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-interface")
    {
        if(host_interface == nullptr)
        {
            host_interface = std::make_shared<Native::VirtualService::Ip::Shared::HostInterface>();
        }
        return host_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Ip::Shared::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host_interface != nullptr)
    {
        children["host-interface"] = host_interface;
    }

    return children;
}

void Native::VirtualService::Ip::Shared::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Ip::Shared::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Ip::Shared::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-interface")
        return true;
    return false;
}

Native::VirtualService::Ip::Shared::HostInterface::HostInterface()
    :
    fastethernet{YType::str, "FastEthernet"},
    loopback{YType::uint64, "Loopback"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    vlan{YType::uint16, "Vlan"}
{

    yang_name = "host-interface"; yang_parent_name = "shared"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Ip::Shared::HostInterface::~HostInterface()
{
}

bool Native::VirtualService::Ip::Shared::HostInterface::has_data() const
{
    return fastethernet.is_set
	|| loopback.is_set
	|| tengigabitethernet.is_set
	|| vlan.is_set;
}

bool Native::VirtualService::Ip::Shared::HostInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::VirtualService::Ip::Shared::HostInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Ip::Shared::HostInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Ip::Shared::HostInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Ip::Shared::HostInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VirtualService::Ip::Shared::HostInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Ip::Shared::HostInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::VirtualService::Ip::Shared::HostInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FastEthernet" || name == "Loopback" || name == "TenGigabitEthernet" || name == "Vlan")
        return true;
    return false;
}

Native::VirtualService::Vnic::Vnic()
    :
    gateway(std::make_shared<Native::VirtualService::Vnic::Gateway>())
	,management(std::make_shared<Native::VirtualService::Vnic::Management>())
{
    gateway->parent = this;
    management->parent = this;

    yang_name = "vnic"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Vnic::~Vnic()
{
}

bool Native::VirtualService::Vnic::has_data() const
{
    return (gateway !=  nullptr && gateway->has_data())
	|| (management !=  nullptr && management->has_data());
}

bool Native::VirtualService::Vnic::has_operation() const
{
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation())
	|| (management !=  nullptr && management->has_operation());
}

std::string Native::VirtualService::Vnic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vservice:vnic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::VirtualService::Vnic::Gateway>();
        }
        return gateway;
    }

    if(child_yang_name == "management")
    {
        if(management == nullptr)
        {
            management = std::make_shared<Native::VirtualService::Vnic::Management>();
        }
        return management;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    if(management != nullptr)
    {
        children["management"] = management;
    }

    return children;
}

void Native::VirtualService::Vnic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gateway" || name == "management")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::Gateway()
{

    yang_name = "gateway"; yang_parent_name = "vnic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Vnic::Gateway::~Gateway()
{
}

bool Native::VirtualService::Vnic::Gateway::has_data() const
{
    for (std::size_t index=0; index<virtualportgroup.size(); index++)
    {
        if(virtualportgroup[index]->has_data())
            return true;
    }
    return false;
}

bool Native::VirtualService::Vnic::Gateway::has_operation() const
{
    for (std::size_t index=0; index<virtualportgroup.size(); index++)
    {
        if(virtualportgroup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::VirtualService::Vnic::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Gateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VirtualPortGroup")
    {
        for(auto const & c : virtualportgroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup>();
        c->parent = this;
        virtualportgroup.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtualportgroup)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::VirtualService::Vnic::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VirtualPortGroup")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::VirtualPortGroup()
    :
    number{YType::uint16, "number"}
    	,
    guest(std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest>())
{
    guest->parent = this;

    yang_name = "VirtualPortGroup"; yang_parent_name = "gateway"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::~VirtualPortGroup()
{
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::has_data() const
{
    return number.is_set
	|| (guest !=  nullptr && guest->has_data());
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (guest !=  nullptr && guest->has_operation());
}

std::string Native::VirtualService::Vnic::Gateway::VirtualPortGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VirtualPortGroup" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Gateway::VirtualPortGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guest")
    {
        if(guest == nullptr)
        {
            guest = std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest>();
        }
        return guest;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guest != nullptr)
    {
        children["guest"] = guest;
    }

    return children;
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guest" || name == "number")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Guest()
    :
    ip(std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip>())
	,ipv6(std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "guest"; yang_parent_name = "VirtualPortGroup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::~Guest()
{
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "guest"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::~Ip()
{
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::has_data() const
{
    return address.is_set;
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "guest"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::~Ipv6()
{
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Management()
    :
    gigabitethernet0{YType::empty, "GigabitEthernet0"}
    	,
    guest(std::make_shared<Native::VirtualService::Vnic::Management::Guest>())
{
    guest->parent = this;

    yang_name = "management"; yang_parent_name = "vnic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Vnic::Management::~Management()
{
}

bool Native::VirtualService::Vnic::Management::has_data() const
{
    return gigabitethernet0.is_set
	|| (guest !=  nullptr && guest->has_data());
}

bool Native::VirtualService::Vnic::Management::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gigabitethernet0.yfilter)
	|| (guest !=  nullptr && guest->has_operation());
}

std::string Native::VirtualService::Vnic::Management::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Management::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gigabitethernet0.is_set || is_set(gigabitethernet0.yfilter)) leaf_name_data.push_back(gigabitethernet0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Management::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guest")
    {
        if(guest == nullptr)
        {
            guest = std::make_shared<Native::VirtualService::Vnic::Management::Guest>();
        }
        return guest;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Management::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guest != nullptr)
    {
        children["guest"] = guest;
    }

    return children;
}

void Native::VirtualService::Vnic::Management::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "GigabitEthernet0")
    {
        gigabitethernet0 = value;
        gigabitethernet0.value_namespace = name_space;
        gigabitethernet0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Management::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "GigabitEthernet0")
    {
        gigabitethernet0.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Management::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guest" || name == "GigabitEthernet0")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Guest::Guest()
    :
    ip(std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ip>())
	,ipv6(std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "guest"; yang_parent_name = "management"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Vnic::Management::Guest::~Guest()
{
}

bool Native::VirtualService::Vnic::Management::Guest::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::VirtualService::Vnic::Management::Guest::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::VirtualService::Vnic::Management::Guest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Management::Guest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Management::Guest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Management::Guest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::VirtualService::Vnic::Management::Guest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::Management::Guest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::Management::Guest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Guest::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "guest"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Vnic::Management::Guest::Ip::~Ip()
{
}

bool Native::VirtualService::Vnic::Management::Guest::Ip::has_data() const
{
    return address.is_set;
}

bool Native::VirtualService::Vnic::Management::Guest::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Management::Guest::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Management::Guest::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Management::Guest::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Management::Guest::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VirtualService::Vnic::Management::Guest::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Management::Guest::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Management::Guest::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Guest::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "guest"; is_top_level_class = false; has_list_ancestor = true;
}

Native::VirtualService::Vnic::Management::Guest::Ipv6::~Ipv6()
{
}

bool Native::VirtualService::Vnic::Management::Guest::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::VirtualService::Vnic::Management::Guest::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Management::Guest::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VirtualService::Vnic::Management::Guest::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Management::Guest::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Management::Guest::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VirtualService::Vnic::Management::Guest::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Management::Guest::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Management::Guest::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Vlan::Vlan()
    :
    access_log(std::make_shared<Native::Vlan::AccessLog>())
	,accounting(nullptr) // presence node
	,dot1q(std::make_shared<Native::Vlan::Dot1Q>())
	,internal(std::make_shared<Native::Vlan::Internal>())
{
    access_log->parent = this;
    dot1q->parent = this;
    internal->parent = this;

    yang_name = "vlan"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::~Vlan()
{
}

bool Native::Vlan::has_data() const
{
    for (std::size_t index=0; index<access_map.size(); index++)
    {
        if(access_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return (access_log !=  nullptr && access_log->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (internal !=  nullptr && internal->has_data());
}

bool Native::Vlan::has_operation() const
{
    for (std::size_t index=0; index<access_map.size(); index++)
    {
        if(access_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (access_log !=  nullptr && access_log->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (internal !=  nullptr && internal->has_operation());
}

std::string Native::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-log")
    {
        if(access_log == nullptr)
        {
            access_log = std::make_shared<Native::Vlan::AccessLog>();
        }
        return access_log;
    }

    if(child_yang_name == "access-map")
    {
        for(auto const & c : access_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vlan::AccessMap>();
        c->parent = this;
        access_map.push_back(c);
        return c;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Vlan::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "configuration")
    {
        for(auto const & c : configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vlan::Configuration>();
        c->parent = this;
        configuration.push_back(c);
        return c;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Vlan::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "filter")
    {
        for(auto const & c : filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vlan::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Vlan::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "vlan-list")
    {
        for(auto const & c : vlan_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vlan::VlanList>();
        c->parent = this;
        vlan_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_log != nullptr)
    {
        children["access-log"] = access_log;
    }

    for (auto const & c : access_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    for (auto const & c : configuration)
    {
        children[c->get_segment_path()] = c;
    }

    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    for (auto const & c : filter)
    {
        children[c->get_segment_path()] = c;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    for (auto const & c : vlan_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-log" || name == "access-map" || name == "accounting" || name == "configuration" || name == "dot1q" || name == "filter" || name == "internal" || name == "vlan-list")
        return true;
    return false;
}

Native::Vlan::AccessLog::AccessLog()
    :
    maxflow{YType::uint16, "maxflow"},
    ratelimit{YType::uint16, "ratelimit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "access-log"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::AccessLog::~AccessLog()
{
}

bool Native::Vlan::AccessLog::has_data() const
{
    return maxflow.is_set
	|| ratelimit.is_set
	|| threshold.is_set;
}

bool Native::Vlan::AccessLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxflow.yfilter)
	|| ydk::is_set(ratelimit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Vlan::AccessLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::AccessLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:access-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxflow.is_set || is_set(maxflow.yfilter)) leaf_name_data.push_back(maxflow.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::AccessLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxflow")
    {
        maxflow = value;
        maxflow.value_namespace = name_space;
        maxflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::AccessLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxflow")
    {
        maxflow.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxflow" || name == "ratelimit" || name == "threshold")
        return true;
    return false;
}

Native::Vlan::AccessMap::AccessMap()
    :
    name{YType::str, "name"},
    action{YType::enumeration, "action"},
    value_{YType::uint16, "value"}
    	,
    match(std::make_shared<Native::Vlan::AccessMap::Match>())
{
    match->parent = this;

    yang_name = "access-map"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::AccessMap::~AccessMap()
{
}

bool Native::Vlan::AccessMap::has_data() const
{
    return name.is_set
	|| action.is_set
	|| value_.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Vlan::AccessMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Vlan::AccessMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::AccessMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:access-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Vlan::AccessMap::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Vlan::AccessMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::AccessMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "name" || name == "action" || name == "value")
        return true;
    return false;
}

Native::Vlan::AccessMap::Match::Match()
    :
    ip(std::make_shared<Native::Vlan::AccessMap::Match::Ip>())
	,ipv6(std::make_shared<Native::Vlan::AccessMap::Match::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "match"; yang_parent_name = "access-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::AccessMap::Match::~Match()
{
}

bool Native::Vlan::AccessMap::Match::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vlan::AccessMap::Match::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vlan::AccessMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Vlan::AccessMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vlan::AccessMap::Match::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Vlan::AccessMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::AccessMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::AccessMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6")
        return true;
    return false;
}

Native::Vlan::AccessMap::Match::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::AccessMap::Match::Ip::~Ip()
{
}

bool Native::Vlan::AccessMap::Match::Ip::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Vlan::AccessMap::Match::Ip::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Vlan::AccessMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::AccessMap::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::Vlan::AccessMap::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessMap::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Vlan::AccessMap::Match::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::AccessMap::Match::Ipv6::~Ipv6()
{
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Vlan::AccessMap::Match::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::Match::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::AccessMap::Match::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::Vlan::AccessMap::Match::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Vlan::Accounting::Accounting()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "accounting"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Accounting::~Accounting()
{
}

bool Native::Vlan::Accounting::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Vlan::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Vlan::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Vlan::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Vlan::Configuration::Configuration()
    :
    vlan_id{YType::str, "vlan-id"}
    	,
    ip(std::make_shared<Native::Vlan::Configuration::Ip>())
	,ipv6(std::make_shared<Native::Vlan::Configuration::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "configuration"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Configuration::~Configuration()
{
}

bool Native::Vlan::Configuration::has_data() const
{
    return vlan_id.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vlan::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vlan::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:configuration" <<"[vlan-id='" <<vlan_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Vlan::Configuration::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vlan::Configuration::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Vlan::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "vlan-id")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Ip()
    :
    flow(std::make_shared<Native::Vlan::Configuration::Ip::Flow>())
{
    flow->parent = this;

    yang_name = "ip"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ip::~Ip()
{
}

bool Native::Vlan::Configuration::Ip::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Vlan::Configuration::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Vlan::Configuration::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Vlan::Configuration::Ip::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Vlan::Configuration::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Flow::Flow()
{

    yang_name = "flow"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ip::Flow::~Flow()
{
}

bool Native::Vlan::Configuration::Ip::Flow::has_data() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vlan::Configuration::Ip::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vlan::Configuration::Ip::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        for(auto const & c : monitor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vlan::Configuration::Ip::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : monitor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vlan::Configuration::Ip::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ip::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ip::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Flow::Monitor::Monitor()
    :
    flow_monitor{YType::str, "flow-monitor"},
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ip::Flow::Monitor::~Monitor()
{
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_data() const
{
    return flow_monitor.is_set
	|| input.is_set
	|| output.is_set;
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_monitor.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Vlan::Configuration::Ip::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor" <<"[flow-monitor='" <<flow_monitor <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_monitor.is_set || is_set(flow_monitor.yfilter)) leaf_name_data.push_back(flow_monitor.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Configuration::Ip::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-monitor")
    {
        flow_monitor = value;
        flow_monitor.value_namespace = name_space;
        flow_monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Ip::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-monitor")
    {
        flow_monitor.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Ipv6()
    :
    dhcp(std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ipv6"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::~Ipv6()
{
}

bool Native::Vlan::Configuration::Ipv6::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Vlan::Configuration::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Vlan::Configuration::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Vlan::Configuration::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Dhcp()
    :
    guard(nullptr) // presence node
{

    yang_name = "dhcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_data() const
{
    return (guard !=  nullptr && guard->has_data());
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Vlan::Configuration::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    return children;
}

void Native::Vlan::Configuration::Ipv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ipv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "guard"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Configuration::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Ipv6::Dhcp::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Vlan::Dot1Q::Dot1Q()
    :
    tag(std::make_shared<Native::Vlan::Dot1Q::Tag>())
{
    tag->parent = this;

    yang_name = "dot1q"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Dot1Q::~Dot1Q()
{
}

bool Native::Vlan::Dot1Q::has_data() const
{
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Vlan::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Vlan::Dot1Q::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Vlan::Dot1Q::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Vlan::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Vlan::Dot1Q::Tag::Tag()
    :
    native{YType::empty, "native"}
{

    yang_name = "tag"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Dot1Q::Tag::~Tag()
{
}

bool Native::Vlan::Dot1Q::Tag::has_data() const
{
    return native.is_set;
}

bool Native::Vlan::Dot1Q::Tag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Vlan::Dot1Q::Tag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/Cisco-IOS-XE-vlan:dot1q/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Dot1Q::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Dot1Q::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Dot1Q::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Dot1Q::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Dot1Q::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Dot1Q::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Vlan::Dot1Q::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native")
        return true;
    return false;
}

Native::Vlan::Filter::Filter()
    :
    word{YType::str, "word"},
    vlan_list{YType::str, "vlan-list"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Filter::~Filter()
{
}

bool Native::Vlan::Filter::has_data() const
{
    return word.is_set
	|| vlan_list.is_set;
}

bool Native::Vlan::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(vlan_list.yfilter);
}

std::string Native::Vlan::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:filter" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (vlan_list.is_set || is_set(vlan_list.yfilter)) leaf_name_data.push_back(vlan_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-list")
    {
        vlan_list = value;
        vlan_list.value_namespace = name_space;
        vlan_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "vlan-list")
    {
        vlan_list.yfilter = yfilter;
    }
}

bool Native::Vlan::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "vlan-list")
        return true;
    return false;
}

Native::Vlan::Internal::Internal()
    :
    allocation(std::make_shared<Native::Vlan::Internal::Allocation>())
{
    allocation->parent = this;

    yang_name = "internal"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Internal::~Internal()
{
}

bool Native::Vlan::Internal::has_data() const
{
    return (allocation !=  nullptr && allocation->has_data());
}

bool Native::Vlan::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (allocation !=  nullptr && allocation->has_operation());
}

std::string Native::Vlan::Internal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation")
    {
        if(allocation == nullptr)
        {
            allocation = std::make_shared<Native::Vlan::Internal::Allocation>();
        }
        return allocation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocation != nullptr)
    {
        children["allocation"] = allocation;
    }

    return children;
}

void Native::Vlan::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation")
        return true;
    return false;
}

Native::Vlan::Internal::Allocation::Allocation()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "allocation"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Internal::Allocation::~Allocation()
{
}

bool Native::Vlan::Internal::Allocation::has_data() const
{
    return policy.is_set;
}

bool Native::Vlan::Internal::Allocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Vlan::Internal::Allocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/Cisco-IOS-XE-vlan:internal/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Internal::Allocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Internal::Allocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Internal::Allocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Internal::Allocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Internal::Allocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Internal::Allocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Vlan::Internal::Allocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Vlan::VlanList::VlanList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    remote_span{YType::empty, "remote-span"},
    state{YType::enumeration, "state"},
    uni_vlan{YType::enumeration, "uni-vlan"}
    	,
    lldp(std::make_shared<Native::Vlan::VlanList::Lldp>())
	,private_vlan(std::make_shared<Native::Vlan::VlanList::PrivateVlan>())
{
    lldp->parent = this;
    private_vlan->parent = this;

    yang_name = "vlan-list"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::VlanList::~VlanList()
{
}

bool Native::Vlan::VlanList::has_data() const
{
    return id.is_set
	|| name.is_set
	|| remote_span.is_set
	|| state.is_set
	|| uni_vlan.is_set
	|| (lldp !=  nullptr && lldp->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data());
}

bool Native::Vlan::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(remote_span.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(uni_vlan.yfilter)
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation());
}

std::string Native::Vlan::VlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:vlan-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (remote_span.is_set || is_set(remote_span.yfilter)) leaf_name_data.push_back(remote_span.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (uni_vlan.is_set || is_set(uni_vlan.yfilter)) leaf_name_data.push_back(uni_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Vlan::VlanList::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Vlan::VlanList::PrivateVlan>();
        }
        return private_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lldp != nullptr)
    {
        children["lldp"] = lldp;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    return children;
}

void Native::Vlan::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-span")
    {
        remote_span = value;
        remote_span.value_namespace = name_space;
        remote_span.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uni-vlan")
    {
        uni_vlan = value;
        uni_vlan.value_namespace = name_space;
        uni_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "remote-span")
    {
        remote_span.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "uni-vlan")
    {
        uni_vlan.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp" || name == "private-vlan" || name == "id" || name == "name" || name == "remote-span" || name == "state" || name == "uni-vlan")
        return true;
    return false;
}

Native::Vlan::VlanList::Lldp::Lldp()
    :
    run{YType::empty, "run"}
{

    yang_name = "lldp"; yang_parent_name = "vlan-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::VlanList::Lldp::~Lldp()
{
}

bool Native::Vlan::VlanList::Lldp::has_data() const
{
    return run.is_set;
}

bool Native::Vlan::VlanList::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Native::Vlan::VlanList::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::VlanList::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "run")
        return true;
    return false;
}

Native::Vlan::VlanList::PrivateVlan::PrivateVlan()
    :
    association{YType::str, "association"},
    community{YType::empty, "community"},
    isolated{YType::empty, "isolated"},
    primary{YType::empty, "primary"}
{

    yang_name = "private-vlan"; yang_parent_name = "vlan-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::VlanList::PrivateVlan::~PrivateVlan()
{
}

bool Native::Vlan::VlanList::PrivateVlan::has_data() const
{
    return association.is_set
	|| community.is_set
	|| isolated.is_set
	|| primary.is_set;
}

bool Native::Vlan::VlanList::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(isolated.yfilter)
	|| ydk::is_set(primary.yfilter);
}

std::string Native::Vlan::VlanList::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association.is_set || is_set(association.yfilter)) leaf_name_data.push_back(association.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (isolated.is_set || is_set(isolated.yfilter)) leaf_name_data.push_back(isolated.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::VlanList::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association")
    {
        association = value;
        association.value_namespace = name_space;
        association.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isolated")
    {
        isolated = value;
        isolated.value_namespace = name_space;
        isolated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association")
    {
        association.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "isolated")
    {
        isolated.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "community" || name == "isolated" || name == "primary")
        return true;
    return false;
}

Native::Voice::Voice()
{

    yang_name = "voice"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Voice::~Voice()
{
}

bool Native::Voice::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Voice::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Voice::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::Voice::Service::Service()
    :
    type{YType::enumeration, "type"}
    	,
    fax(std::make_shared<Native::Voice::Service::Fax>())
{
    fax->parent = this;

    yang_name = "service"; yang_parent_name = "voice"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Voice::Service::~Service()
{
}

bool Native::Voice::Service::has_data() const
{
    return type.is_set
	|| (fax !=  nullptr && fax->has_data());
}

bool Native::Voice::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fax !=  nullptr && fax->has_operation());
}

std::string Native::Voice::Service::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-voice:voice/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Voice::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Voice::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fax")
    {
        if(fax == nullptr)
        {
            fax = std::make_shared<Native::Voice::Service::Fax>();
        }
        return fax;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fax != nullptr)
    {
        children["fax"] = fax;
    }

    return children;
}

void Native::Voice::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Voice::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Voice::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fax" || name == "type")
        return true;
    return false;
}

Native::Voice::Service::Fax::Fax()
    :
    codec{YType::enumeration, "codec"},
    fallback{YType::enumeration, "fallback"},
    hs_redundancy{YType::uint8, "hs-redundancy"},
    ls_redundancy{YType::uint8, "ls-redundancy"},
    protocol{YType::enumeration, "protocol"},
    version{YType::enumeration, "version"}
{

    yang_name = "fax"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Voice::Service::Fax::~Fax()
{
}

bool Native::Voice::Service::Fax::has_data() const
{
    return codec.is_set
	|| fallback.is_set
	|| hs_redundancy.is_set
	|| ls_redundancy.is_set
	|| protocol.is_set
	|| version.is_set;
}

bool Native::Voice::Service::Fax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(codec.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(hs_redundancy.yfilter)
	|| ydk::is_set(ls_redundancy.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Voice::Service::Fax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fax";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::Service::Fax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (codec.is_set || is_set(codec.yfilter)) leaf_name_data.push_back(codec.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (hs_redundancy.is_set || is_set(hs_redundancy.yfilter)) leaf_name_data.push_back(hs_redundancy.get_name_leafdata());
    if (ls_redundancy.is_set || is_set(ls_redundancy.yfilter)) leaf_name_data.push_back(ls_redundancy.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Voice::Service::Fax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::Service::Fax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Voice::Service::Fax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "codec")
    {
        codec = value;
        codec.value_namespace = name_space;
        codec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy = value;
        hs_redundancy.value_namespace = name_space;
        hs_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy = value;
        ls_redundancy.value_namespace = name_space;
        ls_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Voice::Service::Fax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "codec")
    {
        codec.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy.yfilter = yfilter;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Voice::Service::Fax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "codec" || name == "fallback" || name == "hs-redundancy" || name == "ls-redundancy" || name == "protocol" || name == "version")
        return true;
    return false;
}

Native::VoiceCard::VoiceCard()
    :
    slot{YType::uint8, "slot"}
{

    yang_name = "voice-card"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::VoiceCard::~VoiceCard()
{
}

bool Native::VoiceCard::has_data() const
{
    return slot.is_set;
}

bool Native::VoiceCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter);
}

std::string Native::VoiceCard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::VoiceCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice-card" <<"[slot='" <<slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VoiceCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VoiceCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VoiceCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VoiceCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VoiceCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool Native::VoiceCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Native::Vpdn::Vpdn()
    :
    authen_before_forward{YType::empty, "authen-before-forward"},
    enable{YType::empty, "enable"},
    search_order{YType::enumeration, "search-order"}
{

    yang_name = "vpdn"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vpdn::~Vpdn()
{
}

bool Native::Vpdn::has_data() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authen_before_forward.is_set
	|| enable.is_set;
}

bool Native::Vpdn::has_operation() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authen_before_forward.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(search_order.yfilter);
}

std::string Native::Vpdn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vpdn:vpdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vpdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_before_forward.is_set || is_set(authen_before_forward.yfilter)) leaf_name_data.push_back(authen_before_forward.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    auto search_order_name_datas = search_order.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), search_order_name_datas.begin(), search_order_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vpdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vpdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward = value;
        authen_before_forward.value_namespace = name_space;
        authen_before_forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "search-order")
    {
        search_order.append(value);
    }
}

void Native::Vpdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "search-order")
    {
        search_order.yfilter = yfilter;
    }
}

bool Native::Vpdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-before-forward" || name == "enable" || name == "search-order")
        return true;
    return false;
}

Native::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vrf::~Vrf()
{
}

bool Native::Vrf::has_data() const
{
    for (std::size_t index=0; index<definition.size(); index++)
    {
        if(definition[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::has_operation() const
{
    for (std::size_t index=0; index<definition.size(); index++)
    {
        if(definition[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "definition")
    {
        for(auto const & c : definition)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition>();
        c->parent = this;
        definition.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : definition)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "definition")
        return true;
    return false;
}

Native::Vrf::Definition::Definition()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    rd{YType::str, "rd"}
    	,
    address_family(std::make_shared<Native::Vrf::Definition::AddressFamily>())
	,route_target(std::make_shared<Native::Vrf::Definition::RouteTarget>())
{
    address_family->parent = this;
    route_target->parent = this;

    yang_name = "definition"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vrf::Definition::~Definition()
{
}

bool Native::Vrf::Definition::has_data() const
{
    return name.is_set
	|| description.is_set
	|| rd.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Native::Vrf::Definition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Native::Vrf::Definition::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vrf::Definition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "definition" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Vrf::Definition::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    return children;
}

void Native::Vrf::Definition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "route-target" || name == "name" || name == "description" || name == "rd")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{

    yang_name = "address-family"; yang_parent_name = "definition"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::~AddressFamily()
{
}

bool Native::Vrf::Definition::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vrf::Definition::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::get_children() const
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

void Native::Vrf::Definition::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Ipv4()
    :
    bgp(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp>())
	,export_(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Export_>())
	,import(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Import>())
	,maximum(nullptr) // presence node
	,mdt(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt>())
	,route_target(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget>())
{
    bgp->parent = this;
    export_->parent = this;
    import->parent = this;
    mdt->parent = this;
    route_target->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (export_ !=  nullptr && export_->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (mdt !=  nullptr && mdt->has_data())
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (export_ !=  nullptr && export_->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Export_>();
        }
        return export_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(export_ != nullptr)
    {
        children["export"] = export_;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(mdt != nullptr)
    {
        children["mdt"] = mdt;
    }

    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "export" || name == "import" || name == "maximum" || name == "mdt" || name == "route-target")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::Bgp()
    :
    next_hop(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::~Bgp()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::NextHop()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "next-hop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::~NextHop()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::has_data() const
{
    return loopback.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Export_::Export_()
    :
    map{YType::str, "map"}
{

    yang_name = "export"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Export_::~Export_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export_::has_data() const
{
    return map.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Import::Import()
    :
    map{YType::str, "map"}
{

    yang_name = "import"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Import::has_data() const
{
    return map.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::Maximum()
    :
    reinstall{YType::uint16, "reinstall"},
    routes{YType::uint32, "routes"},
    threshold{YType::uint16, "threshold"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::~Maximum()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_data() const
{
    return reinstall.is_set
	|| routes.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reinstall.yfilter)
	|| ydk::is_set(routes.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinstall.is_set || is_set(reinstall.yfilter)) leaf_name_data.push_back(reinstall.get_name_leafdata());
    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reinstall")
    {
        reinstall = value;
        reinstall.value_namespace = name_space;
        reinstall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reinstall")
    {
        reinstall.yfilter = yfilter;
    }
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reinstall" || name == "routes" || name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Mdt()
    :
    log_reuse{YType::empty, "log-reuse"},
    mtu{YType::uint16, "mtu"},
    preference{YType::enumeration, "preference"}
    	,
    data(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data>())
	,default_(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_>())
{
    data->parent = this;
    default_->parent = this;

    yang_name = "mdt"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::~Mdt()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_data() const
{
    for (auto const & leaf : preference.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return log_reuse.is_set
	|| mtu.is_set
	|| (data !=  nullptr && data->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_operation() const
{
    for (auto const & leaf : preference.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(log_reuse.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| (data !=  nullptr && data->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_reuse.is_set || is_set(log_reuse.yfilter)) leaf_name_data.push_back(log_reuse.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    auto preference_name_datas = preference.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), preference_name_datas.begin(), preference_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data>();
        }
        return data;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-reuse")
    {
        log_reuse = value;
        log_reuse.value_namespace = name_space;
        log_reuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference.append(value);
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-reuse")
    {
        log_reuse.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "default" || name == "log-reuse" || name == "mtu" || name == "preference")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Data()
    :
    list{YType::str, "list"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "data"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::~Data()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_data() const
{
    for (std::size_t index=0; index<multicast.size(); index++)
    {
        if(multicast[index]->has_data())
            return true;
    }
    return list.is_set
	|| threshold.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_operation() const
{
    for (std::size_t index=0; index<multicast.size(); index++)
    {
        if(multicast[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        for(auto const & c : multicast)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast>();
        c->parent = this;
        multicast.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "list" || name == "threshold")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::Multicast()
    :
    address{YType::str, "address"},
    wildcard{YType::str, "wildcard"}
{

    yang_name = "multicast"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::~Multicast()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_data() const
{
    return address.is_set
	|| wildcard.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(wildcard.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast" <<"[address='" <<address <<"']" <<"[wildcard='" <<wildcard <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "wildcard")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Default_()
    :
    address{YType::str, "address"}
    	,
    mpls(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls>())
{
    mpls->parent = this;

    yang_name = "default"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::~Default_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::has_data() const
{
    return address.is_set
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "address")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::Mpls()
    :
    mldp{YType::str, "mldp"}
{

    yang_name = "mpls"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::~Mpls()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::has_data() const
{
    return mldp.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mldp.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mldp.is_set || is_set(mldp.yfilter)) leaf_name_data.push_back(mldp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mldp")
    {
        mldp = value;
        mldp.value_namespace = name_space;
        mldp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mldp")
    {
        mldp.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mldp")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::RouteTarget()
{

    yang_name = "route-target"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::Export_()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::~Export_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Ipv6()
    :
    bgp(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp>())
	,import(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Import>())
	,mdt(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Mdt>())
	,route_target(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget>())
{
    bgp->parent = this;
    import->parent = this;
    mdt->parent = this;
    route_target->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::~Ipv6()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (mdt !=  nullptr && mdt->has_data())
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Import>();
        }
        return import;
    }

    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(mdt != nullptr)
    {
        children["mdt"] = mdt;
    }

    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "import" || name == "mdt" || name == "route-target")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::Bgp()
    :
    next_hop(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::~Bgp()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::NextHop()
    :
    ipv4(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4>())
	,ipv6(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "next-hop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::~NextHop()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_children() const
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

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::Ipv4()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "ipv4"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::~Ipv4()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::has_data() const
{
    return loopback.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

const Enum::YLeaf Native::TableMap::Default_::copy {0, "copy"};
const Enum::YLeaf Native::TableMap::Default_::ignore {1, "ignore"};

const Enum::YLeaf Native::Tacacs::Server::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Tacacs::Server::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::TacacsServer::Host::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::TacacsServer::Host::Key::Y_7 {1, "7"};

const Enum::YLeaf Native::TacacsServer::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::TacacsServer::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Track::TrackedObject::DefaultState::down {0, "down"};
const Enum::YLeaf Native::Track::TrackedObject::DefaultState::up {1, "up"};

const Enum::YLeaf Native::Track::TrackedObject::Default_::DefaultState::down {0, "down"};
const Enum::YLeaf Native::Track::TrackedObject::Default_::DefaultState::up {1, "up"};

const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::ip {0, "ip"};
const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::line_protocol {2, "line-protocol"};

const Enum::YLeaf Native::Track::TrackedObject::Ip::Route::Metric::threshold {0, "threshold"};

const Enum::YLeaf Native::Track::TrackedObject::Ipv6::Route::Metric::threshold {0, "threshold"};

const Enum::YLeaf Native::Track::TrackedObject::List::Boolean::and_ {0, "and"};
const Enum::YLeaf Native::Track::TrackedObject::List::Boolean::or_ {1, "or"};

const Enum::YLeaf Native::Track::TrackedObject::List::Threshold::percentage {0, "percentage"};
const Enum::YLeaf Native::Track::TrackedObject::List::Threshold::weight {1, "weight"};

const Enum::YLeaf Native::Username::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Username::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Username::Secret::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Username::Secret::Encryption::Y_5 {1, "5"};

const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::Policy::balanced {0, "balanced"};
const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::Policy::connectivity {1, "connectivity"};
const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::Policy::security {2, "security"};

const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::Threat::detection {0, "detection"};
const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::Threat::protection {1, "protection"};

const Enum::YLeaf Native::Vlan::AccessMap::Action::drop {0, "drop"};
const Enum::YLeaf Native::Vlan::AccessMap::Action::forward {1, "forward"};

const Enum::YLeaf Native::Vlan::Internal::Allocation::Policy::ascending {0, "ascending"};
const Enum::YLeaf Native::Vlan::Internal::Allocation::Policy::descending {1, "descending"};

const Enum::YLeaf Native::Vlan::VlanList::State::active {0, "active"};
const Enum::YLeaf Native::Vlan::VlanList::State::suspend {1, "suspend"};

const Enum::YLeaf Native::Vlan::VlanList::UniVlan::community {0, "community"};
const Enum::YLeaf Native::Vlan::VlanList::UniVlan::isolated {1, "isolated"};

const Enum::YLeaf Native::Voice::Service::Type::pots {0, "pots"};
const Enum::YLeaf Native::Voice::Service::Type::saf {1, "saf"};
const Enum::YLeaf Native::Voice::Service::Type::voatm {2, "voatm"};
const Enum::YLeaf Native::Voice::Service::Type::vofr {3, "vofr"};
const Enum::YLeaf Native::Voice::Service::Type::voip {4, "voip"};

const Enum::YLeaf Native::Voice::Service::Fax::Protocol::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::pass_through {2, "pass-through"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::t38 {3, "t38"};

const Enum::YLeaf Native::Voice::Service::Fax::Fallback::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::Fallback::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::Fallback::pass_through {2, "pass-through"};

const Enum::YLeaf Native::Voice::Service::Fax::Codec::g711alaw {0, "g711alaw"};
const Enum::YLeaf Native::Voice::Service::Fax::Codec::g711ulaw {1, "g711ulaw"};

const Enum::YLeaf Native::Voice::Service::Fax::Version::Y_0 {0, "0"};
const Enum::YLeaf Native::Voice::Service::Fax::Version::Y_3 {1, "3"};

const Enum::YLeaf Native::Vpdn::SearchOrder::dnis {0, "dnis"};
const Enum::YLeaf Native::Vpdn::SearchOrder::domain {1, "domain"};
const Enum::YLeaf Native::Vpdn::SearchOrder::multihop_hostname {2, "multihop-hostname"};

const Enum::YLeaf Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Preference::mldp {0, "mldp"};
const Enum::YLeaf Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Preference::pim {1, "pim"};


}
}

