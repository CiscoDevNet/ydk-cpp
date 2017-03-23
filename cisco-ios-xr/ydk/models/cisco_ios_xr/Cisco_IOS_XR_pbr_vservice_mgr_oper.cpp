
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pbr_vservice_mgr_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pbr_vservice_mgr_oper {

GlobalServiceFunctionChaining::GlobalServiceFunctionChaining()
    :
    service_function(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction>())
	,service_function_forwarder(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder>())
	,service_function_path(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath>())
{
    service_function->parent = this;
    children["service-function"] = service_function;

    service_function_forwarder->parent = this;
    children["service-function-forwarder"] = service_function_forwarder;

    service_function_path->parent = this;
    children["service-function-path"] = service_function_path;

    yang_name = "global-service-function-chaining"; yang_parent_name = "Cisco-IOS-XR-pbr-vservice-mgr-oper";
}

GlobalServiceFunctionChaining::~GlobalServiceFunctionChaining()
{
}

bool GlobalServiceFunctionChaining::has_data() const
{
    return (service_function !=  nullptr && service_function->has_data())
	|| (service_function_forwarder !=  nullptr && service_function_forwarder->has_data())
	|| (service_function_path !=  nullptr && service_function_path->has_data());
}

bool GlobalServiceFunctionChaining::has_operation() const
{
    return is_set(operation)
	|| (service_function !=  nullptr && service_function->has_operation())
	|| (service_function_forwarder !=  nullptr && service_function_forwarder->has_operation())
	|| (service_function_path !=  nullptr && service_function_path->has_operation());
}

std::string GlobalServiceFunctionChaining::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-function")
    {
        if(service_function != nullptr)
        {
            children["service-function"] = service_function;
        }
        else
        {
            service_function = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction>();
            service_function->parent = this;
            children["service-function"] = service_function;
        }
        return children.at("service-function");
    }

    if(child_yang_name == "service-function-forwarder")
    {
        if(service_function_forwarder != nullptr)
        {
            children["service-function-forwarder"] = service_function_forwarder;
        }
        else
        {
            service_function_forwarder = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder>();
            service_function_forwarder->parent = this;
            children["service-function-forwarder"] = service_function_forwarder;
        }
        return children.at("service-function-forwarder");
    }

    if(child_yang_name == "service-function-path")
    {
        if(service_function_path != nullptr)
        {
            children["service-function-path"] = service_function_path;
        }
        else
        {
            service_function_path = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath>();
            service_function_path->parent = this;
            children["service-function-path"] = service_function_path;
        }
        return children.at("service-function-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::get_children()
{
    if(children.find("service-function") == children.end())
    {
        if(service_function != nullptr)
        {
            children["service-function"] = service_function;
        }
    }

    if(children.find("service-function-forwarder") == children.end())
    {
        if(service_function_forwarder != nullptr)
        {
            children["service-function-forwarder"] = service_function_forwarder;
        }
    }

    if(children.find("service-function-path") == children.end())
    {
        if(service_function_path != nullptr)
        {
            children["service-function-path"] = service_function_path;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::clone_ptr() const
{
    return std::make_shared<GlobalServiceFunctionChaining>();
}

std::string GlobalServiceFunctionChaining::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GlobalServiceFunctionChaining::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GlobalServiceFunctionChaining::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::ServiceFunctionPath()
    :
    path_ids(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds>())
{
    path_ids->parent = this;
    children["path-ids"] = path_ids;

    yang_name = "service-function-path"; yang_parent_name = "global-service-function-chaining";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::~ServiceFunctionPath()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::has_data() const
{
    return (path_ids !=  nullptr && path_ids->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::has_operation() const
{
    return is_set(operation)
	|| (path_ids !=  nullptr && path_ids->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-path";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-ids")
    {
        if(path_ids != nullptr)
        {
            children["path-ids"] = path_ids;
        }
        else
        {
            path_ids = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds>();
            path_ids->parent = this;
            children["path-ids"] = path_ids;
        }
        return children.at("path-ids");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::get_children()
{
    if(children.find("path-ids") == children.end())
    {
        if(path_ids != nullptr)
        {
            children["path-ids"] = path_ids;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathIds()
{
    yang_name = "path-ids"; yang_parent_name = "service-function-path";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::~PathIds()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::has_data() const
{
    for (std::size_t index=0; index<path_id.size(); index++)
    {
        if(path_id[index]->has_data())
            return true;
    }
    return false;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::has_operation() const
{
    for (std::size_t index=0; index<path_id.size(); index++)
    {
        if(path_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ids";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-id")
    {
        for(auto const & c : path_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId>();
        c->parent = this;
        path_id.push_back(std::move(c));
        children[segment_path] = path_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_children()
{
    for (auto const & c : path_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::PathId()
    :
    id{YType::uint32, "id"}
    	,
    service_indexes(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes>())
	,stats(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats>())
{
    service_indexes->parent = this;
    children["service-indexes"] = service_indexes;

    stats->parent = this;
    children["stats"] = stats;

    yang_name = "path-id"; yang_parent_name = "path-ids";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::~PathId()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::has_data() const
{
    return id.is_set
	|| (service_indexes !=  nullptr && service_indexes->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (service_indexes !=  nullptr && service_indexes->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-id" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-path/path-ids/" << get_segment_path();
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

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-indexes")
    {
        if(service_indexes != nullptr)
        {
            children["service-indexes"] = service_indexes;
        }
        else
        {
            service_indexes = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes>();
            service_indexes->parent = this;
            children["service-indexes"] = service_indexes;
        }
        return children.at("service-indexes");
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
        else
        {
            stats = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_children()
{
    if(children.find("service-indexes") == children.end())
    {
        if(service_indexes != nullptr)
        {
            children["service-indexes"] = service_indexes;
        }
    }

    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Stats()
    :
    detail(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail>())
	,summarized(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized>())
{
    detail->parent = this;
    children["detail"] = detail;

    summarized->parent = this;
    children["summarized"] = summarized;

    yang_name = "stats"; yang_parent_name = "path-id";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::~Stats()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::has_data() const
{
    return (detail !=  nullptr && detail->has_data())
	|| (summarized !=  nullptr && summarized->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::has_operation() const
{
    return is_set(operation)
	|| (detail !=  nullptr && detail->has_operation())
	|| (summarized !=  nullptr && summarized->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stats' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail;
        }
        else
        {
            detail = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail>();
            detail->parent = this;
            children["detail"] = detail;
        }
        return children.at("detail");
    }

    if(child_yang_name == "summarized")
    {
        if(summarized != nullptr)
        {
            children["summarized"] = summarized;
        }
        else
        {
            summarized = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized>();
            summarized->parent = this;
            children["summarized"] = summarized;
        }
        return children.at("summarized");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail;
        }
    }

    if(children.find("summarized") == children.end())
    {
        if(summarized != nullptr)
        {
            children["summarized"] = summarized;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Detail()
    :
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "detail"; yang_parent_name = "stats";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::~Detail()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detail' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf>())
	,sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff>())
	,sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal>())
	,sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp>())
	,spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf;

    sff->parent = this;
    children["sff"] = sff;

    sff_local->parent = this;
    children["sff-local"] = sff_local;

    sfp->parent = this;
    children["sfp"] = sfp;

    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "detail";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation())
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
        else
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf;
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
        else
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff;
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
        else
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local;
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
        else
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp;
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "sfp"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sfp' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::Sf()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sf' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::Sff()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sff' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::SffLocal()
    :
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SffLocal' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "si-arr"; yang_parent_name = "detail";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiArr' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "si-arr";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Summarized()
    :
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "summarized"; yang_parent_name = "stats";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::~Summarized()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summarized";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summarized' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf>())
	,sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff>())
	,sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal>())
	,sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp>())
	,spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf;

    sff->parent = this;
    children["sff"] = sff;

    sff_local->parent = this;
    children["sff-local"] = sff_local;

    sfp->parent = this;
    children["sfp"] = sfp;

    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "summarized";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation())
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
        else
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf;
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
        else
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff;
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
        else
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local;
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
        else
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp;
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "sfp"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sfp' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::Sf()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sf' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::Sff()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sff' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::SffLocal()
    :
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SffLocal' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "si-arr"; yang_parent_name = "summarized";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiArr' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "si-arr";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndexes()
{
    yang_name = "service-indexes"; yang_parent_name = "path-id";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::~ServiceIndexes()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::has_data() const
{
    for (std::size_t index=0; index<service_index.size(); index++)
    {
        if(service_index[index]->has_data())
            return true;
    }
    return false;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::has_operation() const
{
    for (std::size_t index=0; index<service_index.size(); index++)
    {
        if(service_index[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-indexes";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceIndexes' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-index")
    {
        for(auto const & c : service_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex>();
        c->parent = this;
        service_index.push_back(std::move(c));
        children[segment_path] = service_index.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_children()
{
    for (auto const & c : service_index)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::ServiceIndex()
    :
    index_{YType::uint32, "index"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "service-index"; yang_parent_name = "service-indexes";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::~ServiceIndex()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return index_.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(index_.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-index" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceIndex' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf>())
	,sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff>())
	,sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal>())
	,sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp>())
	,spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf;

    sff->parent = this;
    children["sff"] = sff;

    sff_local->parent = this;
    children["sff-local"] = sff_local;

    sfp->parent = this;
    children["sfp"] = sfp;

    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "service-index";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation())
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
        else
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf;
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
        else
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff;
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
        else
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local;
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
        else
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp;
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "sfp"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sfp' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::Sf()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sf' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::Sff()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sff' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::SffLocal()
    :
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SffLocal' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "si-arr"; yang_parent_name = "service-index";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiArr' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "si-arr";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::ServiceFunction()
    :
    sf_names(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames>())
{
    sf_names->parent = this;
    children["sf-names"] = sf_names;

    yang_name = "service-function"; yang_parent_name = "global-service-function-chaining";
}

GlobalServiceFunctionChaining::ServiceFunction::~ServiceFunction()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::has_data() const
{
    return (sf_names !=  nullptr && sf_names->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunction::has_operation() const
{
    return is_set(operation)
	|| (sf_names !=  nullptr && sf_names->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf-names")
    {
        if(sf_names != nullptr)
        {
            children["sf-names"] = sf_names;
        }
        else
        {
            sf_names = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames>();
            sf_names->parent = this;
            children["sf-names"] = sf_names;
        }
        return children.at("sf-names");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::get_children()
{
    if(children.find("sf-names") == children.end())
    {
        if(sf_names != nullptr)
        {
            children["sf-names"] = sf_names;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfNames()
{
    yang_name = "sf-names"; yang_parent_name = "service-function";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::~SfNames()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::has_data() const
{
    for (std::size_t index=0; index<sf_name.size(); index++)
    {
        if(sf_name[index]->has_data())
            return true;
    }
    return false;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::has_operation() const
{
    for (std::size_t index=0; index<sf_name.size(); index++)
    {
        if(sf_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-names";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf-name")
    {
        for(auto const & c : sf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName>();
        c->parent = this;
        sf_name.push_back(std::move(c));
        children[segment_path] = sf_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_children()
{
    for (auto const & c : sf_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SfName()
    :
    name{YType::str, "name"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "sf-name"; yang_parent_name = "sf-names";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::~SfName()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return name.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function/sf-names/" << get_segment_path();
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

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf>())
	,sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff>())
	,sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal>())
	,sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp>())
	,spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf;

    sff->parent = this;
    children["sff"] = sff;

    sff_local->parent = this;
    children["sff-local"] = sff_local;

    sfp->parent = this;
    children["sfp"] = sfp;

    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "sf-name";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation())
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
        else
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf;
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
        else
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff;
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
        else
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local;
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
        else
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp;
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "sfp"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sfp' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::Sf()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sf' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::Sff()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sff' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::SffLocal()
    :
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SffLocal' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "si-arr"; yang_parent_name = "sf-name";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiArr' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "si-arr";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::ServiceFunctionForwarder()
    :
    local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local>())
	,sff_names(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames>())
{
    local->parent = this;
    children["local"] = local;

    sff_names->parent = this;
    children["sff-names"] = sff_names;

    yang_name = "service-function-forwarder"; yang_parent_name = "global-service-function-chaining";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::~ServiceFunctionForwarder()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (sff_names !=  nullptr && sff_names->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::has_operation() const
{
    return is_set(operation)
	|| (local !=  nullptr && local->has_operation())
	|| (sff_names !=  nullptr && sff_names->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-forwarder";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "sff-names")
    {
        if(sff_names != nullptr)
        {
            children["sff-names"] = sff_names;
        }
        else
        {
            sff_names = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames>();
            sff_names->parent = this;
            children["sff-names"] = sff_names;
        }
        return children.at("sff-names");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("sff-names") == children.end())
    {
        if(sff_names != nullptr)
        {
            children["sff-names"] = sff_names;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffNames()
{
    yang_name = "sff-names"; yang_parent_name = "service-function-forwarder";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::~SffNames()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::has_data() const
{
    for (std::size_t index=0; index<sff_name.size(); index++)
    {
        if(sff_name[index]->has_data())
            return true;
    }
    return false;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::has_operation() const
{
    for (std::size_t index=0; index<sff_name.size(); index++)
    {
        if(sff_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-names";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sff-name")
    {
        for(auto const & c : sff_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName>();
        c->parent = this;
        sff_name.push_back(std::move(c));
        children[segment_path] = sff_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_children()
{
    for (auto const & c : sff_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SffName()
    :
    name{YType::str, "name"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "sff-name"; yang_parent_name = "sff-names";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::~SffName()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return name.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/sff-names/" << get_segment_path();
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

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf>())
	,sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff>())
	,sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal>())
	,sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp>())
	,spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf;

    sff->parent = this;
    children["sff"] = sff;

    sff_local->parent = this;
    children["sff-local"] = sff_local;

    sfp->parent = this;
    children["sfp"] = sfp;

    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "sff-name";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation())
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
        else
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf;
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
        else
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff;
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
        else
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local;
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
        else
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp;
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "sfp"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sfp' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::Sf()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sf' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::Sff()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sff' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::SffLocal()
    :
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SffLocal' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "si-arr"; yang_parent_name = "sff-name";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiArr' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "si-arr";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpiSi' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Term' in Cisco_IOS_XR_pbr_vservice_mgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Local()
    :
    error(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error>())
{
    error->parent = this;
    children["error"] = error;

    yang_name = "local"; yang_parent_name = "service-function-forwarder";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::~Local()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::has_data() const
{
    return (error !=  nullptr && error->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::has_operation() const
{
    return is_set(operation)
	|| (error !=  nullptr && error->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        if(error != nullptr)
        {
            children["error"] = error;
        }
        else
        {
            error = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error>();
            error->parent = this;
            children["error"] = error;
        }
        return children.at("error");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_children()
{
    if(children.find("error") == children.end())
    {
        if(error != nullptr)
        {
            children["error"] = error;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Error()
    :
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "error"; yang_parent_name = "local";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::~Error()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf>())
	,sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff>())
	,sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal>())
	,sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp>())
	,spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf;

    sff->parent = this;
    children["sff"] = sff;

    sff_local->parent = this;
    children["sff-local"] = sff_local;

    sfp->parent = this;
    children["sfp"] = sfp;

    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "error";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation())
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
        else
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf;
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
        else
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff;
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
        else
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local;
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
        else
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp;
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf;
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff;
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local;
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp;
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "sfp"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/sfp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/sfp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::Sf()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::Sff()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::SffLocal()
    :
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "si-arr"; yang_parent_name = "error";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si;

    term->parent = this;
    children["term"] = term;

    yang_name = "data"; yang_parent_name = "si-arr";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/si-arr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
        else
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si;
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
        else
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term;
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si;
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term;
        }
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::SpiSi()
    :
    processed_bytes{YType::uint64, "processed-bytes"},
    processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/si-arr/data/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::Term()
    :
    terminated_bytes{YType::uint64, "terminated-bytes"},
    terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/si-arr/data/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_children()
{
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

const Enum::YLeaf VsNshStatsEnum::vs_nsh_stats_spi_si {0, "vs-nsh-stats-spi-si"};
const Enum::YLeaf VsNshStatsEnum::vs_nsh_stats_ter_min_ate {1, "vs-nsh-stats-ter-min-ate"};
const Enum::YLeaf VsNshStatsEnum::vs_nsh_stats_sf {2, "vs-nsh-stats-sf"};
const Enum::YLeaf VsNshStatsEnum::vs_nsh_stats_sff {3, "vs-nsh-stats-sff"};
const Enum::YLeaf VsNshStatsEnum::vs_nsh_stats_sff_local {4, "vs-nsh-stats-sff-local"};
const Enum::YLeaf VsNshStatsEnum::vs_nsh_stats_sfp {5, "vs-nsh-stats-sfp"};
const Enum::YLeaf VsNshStatsEnum::vs_nsh_stats_sfp_detail {6, "vs-nsh-stats-sfp-detail"};
const Enum::YLeaf VsNshStatsEnum::vs_nsh_stats_max {7, "vs-nsh-stats-max"};


}
}

