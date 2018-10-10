
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pbr_bng_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pbr_bng_cfg {

BngPbr::BngPbr()
    :
    bng_interface{YType::str, "bng-interface"}
        ,
    http_enrichment(std::make_shared<BngPbr::HttpEnrichment>())
{
    http_enrichment->parent = this;

    yang_name = "bng-pbr"; yang_parent_name = "Cisco-IOS-XR-pbr-bng-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

BngPbr::~BngPbr()
{
}

bool BngPbr::has_data() const
{
    if (is_presence_container) return true;
    return bng_interface.is_set
	|| (http_enrichment !=  nullptr && http_enrichment->has_data());
}

bool BngPbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bng_interface.yfilter)
	|| (http_enrichment !=  nullptr && http_enrichment->has_operation());
}

std::string BngPbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-bng-cfg:bng-pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BngPbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bng_interface.is_set || is_set(bng_interface.yfilter)) leaf_name_data.push_back(bng_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BngPbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http-enrichment")
    {
        if(http_enrichment == nullptr)
        {
            http_enrichment = std::make_shared<BngPbr::HttpEnrichment>();
        }
        return http_enrichment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BngPbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(http_enrichment != nullptr)
    {
        children["http-enrichment"] = http_enrichment;
    }

    return children;
}

void BngPbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bng-interface")
    {
        bng_interface = value;
        bng_interface.value_namespace = name_space;
        bng_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BngPbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bng-interface")
    {
        bng_interface.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> BngPbr::clone_ptr() const
{
    return std::make_shared<BngPbr>();
}

std::string BngPbr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BngPbr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BngPbr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BngPbr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool BngPbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "http-enrichment" || name == "bng-interface")
        return true;
    return false;
}

BngPbr::HttpEnrichment::HttpEnrichment()
    :
    parameters(nullptr) // presence node
{

    yang_name = "http-enrichment"; yang_parent_name = "bng-pbr"; is_top_level_class = false; has_list_ancestor = false; 
}

BngPbr::HttpEnrichment::~HttpEnrichment()
{
}

bool BngPbr::HttpEnrichment::has_data() const
{
    if (is_presence_container) return true;
    return (parameters !=  nullptr && parameters->has_data());
}

bool BngPbr::HttpEnrichment::has_operation() const
{
    return is_set(yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string BngPbr::HttpEnrichment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-bng-cfg:bng-pbr/" << get_segment_path();
    return path_buffer.str();
}

std::string BngPbr::HttpEnrichment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-enrichment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BngPbr::HttpEnrichment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BngPbr::HttpEnrichment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<BngPbr::HttpEnrichment::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BngPbr::HttpEnrichment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void BngPbr::HttpEnrichment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BngPbr::HttpEnrichment::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BngPbr::HttpEnrichment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters")
        return true;
    return false;
}

BngPbr::HttpEnrichment::Parameters::Parameters()
    :
    arg1{YType::enumeration, "arg1"},
    arg2{YType::enumeration, "arg2"},
    arg3{YType::enumeration, "arg3"},
    arg4{YType::enumeration, "arg4"}
{

    yang_name = "parameters"; yang_parent_name = "http-enrichment"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

BngPbr::HttpEnrichment::Parameters::~Parameters()
{
}

bool BngPbr::HttpEnrichment::Parameters::has_data() const
{
    if (is_presence_container) return true;
    return arg1.is_set
	|| arg2.is_set
	|| arg3.is_set
	|| arg4.is_set;
}

bool BngPbr::HttpEnrichment::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arg1.yfilter)
	|| ydk::is_set(arg2.yfilter)
	|| ydk::is_set(arg3.yfilter)
	|| ydk::is_set(arg4.yfilter);
}

std::string BngPbr::HttpEnrichment::Parameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-bng-cfg:bng-pbr/http-enrichment/" << get_segment_path();
    return path_buffer.str();
}

std::string BngPbr::HttpEnrichment::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BngPbr::HttpEnrichment::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arg1.is_set || is_set(arg1.yfilter)) leaf_name_data.push_back(arg1.get_name_leafdata());
    if (arg2.is_set || is_set(arg2.yfilter)) leaf_name_data.push_back(arg2.get_name_leafdata());
    if (arg3.is_set || is_set(arg3.yfilter)) leaf_name_data.push_back(arg3.get_name_leafdata());
    if (arg4.is_set || is_set(arg4.yfilter)) leaf_name_data.push_back(arg4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BngPbr::HttpEnrichment::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BngPbr::HttpEnrichment::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BngPbr::HttpEnrichment::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arg1")
    {
        arg1 = value;
        arg1.value_namespace = name_space;
        arg1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arg2")
    {
        arg2 = value;
        arg2.value_namespace = name_space;
        arg2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arg3")
    {
        arg3 = value;
        arg3.value_namespace = name_space;
        arg3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arg4")
    {
        arg4 = value;
        arg4.value_namespace = name_space;
        arg4.value_namespace_prefix = name_space_prefix;
    }
}

void BngPbr::HttpEnrichment::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arg1")
    {
        arg1.yfilter = yfilter;
    }
    if(value_path == "arg2")
    {
        arg2.yfilter = yfilter;
    }
    if(value_path == "arg3")
    {
        arg3.yfilter = yfilter;
    }
    if(value_path == "arg4")
    {
        arg4.yfilter = yfilter;
    }
}

bool BngPbr::HttpEnrichment::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arg1" || name == "arg2" || name == "arg3" || name == "arg4")
        return true;
    return false;
}

const Enum::YLeaf BngPbrHttpEnrichmentParams::subscriber_mac {1, "subscriber-mac"};
const Enum::YLeaf BngPbrHttpEnrichmentParams::subscriber_ip {2, "subscriber-ip"};
const Enum::YLeaf BngPbrHttpEnrichmentParams::host_name {4, "host-name"};
const Enum::YLeaf BngPbrHttpEnrichmentParams::bng_identifier_interface {8, "bng-identifier-interface"};


}
}

