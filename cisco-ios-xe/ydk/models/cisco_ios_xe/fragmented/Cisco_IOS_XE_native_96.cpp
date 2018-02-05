
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_96.hpp"
#include "Cisco_IOS_XE_native_97.hpp"
#include "Cisco_IOS_XE_native_100.hpp"
#include "Cisco_IOS_XE_native_101.hpp"
#include "Cisco_IOS_XE_native_98.hpp"
#include "Cisco_IOS_XE_native_99.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Monitor::Session::Filter::Ip::Ip()
    :
    access_group(std::make_shared<Native::Monitor::Session::Filter::Ip::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "ip"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Filter::Ip::~Ip()
{
}

bool Native::Monitor::Session::Filter::Ip::has_data() const
{
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Monitor::Session::Filter::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Monitor::Session::Filter::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Monitor::Session::Filter::Ip::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    return children;
}

void Native::Monitor::Session::Filter::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Filter::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Filter::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Ip::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"}
{

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Filter::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_data() const
{
    return acl_name.is_set;
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Native::Monitor::Session::Filter::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Filter::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Filter::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name")
        return true;
    return false;
}

Native::Monitor::Session::Source::Source()
    :
    vlan(std::make_shared<Native::Monitor::Session::Source::Vlan>())
	,remote(std::make_shared<Native::Monitor::Session::Source::Remote>())
{
    vlan->parent = this;
    remote->parent = this;

    yang_name = "source"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Source::~Source()
{
}

bool Native::Monitor::Session::Source::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return (vlan !=  nullptr && vlan->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::Monitor::Session::Source::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Monitor::Session::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Native::Monitor::Session::Source::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Monitor::Session::Source::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Monitor::Session::Source::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::Monitor::Session::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vlan" || name == "remote")
        return true;
    return false;
}

Native::Monitor::Session::Source::Interface::Interface()
    :
    name{YType::str, "name"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "interface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Source::Interface::~Interface()
{
}

bool Native::Monitor::Session::Source::Interface::has_data() const
{
    return name.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Source::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Source::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Source::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Source::Vlan::Vlan()
    :
    vlan{YType::uint16, "vlan"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Source::Vlan::~Vlan()
{
}

bool Native::Monitor::Session::Source::Vlan::has_data() const
{
    return vlan.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Source::Remote::Remote()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "remote"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Source::Remote::~Remote()
{
}

bool Native::Monitor::Session::Source::Remote::has_data() const
{
    return vlan.is_set;
}

bool Native::Monitor::Session::Source::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Source::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Source::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Type::Type()
    :
    erspan_source(nullptr) // presence node
{

    yang_name = "type"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::~Type()
{
}

bool Native::Monitor::Session::Type::has_data() const
{
    return (erspan_source !=  nullptr && erspan_source->has_data());
}

bool Native::Monitor::Session::Type::has_operation() const
{
    return is_set(yfilter)
	|| (erspan_source !=  nullptr && erspan_source->has_operation());
}

std::string Native::Monitor::Session::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "erspan-source")
    {
        if(erspan_source == nullptr)
        {
            erspan_source = std::make_shared<Native::Monitor::Session::Type::ErspanSource>();
        }
        return erspan_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(erspan_source != nullptr)
    {
        children["erspan-source"] = erspan_source;
    }

    return children;
}

void Native::Monitor::Session::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "erspan-source")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::ErspanSource()
    :
    description{YType::str, "description"},
    shutdown{YType::empty, "shutdown"}
    	,
    source(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Source>())
	,filter(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter>())
	,destination(nullptr) // presence node
{
    source->parent = this;
    filter->parent = this;

    yang_name = "erspan-source"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::~ErspanSource()
{
}

bool Native::Monitor::Session::Type::ErspanSource::has_data() const
{
    return description.is_set
	|| shutdown.is_set
	|| (source !=  nullptr && source->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Monitor::Session::Type::ErspanSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erspan-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Source>();
        }
        return source;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Monitor::Session::Type::ErspanSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "filter" || name == "destination" || name == "description" || name == "shutdown")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Source::Source()
{

    yang_name = "source"; yang_parent_name = "erspan-source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Source::~Source()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Source::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Monitor::Session::Type::ErspanSource::Source::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Source::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan")
    {
        auto c = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Source::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : vlan)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::ErspanSource::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::ErspanSource::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Source::Interface::Interface()
    :
    name{YType::str, "name"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "interface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Source::Interface::~Interface()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Interface::has_data() const
{
    return name.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Source::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Source::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Source::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Source::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Source::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Source::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Source::Vlan::Vlan()
    :
    vlan1{YType::uint16, "vlan1"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Source::Vlan::~Vlan()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Vlan::has_data() const
{
    return vlan1.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan1.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[vlan1='" <<vlan1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Source::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan1.is_set || is_set(vlan1.yfilter)) leaf_name_data.push_back(vlan1.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan1")
    {
        vlan1 = value;
        vlan1.value_namespace = name_space;
        vlan1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan1")
    {
        vlan1.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan1" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Filter()
    :
    ip(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter::Ip>())
{
    ip->parent = this;

    yang_name = "filter"; yang_parent_name = "erspan-source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Filter::~Filter()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanSource::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto c = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::ErspanSource::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "ip")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::Vlan()
    :
    vlan1{YType::uint16, "vlan1"}
{

    yang_name = "vlan"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::~Vlan()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::has_data() const
{
    return vlan1.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan1.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[vlan1='" <<vlan1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan1.is_set || is_set(vlan1.yfilter)) leaf_name_data.push_back(vlan1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan1")
    {
        vlan1 = value;
        vlan1.value_namespace = name_space;
        vlan1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan1")
    {
        vlan1.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan1")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Ip::Ip()
    :
    access_group(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "ip"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Ip::~Ip()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::has_data() const
{
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanSource::Filter::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Filter::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Filter::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Filter::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"}
{

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::has_data() const
{
    return acl_name.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Destination()
    :
    erspan_id{YType::uint16, "erspan-id"}
    	,
    ip(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Ip>())
	,origin(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Origin>())
{
    ip->parent = this;
    origin->parent = this;

    yang_name = "destination"; yang_parent_name = "erspan-source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Destination::~Destination()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::has_data() const
{
    return erspan_id.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (origin !=  nullptr && origin->has_data());
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(erspan_id.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (origin !=  nullptr && origin->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanSource::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (erspan_id.is_set || is_set(erspan_id.yfilter)) leaf_name_data.push_back(erspan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "origin")
    {
        if(origin == nullptr)
        {
            origin = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Origin>();
        }
        return origin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(origin != nullptr)
    {
        children["origin"] = origin;
    }

    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "erspan-id")
    {
        erspan_id = value;
        erspan_id.value_namespace = name_space;
        erspan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "erspan-id")
    {
        erspan_id.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "origin" || name == "erspan-id")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Ip::Ip()
    :
    address{YType::str, "address"},
    ttl{YType::uint16, "ttl"}
{

    yang_name = "ip"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Ip::~Ip()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Ip::has_data() const
{
    return address.is_set
	|| ttl.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Destination::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Destination::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Destination::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Destination::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "ttl")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Origin()
    :
    ip(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip>())
{
    ip->parent = this;

    yang_name = "origin"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Origin::~Origin()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanSource::Destination::Origin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Destination::Origin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Destination::Origin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Destination::Origin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Origin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Origin::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "origin"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::~Ip()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::has_data() const
{
    return address.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
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
    char count=0;
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

Native::RadiusServer::RadiusServer()
    :
    deadtime{YType::uint32, "Cisco-IOS-XE-aaa:deadtime"},
    retransmit{YType::uint8, "Cisco-IOS-XE-aaa:retransmit"},
    timeout{YType::uint16, "Cisco-IOS-XE-aaa:timeout"}
    	,
    dead_criteria(std::make_shared<Native::RadiusServer::DeadCriteria>())
	,key(std::make_shared<Native::RadiusServer::Key>())
	,source_ports(std::make_shared<Native::RadiusServer::SourcePorts>())
	,vsa(std::make_shared<Native::RadiusServer::Vsa>())
{
    dead_criteria->parent = this;
    key->parent = this;
    source_ports->parent = this;
    vsa->parent = this;

    yang_name = "radius-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::~RadiusServer()
{
}

bool Native::RadiusServer::has_data() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return deadtime.is_set
	|| retransmit.is_set
	|| timeout.is_set
	|| (dead_criteria !=  nullptr && dead_criteria->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (source_ports !=  nullptr && source_ports->has_data())
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::RadiusServer::has_operation() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (dead_criteria !=  nullptr && dead_criteria->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (source_ports !=  nullptr && source_ports->has_operation())
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::RadiusServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-aaa:attribute")
    {
        auto c = std::make_shared<Native::RadiusServer::Attribute>();
        c->parent = this;
        attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:dead-criteria")
    {
        if(dead_criteria == nullptr)
        {
            dead_criteria = std::make_shared<Native::RadiusServer::DeadCriteria>();
        }
        return dead_criteria;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:host")
    {
        auto c = std::make_shared<Native::RadiusServer::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::RadiusServer::Key>();
        }
        return key;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:source-ports")
    {
        if(source_ports == nullptr)
        {
            source_ports = std::make_shared<Native::RadiusServer::SourcePorts>();
        }
        return source_ports;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::RadiusServer::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(dead_criteria != nullptr)
    {
        children["Cisco-IOS-XE-aaa:dead-criteria"] = dead_criteria;
    }

    count = 0;
    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(key != nullptr)
    {
        children["Cisco-IOS-XE-aaa:key"] = key;
    }

    if(source_ports != nullptr)
    {
        children["Cisco-IOS-XE-aaa:source-ports"] = source_ports;
    }

    if(vsa != nullptr)
    {
        children["Cisco-IOS-XE-aaa:vsa"] = vsa;
    }

    return children;
}

void Native::RadiusServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-aaa:deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-aaa:retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-aaa:timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::RadiusServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "dead-criteria" || name == "host" || name == "key" || name == "source-ports" || name == "vsa" || name == "deadtime" || name == "retransmit" || name == "timeout")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attribute()
    :
    number{YType::uint32, "number"},
    send_attribute{YType::enumeration, "send-attribute"}
    	,
    access_request(std::make_shared<Native::RadiusServer::Attribute::AccessRequest>())
	,attri31(std::make_shared<Native::RadiusServer::Attribute::Attri31>())
{
    access_request->parent = this;
    attri31->parent = this;

    yang_name = "attribute"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Attribute::~Attribute()
{
}

bool Native::RadiusServer::Attribute::has_data() const
{
    for (auto const & leaf : send_attribute.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return number.is_set
	|| (access_request !=  nullptr && access_request->has_data())
	|| (attri31 !=  nullptr && attri31->has_data());
}

bool Native::RadiusServer::Attribute::has_operation() const
{
    for (auto const & leaf : send_attribute.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(send_attribute.yfilter)
	|| (access_request !=  nullptr && access_request->has_operation())
	|| (attri31 !=  nullptr && attri31->has_operation());
}

std::string Native::RadiusServer::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:attribute" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    auto send_attribute_name_datas = send_attribute.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), send_attribute_name_datas.begin(), send_attribute_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-request")
    {
        if(access_request == nullptr)
        {
            access_request = std::make_shared<Native::RadiusServer::Attribute::AccessRequest>();
        }
        return access_request;
    }

    if(child_yang_name == "attri31")
    {
        if(attri31 == nullptr)
        {
            attri31 = std::make_shared<Native::RadiusServer::Attribute::Attri31>();
        }
        return attri31;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access_request != nullptr)
    {
        children["access-request"] = access_request;
    }

    if(attri31 != nullptr)
    {
        children["attri31"] = attri31;
    }

    return children;
}

void Native::RadiusServer::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-attribute")
    {
        send_attribute.append(value);
    }
}

void Native::RadiusServer::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "send-attribute")
    {
        send_attribute.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-request" || name == "attri31" || name == "number" || name == "send-attribute")
        return true;
    return false;
}

Native::RadiusServer::Attribute::AccessRequest::AccessRequest()
    :
    include{YType::empty, "include"}
{

    yang_name = "access-request"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Attribute::AccessRequest::~AccessRequest()
{
}

bool Native::RadiusServer::Attribute::AccessRequest::has_data() const
{
    return include.is_set;
}

bool Native::RadiusServer::Attribute::AccessRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include.yfilter);
}

std::string Native::RadiusServer::Attribute::AccessRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::AccessRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include.is_set || is_set(include.yfilter)) leaf_name_data.push_back(include.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::AccessRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::AccessRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::Attribute::AccessRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include")
    {
        include = value;
        include.value_namespace = name_space;
        include.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::AccessRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include")
    {
        include.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::AccessRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31()
{

    yang_name = "attri31"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Attribute::Attri31::~Attri31()
{
}

bool Native::RadiusServer::Attribute::Attri31::has_data() const
{
    for (std::size_t index=0; index<attri31_list.size(); index++)
    {
        if(attri31_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RadiusServer::Attribute::Attri31::has_operation() const
{
    for (std::size_t index=0; index<attri31_list.size(); index++)
    {
        if(attri31_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attri31";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attri31-list")
    {
        auto c = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List>();
        c->parent = this;
        attri31_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : attri31_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RadiusServer::Attribute::Attri31::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Attribute::Attri31::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Attribute::Attri31::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attri31-list")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::Attri31List()
    :
    calling_station_id{YType::enumeration, "calling-station-id"}
    	,
    id_mac(std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac>())
	,id_send(std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend>())
{
    id_mac->parent = this;
    id_send->parent = this;

    yang_name = "attri31-list"; yang_parent_name = "attri31"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::~Attri31List()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_data() const
{
    return calling_station_id.is_set
	|| (id_mac !=  nullptr && id_mac->has_data())
	|| (id_send !=  nullptr && id_send->has_data());
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(calling_station_id.yfilter)
	|| (id_mac !=  nullptr && id_mac->has_operation())
	|| (id_send !=  nullptr && id_send->has_operation());
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attri31-list" <<"[calling-station-id='" <<calling_station_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::Attri31List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calling_station_id.is_set || is_set(calling_station_id.yfilter)) leaf_name_data.push_back(calling_station_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id-mac")
    {
        if(id_mac == nullptr)
        {
            id_mac = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac>();
        }
        return id_mac;
    }

    if(child_yang_name == "id-send")
    {
        if(id_send == nullptr)
        {
            id_send = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend>();
        }
        return id_send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(id_mac != nullptr)
    {
        children["id-mac"] = id_mac;
    }

    if(id_send != nullptr)
    {
        children["id-send"] = id_send;
    }

    return children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "calling-station-id")
    {
        calling_station_id = value;
        calling_station_id.value_namespace = name_space;
        calling_station_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "calling-station-id")
    {
        calling_station_id.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-mac" || name == "id-send" || name == "calling-station-id")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::IdMac()
    :
    format{YType::enumeration, "format"},
    lu_case{YType::enumeration, "lu-case"}
{

    yang_name = "id-mac"; yang_parent_name = "attri31-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::~IdMac()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_data() const
{
    return format.is_set
	|| lu_case.is_set;
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(lu_case.yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (lu_case.is_set || is_set(lu_case.yfilter)) leaf_name_data.push_back(lu_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lu-case")
    {
        lu_case = value;
        lu_case.value_namespace = name_space;
        lu_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "lu-case")
    {
        lu_case.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "lu-case")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::IdSend()
    :
    nas_port_detail{YType::empty, "nas-port-detail"},
    mac_only{YType::empty, "mac-only"}
{

    yang_name = "id-send"; yang_parent_name = "attri31-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::~IdSend()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_data() const
{
    return nas_port_detail.is_set
	|| mac_only.is_set;
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nas_port_detail.yfilter)
	|| ydk::is_set(mac_only.yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_detail.is_set || is_set(nas_port_detail.yfilter)) leaf_name_data.push_back(nas_port_detail.get_name_leafdata());
    if (mac_only.is_set || is_set(mac_only.yfilter)) leaf_name_data.push_back(mac_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nas-port-detail")
    {
        nas_port_detail = value;
        nas_port_detail.value_namespace = name_space;
        nas_port_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-only")
    {
        mac_only = value;
        mac_only.value_namespace = name_space;
        mac_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nas-port-detail")
    {
        nas_port_detail.yfilter = yfilter;
    }
    if(value_path == "mac-only")
    {
        mac_only.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-detail" || name == "mac-only")
        return true;
    return false;
}

Native::RadiusServer::DeadCriteria::DeadCriteria()
    :
    time{YType::uint8, "time"},
    tries{YType::uint8, "tries"}
{

    yang_name = "dead-criteria"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::DeadCriteria::~DeadCriteria()
{
}

bool Native::RadiusServer::DeadCriteria::has_data() const
{
    return time.is_set
	|| tries.is_set;
}

bool Native::RadiusServer::DeadCriteria::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(tries.yfilter);
}

std::string Native::RadiusServer::DeadCriteria::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::DeadCriteria::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:dead-criteria";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::DeadCriteria::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (tries.is_set || is_set(tries.yfilter)) leaf_name_data.push_back(tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::DeadCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::DeadCriteria::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::DeadCriteria::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tries")
    {
        tries = value;
        tries.value_namespace = name_space;
        tries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::DeadCriteria::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "tries")
    {
        tries.yfilter = yfilter;
    }
}

bool Native::RadiusServer::DeadCriteria::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "tries")
        return true;
    return false;
}

Native::RadiusServer::Host::Host()
    :
    id{YType::str, "id"},
    auth_port{YType::uint16, "auth-port"},
    acct_port{YType::uint16, "acct-port"},
    retransmit{YType::uint8, "retransmit"},
    timeout{YType::uint16, "timeout"},
    key{YType::str, "key"},
    clear_key{YType::str, "clear-key"}
    	,
    test(std::make_shared<Native::RadiusServer::Host::Test>())
{
    test->parent = this;

    yang_name = "host"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Host::~Host()
{
}

bool Native::RadiusServer::Host::has_data() const
{
    return id.is_set
	|| auth_port.is_set
	|| acct_port.is_set
	|| retransmit.is_set
	|| timeout.is_set
	|| key.is_set
	|| clear_key.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::RadiusServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(auth_port.yfilter)
	|| ydk::is_set(acct_port.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::RadiusServer::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:host" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());
    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::RadiusServer::Host::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::RadiusServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "id" || name == "auth-port" || name == "acct-port" || name == "retransmit" || name == "timeout" || name == "key" || name == "clear-key")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Test()
{

    yang_name = "test"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Host::Test::~Test()
{
}

bool Native::RadiusServer::Host::Test::has_data() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RadiusServer::Host::Test::has_operation() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RadiusServer::Host::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        auto c = std::make_shared<Native::RadiusServer::Host::Test::Username>();
        c->parent = this;
        username.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : username)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RadiusServer::Host::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Host::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Host::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Username::Username()
    :
    name{YType::str, "name"}
    	,
    key(std::make_shared<Native::RadiusServer::Host::Test::Username::Key>())
{
    key->parent = this;

    yang_name = "username"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Host::Test::Username::~Username()
{
}

bool Native::RadiusServer::Host::Test::Username::has_data() const
{
    return name.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::RadiusServer::Host::Test::Username::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::RadiusServer::Host::Test::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::Test::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::Test::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::RadiusServer::Host::Test::Username::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::Test::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::RadiusServer::Host::Test::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::Test::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::Test::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Username::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "key"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RadiusServer::Host::Test::Username::Key::~Key()
{
}

bool Native::RadiusServer::Host::Test::Username::Key::has_data() const
{
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::RadiusServer::Host::Test::Username::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::RadiusServer::Host::Test::Username::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::Test::Username::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::Test::Username::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::Test::Username::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::Host::Test::Username::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::Test::Username::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::Test::Username::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::RadiusServer::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "key"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Key::~Key()
{
}

bool Native::RadiusServer::Key::has_data() const
{
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::RadiusServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::RadiusServer::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::RadiusServer::SourcePorts::SourcePorts()
    :
    extended{YType::empty, "extended"}
{

    yang_name = "source-ports"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::SourcePorts::~SourcePorts()
{
}

bool Native::RadiusServer::SourcePorts::has_data() const
{
    return extended.is_set;
}

bool Native::RadiusServer::SourcePorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::RadiusServer::SourcePorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::SourcePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:source-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::SourcePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::SourcePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::SourcePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::SourcePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::SourcePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::RadiusServer::SourcePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Vsa()
    :
    disallow(std::make_shared<Native::RadiusServer::Vsa::Disallow>())
	,send(nullptr) // presence node
{
    disallow->parent = this;

    yang_name = "vsa"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::~Vsa()
{
}

bool Native::RadiusServer::Vsa::has_data() const
{
    return (disallow !=  nullptr && disallow->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::RadiusServer::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| (disallow !=  nullptr && disallow->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::RadiusServer::Vsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disallow")
    {
        if(disallow == nullptr)
        {
            disallow = std::make_shared<Native::RadiusServer::Vsa::Disallow>();
        }
        return disallow;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::RadiusServer::Vsa::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disallow != nullptr)
    {
        children["disallow"] = disallow;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::RadiusServer::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disallow" || name == "send")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Disallow::Disallow()
    :
    unknown{YType::empty, "unknown"}
{

    yang_name = "disallow"; yang_parent_name = "vsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::Disallow::~Disallow()
{
}

bool Native::RadiusServer::Vsa::Disallow::has_data() const
{
    return unknown.is_set;
}

bool Native::RadiusServer::Vsa::Disallow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter);
}

std::string Native::RadiusServer::Vsa::Disallow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Disallow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disallow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Disallow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Disallow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Disallow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::Vsa::Disallow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Disallow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Disallow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Send()
    :
    accounting(nullptr) // presence node
	,authentication(nullptr) // presence node
	,cisco_nas_port(nullptr) // presence node
{

    yang_name = "send"; yang_parent_name = "vsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::Send::~Send()
{
}

bool Native::RadiusServer::Vsa::Send::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (cisco_nas_port !=  nullptr && cisco_nas_port->has_data());
}

bool Native::RadiusServer::Vsa::Send::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (cisco_nas_port !=  nullptr && cisco_nas_port->has_operation());
}

std::string Native::RadiusServer::Vsa::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::RadiusServer::Vsa::Send::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::RadiusServer::Vsa::Send::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "cisco-nas-port")
    {
        if(cisco_nas_port == nullptr)
        {
            cisco_nas_port = std::make_shared<Native::RadiusServer::Vsa::Send::CiscoNasPort>();
        }
        return cisco_nas_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(cisco_nas_port != nullptr)
    {
        children["cisco-nas-port"] = cisco_nas_port;
    }

    return children;
}

void Native::RadiusServer::Vsa::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Vsa::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Vsa::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "cisco-nas-port")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Accounting::Accounting()
    :
    threegpp2{YType::empty, "threegpp2"}
{

    yang_name = "accounting"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::Send::Accounting::~Accounting()
{
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_data() const
{
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::Vsa::Send::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Authentication::Authentication()
    :
    threegpp2{YType::empty, "threegpp2"}
{

    yang_name = "authentication"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::Send::Authentication::~Authentication()
{
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_data() const
{
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::Vsa::Send::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::CiscoNasPort::CiscoNasPort()
    :
    threegpp2{YType::empty, "threegpp2"}
{

    yang_name = "cisco-nas-port"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RadiusServer::Vsa::Send::CiscoNasPort::~CiscoNasPort()
{
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_data() const
{
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::CiscoNasPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::CiscoNasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-nas-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::CiscoNasPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::CiscoNasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::CiscoNasPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RadiusServer::Vsa::Send::CiscoNasPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::CiscoNasPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::Radius::Radius()
{

    yang_name = "radius"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Radius::~Radius()
{
}

bool Native::Radius::has_data() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Radius::has_operation() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-aaa:filter")
    {
        auto c = std::make_shared<Native::Radius::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:server")
    {
        auto c = std::make_shared<Native::Radius::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "server")
        return true;
    return false;
}

Native::Radius::Filter::Filter()
    :
    id{YType::str, "id"},
    match{YType::enumeration, "match"}
{

    yang_name = "filter"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Radius::Filter::~Filter()
{
}

bool Native::Radius::Filter::has_data() const
{
    return id.is_set
	|| match.is_set;
}

bool Native::Radius::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(match.yfilter);
}

std::string Native::Radius::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Radius::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:filter" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Radius::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
}

bool Native::Radius::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "match")
        return true;
    return false;
}

Native::Radius::Server::Server()
    :
    id{YType::str, "id"},
    retransmit{YType::uint8, "retransmit"}
    	,
    address(std::make_shared<Native::Radius::Server::Address>())
	,automate_tester(std::make_shared<Native::Radius::Server::AutomateTester>())
	,backoff(std::make_shared<Native::Radius::Server::Backoff>())
	,key(std::make_shared<Native::Radius::Server::Key>())
	,pac(std::make_shared<Native::Radius::Server::Pac>())
{
    address->parent = this;
    automate_tester->parent = this;
    backoff->parent = this;
    key->parent = this;
    pac->parent = this;

    yang_name = "server"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Radius::Server::~Server()
{
}

bool Native::Radius::Server::has_data() const
{
    return id.is_set
	|| retransmit.is_set
	|| (address !=  nullptr && address->has_data())
	|| (automate_tester !=  nullptr && automate_tester->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (pac !=  nullptr && pac->has_data());
}

bool Native::Radius::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (automate_tester !=  nullptr && automate_tester->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (pac !=  nullptr && pac->has_operation());
}

std::string Native::Radius::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Radius::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Radius::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "automate-tester")
    {
        if(automate_tester == nullptr)
        {
            automate_tester = std::make_shared<Native::Radius::Server::AutomateTester>();
        }
        return automate_tester;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Radius::Server::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Radius::Server::Key>();
        }
        return key;
    }

    if(child_yang_name == "pac")
    {
        if(pac == nullptr)
        {
            pac = std::make_shared<Native::Radius::Server::Pac>();
        }
        return pac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(automate_tester != nullptr)
    {
        children["automate-tester"] = automate_tester;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(pac != nullptr)
    {
        children["pac"] = pac;
    }

    return children;
}

void Native::Radius::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
}

bool Native::Radius::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "automate-tester" || name == "backoff" || name == "key" || name == "pac" || name == "id" || name == "retransmit")
        return true;
    return false;
}

Native::Radius::Server::Address::Address()
    :
    ipv4(std::make_shared<Native::Radius::Server::Address::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Address::~Address()
{
}

bool Native::Radius::Server::Address::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Radius::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Radius::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Radius::Server::Address::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Radius::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Radius::Server::Address::Ipv4::Ipv4()
    :
    host{YType::str, "host"},
    auth_port{YType::uint16, "auth-port"},
    acct_port{YType::uint16, "acct-port"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Address::Ipv4::~Ipv4()
{
}

bool Native::Radius::Server::Address::Ipv4::has_data() const
{
    return host.is_set
	|| auth_port.is_set
	|| acct_port.is_set;
}

bool Native::Radius::Server::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(auth_port.yfilter)
	|| ydk::is_set(acct_port.yfilter);
}

std::string Native::Radius::Server::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());
    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Radius::Server::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "auth-port" || name == "acct-port")
        return true;
    return false;
}

Native::Radius::Server::AutomateTester::AutomateTester()
    :
    username{YType::str, "username"},
    at_option{YType::enumeration, "at-option"}
{

    yang_name = "automate-tester"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::AutomateTester::~AutomateTester()
{
}

bool Native::Radius::Server::AutomateTester::has_data() const
{
    return username.is_set
	|| at_option.is_set;
}

bool Native::Radius::Server::AutomateTester::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(at_option.yfilter);
}

std::string Native::Radius::Server::AutomateTester::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "automate-tester";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::AutomateTester::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (at_option.is_set || is_set(at_option.yfilter)) leaf_name_data.push_back(at_option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::AutomateTester::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::AutomateTester::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Radius::Server::AutomateTester::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-option")
    {
        at_option = value;
        at_option.value_namespace = name_space;
        at_option.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::AutomateTester::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "at-option")
    {
        at_option.yfilter = yfilter;
    }
}

bool Native::Radius::Server::AutomateTester::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "at-option")
        return true;
    return false;
}

Native::Radius::Server::Backoff::Backoff()
    :
    exponential(nullptr) // presence node
{

    yang_name = "backoff"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Backoff::~Backoff()
{
}

bool Native::Radius::Server::Backoff::has_data() const
{
    return (exponential !=  nullptr && exponential->has_data());
}

bool Native::Radius::Server::Backoff::has_operation() const
{
    return is_set(yfilter)
	|| (exponential !=  nullptr && exponential->has_operation());
}

std::string Native::Radius::Server::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exponential")
    {
        if(exponential == nullptr)
        {
            exponential = std::make_shared<Native::Radius::Server::Backoff::Exponential>();
        }
        return exponential;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exponential != nullptr)
    {
        children["exponential"] = exponential;
    }

    return children;
}

void Native::Radius::Server::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exponential")
        return true;
    return false;
}

Native::Radius::Server::Backoff::Exponential::Exponential()
    :
    max_delay{YType::uint8, "max-delay"},
    backoff_retry{YType::uint8, "backoff-retry"}
{

    yang_name = "exponential"; yang_parent_name = "backoff"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Backoff::Exponential::~Exponential()
{
}

bool Native::Radius::Server::Backoff::Exponential::has_data() const
{
    return max_delay.is_set
	|| backoff_retry.is_set;
}

bool Native::Radius::Server::Backoff::Exponential::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_delay.yfilter)
	|| ydk::is_set(backoff_retry.yfilter);
}

std::string Native::Radius::Server::Backoff::Exponential::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exponential";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Backoff::Exponential::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());
    if (backoff_retry.is_set || is_set(backoff_retry.yfilter)) leaf_name_data.push_back(backoff_retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Backoff::Exponential::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Backoff::Exponential::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Radius::Server::Backoff::Exponential::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backoff-retry")
    {
        backoff_retry = value;
        backoff_retry.value_namespace = name_space;
        backoff_retry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Backoff::Exponential::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
    if(value_path == "backoff-retry")
    {
        backoff_retry.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Backoff::Exponential::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-delay" || name == "backoff-retry")
        return true;
    return false;
}

Native::Radius::Server::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Key::~Key()
{
}

bool Native::Radius::Server::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Radius::Server::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Radius::Server::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Radius::Server::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Radius::Server::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Radius::Server::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Radius::Server::Pac::Pac()
    :
    key(std::make_shared<Native::Radius::Server::Pac::Key>())
{
    key->parent = this;

    yang_name = "pac"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Pac::~Pac()
{
}

bool Native::Radius::Server::Pac::has_data() const
{
    return (key !=  nullptr && key->has_data());
}

bool Native::Radius::Server::Pac::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Radius::Server::Pac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Pac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Pac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Radius::Server::Pac::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Pac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Radius::Server::Pac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Pac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Pac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Radius::Server::Pac::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "pac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Radius::Server::Pac::Key::~Key()
{
}

bool Native::Radius::Server::Pac::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Radius::Server::Pac::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Radius::Server::Pac::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Pac::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Radius::Server::Pac::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Pac::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Radius::Server::Pac::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Radius::Server::Pac::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Radius::Server::Pac::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Zone::Zone()
{

    yang_name = "zone"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Zone::~Zone()
{
}

bool Native::Zone::has_data() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Zone::has_operation() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Zone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Zone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Zone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Zone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-zone:security")
    {
        auto c = std::make_shared<Native::Zone::Security>();
        c->parent = this;
        security.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Zone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : security)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Zone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Zone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Zone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Zone::Security::Security()
    :
    id{YType::str, "id"},
    description{YType::str, "description"},
    protection{YType::str, "protection"}
{

    yang_name = "security"; yang_parent_name = "zone"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Zone::Security::~Security()
{
}

bool Native::Zone::Security::has_data() const
{
    return id.is_set
	|| description.is_set
	|| protection.is_set;
}

bool Native::Zone::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(protection.yfilter);
}

std::string Native::Zone::Security::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/zone/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Zone::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:security" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Zone::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (protection.is_set || is_set(protection.yfilter)) leaf_name_data.push_back(protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Zone::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Zone::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Zone::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection")
    {
        protection = value;
        protection.value_namespace = name_space;
        protection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Zone::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "protection")
    {
        protection.yfilter = yfilter;
    }
}

bool Native::Zone::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "description" || name == "protection")
        return true;
    return false;
}

Native::ZonePair::ZonePair()
{

    yang_name = "zone-pair"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ZonePair::~ZonePair()
{
}

bool Native::ZonePair::has_data() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ZonePair::has_operation() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ZonePair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ZonePair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone-pair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ZonePair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-zone:security")
    {
        auto c = std::make_shared<Native::ZonePair::Security>();
        c->parent = this;
        security.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : security)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::ZonePair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ZonePair::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ZonePair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::ZonePair::Security::Security()
    :
    id{YType::str, "id"},
    source{YType::str, "source"},
    destination{YType::str, "destination"},
    description{YType::str, "description"}
    	,
    service_policy(std::make_shared<Native::ZonePair::Security::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "security"; yang_parent_name = "zone-pair"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ZonePair::Security::~Security()
{
}

bool Native::ZonePair::Security::has_data() const
{
    return id.is_set
	|| source.is_set
	|| destination.is_set
	|| description.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::ZonePair::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::ZonePair::Security::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/zone-pair/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ZonePair::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:security" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ZonePair::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::ZonePair::Security::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::ZonePair::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ZonePair::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ZonePair::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "id" || name == "source" || name == "destination" || name == "description")
        return true;
    return false;
}

Native::ZonePair::Security::ServicePolicy::ServicePolicy()
    :
    type(std::make_shared<Native::ZonePair::Security::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ZonePair::Security::ServicePolicy::~ServicePolicy()
{
}

bool Native::ZonePair::Security::ServicePolicy::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::ZonePair::Security::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::ZonePair::Security::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::Security::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ZonePair::Security::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::ZonePair::Security::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::Security::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::ZonePair::Security::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ZonePair::Security::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ZonePair::Security::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::ZonePair::Security::ServicePolicy::Type::Type()
    :
    inspect{YType::str, "inspect"}
{

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ZonePair::Security::ServicePolicy::Type::~Type()
{
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_data() const
{
    return inspect.is_set;
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inspect.yfilter);
}

std::string Native::ZonePair::Security::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::Security::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inspect.is_set || is_set(inspect.yfilter)) leaf_name_data.push_back(inspect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ZonePair::Security::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::Security::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ZonePair::Security::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inspect")
    {
        inspect = value;
        inspect.value_namespace = name_space;
        inspect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ZonePair::Security::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inspect")
    {
        inspect.yfilter = yfilter;
    }
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspect")
        return true;
    return false;
}

Native::AlarmContact::AlarmContact()
    :
    name{YType::uint8, "name"},
    description{YType::str, "description"},
    severity{YType::enumeration, "severity"},
    trigger{YType::enumeration, "trigger"}
{

    yang_name = "alarm-contact"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AlarmContact::~AlarmContact()
{
}

bool Native::AlarmContact::has_data() const
{
    return name.is_set
	|| description.is_set
	|| severity.is_set
	|| trigger.is_set;
}

bool Native::AlarmContact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Native::AlarmContact::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AlarmContact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-contact" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AlarmContact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AlarmContact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AlarmContact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::AlarmContact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Native::AlarmContact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Native::AlarmContact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "severity" || name == "trigger")
        return true;
    return false;
}

Native::Ethernet::Ethernet()
    :
    lmi(std::make_shared<Native::Ethernet::Lmi>())
	,cfm(std::make_shared<Native::Ethernet::Cfm>())
{
    lmi->parent = this;
    cfm->parent = this;

    yang_name = "ethernet"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::~Ethernet()
{
}

bool Native::Ethernet::has_data() const
{
    for (std::size_t index=0; index<evc.size(); index++)
    {
        if(evc[index]->has_data())
            return true;
    }
    return (lmi !=  nullptr && lmi->has_data())
	|| (cfm !=  nullptr && cfm->has_data());
}

bool Native::Ethernet::has_operation() const
{
    for (std::size_t index=0; index<evc.size(); index++)
    {
        if(evc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation());
}

std::string Native::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-ethernet:evc")
    {
        auto c = std::make_shared<Native::Ethernet::Evc>();
        c->parent = this;
        evc.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Ethernet::Cfm>();
        }
        return cfm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : evc)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(lmi != nullptr)
    {
        children["Cisco-IOS-XE-ethernet:lmi"] = lmi;
    }

    if(cfm != nullptr)
    {
        children["Cisco-IOS-XE-ethernet:cfm"] = cfm;
    }

    return children;
}

void Native::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evc" || name == "lmi" || name == "cfm")
        return true;
    return false;
}

Native::Ethernet::Evc::Evc()
    :
    name{YType::str, "name"}
{

    yang_name = "evc"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Evc::~Evc()
{
}

bool Native::Ethernet::Evc::has_data() const
{
    return name.is_set;
}

bool Native::Ethernet::Evc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ethernet::Evc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Evc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:evc" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Evc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Evc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Evc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ethernet::Evc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Evc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ethernet::Evc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ethernet::Lmi::Lmi()
    :
    ce{YType::empty, "ce"},
    global{YType::empty, "global"}
{

    yang_name = "lmi"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Lmi::~Lmi()
{
}

bool Native::Ethernet::Lmi::has_data() const
{
    return ce.is_set
	|| global.is_set;
}

bool Native::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ce.yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Ethernet::Lmi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:lmi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Lmi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce.is_set || is_set(ce.yfilter)) leaf_name_data.push_back(ce.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ce")
    {
        ce = value;
        ce.value_namespace = name_space;
        ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ce")
    {
        ce.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce" || name == "global")
        return true;
    return false;
}

Native::Ethernet::Cfm::Cfm()
    :
    ieee{YType::empty, "ieee"},
    global{YType::empty, "global"}
    	,
    ais(std::make_shared<Native::Ethernet::Cfm::Ais>())
	,alarm(std::make_shared<Native::Ethernet::Cfm::Alarm>())
	,logging(nullptr) // presence node
	,mep(std::make_shared<Native::Ethernet::Cfm::Mep>())
	,mip(std::make_shared<Native::Ethernet::Cfm::Mip>())
	,traceroute(std::make_shared<Native::Ethernet::Cfm::Traceroute>())
{
    ais->parent = this;
    alarm->parent = this;
    mep->parent = this;
    mip->parent = this;
    traceroute->parent = this;

    yang_name = "cfm"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::~Cfm()
{
}

bool Native::Ethernet::Cfm::has_data() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return ieee.is_set
	|| global.is_set
	|| (ais !=  nullptr && ais->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data())
	|| (traceroute !=  nullptr && traceroute->has_data());
}

bool Native::Ethernet::Cfm::has_operation() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ieee.yfilter)
	|| ydk::is_set(global.yfilter)
	|| (ais !=  nullptr && ais->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation())
	|| (traceroute !=  nullptr && traceroute->has_operation());
}

std::string Native::Ethernet::Cfm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ieee.is_set || is_set(ieee.yfilter)) leaf_name_data.push_back(ieee.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<Native::Ethernet::Cfm::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Native::Ethernet::Cfm::Alarm>();
        }
        return alarm;
    }

    if(child_yang_name == "domain")
    {
        auto c = std::make_shared<Native::Ethernet::Cfm::Domain>();
        c->parent = this;
        domain.push_back(c);
        return c;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ethernet::Cfm::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Ethernet::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Ethernet::Cfm::Mip>();
        }
        return mip;
    }

    if(child_yang_name == "traceroute")
    {
        if(traceroute == nullptr)
        {
            traceroute = std::make_shared<Native::Ethernet::Cfm::Traceroute>();
        }
        return traceroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ais != nullptr)
    {
        children["ais"] = ais;
    }

    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    count = 0;
    for (auto const & c : domain)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mep != nullptr)
    {
        children["mep"] = mep;
    }

    if(mip != nullptr)
    {
        children["mip"] = mip;
    }

    if(traceroute != nullptr)
    {
        children["traceroute"] = traceroute;
    }

    return children;
}

void Native::Ethernet::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ieee")
    {
        ieee = value;
        ieee.value_namespace = name_space;
        ieee.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ieee")
    {
        ieee.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "alarm" || name == "domain" || name == "logging" || name == "mep" || name == "mip" || name == "traceroute" || name == "ieee" || name == "global")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::Ais()
    :
    link_status(std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "ais"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Ais::~Ais()
{
}

bool Native::Ethernet::Cfm::Ais::has_data() const
{
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Ethernet::Cfm::Ais::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_status != nullptr)
    {
        children["link-status"] = link_status;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::LinkStatus()
    :
    global(nullptr) // presence node
{

    yang_name = "link-status"; yang_parent_name = "ais"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::~LinkStatus()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Ais::LinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Ais::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::Global()
    :
    cfm_mode__config_ais_link_cfm(std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm>())
{
    cfm_mode__config_ais_link_cfm->parent = this;

    yang_name = "global"; yang_parent_name = "link-status"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::~Global()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::has_data() const
{
    return (cfm_mode__config_ais_link_cfm !=  nullptr && cfm_mode__config_ais_link_cfm->has_data());
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::has_operation() const
{
    return is_set(yfilter)
	|| (cfm_mode__config_ais_link_cfm !=  nullptr && cfm_mode__config_ais_link_cfm->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/link-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm-Mode__config-ais-link-cfm")
    {
        if(cfm_mode__config_ais_link_cfm == nullptr)
        {
            cfm_mode__config_ais_link_cfm = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm>();
        }
        return cfm_mode__config_ais_link_cfm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cfm_mode__config_ais_link_cfm != nullptr)
    {
        children["cfm-Mode__config-ais-link-cfm"] = cfm_mode__config_ais_link_cfm;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm-Mode__config-ais-link-cfm")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::CfmModeConfigaislinkcfm()
    :
    disable{YType::empty, "disable"},
    level{YType::uint8, "level"}
    	,
    period(std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period>())
{
    period->parent = this;

    yang_name = "cfm-Mode__config-ais-link-cfm"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::~CfmModeConfigaislinkcfm()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::has_data() const
{
    return disable.is_set
	|| level.is_set
	|| (period !=  nullptr && period->has_data());
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (period !=  nullptr && period->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/link-status/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm-Mode__config-ais-link-cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "period")
    {
        if(period == nullptr)
        {
            period = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period>();
        }
        return period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(period != nullptr)
    {
        children["period"] = period;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "disable" || name == "level")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::Period()
    :
    tp_1{YType::empty, "tp-1"},
    tp_60{YType::empty, "tp-60"}
{

    yang_name = "period"; yang_parent_name = "cfm-Mode__config-ais-link-cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::~Period()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::has_data() const
{
    return tp_1.is_set
	|| tp_60.is_set;
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_1.yfilter)
	|| ydk::is_set(tp_60.yfilter);
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/link-status/global/cfm-Mode__config-ais-link-cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_1.is_set || is_set(tp_1.yfilter)) leaf_name_data.push_back(tp_1.get_name_leafdata());
    if (tp_60.is_set || is_set(tp_60.yfilter)) leaf_name_data.push_back(tp_60.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-1")
    {
        tp_1 = value;
        tp_1.value_namespace = name_space;
        tp_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-60")
    {
        tp_60 = value;
        tp_60.value_namespace = name_space;
        tp_60.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-1")
    {
        tp_1.yfilter = yfilter;
    }
    if(value_path == "tp-60")
    {
        tp_60.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-1" || name == "tp-60")
        return true;
    return false;
}

Native::Ethernet::Cfm::Alarm::Alarm()
    :
    delay{YType::uint16, "delay"},
    packet{YType::uint16, "packet"},
    reset{YType::uint16, "reset"}
    	,
    notification(std::make_shared<Native::Ethernet::Cfm::Alarm::Notification>())
{
    notification->parent = this;

    yang_name = "alarm"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Alarm::~Alarm()
{
}

bool Native::Ethernet::Cfm::Alarm::has_data() const
{
    return delay.is_set
	|| packet.is_set
	|| reset.is_set
	|| (notification !=  nullptr && notification->has_data());
}

bool Native::Ethernet::Cfm::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(packet.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| (notification !=  nullptr && notification->has_operation());
}

std::string Native::Ethernet::Cfm::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Native::Ethernet::Cfm::Alarm::Notification>();
        }
        return notification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    return children;
}

void Native::Ethernet::Cfm::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification" || name == "delay" || name == "packet" || name == "reset")
        return true;
    return false;
}

Native::Ethernet::Cfm::Alarm::Notification::Notification()
    :
    all{YType::empty, "all"},
    error_xcon{YType::empty, "error-xcon"},
    mac_remote_error_xcon{YType::empty, "mac-remote-error-xcon"},
    none{YType::empty, "none"},
    remote_error_xcon{YType::empty, "remote-error-xcon"},
    xcon{YType::empty, "xcon"}
{

    yang_name = "notification"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Alarm::Notification::~Notification()
{
}

bool Native::Ethernet::Cfm::Alarm::Notification::has_data() const
{
    return all.is_set
	|| error_xcon.is_set
	|| mac_remote_error_xcon.is_set
	|| none.is_set
	|| remote_error_xcon.is_set
	|| xcon.is_set;
}

bool Native::Ethernet::Cfm::Alarm::Notification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(error_xcon.yfilter)
	|| ydk::is_set(mac_remote_error_xcon.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(remote_error_xcon.yfilter)
	|| ydk::is_set(xcon.yfilter);
}

std::string Native::Ethernet::Cfm::Alarm::Notification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/alarm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Alarm::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Alarm::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (error_xcon.is_set || is_set(error_xcon.yfilter)) leaf_name_data.push_back(error_xcon.get_name_leafdata());
    if (mac_remote_error_xcon.is_set || is_set(mac_remote_error_xcon.yfilter)) leaf_name_data.push_back(mac_remote_error_xcon.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remote_error_xcon.is_set || is_set(remote_error_xcon.yfilter)) leaf_name_data.push_back(remote_error_xcon.get_name_leafdata());
    if (xcon.is_set || is_set(xcon.yfilter)) leaf_name_data.push_back(xcon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Alarm::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Alarm::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ethernet::Cfm::Alarm::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-xcon")
    {
        error_xcon = value;
        error_xcon.value_namespace = name_space;
        error_xcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-remote-error-xcon")
    {
        mac_remote_error_xcon = value;
        mac_remote_error_xcon.value_namespace = name_space;
        mac_remote_error_xcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-error-xcon")
    {
        remote_error_xcon = value;
        remote_error_xcon.value_namespace = name_space;
        remote_error_xcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcon")
    {
        xcon = value;
        xcon.value_namespace = name_space;
        xcon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Alarm::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "error-xcon")
    {
        error_xcon.yfilter = yfilter;
    }
    if(value_path == "mac-remote-error-xcon")
    {
        mac_remote_error_xcon.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "remote-error-xcon")
    {
        remote_error_xcon.yfilter = yfilter;
    }
    if(value_path == "xcon")
    {
        xcon.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Alarm::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "error-xcon" || name == "mac-remote-error-xcon" || name == "none" || name == "remote-error-xcon" || name == "xcon")
        return true;
    return false;
}

Native::Ethernet::Cfm::Domain::Domain()
    :
    name{YType::str, "name"},
    level{YType::uint8, "level"}
{

    yang_name = "domain"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Domain::~Domain()
{
}

bool Native::Ethernet::Cfm::Domain::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return name.is_set
	|| level.is_set;
}

bool Native::Ethernet::Cfm::Domain::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Ethernet::Cfm::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        auto c = std::make_shared<Native::Ethernet::Cfm::Domain::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : service)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ethernet::Cfm::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service" || name == "name" || name == "level")
        return true;
    return false;
}

Native::Ethernet::Cfm::Domain::Service::Service()
    :
    name{YType::str, "name"},
    evc{YType::str, "evc"},
    vlan{YType::uint16, "vlan"}
    	,
    continuity_check(nullptr) // presence node
{

    yang_name = "service"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ethernet::Cfm::Domain::Service::~Service()
{
}

bool Native::Ethernet::Cfm::Domain::Service::has_data() const
{
    return name.is_set
	|| evc.is_set
	|| vlan.is_set
	|| (continuity_check !=  nullptr && continuity_check->has_data());
}

bool Native::Ethernet::Cfm::Domain::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (continuity_check !=  nullptr && continuity_check->has_operation());
}

std::string Native::Ethernet::Cfm::Domain::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Domain::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Domain::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "continuity-check")
    {
        if(continuity_check == nullptr)
        {
            continuity_check = std::make_shared<Native::Ethernet::Cfm::Domain::Service::ContinuityCheck>();
        }
        return continuity_check;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Domain::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(continuity_check != nullptr)
    {
        children["continuity-check"] = continuity_check;
    }

    return children;
}

void Native::Ethernet::Cfm::Domain::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Domain::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Domain::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "continuity-check" || name == "name" || name == "evc" || name == "vlan")
        return true;
    return false;
}

Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::ContinuityCheck()
{

    yang_name = "continuity-check"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::~ContinuityCheck()
{
}

bool Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::has_data() const
{
    return false;
}

bool Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuity-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ethernet::Cfm::Logging::Logging()
    :
    ais{YType::empty, "ais"}
    	,
    alarm(std::make_shared<Native::Ethernet::Cfm::Logging::Alarm>())
{
    alarm->parent = this;

    yang_name = "logging"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Logging::~Logging()
{
}

bool Native::Ethernet::Cfm::Logging::has_data() const
{
    return ais.is_set
	|| (alarm !=  nullptr && alarm->has_data());
}

bool Native::Ethernet::Cfm::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| (alarm !=  nullptr && alarm->has_operation());
}

std::string Native::Ethernet::Cfm::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Native::Ethernet::Cfm::Logging::Alarm>();
        }
        return alarm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    return children;
}

void Native::Ethernet::Cfm::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm" || name == "ais")
        return true;
    return false;
}

Native::Ethernet::Cfm::Logging::Alarm::Alarm()
    :
    cisco{YType::empty, "cisco"},
    ieee{YType::empty, "ieee"}
{

    yang_name = "alarm"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Logging::Alarm::~Alarm()
{
}

bool Native::Ethernet::Cfm::Logging::Alarm::has_data() const
{
    return cisco.is_set
	|| ieee.is_set;
}

bool Native::Ethernet::Cfm::Logging::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(ieee.yfilter);
}

std::string Native::Ethernet::Cfm::Logging::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Logging::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Logging::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (ieee.is_set || is_set(ieee.yfilter)) leaf_name_data.push_back(ieee.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Logging::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Logging::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ethernet::Cfm::Logging::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ieee")
    {
        ieee = value;
        ieee.value_namespace = name_space;
        ieee.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Logging::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "ieee")
    {
        ieee.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Logging::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "ieee")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mep::Mep()
    :
    crosscheck(std::make_shared<Native::Ethernet::Cfm::Mep::Crosscheck>())
{
    crosscheck->parent = this;

    yang_name = "mep"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mep::~Mep()
{
}

bool Native::Ethernet::Cfm::Mep::has_data() const
{
    return (crosscheck !=  nullptr && crosscheck->has_data());
}

bool Native::Ethernet::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| (crosscheck !=  nullptr && crosscheck->has_operation());
}

std::string Native::Ethernet::Cfm::Mep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crosscheck")
    {
        if(crosscheck == nullptr)
        {
            crosscheck = std::make_shared<Native::Ethernet::Cfm::Mep::Crosscheck>();
        }
        return crosscheck;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(crosscheck != nullptr)
    {
        children["crosscheck"] = crosscheck;
    }

    return children;
}

void Native::Ethernet::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crosscheck")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mep::Crosscheck::Crosscheck()
    :
    start_delay{YType::uint16, "start-delay"}
{

    yang_name = "crosscheck"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mep::Crosscheck::~Crosscheck()
{
}

bool Native::Ethernet::Cfm::Mep::Crosscheck::has_data() const
{
    return start_delay.is_set;
}

bool Native::Ethernet::Cfm::Mep::Crosscheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_delay.yfilter);
}

std::string Native::Ethernet::Cfm::Mep::Crosscheck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mep/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mep::Crosscheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crosscheck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mep::Crosscheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_delay.is_set || is_set(start_delay.yfilter)) leaf_name_data.push_back(start_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mep::Crosscheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mep::Crosscheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ethernet::Cfm::Mep::Crosscheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-delay")
    {
        start_delay = value;
        start_delay.value_namespace = name_space;
        start_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Mep::Crosscheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-delay")
    {
        start_delay.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Mep::Crosscheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-delay")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::Mip()
    :
    filter{YType::empty, "filter"}
    	,
    auto_create(std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate>())
{
    auto_create->parent = this;

    yang_name = "mip"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mip::~Mip()
{
}

bool Native::Ethernet::Cfm::Mip::has_data() const
{
    return filter.is_set
	|| (auto_create !=  nullptr && auto_create->has_data());
}

bool Native::Ethernet::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter.yfilter)
	|| (auto_create !=  nullptr && auto_create->has_operation());
}

std::string Native::Ethernet::Cfm::Mip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-create")
    {
        if(auto_create == nullptr)
        {
            auto_create = std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate>();
        }
        return auto_create;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_create != nullptr)
    {
        children["auto-create"] = auto_create;
    }

    return children;
}

void Native::Ethernet::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-create" || name == "filter")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::AutoCreate()
    :
    level(std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate::Level>())
{
    level->parent = this;

    yang_name = "auto-create"; yang_parent_name = "mip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::~AutoCreate()
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-create";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mip::AutoCreate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::AutoCreate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::AutoCreate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Ethernet::Cfm::Mip::AutoCreate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Mip::AutoCreate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::Level()
{

    yang_name = "level"; yang_parent_name = "auto-create"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::~Level()
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::has_data() const
{
    for (std::size_t index=0; index<mef_num.size(); index++)
    {
        if(mef_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::has_operation() const
{
    for (std::size_t index=0; index<mef_num.size(); index++)
    {
        if(mef_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mip/auto-create/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mef-num")
    {
        auto c = std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum>();
        c->parent = this;
        mef_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mef_num)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mef-num")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::MefNum()
    :
    mef_num{YType::uint8, "mef-num"},
    evc{YType::str, "evc"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "mef-num"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::~MefNum()
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::has_data() const
{
    return mef_num.is_set
	|| evc.is_set
	|| vlan.is_set;
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mef_num.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mip/auto-create/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mef-num" <<"[mef-num='" <<mef_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mef_num.is_set || is_set(mef_num.yfilter)) leaf_name_data.push_back(mef_num.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mef-num")
    {
        mef_num = value;
        mef_num.value_namespace = name_space;
        mef_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mef-num")
    {
        mef_num.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mef-num" || name == "evc" || name == "vlan")
        return true;
    return false;
}

Native::Ethernet::Cfm::Traceroute::Traceroute()
    :
    cache(nullptr) // presence node
{

    yang_name = "traceroute"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Traceroute::~Traceroute()
{
}

bool Native::Ethernet::Cfm::Traceroute::has_data() const
{
    return (cache !=  nullptr && cache->has_data());
}

bool Native::Ethernet::Cfm::Traceroute::has_operation() const
{
    return is_set(yfilter)
	|| (cache !=  nullptr && cache->has_operation());
}

std::string Native::Ethernet::Cfm::Traceroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Traceroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Traceroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Traceroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Ethernet::Cfm::Traceroute::Cache>();
        }
        return cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Traceroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    return children;
}

void Native::Ethernet::Cfm::Traceroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Traceroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Traceroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache")
        return true;
    return false;
}

Native::Ethernet::Cfm::Traceroute::Cache::Cache()
    :
    hold_time{YType::uint16, "hold-time"},
    size{YType::uint16, "size"}
{

    yang_name = "cache"; yang_parent_name = "traceroute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Traceroute::Cache::~Cache()
{
}

bool Native::Ethernet::Cfm::Traceroute::Cache::has_data() const
{
    return hold_time.is_set
	|| size.is_set;
}

bool Native::Ethernet::Cfm::Traceroute::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Ethernet::Cfm::Traceroute::Cache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/traceroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Traceroute::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Traceroute::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Traceroute::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Traceroute::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ethernet::Cfm::Traceroute::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Traceroute::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Traceroute::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "size")
        return true;
    return false;
}

Native::BridgeDomain::BridgeDomain()
    :
    c_mac(std::make_shared<Native::BridgeDomain::CMac>())
	,otv(std::make_shared<Native::BridgeDomain::Otv>())
	,parameterized(std::make_shared<Native::BridgeDomain::Parameterized>())
{
    c_mac->parent = this;
    otv->parent = this;
    parameterized->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::~BridgeDomain()
{
}

bool Native::BridgeDomain::has_data() const
{
    for (std::size_t index=0; index<brd_id.size(); index++)
    {
        if(brd_id[index]->has_data())
            return true;
    }
    return (c_mac !=  nullptr && c_mac->has_data())
	|| (otv !=  nullptr && otv->has_data())
	|| (parameterized !=  nullptr && parameterized->has_data());
}

bool Native::BridgeDomain::has_operation() const
{
    for (std::size_t index=0; index<brd_id.size(); index++)
    {
        if(brd_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (c_mac !=  nullptr && c_mac->has_operation())
	|| (otv !=  nullptr && otv->has_operation())
	|| (parameterized !=  nullptr && parameterized->has_operation());
}

std::string Native::BridgeDomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-bridge-domain:brd-id")
    {
        auto c = std::make_shared<Native::BridgeDomain::BrdId>();
        c->parent = this;
        brd_id.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-bridge-domain:c-mac")
    {
        if(c_mac == nullptr)
        {
            c_mac = std::make_shared<Native::BridgeDomain::CMac>();
        }
        return c_mac;
    }

    if(child_yang_name == "Cisco-IOS-XE-bridge-domain:otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::BridgeDomain::Otv>();
        }
        return otv;
    }

    if(child_yang_name == "Cisco-IOS-XE-bridge-domain:parameterized")
    {
        if(parameterized == nullptr)
        {
            parameterized = std::make_shared<Native::BridgeDomain::Parameterized>();
        }
        return parameterized;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : brd_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(c_mac != nullptr)
    {
        children["Cisco-IOS-XE-bridge-domain:c-mac"] = c_mac;
    }

    if(otv != nullptr)
    {
        children["Cisco-IOS-XE-bridge-domain:otv"] = otv;
    }

    if(parameterized != nullptr)
    {
        children["Cisco-IOS-XE-bridge-domain:parameterized"] = parameterized;
    }

    return children;
}

void Native::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brd-id" || name == "c-mac" || name == "otv" || name == "parameterized")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::BrdId()
    :
    bridge_domain_id{YType::uint16, "bridge-domain-id"},
    shutdown{YType::empty, "shutdown"}
    	,
    ip(std::make_shared<Native::BridgeDomain::BrdId::Ip>())
	,mac(std::make_shared<Native::BridgeDomain::BrdId::Mac>())
	,member(std::make_shared<Native::BridgeDomain::BrdId::Member>())
{
    ip->parent = this;
    mac->parent = this;
    member->parent = this;

    yang_name = "brd-id"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::BrdId::~BrdId()
{
}

bool Native::BridgeDomain::BrdId::has_data() const
{
    return bridge_domain_id.is_set
	|| shutdown.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (member !=  nullptr && member->has_data());
}

bool Native::BridgeDomain::BrdId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::BridgeDomain::BrdId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::BrdId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:brd-id" <<"[bridge-domain-id='" <<bridge_domain_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::BridgeDomain::BrdId::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::BridgeDomain::BrdId::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::BridgeDomain::BrdId::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::BridgeDomain::BrdId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mac" || name == "member" || name == "bridge-domain-id" || name == "shutdown")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Ip()
    :
    igmp(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp>())
{
    igmp->parent = this;

    yang_name = "ip"; yang_parent_name = "brd-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::~Ip()
{
}

bool Native::BridgeDomain::BrdId::Ip::has_data() const
{
    return (igmp !=  nullptr && igmp->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (igmp !=  nullptr && igmp->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp>();
        }
        return igmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Igmp()
    :
    snooping(nullptr) // presence node
{

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::~Igmp()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Snooping()
    :
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"},
    static_{YType::str, "static"}
    	,
    check(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check>())
	,explicit_tracking(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking>())
	,mrouter(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter>())
	,querier(nullptr) // presence node
{
    check->parent = this;
    explicit_tracking->parent = this;
    mrouter->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_data() const
{
    return immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| static_.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(immediate_leave.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(report_suppression.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate_leave.is_set || is_set(immediate_leave.yfilter)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.yfilter)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(mrouter != nullptr)
    {
        children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
        immediate_leave.value_namespace = name_space;
        immediate_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
        report_suppression.value_namespace = name_space;
        report_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "report-suppression")
    {
        report_suppression.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "explicit-tracking" || name == "mrouter" || name == "querier" || name == "immediate-leave" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "report-suppression" || name == "robustness-variable" || name == "static")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{

    yang_name = "check"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_data() const
{
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_alert_option.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.yfilter)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
        rtr_alert_option.value_namespace = name_space;
        rtr_alert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-alert-option" || name == "ttl")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::empty, "limit"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    return limit.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::Mrouter()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "mrouter"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::~Mrouter()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_data() const
{
    return interface.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::empty, "address"},
    max_response_time{YType::empty, "max-response-time"},
    query_interval{YType::empty, "query-interval"},
    tcn{YType::empty, "tcn"},
    timer{YType::empty, "timer"},
    version{YType::empty, "version"}
{

    yang_name = "querier"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| tcn.is_set
	|| timer.is_set
	|| version.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(tcn.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (tcn.is_set || is_set(tcn.yfilter)) leaf_name_data.push_back(tcn.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn")
    {
        tcn = value;
        tcn.value_namespace = name_space;
        tcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "tcn")
    {
        tcn.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "max-response-time" || name == "query-interval" || name == "tcn" || name == "timer" || name == "version")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Mac()
    :
    aging_time{YType::uint16, "aging-time"},
    learning{YType::empty, "learning"}
    	,
    limit(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit>())
{
    limit->parent = this;

    yang_name = "mac"; yang_parent_name = "brd-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::~Mac()
{
}

bool Native::BridgeDomain::BrdId::Mac::has_data() const
{
    return aging_time.is_set
	|| learning.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time.yfilter)
	|| ydk::is_set(learning.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.yfilter)) leaf_name_data.push_back(aging_time.get_name_leafdata());
    if (learning.is_set || is_set(learning.yfilter)) leaf_name_data.push_back(learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
        aging_time.value_namespace = name_space;
        aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning")
    {
        learning = value;
        learning.value_namespace = name_space;
        learning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time")
    {
        aging_time.yfilter = yfilter;
    }
    if(value_path == "learning")
    {
        learning.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "aging-time" || name == "learning")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Limit()
    :
    action(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action>())
	,maximum(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Maximum>())
{
    action->parent = this;
    maximum->parent = this;

    yang_name = "limit"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::~Limit()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action>();
        }
        return action;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Mac::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "maximum")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Action()
    :
    flooding(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding>())
{
    flooding->parent = this;

    yang_name = "action"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::~Action()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_data() const
{
    return (flooding !=  nullptr && flooding->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_operation() const
{
    return is_set(yfilter)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooding")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::Flooding()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flooding"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::~Flooding()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_data() const
{
    return disable.is_set;
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Maximum::Maximum()
    :
    addresses{YType::uint32, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::Maximum::~Maximum()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Mac::Limit::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::Member()
    :
    analysis_module{YType::uint8, "Analysis-Module"},
    fcpa{YType::uint8, "Fcpa"},
    sbc{YType::uint32, "SBC"},
    sonet_acr{YType::uint8, "SONET_ACR"},
    y_controller{YType::str, "_controller"},
    service_engine{YType::uint8, "Service-Engine"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    vpn{YType::uint32, "VPN"},
    virtual_tokenring{YType::uint32, "Virtual-TokenRing"},
    ucse{YType::uint8, "ucse"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    vfi{YType::str, "vfi"},
    vni{YType::uint32, "vni"}
{

    yang_name = "member"; yang_parent_name = "brd-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::~Member()
{
}

bool Native::BridgeDomain::BrdId::Member::has_data() const
{
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return analysis_module.is_set
	|| fcpa.is_set
	|| sbc.is_set
	|| sonet_acr.is_set
	|| y_controller.is_set
	|| service_engine.is_set
	|| tunnel_tp.is_set
	|| vpn.is_set
	|| virtual_tokenring.is_set
	|| ucse.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| vfi.is_set
	|| vni.is_set;
}

bool Native::BridgeDomain::BrdId::Member::has_operation() const
{
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(analysis_module.yfilter)
	|| ydk::is_set(fcpa.yfilter)
	|| ydk::is_set(sbc.yfilter)
	|| ydk::is_set(sonet_acr.yfilter)
	|| ydk::is_set(y_controller.yfilter)
	|| ydk::is_set(service_engine.yfilter)
	|| ydk::is_set(tunnel_tp.yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| ydk::is_set(virtual_tokenring.yfilter)
	|| ydk::is_set(ucse.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(vfi.yfilter)
	|| ydk::is_set(vni.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (analysis_module.is_set || is_set(analysis_module.yfilter)) leaf_name_data.push_back(analysis_module.get_name_leafdata());
    if (fcpa.is_set || is_set(fcpa.yfilter)) leaf_name_data.push_back(fcpa.get_name_leafdata());
    if (sbc.is_set || is_set(sbc.yfilter)) leaf_name_data.push_back(sbc.get_name_leafdata());
    if (sonet_acr.is_set || is_set(sonet_acr.yfilter)) leaf_name_data.push_back(sonet_acr.get_name_leafdata());
    if (y_controller.is_set || is_set(y_controller.yfilter)) leaf_name_data.push_back(y_controller.get_name_leafdata());
    if (service_engine.is_set || is_set(service_engine.yfilter)) leaf_name_data.push_back(service_engine.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.yfilter)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (virtual_tokenring.is_set || is_set(virtual_tokenring.yfilter)) leaf_name_data.push_back(virtual_tokenring.get_name_leafdata());
    if (ucse.is_set || is_set(ucse.yfilter)) leaf_name_data.push_back(ucse.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.yfilter)) leaf_name_data.push_back(vfi.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mem-ipv4")
    {
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4>();
        c->parent = this;
        mem_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ACR")
    {
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::ACR>();
        c->parent = this;
        acr.push_back(c);
        return c;
    }

    if(child_yang_name == "member-interface")
    {
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mem_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : acr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : member_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module = value;
        analysis_module.value_namespace = name_space;
        analysis_module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Fcpa")
    {
        fcpa = value;
        fcpa.value_namespace = name_space;
        fcpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SBC")
    {
        sbc = value;
        sbc.value_namespace = name_space;
        sbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr = value;
        sonet_acr.value_namespace = name_space;
        sonet_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_controller")
    {
        y_controller = value;
        y_controller.value_namespace = name_space;
        y_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Service-Engine")
    {
        service_engine = value;
        service_engine.value_namespace = name_space;
        service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
        tunnel_tp.value_namespace = name_space;
        tunnel_tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VPN")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring = value;
        virtual_tokenring.value_namespace = name_space;
        virtual_tokenring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucse")
    {
        ucse = value;
        ucse.value_namespace = name_space;
        ucse.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vfi")
    {
        vfi = value;
        vfi.value_namespace = name_space;
        vfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module.yfilter = yfilter;
    }
    if(value_path == "Fcpa")
    {
        fcpa.yfilter = yfilter;
    }
    if(value_path == "SBC")
    {
        sbc.yfilter = yfilter;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr.yfilter = yfilter;
    }
    if(value_path == "_controller")
    {
        y_controller.yfilter = yfilter;
    }
    if(value_path == "Service-Engine")
    {
        service_engine.yfilter = yfilter;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp.yfilter = yfilter;
    }
    if(value_path == "VPN")
    {
        vpn.yfilter = yfilter;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring.yfilter = yfilter;
    }
    if(value_path == "ucse")
    {
        ucse.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "vfi")
    {
        vfi.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mem-ipv4" || name == "ACR" || name == "member-interface" || name == "Analysis-Module" || name == "Fcpa" || name == "SBC" || name == "SONET_ACR" || name == "_controller" || name == "Service-Engine" || name == "Tunnel-tp" || name == "VPN" || name == "Virtual-TokenRing" || name == "ucse" || name == "vasileft" || name == "vasiright" || name == "vfi" || name == "vni")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemIpv4()
    :
    mem_ipv4{YType::str, "mem-ipv4"},
    template_{YType::str, "template"}
    	,
    encapsulation(std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "mem-ipv4"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::~MemIpv4()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_data() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_data())
            return true;
    }
    return mem_ipv4.is_set
	|| template_.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_operation() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mem_ipv4.yfilter)
	|| ydk::is_set(template_.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-ipv4" <<"[mem-ipv4='" <<mem_ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_ipv4.is_set || is_set(mem_ipv4.yfilter)) leaf_name_data.push_back(mem_ipv4.get_name_leafdata());
    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mem-vcid")
    {
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid>();
        c->parent = this;
        mem_vcid.push_back(c);
        return c;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mem_vcid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4 = value;
        mem_ipv4.value_namespace = name_space;
        mem_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4.yfilter = yfilter;
    }
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mem-vcid" || name == "encapsulation" || name == "mem-ipv4" || name == "template")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::MemVcid()
    :
    mem_vcid{YType::uint32, "mem-vcid"}
    	,
    encapsulation(nullptr) // presence node
	,template_(nullptr) // presence node
{

    yang_name = "mem-vcid"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::~MemVcid()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_data() const
{
    return mem_vcid.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mem_vcid.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-vcid" <<"[mem-vcid='" <<mem_vcid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_vcid.is_set || is_set(mem_vcid.yfilter)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
        mem_vcid.value_namespace = name_space;
        mem_vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "template" || name == "mem-vcid")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::Template()
    :
    template_{YType::str, "template"}
{

    yang_name = "template"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::~Template()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::has_data() const
{
    return template_.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::ACR::ACR()
    :
    acr_int{YType::str, "acr-int"}
    	,
    service_instance(std::make_shared<Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance>())
{
    service_instance->parent = this;

    yang_name = "ACR"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::ACR::~ACR()
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::has_data() const
{
    return acr_int.is_set
	|| (service_instance !=  nullptr && service_instance->has_data());
}

bool Native::BridgeDomain::BrdId::Member::ACR::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr_int.yfilter)
	|| (service_instance !=  nullptr && service_instance->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::ACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACR" <<"[acr-int='" <<acr_int <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::ACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr_int.is_set || is_set(acr_int.yfilter)) leaf_name_data.push_back(acr_int.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::ACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-instance")
    {
        if(service_instance == nullptr)
        {
            service_instance = std::make_shared<Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance>();
        }
        return service_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::ACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_instance != nullptr)
    {
        children["service-instance"] = service_instance;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::ACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr-int")
    {
        acr_int = value;
        acr_int.value_namespace = name_space;
        acr_int.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::ACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr-int")
    {
        acr_int.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::ACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-instance" || name == "acr-int")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::ServiceInstance()
{

    yang_name = "service-instance"; yang_parent_name = "ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::~ServiceInstance()
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::Id()
    :
    id{YType::uint16, "id"},
    split_horizon{YType::empty, "split-horizon"}
{

    yang_name = "id"; yang_parent_name = "service-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::~Id()
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::has_data() const
{
    return id.is_set
	|| split_horizon.is_set;
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(split_horizon.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "split-horizon")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::MemberInterface()
    :
    interface{YType::str, "interface"},
    interface_id{YType::str, "interface-id"},
    service_instance{YType::uint32, "service-instance"}
    	,
    split_horizon(std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::~MemberInterface()
{
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_data() const
{
    return interface.is_set
	|| interface_id.is_set
	|| service_instance.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemberInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "interface" || name == "interface-id" || name == "service-instance")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::~SplitHorizon()
{
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::BridgeDomain::CMac::CMac()
    :
    aging_time{YType::uint16, "aging-time"}
{

    yang_name = "c-mac"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::CMac::~CMac()
{
}

bool Native::BridgeDomain::CMac::has_data() const
{
    return aging_time.is_set;
}

bool Native::BridgeDomain::CMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time.yfilter);
}

std::string Native::BridgeDomain::CMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::CMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:c-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::CMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.yfilter)) leaf_name_data.push_back(aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::CMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::CMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::CMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
        aging_time.value_namespace = name_space;
        aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::CMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time")
    {
        aging_time.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::CMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging-time")
        return true;
    return false;
}

Native::BridgeDomain::Otv::Otv()
    :
    default_(std::make_shared<Native::BridgeDomain::Otv::Default>())
{
    default_->parent = this;

    yang_name = "otv"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Otv::~Otv()
{
}

bool Native::BridgeDomain::Otv::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::BridgeDomain::Otv::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::BridgeDomain::Otv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Otv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:otv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Otv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Otv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::BridgeDomain::Otv::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Otv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::BridgeDomain::Otv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Otv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Otv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::BridgeDomain::Otv::Default::Default()
    :
    age_time{YType::uint16, "age-time"}
{

    yang_name = "default"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Otv::Default::~Default()
{
}

bool Native::BridgeDomain::Otv::Default::has_data() const
{
    return age_time.is_set;
}

bool Native::BridgeDomain::Otv::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age_time.yfilter);
}

std::string Native::BridgeDomain::Otv::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:otv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Otv::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Otv::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_time.is_set || is_set(age_time.yfilter)) leaf_name_data.push_back(age_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Otv::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Otv::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Otv::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age-time")
    {
        age_time = value;
        age_time.value_namespace = name_space;
        age_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Otv::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age-time")
    {
        age_time.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Otv::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age-time")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Parameterized()
    :
    vlan(nullptr) // presence node
{

    yang_name = "parameterized"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::~Parameterized()
{
}

bool Native::BridgeDomain::Parameterized::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::BridgeDomain::Parameterized::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::BridgeDomain::Parameterized::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:parameterized";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::BridgeDomain::Parameterized::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Vlan()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    ip(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip>())
	,mac(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac>())
	,member(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member>())
{
    ip->parent = this;
    mac->parent = this;
    member->parent = this;

    yang_name = "vlan"; yang_parent_name = "parameterized"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::~Vlan()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::has_data() const
{
    return shutdown.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (member !=  nullptr && member->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mac" || name == "member" || name == "shutdown")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Ip()
    :
    igmp(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp>())
{
    igmp->parent = this;

    yang_name = "ip"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::~Ip()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_data() const
{
    return (igmp !=  nullptr && igmp->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (igmp !=  nullptr && igmp->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp>();
        }
        return igmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Igmp()
    :
    snooping(nullptr) // presence node
{

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::~Igmp()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Snooping()
    :
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"},
    static_{YType::str, "static"}
    	,
    check(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check>())
	,explicit_tracking(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking>())
	,mrouter(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter>())
	,querier(nullptr) // presence node
{
    check->parent = this;
    explicit_tracking->parent = this;
    mrouter->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_data() const
{
    return immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| static_.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(immediate_leave.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(report_suppression.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate_leave.is_set || is_set(immediate_leave.yfilter)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.yfilter)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(mrouter != nullptr)
    {
        children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
        immediate_leave.value_namespace = name_space;
        immediate_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
        report_suppression.value_namespace = name_space;
        report_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "report-suppression")
    {
        report_suppression.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "explicit-tracking" || name == "mrouter" || name == "querier" || name == "immediate-leave" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "report-suppression" || name == "robustness-variable" || name == "static")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{

    yang_name = "check"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_data() const
{
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_alert_option.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.yfilter)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
        rtr_alert_option.value_namespace = name_space;
        rtr_alert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-alert-option" || name == "ttl")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::empty, "limit"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    return limit.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::Mrouter()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "mrouter"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::~Mrouter()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_data() const
{
    return interface.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::empty, "address"},
    max_response_time{YType::empty, "max-response-time"},
    query_interval{YType::empty, "query-interval"},
    tcn{YType::empty, "tcn"},
    timer{YType::empty, "timer"},
    version{YType::empty, "version"}
{

    yang_name = "querier"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| tcn.is_set
	|| timer.is_set
	|| version.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(tcn.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (tcn.is_set || is_set(tcn.yfilter)) leaf_name_data.push_back(tcn.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn")
    {
        tcn = value;
        tcn.value_namespace = name_space;
        tcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "tcn")
    {
        tcn.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "max-response-time" || name == "query-interval" || name == "tcn" || name == "timer" || name == "version")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Mac()
    :
    aging_time{YType::uint16, "aging-time"},
    learning{YType::empty, "learning"}
    	,
    limit(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit>())
{
    limit->parent = this;

    yang_name = "mac"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::~Mac()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_data() const
{
    return aging_time.is_set
	|| learning.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time.yfilter)
	|| ydk::is_set(learning.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.yfilter)) leaf_name_data.push_back(aging_time.get_name_leafdata());
    if (learning.is_set || is_set(learning.yfilter)) leaf_name_data.push_back(learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
        aging_time.value_namespace = name_space;
        aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning")
    {
        learning = value;
        learning.value_namespace = name_space;
        learning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time")
    {
        aging_time.yfilter = yfilter;
    }
    if(value_path == "learning")
    {
        learning.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "aging-time" || name == "learning")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Limit()
    :
    action(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action>())
	,maximum(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum>())
{
    action->parent = this;
    maximum->parent = this;

    yang_name = "limit"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::~Limit()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action>();
        }
        return action;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "maximum")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Action()
    :
    flooding(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding>())
{
    flooding->parent = this;

    yang_name = "action"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::~Action()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_data() const
{
    return (flooding !=  nullptr && flooding->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_operation() const
{
    return is_set(yfilter)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooding")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::Flooding()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flooding"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::~Flooding()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_data() const
{
    return disable.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/action/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::Maximum()
    :
    addresses{YType::uint32, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::~Maximum()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::Member()
    :
    analysis_module{YType::uint8, "Analysis-Module"},
    fcpa{YType::uint8, "Fcpa"},
    sbc{YType::uint32, "SBC"},
    sonet_acr{YType::uint8, "SONET_ACR"},
    y_controller{YType::str, "_controller"},
    service_engine{YType::uint8, "Service-Engine"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    vpn{YType::uint32, "VPN"},
    virtual_tokenring{YType::uint32, "Virtual-TokenRing"},
    ucse{YType::uint8, "ucse"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    vfi{YType::str, "vfi"},
    vni{YType::uint32, "vni"}
{

    yang_name = "member"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::~Member()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_data() const
{
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return analysis_module.is_set
	|| fcpa.is_set
	|| sbc.is_set
	|| sonet_acr.is_set
	|| y_controller.is_set
	|| service_engine.is_set
	|| tunnel_tp.is_set
	|| vpn.is_set
	|| virtual_tokenring.is_set
	|| ucse.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| vfi.is_set
	|| vni.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_operation() const
{
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(analysis_module.yfilter)
	|| ydk::is_set(fcpa.yfilter)
	|| ydk::is_set(sbc.yfilter)
	|| ydk::is_set(sonet_acr.yfilter)
	|| ydk::is_set(y_controller.yfilter)
	|| ydk::is_set(service_engine.yfilter)
	|| ydk::is_set(tunnel_tp.yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| ydk::is_set(virtual_tokenring.yfilter)
	|| ydk::is_set(ucse.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(vfi.yfilter)
	|| ydk::is_set(vni.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (analysis_module.is_set || is_set(analysis_module.yfilter)) leaf_name_data.push_back(analysis_module.get_name_leafdata());
    if (fcpa.is_set || is_set(fcpa.yfilter)) leaf_name_data.push_back(fcpa.get_name_leafdata());
    if (sbc.is_set || is_set(sbc.yfilter)) leaf_name_data.push_back(sbc.get_name_leafdata());
    if (sonet_acr.is_set || is_set(sonet_acr.yfilter)) leaf_name_data.push_back(sonet_acr.get_name_leafdata());
    if (y_controller.is_set || is_set(y_controller.yfilter)) leaf_name_data.push_back(y_controller.get_name_leafdata());
    if (service_engine.is_set || is_set(service_engine.yfilter)) leaf_name_data.push_back(service_engine.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.yfilter)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (virtual_tokenring.is_set || is_set(virtual_tokenring.yfilter)) leaf_name_data.push_back(virtual_tokenring.get_name_leafdata());
    if (ucse.is_set || is_set(ucse.yfilter)) leaf_name_data.push_back(ucse.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.yfilter)) leaf_name_data.push_back(vfi.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mem-ipv4")
    {
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4>();
        c->parent = this;
        mem_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ACR")
    {
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR>();
        c->parent = this;
        acr.push_back(c);
        return c;
    }

    if(child_yang_name == "member-interface")
    {
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mem_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : acr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : member_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module = value;
        analysis_module.value_namespace = name_space;
        analysis_module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Fcpa")
    {
        fcpa = value;
        fcpa.value_namespace = name_space;
        fcpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SBC")
    {
        sbc = value;
        sbc.value_namespace = name_space;
        sbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr = value;
        sonet_acr.value_namespace = name_space;
        sonet_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_controller")
    {
        y_controller = value;
        y_controller.value_namespace = name_space;
        y_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Service-Engine")
    {
        service_engine = value;
        service_engine.value_namespace = name_space;
        service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
        tunnel_tp.value_namespace = name_space;
        tunnel_tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VPN")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring = value;
        virtual_tokenring.value_namespace = name_space;
        virtual_tokenring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucse")
    {
        ucse = value;
        ucse.value_namespace = name_space;
        ucse.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vfi")
    {
        vfi = value;
        vfi.value_namespace = name_space;
        vfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module.yfilter = yfilter;
    }
    if(value_path == "Fcpa")
    {
        fcpa.yfilter = yfilter;
    }
    if(value_path == "SBC")
    {
        sbc.yfilter = yfilter;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr.yfilter = yfilter;
    }
    if(value_path == "_controller")
    {
        y_controller.yfilter = yfilter;
    }
    if(value_path == "Service-Engine")
    {
        service_engine.yfilter = yfilter;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp.yfilter = yfilter;
    }
    if(value_path == "VPN")
    {
        vpn.yfilter = yfilter;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring.yfilter = yfilter;
    }
    if(value_path == "ucse")
    {
        ucse.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "vfi")
    {
        vfi.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mem-ipv4" || name == "ACR" || name == "member-interface" || name == "Analysis-Module" || name == "Fcpa" || name == "SBC" || name == "SONET_ACR" || name == "_controller" || name == "Service-Engine" || name == "Tunnel-tp" || name == "VPN" || name == "Virtual-TokenRing" || name == "ucse" || name == "vasileft" || name == "vasiright" || name == "vfi" || name == "vni")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemIpv4()
    :
    mem_ipv4{YType::str, "mem-ipv4"},
    template_{YType::str, "template"}
    	,
    encapsulation(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "mem-ipv4"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::~MemIpv4()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_data() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_data())
            return true;
    }
    return mem_ipv4.is_set
	|| template_.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_operation() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mem_ipv4.yfilter)
	|| ydk::is_set(template_.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-ipv4" <<"[mem-ipv4='" <<mem_ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_ipv4.is_set || is_set(mem_ipv4.yfilter)) leaf_name_data.push_back(mem_ipv4.get_name_leafdata());
    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mem-vcid")
    {
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid>();
        c->parent = this;
        mem_vcid.push_back(c);
        return c;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mem_vcid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4 = value;
        mem_ipv4.value_namespace = name_space;
        mem_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4.yfilter = yfilter;
    }
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mem-vcid" || name == "encapsulation" || name == "mem-ipv4" || name == "template")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::MemVcid()
    :
    mem_vcid{YType::uint32, "mem-vcid"}
    	,
    encapsulation(nullptr) // presence node
	,template_(nullptr) // presence node
{

    yang_name = "mem-vcid"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::~MemVcid()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_data() const
{
    return mem_vcid.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mem_vcid.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-vcid" <<"[mem-vcid='" <<mem_vcid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_vcid.is_set || is_set(mem_vcid.yfilter)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
        mem_vcid.value_namespace = name_space;
        mem_vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "template" || name == "mem-vcid")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::Template()
    :
    template_{YType::str, "template"}
{

    yang_name = "template"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::~Template()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::has_data() const
{
    return template_.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ACR()
    :
    acr_int{YType::str, "acr-int"}
    	,
    service_instance(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance>())
{
    service_instance->parent = this;

    yang_name = "ACR"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::~ACR()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::has_data() const
{
    return acr_int.is_set
	|| (service_instance !=  nullptr && service_instance->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr_int.yfilter)
	|| (service_instance !=  nullptr && service_instance->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACR" <<"[acr-int='" <<acr_int <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr_int.is_set || is_set(acr_int.yfilter)) leaf_name_data.push_back(acr_int.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-instance")
    {
        if(service_instance == nullptr)
        {
            service_instance = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance>();
        }
        return service_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_instance != nullptr)
    {
        children["service-instance"] = service_instance;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr-int")
    {
        acr_int = value;
        acr_int.value_namespace = name_space;
        acr_int.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr-int")
    {
        acr_int.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-instance" || name == "acr-int")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::ServiceInstance()
{

    yang_name = "service-instance"; yang_parent_name = "ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::~ServiceInstance()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::Id()
    :
    id{YType::uint16, "id"},
    split_horizon{YType::empty, "split-horizon"}
{

    yang_name = "id"; yang_parent_name = "service-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::~Id()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::has_data() const
{
    return id.is_set
	|| split_horizon.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(split_horizon.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "split-horizon")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::MemberInterface()
    :
    interface{YType::str, "interface"},
    interface_id{YType::str, "interface-id"},
    service_instance{YType::uint32, "service-instance"}
    	,
    split_horizon(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::~MemberInterface()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_data() const
{
    return interface.is_set
	|| interface_id.is_set
	|| service_instance.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "interface" || name == "interface-id" || name == "service-instance")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::~SplitHorizon()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Crypto()
    :
    xauth{YType::str, "Cisco-IOS-XE-crypto:xauth"}
    	,
    call(std::make_shared<Native::Crypto::Call>())
	,engine(std::make_shared<Native::Crypto::Engine>())
	,gdoi(std::make_shared<Native::Crypto::Gdoi>())
	,ikev2(std::make_shared<Native::Crypto::Ikev2>())
	,gkm(std::make_shared<Native::Crypto::Gkm>())
	,ipsec(std::make_shared<Native::Crypto::Ipsec>())
	,isakmp(std::make_shared<Native::Crypto::Isakmp>())
	,key(std::make_shared<Native::Crypto::Key>())
	,logging(std::make_shared<Native::Crypto::Logging>())
	,crypto_map(std::make_shared<Native::Crypto::CryptoMap>())
	,map_ipv6_gdoi(std::make_shared<Native::Crypto::MapIpv6Gdoi>())
	,map_client(std::make_shared<Native::Crypto::MapClient>())
	,mib(std::make_shared<Native::Crypto::Mib>())
	,pki(std::make_shared<Native::Crypto::Pki>())
	,tls_tunnel(std::make_shared<Native::Crypto::TlsTunnel>())
	,ssl(std::make_shared<Native::Crypto::Ssl>())
	,vpn(std::make_shared<Native::Crypto::Vpn>())
{
    call->parent = this;
    engine->parent = this;
    gdoi->parent = this;
    ikev2->parent = this;
    gkm->parent = this;
    ipsec->parent = this;
    isakmp->parent = this;
    key->parent = this;
    logging->parent = this;
    crypto_map->parent = this;
    map_ipv6_gdoi->parent = this;
    map_client->parent = this;
    mib->parent = this;
    pki->parent = this;
    tls_tunnel->parent = this;
    ssl->parent = this;
    vpn->parent = this;

    yang_name = "crypto"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::~Crypto()
{
}

bool Native::Crypto::has_data() const
{
    for (std::size_t index=0; index<dynamic_map.size(); index++)
    {
        if(dynamic_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_data())
            return true;
    }
    return xauth.is_set
	|| (call !=  nullptr && call->has_data())
	|| (engine !=  nullptr && engine->has_data())
	|| (gdoi !=  nullptr && gdoi->has_data())
	|| (ikev2 !=  nullptr && ikev2->has_data())
	|| (gkm !=  nullptr && gkm->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (crypto_map !=  nullptr && crypto_map->has_data())
	|| (map_ipv6_gdoi !=  nullptr && map_ipv6_gdoi->has_data())
	|| (map_client !=  nullptr && map_client->has_data())
	|| (mib !=  nullptr && mib->has_data())
	|| (pki !=  nullptr && pki->has_data())
	|| (tls_tunnel !=  nullptr && tls_tunnel->has_data())
	|| (ssl !=  nullptr && ssl->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::Crypto::has_operation() const
{
    for (std::size_t index=0; index<dynamic_map.size(); index++)
    {
        if(dynamic_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xauth.yfilter)
	|| (call !=  nullptr && call->has_operation())
	|| (engine !=  nullptr && engine->has_operation())
	|| (gdoi !=  nullptr && gdoi->has_operation())
	|| (ikev2 !=  nullptr && ikev2->has_operation())
	|| (gkm !=  nullptr && gkm->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (crypto_map !=  nullptr && crypto_map->has_operation())
	|| (map_ipv6_gdoi !=  nullptr && map_ipv6_gdoi->has_operation())
	|| (map_client !=  nullptr && map_client->has_operation())
	|| (mib !=  nullptr && mib->has_operation())
	|| (pki !=  nullptr && pki->has_operation())
	|| (tls_tunnel !=  nullptr && tls_tunnel->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::Crypto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xauth.is_set || is_set(xauth.yfilter)) leaf_name_data.push_back(xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-crypto:call")
    {
        if(call == nullptr)
        {
            call = std::make_shared<Native::Crypto::Call>();
        }
        return call;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:dynamic-map")
    {
        auto c = std::make_shared<Native::Crypto::DynamicMap>();
        c->parent = this;
        dynamic_map.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:engine")
    {
        if(engine == nullptr)
        {
            engine = std::make_shared<Native::Crypto::Engine>();
        }
        return engine;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:gdoi")
    {
        if(gdoi == nullptr)
        {
            gdoi = std::make_shared<Native::Crypto::Gdoi>();
        }
        return gdoi;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:ikev2")
    {
        if(ikev2 == nullptr)
        {
            ikev2 = std::make_shared<Native::Crypto::Ikev2>();
        }
        return ikev2;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:gkm")
    {
        if(gkm == nullptr)
        {
            gkm = std::make_shared<Native::Crypto::Gkm>();
        }
        return gkm;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:identity")
    {
        auto c = std::make_shared<Native::Crypto::Identity>();
        c->parent = this;
        identity.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Key>();
        }
        return key;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:keyring")
    {
        auto c = std::make_shared<Native::Crypto::Keyring>();
        c->parent = this;
        keyring.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Crypto::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:crypto-map")
    {
        if(crypto_map == nullptr)
        {
            crypto_map = std::make_shared<Native::Crypto::CryptoMap>();
        }
        return crypto_map;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:map-ipv6-gdoi")
    {
        if(map_ipv6_gdoi == nullptr)
        {
            map_ipv6_gdoi = std::make_shared<Native::Crypto::MapIpv6Gdoi>();
        }
        return map_ipv6_gdoi;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:map-client")
    {
        if(map_client == nullptr)
        {
            map_client = std::make_shared<Native::Crypto::MapClient>();
        }
        return map_client;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<Native::Crypto::Mib>();
        }
        return mib;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Pki>();
        }
        return pki;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:tls-tunnel")
    {
        if(tls_tunnel == nullptr)
        {
            tls_tunnel = std::make_shared<Native::Crypto::TlsTunnel>();
        }
        return tls_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Crypto::Ssl>();
        }
        return ssl;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::Crypto::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(call != nullptr)
    {
        children["Cisco-IOS-XE-crypto:call"] = call;
    }

    count = 0;
    for (auto const & c : dynamic_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(engine != nullptr)
    {
        children["Cisco-IOS-XE-crypto:engine"] = engine;
    }

    if(gdoi != nullptr)
    {
        children["Cisco-IOS-XE-crypto:gdoi"] = gdoi;
    }

    if(ikev2 != nullptr)
    {
        children["Cisco-IOS-XE-crypto:ikev2"] = ikev2;
    }

    if(gkm != nullptr)
    {
        children["Cisco-IOS-XE-crypto:gkm"] = gkm;
    }

    count = 0;
    for (auto const & c : identity)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(ipsec != nullptr)
    {
        children["Cisco-IOS-XE-crypto:ipsec"] = ipsec;
    }

    if(isakmp != nullptr)
    {
        children["Cisco-IOS-XE-crypto:isakmp"] = isakmp;
    }

    if(key != nullptr)
    {
        children["Cisco-IOS-XE-crypto:key"] = key;
    }

    count = 0;
    for (auto const & c : keyring)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(logging != nullptr)
    {
        children["Cisco-IOS-XE-crypto:logging"] = logging;
    }

    if(crypto_map != nullptr)
    {
        children["Cisco-IOS-XE-crypto:crypto-map"] = crypto_map;
    }

    if(map_ipv6_gdoi != nullptr)
    {
        children["Cisco-IOS-XE-crypto:map-ipv6-gdoi"] = map_ipv6_gdoi;
    }

    if(map_client != nullptr)
    {
        children["Cisco-IOS-XE-crypto:map-client"] = map_client;
    }

    if(mib != nullptr)
    {
        children["Cisco-IOS-XE-crypto:mib"] = mib;
    }

    if(pki != nullptr)
    {
        children["Cisco-IOS-XE-crypto:pki"] = pki;
    }

    if(tls_tunnel != nullptr)
    {
        children["Cisco-IOS-XE-crypto:tls-tunnel"] = tls_tunnel;
    }

    if(ssl != nullptr)
    {
        children["Cisco-IOS-XE-crypto:ssl"] = ssl;
    }

    if(vpn != nullptr)
    {
        children["Cisco-IOS-XE-crypto:vpn"] = vpn;
    }

    return children;
}

void Native::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-crypto:xauth")
    {
        xauth = value;
        xauth.value_namespace = name_space;
        xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xauth")
    {
        xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "call" || name == "dynamic-map" || name == "engine" || name == "gdoi" || name == "ikev2" || name == "gkm" || name == "identity" || name == "ipsec" || name == "isakmp" || name == "key" || name == "keyring" || name == "logging" || name == "crypto-map" || name == "map-ipv6-gdoi" || name == "map-client" || name == "mib" || name == "pki" || name == "tls-tunnel" || name == "ssl" || name == "vpn" || name == "xauth")
        return true;
    return false;
}

Native::Crypto::Call::Call()
    :
    admission(std::make_shared<Native::Crypto::Call::Admission>())
{
    admission->parent = this;

    yang_name = "call"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::~Call()
{
}

bool Native::Crypto::Call::has_data() const
{
    return (admission !=  nullptr && admission->has_data());
}

bool Native::Crypto::Call::has_operation() const
{
    return is_set(yfilter)
	|| (admission !=  nullptr && admission->has_operation());
}

std::string Native::Crypto::Call::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:call";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admission")
    {
        if(admission == nullptr)
        {
            admission = std::make_shared<Native::Crypto::Call::Admission>();
        }
        return admission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(admission != nullptr)
    {
        children["admission"] = admission;
    }

    return children;
}

void Native::Crypto::Call::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Call::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Call::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admission")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Admission()
    :
    limit(std::make_shared<Native::Crypto::Call::Admission::Limit>())
{
    limit->parent = this;

    yang_name = "admission"; yang_parent_name = "call"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::~Admission()
{
}

bool Native::Crypto::Call::Admission::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Crypto::Call::Admission::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Crypto::Call::Admission::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Crypto::Call::Admission::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Crypto::Call::Admission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Call::Admission::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Call::Admission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::Limit()
    :
    all(std::make_shared<Native::Crypto::Call::Admission::Limit::All>())
	,ike(std::make_shared<Native::Crypto::Call::Admission::Limit::Ike>())
	,ipsec(std::make_shared<Native::Crypto::Call::Admission::Limit::Ipsec>())
{
    all->parent = this;
    ike->parent = this;
    ipsec->parent = this;

    yang_name = "limit"; yang_parent_name = "admission"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::~Limit()
{
}

bool Native::Crypto::Call::Admission::Limit::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (ike !=  nullptr && ike->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Crypto::Call::Admission::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (ike !=  nullptr && ike->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Crypto::Call::Admission::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Crypto::Call::Admission::Limit::All>();
        }
        return all;
    }

    if(child_yang_name == "ike")
    {
        if(ike == nullptr)
        {
            ike = std::make_shared<Native::Crypto::Call::Admission::Limit::Ike>();
        }
        return ike;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Call::Admission::Limit::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(ike != nullptr)
    {
        children["ike"] = ike;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Crypto::Call::Admission::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Call::Admission::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Call::Admission::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "ike" || name == "ipsec")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::All::All()
    :
    in_negotiation_sa{YType::uint32, "in-negotiation-sa"}
{

    yang_name = "all"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::All::~All()
{
}

bool Native::Crypto::Call::Admission::Limit::All::has_data() const
{
    return in_negotiation_sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_negotiation_sa.yfilter);
}

std::string Native::Crypto::Call::Admission::Limit::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_negotiation_sa.is_set || is_set(in_negotiation_sa.yfilter)) leaf_name_data.push_back(in_negotiation_sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Call::Admission::Limit::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa = value;
        in_negotiation_sa.value_namespace = name_space;
        in_negotiation_sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Call::Admission::Limit::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Call::Admission::Limit::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-negotiation-sa")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::Ike::Ike()
    :
    in_negotiation_sa{YType::uint32, "in-negotiation-sa"},
    sa{YType::uint32, "sa"}
{

    yang_name = "ike"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::Ike::~Ike()
{
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_data() const
{
    return in_negotiation_sa.is_set
	|| sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_negotiation_sa.yfilter)
	|| ydk::is_set(sa.yfilter);
}

std::string Native::Crypto::Call::Admission::Limit::Ike::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::Ike::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ike";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::Ike::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_negotiation_sa.is_set || is_set(in_negotiation_sa.yfilter)) leaf_name_data.push_back(in_negotiation_sa.get_name_leafdata());
    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::Ike::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::Ike::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Call::Admission::Limit::Ike::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa = value;
        in_negotiation_sa.value_namespace = name_space;
        in_negotiation_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Call::Admission::Limit::Ike::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa.yfilter = yfilter;
    }
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-negotiation-sa" || name == "sa")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::Ipsec::Ipsec()
    :
    sa{YType::uint32, "sa"}
{

    yang_name = "ipsec"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_data() const
{
    return sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa.yfilter);
}

std::string Native::Crypto::Call::Admission::Limit::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::Call::Admission::Limit::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Call::Admission::Limit::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa")
        return true;
    return false;
}

Native::Crypto::DynamicMap::DynamicMap()
    :
    name{YType::str, "name"},
    sequence{YType::uint16, "sequence"},
    description{YType::str, "description"}
    	,
    default_(std::make_shared<Native::Crypto::DynamicMap::Default>())
	,dialer(std::make_shared<Native::Crypto::DynamicMap::Dialer>())
	,match(std::make_shared<Native::Crypto::DynamicMap::Match>())
	,qos(std::make_shared<Native::Crypto::DynamicMap::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::DynamicMap::Set>())
{
    default_->parent = this;
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "dynamic-map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::DynamicMap::~DynamicMap()
{
}

bool Native::Crypto::DynamicMap::has_data() const
{
    return name.is_set
	|| sequence.is_set
	|| description.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::DynamicMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::DynamicMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::DynamicMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:dynamic-map" <<"[name='" <<name <<"']" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::DynamicMap::Default>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::DynamicMap::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::DynamicMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::DynamicMap::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::DynamicMap::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::DynamicMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "name" || name == "sequence" || name == "description")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default::Default()
    :
    description{YType::empty, "description"}
    	,
    dialer(std::make_shared<Native::Crypto::DynamicMap::Default::Dialer>())
	,match(std::make_shared<Native::Crypto::DynamicMap::Default::Match>())
	,qos(std::make_shared<Native::Crypto::DynamicMap::Default::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::DynamicMap::Default::Set>())
{
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "default"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default::~Default()
{
}

bool Native::Crypto::DynamicMap::Default::has_data() const
{
    return description.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::DynamicMap::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::DynamicMap::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::DynamicMap::Default::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::DynamicMap::Default::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::DynamicMap::Default::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::Default::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::DynamicMap::Default::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::DynamicMap::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "description")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default::Dialer::~Dialer()
{
}

bool Native::Crypto::DynamicMap::Default::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Default::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::DynamicMap::Default::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::DynamicMap::Default::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default::Match::Match()
    :
    address{YType::empty, "address"}
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default::Match::~Match()
{
}

bool Native::Crypto::DynamicMap::Default::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::DynamicMap::Default::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::DynamicMap::Default::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::DynamicMap::Default::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default::Qos::~Qos()
{
}

bool Native::Crypto::DynamicMap::Default::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Default::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::DynamicMap::Default::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::DynamicMap::Default::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::Default::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::DynamicMap::Default::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::DynamicMap::Default::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Default::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Default::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::DynamicMap::Default::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::empty, "transform-set"}
    	,
    ip(std::make_shared<Native::Crypto::DynamicMap::Default::Set::Ip>())
	,nat(std::make_shared<Native::Crypto::DynamicMap::Default::Set::Nat>())
	,peer_container(std::make_shared<Native::Crypto::DynamicMap::Default::Set::PeerContainer>())
	,pfs(nullptr) // presence node
	,reverse_route(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::DynamicMap::Default::Set::SecurityAssociation>())
{
    ip->parent = this;
    nat->parent = this;
    peer_container->parent = this;
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default::Set::~Set()
{
}

bool Native::Crypto::DynamicMap::Default::Set::has_data() const
{
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| transform_set.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (peer_container !=  nullptr && peer_container->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::DynamicMap::Default::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (peer_container !=  nullptr && peer_container->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::DynamicMap::Default::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.yfilter)) leaf_name_data.push_back(transform_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Crypto::DynamicMap::Default::Set::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::DynamicMap::Default::Set::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "peer-container")
    {
        if(peer_container == nullptr)
        {
            peer_container = std::make_shared<Native::Crypto::DynamicMap::Default::Set::PeerContainer>();
        }
        return peer_container;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::DynamicMap::Default::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::Default::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::DynamicMap::Default::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(peer_container != nullptr)
    {
        children["peer-container"] = peer_container;
    }

    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::DynamicMap::Default::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
        transform_set.value_namespace = name_space;
        transform_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "nat" || name == "peer-container" || name == "pfs" || name == "reverse-route" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default::Set::Ip::Ip()
    :
    access_group{YType::str, "access-group"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "ip"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default::Set::Ip::~Ip()
{
}

bool Native::Crypto::DynamicMap::Default::Set::Ip::has_data() const
{
    return access_group.is_set
	|| direction.is_set;
}

bool Native::Crypto::DynamicMap::Default::Set::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Crypto::DynamicMap::Default::Set::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default::Set::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default::Set::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default::Set::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Crypto::DynamicMap::Default::Set::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default::Set::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default::Set::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "direction")
        return true;
    return false;
}

const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Interface::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Interface::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Interface::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Vlan::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Vlan::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Vlan::Direction::tx {2, "tx"};

const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::on_for_login_auth {0, "on-for-login-auth"};
const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::include_in_access_req {1, "include-in-access-req"};
const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::support_multiple {2, "support-multiple"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId::mac {0, "mac"};
const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId::send {1, "send"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::Format::ietf {0, "ietf"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase::lower_case {0, "lower-case"};
const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase::upper_case {1, "upper-case"};

const Enum::YLeaf Native::RadiusServer::Host::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Host::Key::Y_7 {1, "7"};

const Enum::YLeaf Native::RadiusServer::Host::Test::Username::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Host::Test::Username::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::RadiusServer::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Radius::Filter::Match::match_all {0, "match-all"};
const Enum::YLeaf Native::Radius::Filter::Match::match_any {1, "match-any"};

const Enum::YLeaf Native::Radius::Server::AutomateTester::AtOption::probe_on {0, "probe-on"};

const Enum::YLeaf Native::Radius::Server::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Radius::Server::Key::Encryption::Y_5 {1, "5"};

const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_6 {1, "6"};
const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_7 {2, "7"};

const Enum::YLeaf Native::AlarmContact::Severity::critical {0, "critical"};
const Enum::YLeaf Native::AlarmContact::Severity::major_ {1, "major"};
const Enum::YLeaf Native::AlarmContact::Severity::minor {2, "minor"};

const Enum::YLeaf Native::AlarmContact::Trigger::open {0, "open"};
const Enum::YLeaf Native::AlarmContact::Trigger::closed {1, "closed"};

const Enum::YLeaf Native::Crypto::DynamicMap::Default::Set::Ip::Direction::in {0, "in"};
const Enum::YLeaf Native::Crypto::DynamicMap::Default::Set::Ip::Direction::out {1, "out"};


}
}

