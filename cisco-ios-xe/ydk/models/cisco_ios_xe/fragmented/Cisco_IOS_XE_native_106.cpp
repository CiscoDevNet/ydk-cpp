
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_106.hpp"
#include "Cisco_IOS_XE_native_108.hpp"
#include "Cisco_IOS_XE_native_107.hpp"
#include "Cisco_IOS_XE_native_109.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "eigrp"; yang_parent_name = "database";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::~Eigrp()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "eigrp";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::Isis()
    :
    process_id{YType::str, "process-id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "isis"; yang_parent_name = "database";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::~Isis()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::has_data() const
{
    return process_id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(process_id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "isis";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only{YType::empty, "warning-only"},
    warning_only1{YType::empty, "warning-only1"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "database";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only.is_set
	|| warning_only1.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(threshold.operation)
	|| is_set(threshold1.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_only1.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.operation)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.operation)) leaf_name_data.push_back(warning_only1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::Nd()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "nd"; yang_parent_name = "database";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::~Nd()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "nd";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospf"; yang_parent_name = "database";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::~Ospf()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospf";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::Static_()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "static"; yang_parent_name = "database";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::~Static_()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "static";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "rip"; yang_parent_name = "database";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::~Rip()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "rip";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MapCache()
    :
    application(nullptr) // presence node
	,connected(nullptr) // presence node
	,isis(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis>())
	,maximum_prefix(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix>())
	,nd(nullptr) // presence node
	,static_(nullptr) // presence node
{
    isis->parent = this;

    maximum_prefix->parent = this;

    yang_name = "map-cache"; yang_parent_name = "route-import";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::has_data() const
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
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::has_operation() const
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
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (application !=  nullptr && application->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::Application()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "application"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::~Application()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "application";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "bgp"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::~Bgp()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "bgp";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::Connected()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "connected"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::~Connected()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "connected";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "eigrp"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::~Eigrp()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "eigrp";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "isis";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only{YType::empty, "warning-only"},
    warning_only1{YType::empty, "warning-only1"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only.is_set
	|| warning_only1.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(threshold.operation)
	|| is_set(threshold1.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_only1.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.operation)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.operation)) leaf_name_data.push_back(warning_only1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::Nd()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "nd"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::~Nd()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "nd";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "ospf"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::~Ospf()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "ospf";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::Static_()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::~Static_()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "static";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "rip"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::~Rip()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "rip";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    auto_discover_rlocs{YType::empty, "auto-discover-rlocs"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "eid-cont"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::has_data() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| auto_discover_rlocs.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(auto_discover_rlocs.operation)
	|| is_set(locator_set.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (auto_discover_rlocs.is_set || is_set(auto_discover_rlocs.operation)) leaf_name_data.push_back(auto_discover_rlocs.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addrees")
    {
        for(auto const & c : ipv4_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees>();
        c->parent = this;
        ipv4_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv4-interface")
    {
        for(auto const & c : ipv4_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        for(auto const & c : ipv6_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees>();
        c->parent = this;
        ipv6_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv6-interface")
    {
        for(auto const & c : ipv6_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "auto-discover-rlocs")
    {
        auto_discover_rlocs = value;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::Ipv4Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::~Ipv4Interface()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::Ipv6Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::~Ipv6Interface()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ipv6::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Ethernet()
    :
    map_request_source{YType::str, "map-request-source"}
    	,
    broadcast_underlay(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay>())
	,database_mapping(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping>())
	,default_(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__>())
	,eid_table(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit>())
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest>())
{
    broadcast_underlay->parent = this;

    database_mapping->parent = this;

    default_->parent = this;

    eid_table->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "ethernet"; yang_parent_name = "service";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::~Ethernet()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::has_data() const
{
    return map_request_source.is_set
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(map_request_source.operation)
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-underlay")
    {
        if(broadcast_underlay == nullptr)
        {
            broadcast_underlay = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay>();
        }
        return broadcast_underlay;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__>();
        }
        return default_;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_underlay != nullptr)
    {
        children["broadcast-underlay"] = broadcast_underlay;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Default__()
    :
    map_request_source{YType::str, "map-request-source"}
    	,
    broadcast_underlay(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay>())
	,database_mapping(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping>())
	,eid_table(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit>())
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest>())
{
    broadcast_underlay->parent = this;

    database_mapping->parent = this;

    eid_table->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "default"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::~Default__()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::has_data() const
{
    return map_request_source.is_set
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::has_operation() const
{
    return is_set(operation)
	|| is_set(map_request_source.operation)
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default__' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-underlay")
    {
        if(broadcast_underlay == nullptr)
        {
            broadcast_underlay = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay>();
        }
        return broadcast_underlay;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_underlay != nullptr)
    {
        children["broadcast-underlay"] = broadcast_underlay;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable::EidTable()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "eid-table"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable::~EidTable()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable::has_data() const
{
    return vlan.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EidTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay::BroadcastUnderlay()
    :
    ipv4_multicast{YType::str, "ipv4-multicast"},
    ipv6_multicast{YType::str, "ipv6-multicast"}
{
    yang_name = "broadcast-underlay"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay::~BroadcastUnderlay()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay::has_data() const
{
    return ipv4_multicast.is_set
	|| ipv6_multicast.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_multicast.operation)
	|| is_set(ipv6_multicast.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-underlay";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastUnderlay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_multicast.is_set || is_set(ipv4_multicast.operation)) leaf_name_data.push_back(ipv4_multicast.get_name_leafdata());
    if (ipv6_multicast.is_set || is_set(ipv6_multicast.operation)) leaf_name_data.push_back(ipv6_multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::BroadcastUnderlay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-multicast")
    {
        ipv4_multicast = value;
    }
    if(value_path == "ipv6-multicast")
    {
        ipv6_multicast = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "eid-cont"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::has_data() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(locator_set.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addrees")
    {
        for(auto const & c : ipv4_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees>();
        c->parent = this;
        ipv4_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv4-interface")
    {
        for(auto const & c : ipv4_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        for(auto const & c : ipv6_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees>();
        c->parent = this;
        ipv6_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv6-interface")
    {
        for(auto const & c : ipv6_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::Ipv4Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::~Ipv4Interface()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::Ipv6Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::~Ipv6Interface()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::~Itr()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Itr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapResolver' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ItrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::~Etr()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Etr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptMapRequestMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteRegistration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SolicitMapRequest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::MapCache()
{
    yang_name = "map-cache"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"}
    	,
    etr_interface_ip(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-cont"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::~EidCont()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::has_data() const
{
    return eid_prefix.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::has_operation() const
{
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(etr_interface_ip != nullptr)
    {
        children["etr-interface-ip"] = etr_interface_ip;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "etr-interface-ip"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::has_data() const
{
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::has_operation() const
{
    return is_set(operation)
	|| is_set(etr_interface_ip_address.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrInterfaceIp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.operation)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable::EidTable()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "eid-table"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable::~EidTable()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable::has_data() const
{
    return vlan.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EidTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay::BroadcastUnderlay()
    :
    ipv4_multicast{YType::str, "ipv4-multicast"},
    ipv6_multicast{YType::str, "ipv6-multicast"}
{
    yang_name = "broadcast-underlay"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay::~BroadcastUnderlay()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay::has_data() const
{
    return ipv4_multicast.is_set
	|| ipv6_multicast.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_multicast.operation)
	|| is_set(ipv6_multicast.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-underlay";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastUnderlay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_multicast.is_set || is_set(ipv4_multicast.operation)) leaf_name_data.push_back(ipv4_multicast.get_name_leafdata());
    if (ipv6_multicast.is_set || is_set(ipv6_multicast.operation)) leaf_name_data.push_back(ipv6_multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::BroadcastUnderlay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-multicast")
    {
        ipv4_multicast = value;
    }
    if(value_path == "ipv6-multicast")
    {
        ipv6_multicast = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "eid-cont"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::has_data() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(locator_set.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addrees")
    {
        for(auto const & c : ipv4_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees>();
        c->parent = this;
        ipv4_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv4-interface")
    {
        for(auto const & c : ipv4_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        for(auto const & c : ipv6_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees>();
        c->parent = this;
        ipv6_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv6-interface")
    {
        for(auto const & c : ipv6_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::Ipv4Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::~Ipv4Interface()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::Ipv6Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::~Ipv6Interface()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::~Itr()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Itr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapResolver' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ItrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::~Etr()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Etr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptMapRequestMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteRegistration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SolicitMapRequest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::MapCache()
{
    yang_name = "map-cache"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"}
    	,
    etr_interface_ip(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-cont"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::~EidCont()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::has_data() const
{
    return eid_prefix.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::has_operation() const
{
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(etr_interface_ip != nullptr)
    {
        children["etr-interface-ip"] = etr_interface_ip;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "etr-interface-ip"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::has_data() const
{
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::has_operation() const
{
    return is_set(operation)
	|| is_set(etr_interface_ip_address.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrInterfaceIp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.operation)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Decapsulation()
    :
    filter(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter>())
{
    filter->parent = this;

    yang_name = "decapsulation"; yang_parent_name = "instance-list";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::~Decapsulation()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::has_data() const
{
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::has_operation() const
{
    return is_set(operation)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decapsulation";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Decapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Filter()
    :
    rloc(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc>())
{
    rloc->parent = this;

    yang_name = "filter"; yang_parent_name = "decapsulation";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::~Filter()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::has_data() const
{
    return (rloc !=  nullptr && rloc->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::has_operation() const
{
    return is_set(operation)
	|| (rloc !=  nullptr && rloc->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Filter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc>();
        }
        return rloc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rloc != nullptr)
    {
        children["rloc"] = rloc;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Rloc()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source>())
{
    source->parent = this;

    yang_name = "rloc"; yang_parent_name = "filter";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::~Rloc()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rloc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::Source()
    :
    locator_set{YType::str, "locator-set"},
    member{YType::empty, "member"}
{
    yang_name = "source"; yang_parent_name = "rloc";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::has_data() const
{
    return locator_set.is_set
	|| member.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(member.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (member.is_set || is_set(member.operation)) leaf_name_data.push_back(member.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "member")
    {
        member = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DynamicEid()
    :
    name{YType::str, "name"},
    map_notify_group{YType::str, "map-notify-group"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping>())
	,eid_notify(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify>())
{
    database_mapping->parent = this;

    eid_notify->parent = this;

    yang_name = "dynamic-eid"; yang_parent_name = "instance-list";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::~DynamicEid()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return name.is_set
	|| map_notify_group.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (eid_notify !=  nullptr && eid_notify->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(map_notify_group.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (eid_notify !=  nullptr && eid_notify->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynamicEid' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (map_notify_group.is_set || is_set(map_notify_group.operation)) leaf_name_data.push_back(map_notify_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "eid-notify")
    {
        if(eid_notify == nullptr)
        {
            eid_notify = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify>();
        }
        return eid_notify;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(eid_notify != nullptr)
    {
        children["eid-notify"] = eid_notify;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "map-notify-group")
    {
        map_notify_group = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::DatabaseMapping()
    :
    mac(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac>())
{
    mac->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "dynamic-eid";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<ipv4_prefix.size(); index++)
    {
        if(ipv4_prefix[index]->has_data())
            return true;
    }
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<ipv4_prefix.size(); index++)
    {
        if(ipv4_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix")
    {
        for(auto const & c : ipv4_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix>();
        c->parent = this;
        ipv4_prefix.push_back(c);
        return c;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::Ipv4Prefix()
    :
    eid_prefix{YType::str, "eid-prefix"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "ipv4-prefix"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::~Ipv4Prefix()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::has_data() const
{
    return eid_prefix.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(locator_set.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac::Mac()
    :
    locator_set{YType::str, "locator-set"},
    mac_addr{YType::empty, "mac-addr"}
{
    yang_name = "mac"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac::~Mac()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac::has_data() const
{
    return locator_set.is_set
	|| mac_addr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(mac_addr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.operation)) leaf_name_data.push_back(mac_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::EidNotify()
    :
    authentication_key(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey>())
{
    authentication_key->parent = this;

    yang_name = "eid-notify"; yang_parent_name = "dynamic-eid";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::~EidNotify()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::has_data() const
{
    for (std::size_t index=0; index<gateway_key.size(); index++)
    {
        if(gateway_key[index]->has_data())
            return true;
    }
    return (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::has_operation() const
{
    for (std::size_t index=0; index<gateway_key.size(); index++)
    {
        if(gateway_key[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-notify";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidNotify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "gateway-key")
    {
        for(auto const & c : gateway_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey>();
        c->parent = this;
        gateway_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    for (auto const & c : gateway_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::AuthenticationKey()
    :
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "authentication-key"; yang_parent_name = "eid-notify";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::has_data() const
{
    return key_0.is_set
	|| key_6.is_set
	|| key_7.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_0.operation)
	|| is_set(key_6.operation)
	|| is_set(key_7.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_0.is_set || is_set(key_0.operation)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.operation)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.operation)) leaf_name_data.push_back(key_7.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-0")
    {
        key_0 = value;
    }
    if(value_path == "key-6")
    {
        key_6 = value;
    }
    if(value_path == "key-7")
    {
        key_7 = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::GatewayKey()
    :
    gateway_ip{YType::str, "gateway-ip"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key>())
{
    key->parent = this;

    yang_name = "gateway-key"; yang_parent_name = "eid-notify";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::~GatewayKey()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::has_data() const
{
    return gateway_ip.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::has_operation() const
{
    return is_set(operation)
	|| is_set(gateway_ip.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway-key" <<"[gateway-ip='" <<gateway_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GatewayKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway_ip.is_set || is_set(gateway_ip.operation)) leaf_name_data.push_back(gateway_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "gateway-key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "dynamic-eid";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LocReachAlgorithm()
    :
    rloc_probing{YType::empty, "rloc-probing"}
    	,
    lsb_reports(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports>())
{
    lsb_reports->parent = this;

    yang_name = "loc-reach-algorithm"; yang_parent_name = "instance-list";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::~LocReachAlgorithm()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::has_data() const
{
    return rloc_probing.is_set
	|| (lsb_reports !=  nullptr && lsb_reports->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::has_operation() const
{
    return is_set(operation)
	|| is_set(rloc_probing.operation)
	|| (lsb_reports !=  nullptr && lsb_reports->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loc-reach-algorithm";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocReachAlgorithm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rloc_probing.is_set || is_set(rloc_probing.operation)) leaf_name_data.push_back(rloc_probing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsb-reports")
    {
        if(lsb_reports == nullptr)
        {
            lsb_reports = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports>();
        }
        return lsb_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsb_reports != nullptr)
    {
        children["lsb-reports"] = lsb_reports;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::LsbReports()
    :
    do_not_transmit{YType::empty, "do-not-transmit"},
    ignore{YType::empty, "ignore"}
{
    yang_name = "lsb-reports"; yang_parent_name = "loc-reach-algorithm";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::~LsbReports()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::has_data() const
{
    return do_not_transmit.is_set
	|| ignore.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::has_operation() const
{
    return is_set(operation)
	|| is_set(do_not_transmit.operation)
	|| is_set(ignore.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsb-reports";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsbReports' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_transmit.is_set || is_set(do_not_transmit.operation)) leaf_name_data.push_back(do_not_transmit.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "do-not-transmit")
    {
        do_not_transmit = value;
    }
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::MapServer()
    :
    rloc(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc>())
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration>())
{
    rloc->parent = this;

    site_registration->parent = this;

    yang_name = "map-server"; yang_parent_name = "instance-list";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::has_data() const
{
    return (rloc !=  nullptr && rloc->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::has_operation() const
{
    return is_set(operation)
	|| (rloc !=  nullptr && rloc->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc>();
        }
        return rloc;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration>();
        }
        return site_registration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rloc != nullptr)
    {
        children["rloc"] = rloc;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Rloc()
    :
    members(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members>())
{
    members->parent = this;

    yang_name = "rloc"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::~Rloc()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::has_data() const
{
    return (members !=  nullptr && members->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::has_operation() const
{
    return is_set(operation)
	|| (members !=  nullptr && members->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rloc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(members != nullptr)
    {
        children["members"] = members;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::Members()
    :
    distribute{YType::empty, "distribute"}
    	,
    modify_discovered(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>())
{
    modify_discovered->parent = this;

    yang_name = "members"; yang_parent_name = "rloc";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::~Members()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::has_data() const
{
    return distribute.is_set
	|| (modify_discovered !=  nullptr && modify_discovered->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::has_operation() const
{
    return is_set(operation)
	|| is_set(distribute.operation)
	|| (modify_discovered !=  nullptr && modify_discovered->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Members' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribute.is_set || is_set(distribute.operation)) leaf_name_data.push_back(distribute.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modify-discovered")
    {
        if(modify_discovered == nullptr)
        {
            modify_discovered = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>();
        }
        return modify_discovered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(modify_discovered != nullptr)
    {
        children["modify-discovered"] = modify_discovered;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distribute")
    {
        distribute = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::ModifyDiscovered()
    :
    locator_set{YType::str, "locator-set"},
    operator_{YType::enumeration, "operator"}
{
    yang_name = "modify-discovered"; yang_parent_name = "members";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::~ModifyDiscovered()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_data() const
{
    return locator_set.is_set
	|| operator_.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(operator_.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modify-discovered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModifyDiscovered' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteRegistration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe::OtherXtrProbe()
    :
    period{YType::uint16, "period"}
{
    yang_name = "other-xtr-probe"; yang_parent_name = "instance-list";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe::~OtherXtrProbe()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe::has_data() const
{
    return period.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe::has_operation() const
{
    return is_set(operation)
	|| is_set(period.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other-xtr-probe";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtherXtrProbe' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.operation)) leaf_name_data.push_back(period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "period")
    {
        period = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe::RemoteRlocProbe()
    :
    on_membership_change{YType::empty, "on-membership-change"},
    on_route_change{YType::empty, "on-route-change"}
{
    yang_name = "remote-rloc-probe"; yang_parent_name = "instance-list";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe::~RemoteRlocProbe()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe::has_data() const
{
    return on_membership_change.is_set
	|| on_route_change.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe::has_operation() const
{
    return is_set(operation)
	|| is_set(on_membership_change.operation)
	|| is_set(on_route_change.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-rloc-probe";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteRlocProbe' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_membership_change.is_set || is_set(on_membership_change.operation)) leaf_name_data.push_back(on_membership_change.get_name_leafdata());
    if (on_route_change.is_set || is_set(on_route_change.operation)) leaf_name_data.push_back(on_route_change.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "on-membership-change")
    {
        on_membership_change = value;
    }
    if(value_path == "on-route-change")
    {
        on_route_change = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Service()
    :
    ethernet(nullptr) // presence node
	,ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{
    yang_name = "service"; yang_parent_name = "instance-list";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::~Service()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::has_operation() const
{
    return is_set(operation)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Service' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

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

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Ipv4()
    :
    alt_vrf{YType::str, "alt-vrf"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"}
    	,
    alt(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Alt>())
	,database_mapping(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::DatabaseMapping>())
	,default_(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__>())
	,distance(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Distance>())
	,eid_table(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::EidTable>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCachePersistent>())
	,proxy_itr(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteExport>())
	,route_import(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport>())
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::SolicitMapRequest>())
{
    alt->parent = this;

    database_mapping->parent = this;

    default_->parent = this;

    distance->parent = this;

    eid_table->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    map_cache_persistent->parent = this;

    proxy_itr->parent = this;

    route_export->parent = this;

    route_import->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "ipv4"; yang_parent_name = "service";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::~Ipv4()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return alt_vrf.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (alt !=  nullptr && alt->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (route_import !=  nullptr && route_import->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alt_vrf.operation)
	|| is_set(map_request_source.operation)
	|| is_set(proxy_etr.operation)
	|| is_set(sgt.operation)
	|| (alt !=  nullptr && alt->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (route_import !=  nullptr && route_import->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt_vrf.is_set || is_set(alt_vrf.operation)) leaf_name_data.push_back(alt_vrf.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.operation)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__>();
        }
        return default_;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "route-import")
    {
        if(route_import == nullptr)
        {
            route_import = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::RouteImport>();
        }
        return route_import;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alt != nullptr)
    {
        children["alt"] = alt;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(route_import != nullptr)
    {
        children["route-import"] = route_import;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf = value;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Default__()
    :
    alt_vrf{YType::str, "alt-vrf"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"}
    	,
    alt(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Alt>())
	,database_mapping(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::DatabaseMapping>())
	,distance(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Distance>())
	,eid_table(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::MapCachePersistent>())
	,proxy_itr(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::RouteExport>())
	,route_import(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::RouteImport>())
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::SolicitMapRequest>())
{
    alt->parent = this;

    database_mapping->parent = this;

    distance->parent = this;

    eid_table->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    map_cache_persistent->parent = this;

    proxy_itr->parent = this;

    route_export->parent = this;

    route_import->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "default"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::~Default__()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return alt_vrf.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (alt !=  nullptr && alt->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (route_import !=  nullptr && route_import->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alt_vrf.operation)
	|| is_set(map_request_source.operation)
	|| is_set(proxy_etr.operation)
	|| is_set(sgt.operation)
	|| (alt !=  nullptr && alt->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (route_import !=  nullptr && route_import->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default__' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt_vrf.is_set || is_set(alt_vrf.operation)) leaf_name_data.push_back(alt_vrf.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.operation)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "route-import")
    {
        if(route_import == nullptr)
        {
            route_import = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::RouteImport>();
        }
        return route_import;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alt != nullptr)
    {
        children["alt"] = alt;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(route_import != nullptr)
    {
        children["route-import"] = route_import;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf = value;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable::EidTable()
    :
    default_{YType::empty, "default"},
    vrf{YType::str, "vrf"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "eid-table"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable::~EidTable()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable::has_data() const
{
    return default_.is_set
	|| vrf.is_set
	|| vrf_name.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(vrf.operation)
	|| is_set(vrf_name.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EidTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::~Itr()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Itr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapResolver' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ItrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::~Etr()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Etr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::OperatorEnum::add {0, "add"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::OperatorEnum::override {1, "override"};

const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};


}
}

