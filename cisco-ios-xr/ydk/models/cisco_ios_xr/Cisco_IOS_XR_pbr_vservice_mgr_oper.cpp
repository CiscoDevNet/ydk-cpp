
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
    service_function_path(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath>())
    , service_function(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction>())
    , service_function_forwarder(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder>())
{
    service_function_path->parent = this;
    service_function->parent = this;
    service_function_forwarder->parent = this;

    yang_name = "global-service-function-chaining"; yang_parent_name = "Cisco-IOS-XR-pbr-vservice-mgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::~GlobalServiceFunctionChaining()
{
}

bool GlobalServiceFunctionChaining::has_data() const
{
    if (is_presence_container) return true;
    return (service_function_path !=  nullptr && service_function_path->has_data())
	|| (service_function !=  nullptr && service_function->has_data())
	|| (service_function_forwarder !=  nullptr && service_function_forwarder->has_data());
}

bool GlobalServiceFunctionChaining::has_operation() const
{
    return is_set(yfilter)
	|| (service_function_path !=  nullptr && service_function_path->has_operation())
	|| (service_function !=  nullptr && service_function->has_operation())
	|| (service_function_forwarder !=  nullptr && service_function_forwarder->has_operation());
}

std::string GlobalServiceFunctionChaining::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-function-path")
    {
        if(service_function_path == nullptr)
        {
            service_function_path = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath>();
        }
        return service_function_path;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_function_path != nullptr)
    {
        _children["service-function-path"] = service_function_path;
    }

    if(service_function != nullptr)
    {
        _children["service-function"] = service_function;
    }

    if(service_function_forwarder != nullptr)
    {
        _children["service-function-forwarder"] = service_function_forwarder;
    }

    return _children;
}

void GlobalServiceFunctionChaining::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::clone_ptr() const
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
    if(name == "service-function-path" || name == "service-function" || name == "service-function-forwarder")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::ServiceFunctionPath()
    :
    path_ids(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds>())
{
    path_ids->parent = this;

    yang_name = "service-function-path"; yang_parent_name = "global-service-function-chaining"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::~ServiceFunctionPath()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::has_data() const
{
    if (is_presence_container) return true;
    return (path_ids !=  nullptr && path_ids->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::has_operation() const
{
    return is_set(yfilter)
	|| (path_ids !=  nullptr && path_ids->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_ids != nullptr)
    {
        _children["path-ids"] = path_ids;
    }

    return _children;
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
    :
    path_id(this, {"id"})
{

    yang_name = "path-ids"; yang_parent_name = "service-function-path"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::~PathIds()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_id.len(); index++)
    {
        if(path_id[index]->has_data())
            return true;
    }
    return false;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::has_operation() const
{
    for (std::size_t index=0; index<path_id.len(); index++)
    {
        if(path_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-path/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-id")
    {
        auto ent_ = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId>();
        ent_->parent = this;
        path_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    stats(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats>())
    , service_indexes(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes>())
{
    stats->parent = this;
    service_indexes->parent = this;

    yang_name = "path-id"; yang_parent_name = "path-ids"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::~PathId()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (stats !=  nullptr && stats->has_data())
	|| (service_indexes !=  nullptr && service_indexes->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (stats !=  nullptr && stats->has_operation())
	|| (service_indexes !=  nullptr && service_indexes->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-path/path-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "service-indexes")
    {
        if(service_indexes == nullptr)
        {
            service_indexes = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes>();
        }
        return service_indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stats != nullptr)
    {
        _children["stats"] = stats;
    }

    if(service_indexes != nullptr)
    {
        _children["service-indexes"] = service_indexes;
    }

    return _children;
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
    if(name == "stats" || name == "service-indexes" || name == "id")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Stats()
    :
    detail(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail>())
    , summarized(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized>())
{
    detail->parent = this;
    summarized->parent = this;

    yang_name = "stats"; yang_parent_name = "path-id"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::~Stats()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    if(summarized != nullptr)
    {
        _children["summarized"] = summarized;
    }

    return _children;
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
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "detail"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::~Detail()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto ent_ = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr>();
        ent_->parent = this;
        si_arr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    count_ = 0;
    for (auto ent_ : si_arr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp>())
    , spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term>())
    , sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf>())
    , sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff>())
    , sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sfp != nullptr)
    {
        _children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    if(sf != nullptr)
    {
        _children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        _children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        _children["sff-local"] = sff_local;
    }

    return _children;
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
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
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

    yang_name = "si-arr"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
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
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Summarized()
    :
    data(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data>())
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "summarized"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::~Summarized()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto ent_ = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr>();
        ent_->parent = this;
        si_arr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    count_ = 0;
    for (auto ent_ : si_arr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp>())
    , spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term>())
    , sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf>())
    , sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff>())
    , sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "summarized"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sfp != nullptr)
    {
        _children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    if(sf != nullptr)
    {
        _children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        _children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        _children["sff-local"] = sff_local;
    }

    return _children;
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
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
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

    yang_name = "si-arr"; yang_parent_name = "summarized"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
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
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndexes()
    :
    service_index(this, {"index_"})
{

    yang_name = "service-indexes"; yang_parent_name = "path-id"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::~ServiceIndexes()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_index.len(); index++)
    {
        if(service_index[index]->has_data())
            return true;
    }
    return false;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::has_operation() const
{
    for (std::size_t index=0; index<service_index.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-index")
    {
        auto ent_ = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex>();
        ent_->parent = this;
        service_index.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_index.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "service-index"; yang_parent_name = "service-indexes"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::~ServiceIndex()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return index_.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
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
    path_buffer << "service-index";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto ent_ = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr>();
        ent_->parent = this;
        si_arr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    count_ = 0;
    for (auto ent_ : si_arr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp>())
    , spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term>())
    , sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf>())
    , sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff>())
    , sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "service-index"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sfp != nullptr)
    {
        _children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    if(sf != nullptr)
    {
        _children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        _children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        _children["sff-local"] = sff_local;
    }

    return _children;
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
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
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

    yang_name = "si-arr"; yang_parent_name = "service-index"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
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
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::ServiceFunction()
    :
    sf_names(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames>())
{
    sf_names->parent = this;

    yang_name = "service-function"; yang_parent_name = "global-service-function-chaining"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunction::~ServiceFunction()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::has_data() const
{
    if (is_presence_container) return true;
    return (sf_names !=  nullptr && sf_names->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunction::has_operation() const
{
    return is_set(yfilter)
	|| (sf_names !=  nullptr && sf_names->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sf_names != nullptr)
    {
        _children["sf-names"] = sf_names;
    }

    return _children;
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
    :
    sf_name(this, {"name"})
{

    yang_name = "sf-names"; yang_parent_name = "service-function"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::~SfNames()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sf_name.len(); index++)
    {
        if(sf_name[index]->has_data())
            return true;
    }
    return false;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::has_operation() const
{
    for (std::size_t index=0; index<sf_name.len(); index++)
    {
        if(sf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf-name")
    {
        auto ent_ = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName>();
        ent_->parent = this;
        sf_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sf_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "sf-name"; yang_parent_name = "sf-names"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::~SfName()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return name.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function/sf-names/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto ent_ = std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr>();
        ent_->parent = this;
        si_arr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    count_ = 0;
    for (auto ent_ : si_arr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp>())
    , spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term>())
    , sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf>())
    , sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff>())
    , sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "sf-name"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sfp != nullptr)
    {
        _children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    if(sf != nullptr)
    {
        _children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        _children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        _children["sff-local"] = sff_local;
    }

    return _children;
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
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
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

    yang_name = "si-arr"; yang_parent_name = "sf-name"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
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
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::ServiceFunctionForwarder()
    :
    sff_names(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames>())
    , local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local>())
{
    sff_names->parent = this;
    local->parent = this;

    yang_name = "service-function-forwarder"; yang_parent_name = "global-service-function-chaining"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::~ServiceFunctionForwarder()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::has_data() const
{
    if (is_presence_container) return true;
    return (sff_names !=  nullptr && sff_names->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::has_operation() const
{
    return is_set(yfilter)
	|| (sff_names !=  nullptr && sff_names->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-forwarder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sff-names")
    {
        if(sff_names == nullptr)
        {
            sff_names = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames>();
        }
        return sff_names;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sff_names != nullptr)
    {
        _children["sff-names"] = sff_names;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sff-names" || name == "local")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffNames()
    :
    sff_name(this, {"name"})
{

    yang_name = "sff-names"; yang_parent_name = "service-function-forwarder"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::~SffNames()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sff_name.len(); index++)
    {
        if(sff_name[index]->has_data())
            return true;
    }
    return false;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::has_operation() const
{
    for (std::size_t index=0; index<sff_name.len(); index++)
    {
        if(sff_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sff-name")
    {
        auto ent_ = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName>();
        ent_->parent = this;
        sff_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sff_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "sff-name"; yang_parent_name = "sff-names"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::~SffName()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return name.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/sff-names/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto ent_ = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr>();
        ent_->parent = this;
        si_arr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    count_ = 0;
    for (auto ent_ : si_arr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp>())
    , spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term>())
    , sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf>())
    , sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff>())
    , sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "sff-name"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sfp != nullptr)
    {
        _children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    if(sf != nullptr)
    {
        _children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        _children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        _children["sff-local"] = sff_local;
    }

    return _children;
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
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
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

    yang_name = "si-arr"; yang_parent_name = "sff-name"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
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
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Local()
    :
    error(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error>())
{
    error->parent = this;

    yang_name = "local"; yang_parent_name = "service-function-forwarder"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::~Local()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::has_data() const
{
    if (is_presence_container) return true;
    return (error !=  nullptr && error->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::has_operation() const
{
    return is_set(yfilter)
	|| (error !=  nullptr && error->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(error != nullptr)
    {
        _children["error"] = error;
    }

    return _children;
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
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "error"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::~Error()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto ent_ = std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr>();
        ent_->parent = this;
        si_arr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    count_ = 0;
    for (auto ent_ : si_arr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    sfp(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp>())
    , spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term>())
    , sf(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf>())
    , sff(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff>())
    , sff_local(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sfp != nullptr)
    {
        _children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    if(sf != nullptr)
    {
        _children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        _children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        _children["sff-local"] = sff_local;
    }

    return _children;
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
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi>())
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::~Sfp()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::has_operation() const
{
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/sfp/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/sfp/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::~Sf()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::~Sff()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::~SffLocal()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/data/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
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

    yang_name = "si-arr"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::~SiArr()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::has_data() const
{
    if (is_presence_container) return true;
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
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
    , term(std::make_shared<GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::~Data()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
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

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/si-arr/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spi_si != nullptr)
    {
        _children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        _children["term"] = term;
    }

    return _children;
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
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::~SpiSi()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/si-arr/data/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = false; 
}

GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::~Term()
{
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining/service-function-forwarder/local/error/si-arr/data/" << get_segment_path();
    return path_buffer.str();
}

std::string GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
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

