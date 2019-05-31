
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_ds.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_ds {

Services::Services()
    :
    all_locations(this, {"location"})
{

    yang_name = "services"; yang_parent_name = "Cisco-IOS-XR-sysadmin-ds"; is_top_level_class = true; has_list_ancestor = false; 
}

Services::~Services()
{
}

bool Services::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_data())
            return true;
    }
    return false;
}

bool Services::has_operation() const
{
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-ds:services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-locations")
    {
        auto ent_ = std::make_shared<Services::AllLocations>();
        ent_->parent = this;
        all_locations.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Services::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_locations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Services::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Services::clone_ptr() const
{
    return std::make_shared<Services>();
}

std::string Services::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Services::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Services::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Services::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-locations")
        return true;
    return false;
}

Services::AllLocations::AllLocations()
    :
    location{YType::str, "location"}
        ,
    services(this, {"name"})
{

    yang_name = "all-locations"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = false; 
}

Services::AllLocations::~AllLocations()
{
}

bool Services::AllLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<services.len(); index++)
    {
        if(services[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool Services::AllLocations::has_operation() const
{
    for (std::size_t index=0; index<services.len(); index++)
    {
        if(services[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Services::AllLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-ds:services/" << get_segment_path();
    return path_buffer.str();
}

std::string Services::AllLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-locations";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Services::AllLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Services::AllLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "services")
    {
        auto ent_ = std::make_shared<Services::AllLocations::Services_>();
        ent_->parent = this;
        services.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Services::AllLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : services.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Services::AllLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Services::AllLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Services::AllLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "services" || name == "location")
        return true;
    return false;
}

Services::AllLocations::Services_::Services_()
    :
    name{YType::str, "name"}
        ,
    endpoint(this, {})
    , registrations(this, {})
{

    yang_name = "services"; yang_parent_name = "all-locations"; is_top_level_class = false; has_list_ancestor = true; 
}

Services::AllLocations::Services_::~Services_()
{
}

bool Services::AllLocations::Services_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<endpoint.len(); index++)
    {
        if(endpoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<registrations.len(); index++)
    {
        if(registrations[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Services::AllLocations::Services_::has_operation() const
{
    for (std::size_t index=0; index<endpoint.len(); index++)
    {
        if(endpoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<registrations.len(); index++)
    {
        if(registrations[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Services::AllLocations::Services_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Services::AllLocations::Services_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Services::AllLocations::Services_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "endpoint")
    {
        auto ent_ = std::make_shared<Services::AllLocations::Services_::Endpoint>();
        ent_->parent = this;
        endpoint.append(ent_);
        return ent_;
    }

    if(child_yang_name == "registrations")
    {
        auto ent_ = std::make_shared<Services::AllLocations::Services_::Registrations>();
        ent_->parent = this;
        registrations.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Services::AllLocations::Services_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : endpoint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : registrations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Services::AllLocations::Services_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Services::AllLocations::Services_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Services::AllLocations::Services_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "endpoint" || name == "registrations" || name == "name")
        return true;
    return false;
}

Services::AllLocations::Services_::Endpoint::Endpoint()
    :
    scope{YType::enumeration, "scope"},
    ip{YType::str, "ip"},
    port{YType::uint16, "port"},
    role{YType::enumeration, "role"},
    issu_role{YType::enumeration, "issu_role"},
    node{YType::str, "node"}
{

    yang_name = "endpoint"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = true; 
}

Services::AllLocations::Services_::Endpoint::~Endpoint()
{
}

bool Services::AllLocations::Services_::Endpoint::has_data() const
{
    if (is_presence_container) return true;
    return scope.is_set
	|| ip.is_set
	|| port.is_set
	|| role.is_set
	|| issu_role.is_set
	|| node.is_set;
}

bool Services::AllLocations::Services_::Endpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Services::AllLocations::Services_::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Services::AllLocations::Services_::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Services::AllLocations::Services_::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Services::AllLocations::Services_::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Services::AllLocations::Services_::Endpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu_role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void Services::AllLocations::Services_::Endpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "issu_role")
    {
        issu_role.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Services::AllLocations::Services_::Endpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "ip" || name == "port" || name == "role" || name == "issu_role" || name == "node")
        return true;
    return false;
}

Services::AllLocations::Services_::Registrations::Registrations()
    :
    client{YType::str, "client"},
    pid{YType::uint32, "pid"}
{

    yang_name = "registrations"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = true; 
}

Services::AllLocations::Services_::Registrations::~Registrations()
{
}

bool Services::AllLocations::Services_::Registrations::has_data() const
{
    if (is_presence_container) return true;
    return client.is_set
	|| pid.is_set;
}

bool Services::AllLocations::Services_::Registrations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(pid.yfilter);
}

std::string Services::AllLocations::Services_::Registrations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registrations";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Services::AllLocations::Services_::Registrations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Services::AllLocations::Services_::Registrations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Services::AllLocations::Services_::Registrations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Services::AllLocations::Services_::Registrations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
}

void Services::AllLocations::Services_::Registrations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
}

bool Services::AllLocations::Services_::Registrations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "pid")
        return true;
    return false;
}

ServicesStats::ServicesStats()
    :
    ds(std::make_shared<ServicesStats::Ds>())
    , all_locations(this, {"location"})
{
    ds->parent = this;

    yang_name = "services-stats"; yang_parent_name = "Cisco-IOS-XR-sysadmin-ds"; is_top_level_class = true; has_list_ancestor = false; 
}

ServicesStats::~ServicesStats()
{
}

bool ServicesStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_data())
            return true;
    }
    return (ds !=  nullptr && ds->has_data());
}

bool ServicesStats::has_operation() const
{
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ds !=  nullptr && ds->has_operation());
}

std::string ServicesStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-ds:services-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServicesStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ServicesStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ds")
    {
        if(ds == nullptr)
        {
            ds = std::make_shared<ServicesStats::Ds>();
        }
        return ds;
    }

    if(child_yang_name == "all-locations")
    {
        auto ent_ = std::make_shared<ServicesStats::AllLocations>();
        ent_->parent = this;
        all_locations.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ServicesStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ds != nullptr)
    {
        _children["ds"] = ds;
    }

    count_ = 0;
    for (auto ent_ : all_locations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ServicesStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServicesStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ServicesStats::clone_ptr() const
{
    return std::make_shared<ServicesStats>();
}

std::string ServicesStats::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ServicesStats::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ServicesStats::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ServicesStats::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ServicesStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ds" || name == "all-locations")
        return true;
    return false;
}

ServicesStats::Ds::Ds()
    :
    trace(this, {"buffer"})
{

    yang_name = "ds"; yang_parent_name = "services-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

ServicesStats::Ds::~Ds()
{
}

bool ServicesStats::Ds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool ServicesStats::Ds::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ServicesStats::Ds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-ds:services-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ServicesStats::Ds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServicesStats::Ds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ServicesStats::Ds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<ServicesStats::Ds::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ServicesStats::Ds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ServicesStats::Ds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServicesStats::Ds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServicesStats::Ds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

ServicesStats::Ds::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = false; 
}

ServicesStats::Ds::Trace::~Trace()
{
}

bool ServicesStats::Ds::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool ServicesStats::Ds::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string ServicesStats::Ds::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-ds:services-stats/ds/" << get_segment_path();
    return path_buffer.str();
}

std::string ServicesStats::Ds::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServicesStats::Ds::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ServicesStats::Ds::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<ServicesStats::Ds::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ServicesStats::Ds::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ServicesStats::Ds::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void ServicesStats::Ds::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool ServicesStats::Ds::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

ServicesStats::Ds::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

ServicesStats::Ds::Trace::Location::~Location()
{
}

bool ServicesStats::Ds::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool ServicesStats::Ds::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string ServicesStats::Ds::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServicesStats::Ds::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ServicesStats::Ds::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<ServicesStats::Ds::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ServicesStats::Ds::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ServicesStats::Ds::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void ServicesStats::Ds::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool ServicesStats::Ds::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

ServicesStats::Ds::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

ServicesStats::Ds::Trace::Location::AllOptions::~AllOptions()
{
}

bool ServicesStats::Ds::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool ServicesStats::Ds::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string ServicesStats::Ds::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServicesStats::Ds::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ServicesStats::Ds::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ServicesStats::Ds::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ServicesStats::Ds::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void ServicesStats::Ds::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool ServicesStats::Ds::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool ServicesStats::Ds::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

ServicesStats::AllLocations::AllLocations()
    :
    location{YType::str, "location"}
        ,
    stats(this, {"name"})
{

    yang_name = "all-locations"; yang_parent_name = "services-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

ServicesStats::AllLocations::~AllLocations()
{
}

bool ServicesStats::AllLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats.len(); index++)
    {
        if(stats[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool ServicesStats::AllLocations::has_operation() const
{
    for (std::size_t index=0; index<stats.len(); index++)
    {
        if(stats[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string ServicesStats::AllLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-ds:services-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ServicesStats::AllLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-locations";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServicesStats::AllLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ServicesStats::AllLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        auto ent_ = std::make_shared<ServicesStats::AllLocations::Stats>();
        ent_->parent = this;
        stats.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ServicesStats::AllLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ServicesStats::AllLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void ServicesStats::AllLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool ServicesStats::AllLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "location")
        return true;
    return false;
}

ServicesStats::AllLocations::Stats::Stats()
    :
    name{YType::str, "name"},
    published{YType::uint32, "published"},
    deleted{YType::uint32, "deleted"},
    modified{YType::uint32, "modified"},
    registered{YType::uint32, "registered"},
    unregistered{YType::uint32, "unregistered"},
    notifications{YType::uint32, "notifications"},
    remote_sent{YType::uint32, "remote_sent"},
    remote_recv{YType::uint32, "remote_recv"}
{

    yang_name = "stats"; yang_parent_name = "all-locations"; is_top_level_class = false; has_list_ancestor = true; 
}

ServicesStats::AllLocations::Stats::~Stats()
{
}

bool ServicesStats::AllLocations::Stats::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| published.is_set
	|| deleted.is_set
	|| modified.is_set
	|| registered.is_set
	|| unregistered.is_set
	|| notifications.is_set
	|| remote_sent.is_set
	|| remote_recv.is_set;
}

bool ServicesStats::AllLocations::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(published.yfilter)
	|| ydk::is_set(deleted.yfilter)
	|| ydk::is_set(modified.yfilter)
	|| ydk::is_set(registered.yfilter)
	|| ydk::is_set(unregistered.yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(remote_sent.yfilter)
	|| ydk::is_set(remote_recv.yfilter);
}

std::string ServicesStats::AllLocations::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServicesStats::AllLocations::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (published.is_set || is_set(published.yfilter)) leaf_name_data.push_back(published.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (modified.is_set || is_set(modified.yfilter)) leaf_name_data.push_back(modified.get_name_leafdata());
    if (registered.is_set || is_set(registered.yfilter)) leaf_name_data.push_back(registered.get_name_leafdata());
    if (unregistered.is_set || is_set(unregistered.yfilter)) leaf_name_data.push_back(unregistered.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (remote_sent.is_set || is_set(remote_sent.yfilter)) leaf_name_data.push_back(remote_sent.get_name_leafdata());
    if (remote_recv.is_set || is_set(remote_recv.yfilter)) leaf_name_data.push_back(remote_recv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ServicesStats::AllLocations::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ServicesStats::AllLocations::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ServicesStats::AllLocations::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "published")
    {
        published = value;
        published.value_namespace = name_space;
        published.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted")
    {
        deleted = value;
        deleted.value_namespace = name_space;
        deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modified")
    {
        modified = value;
        modified.value_namespace = name_space;
        modified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registered")
    {
        registered = value;
        registered.value_namespace = name_space;
        registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unregistered")
    {
        unregistered = value;
        unregistered.value_namespace = name_space;
        unregistered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote_sent")
    {
        remote_sent = value;
        remote_sent.value_namespace = name_space;
        remote_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote_recv")
    {
        remote_recv = value;
        remote_recv.value_namespace = name_space;
        remote_recv.value_namespace_prefix = name_space_prefix;
    }
}

void ServicesStats::AllLocations::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "published")
    {
        published.yfilter = yfilter;
    }
    if(value_path == "deleted")
    {
        deleted.yfilter = yfilter;
    }
    if(value_path == "modified")
    {
        modified.yfilter = yfilter;
    }
    if(value_path == "registered")
    {
        registered.yfilter = yfilter;
    }
    if(value_path == "unregistered")
    {
        unregistered.yfilter = yfilter;
    }
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "remote_sent")
    {
        remote_sent.yfilter = yfilter;
    }
    if(value_path == "remote_recv")
    {
        remote_recv.yfilter = yfilter;
    }
}

bool ServicesStats::AllLocations::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "published" || name == "deleted" || name == "modified" || name == "registered" || name == "unregistered" || name == "notifications" || name == "remote_sent" || name == "remote_recv")
        return true;
    return false;
}

const Enum::YLeaf ServiceScope::None {0, "None"};
const Enum::YLeaf ServiceScope::Rack {1, "Rack"};
const Enum::YLeaf ServiceScope::System {2, "System"};
const Enum::YLeaf ServiceScope::Node {3, "Node"};

const Enum::YLeaf ProcessRole::NoRole {0, "NoRole"};
const Enum::YLeaf ProcessRole::Active {1, "Active"};
const Enum::YLeaf ProcessRole::Standby {2, "Standby"};
const Enum::YLeaf ProcessRole::None {3, "None"};
const Enum::YLeaf ProcessRole::Unknown {254, "Unknown"};

const Enum::YLeaf ProcessIssuRole::Primary {1, "Primary"};
const Enum::YLeaf ProcessIssuRole::Secondary {2, "Secondary"};
const Enum::YLeaf ProcessIssuRole::Tertiary {3, "Tertiary"};
const Enum::YLeaf ProcessIssuRole::Unknown {254, "Unknown"};


}
}

