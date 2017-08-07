
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pbr_vservice_mgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pbr_vservice_mgr_oper {

GlobalServiceFunctionChaining::GlobalServiceFunctionChaining()
    :
    service_function(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction>())
	,service_function_forwarder(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder>())
	,service_function_path(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath>())
{
    service_function->parent = this;

    service_function_forwarder->parent = this;

    service_function_path->parent = this;

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
    return is_set(yfilter)
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

const EntityPath GlobalServiceFunctionChaining::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> GlobalServiceFunctionChaining::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-function")
    {
        if(service_function == nullptr)
        {
            service_function = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction>();
        }
        return service_function;
    }

    if(child_yang_name == "service-function-forwarder")
    {
        if(service_function_forwarder == nullptr)
        {
            service_function_forwarder = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder>();
        }
        return service_function_forwarder;
    }

    if(child_yang_name == "service-function-path")
    {
        if(service_function_path == nullptr)
        {
            service_function_path = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath>();
        }
        return service_function_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_function != nullptr)
    {
        children["service-function"] = service_function;
    }

    if(service_function_forwarder != nullptr)
    {
        children["service-function-forwarder"] = service_function_forwarder;
    }

    if(service_function_path != nullptr)
    {
        children["service-function-path"] = service_function_path;
    }

    return children;
}

void GlobalServiceFunctionChaining::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> GlobalServiceFunctionChaining::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool GlobalServiceFunctionChaining::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-function" || name == "service-function-forwarder" || name == "service-function-path")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::ServiceFunctionPath()
    :
    path_ids(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds>())
{
    path_ids->parent = this;

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
    return is_set(yfilter)
	|| (path_ids !=  nullptr && path_ids->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-path";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "path-ids")
    {
        if(path_ids == nullptr)
        {
            path_ids = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds>();
        }
        return path_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_ids != nullptr)
    {
        children["path-ids"] = path_ids;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-ids")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ids";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "path-id")
    {
        for(auto const & c : path_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId>();
        c->parent = this;
        path_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::PathId()
    :
    id{YType::uint32, "id"}
    	,
    service_indexes(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes>())
	,stats(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats>())
{
    service_indexes->parent = this;

    stats->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (service_indexes !=  nullptr && service_indexes->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-id" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-indexes")
    {
        if(service_indexes == nullptr)
        {
            service_indexes = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes>();
        }
        return service_indexes;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_indexes != nullptr)
    {
        children["service-indexes"] = service_indexes;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-indexes" || name == "stats" || name == "id")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Stats()
    :
    detail(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail>())
	,summarized(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized>())
{
    detail->parent = this;

    summarized->parent = this;

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
    return is_set(yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (summarized !=  nullptr && summarized->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "summarized")
    {
        if(summarized == nullptr)
        {
            summarized = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized>();
        }
        return summarized;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(summarized != nullptr)
    {
        children["summarized"] = summarized;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "summarized")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Detail()
    :
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr>();
        c->parent = this;
        si_arr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    for (auto const & c : si_arr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr")
        return true;
    return false;
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

    sff->parent = this;

    sff_local->parent = this;

    sfp->parent = this;

    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
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

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal>();
        }
        return sff_local;
    }

    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf" || name == "sff" || name == "sff-local" || name == "sfp" || name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_entity_path(Entity* ancestor) const
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

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lookup-err-bytes" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "malformed-err-pkts")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_entity_path(Entity* ancestor) const
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

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Summarized()
    :
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summarized";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr>();
        c->parent = this;
        si_arr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    for (auto const & c : si_arr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr")
        return true;
    return false;
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

    sff->parent = this;

    sff_local->parent = this;

    sfp->parent = this;

    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
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

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal>();
        }
        return sff_local;
    }

    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf" || name == "sff" || name == "sff-local" || name == "sfp" || name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_entity_path(Entity* ancestor) const
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

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lookup-err-bytes" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "malformed-err-pkts")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_entity_path(Entity* ancestor) const
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

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-indexes";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "service-index")
    {
        for(auto const & c : service_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex>();
        c->parent = this;
        service_index.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_index)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-index")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::ServiceIndex()
    :
    index_{YType::uint32, "index"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-index" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_entity_path(Entity* ancestor) const
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

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr>();
        c->parent = this;
        si_arr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    for (auto const & c : si_arr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr" || name == "index")
        return true;
    return false;
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

    sff->parent = this;

    sff_local->parent = this;

    sfp->parent = this;

    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
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

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal>();
        }
        return sff_local;
    }

    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf" || name == "sff" || name == "sff-local" || name == "sfp" || name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_entity_path(Entity* ancestor) const
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

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lookup-err-bytes" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "malformed-err-pkts")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_entity_path(Entity* ancestor) const
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

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::ServiceFunction()
    :
    sf_names(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames>())
{
    sf_names->parent = this;

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
    return is_set(yfilter)
	|| (sf_names !=  nullptr && sf_names->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "sf-names")
    {
        if(sf_names == nullptr)
        {
            sf_names = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames>();
        }
        return sf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sf_names != nullptr)
    {
        children["sf-names"] = sf_names;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf-names")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-names";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "sf-name")
    {
        for(auto const & c : sf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName>();
        c->parent = this;
        sf_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sf_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf-name")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SfName()
    :
    name{YType::str, "name"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr>();
        c->parent = this;
        si_arr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    for (auto const & c : si_arr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr" || name == "name")
        return true;
    return false;
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

    sff->parent = this;

    sff_local->parent = this;

    sfp->parent = this;

    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
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

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal>();
        }
        return sff_local;
    }

    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf" || name == "sff" || name == "sff-local" || name == "sfp" || name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_entity_path(Entity* ancestor) const
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

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lookup-err-bytes" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "malformed-err-pkts")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_entity_path(Entity* ancestor) const
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

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::ServiceFunctionForwarder()
    :
    local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local>())
	,sff_names(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames>())
{
    local->parent = this;

    sff_names->parent = this;

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
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (sff_names !=  nullptr && sff_names->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-forwarder";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local>();
        }
        return local;
    }

    if(child_yang_name == "sff-names")
    {
        if(sff_names == nullptr)
        {
            sff_names = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames>();
        }
        return sff_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(sff_names != nullptr)
    {
        children["sff-names"] = sff_names;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "sff-names")
        return true;
    return false;
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
    return is_set(yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-names";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "sff-name")
    {
        for(auto const & c : sff_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName>();
        c->parent = this;
        sff_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sff_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sff-name")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SffName()
    :
    name{YType::str, "name"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr>();
        c->parent = this;
        si_arr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    for (auto const & c : si_arr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr" || name == "name")
        return true;
    return false;
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

    sff->parent = this;

    sff_local->parent = this;

    sfp->parent = this;

    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
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

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal>();
        }
        return sff_local;
    }

    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf" || name == "sff" || name == "sff-local" || name == "sfp" || name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_entity_path(Entity* ancestor) const
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

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lookup-err-bytes" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "malformed-err-pkts")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_entity_path(Entity* ancestor) const
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

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Local()
    :
    error(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error>())
{
    error->parent = this;

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
    return is_set(yfilter)
	|| (error !=  nullptr && error->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error>();
        }
        return error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(error != nullptr)
    {
        children["error"] = error;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Error()
    :
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr>();
        c->parent = this;
        si_arr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    for (auto const & c : si_arr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr")
        return true;
    return false;
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

    sff->parent = this;

    sff_local->parent = this;

    sfp->parent = this;

    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
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

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal>();
        }
        return sff_local;
    }

    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf" || name == "sff" || name == "sff-local" || name == "sfp" || name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_entity_path(Entity* ancestor) const
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
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_entity_path(Entity* ancestor) const
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

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lookup-err-bytes" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "malformed-err-pkts")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
    	,
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data>())
{
    data->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_entity_path(Entity* ancestor) const
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

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
    	,
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi>())
	,term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term>())
{
    spi_si->parent = this;

    term->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(processed_bytes.yfilter)
	|| ydk::is_set(processed_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
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

    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-bytes" || name == "processed-pkts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(terminated_bytes.yfilter)
	|| ydk::is_set(terminated_pkts.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

const EntityPath GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
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

    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-bytes" || name == "terminated-pkts")
        return true;
    return false;
}

const Enum::YLeaf VsNshStats::vs_nsh_stats_spi_si {0, "vs-nsh-stats-spi-si"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_ter_min_ate {1, "vs-nsh-stats-ter-min-ate"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_sf {2, "vs-nsh-stats-sf"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_sff {3, "vs-nsh-stats-sff"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_sff_local {4, "vs-nsh-stats-sff-local"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_sfp {5, "vs-nsh-stats-sfp"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_sfp_detail {6, "vs-nsh-stats-sfp-detail"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_max {7, "vs-nsh-stats-max"};


}
}

