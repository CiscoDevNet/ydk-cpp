
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_15.hpp"
#include "Cisco_IOS_XE_native_18.hpp"
#include "Cisco_IOS_XE_native_16.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Flow::Exporter::Option::ApplicationAttributes::ApplicationAttributes()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "application-attributes"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::ApplicationAttributes::~ApplicationAttributes()
{
}

bool Native::Flow::Exporter::Option::ApplicationAttributes::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::ApplicationAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::ApplicationAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::ApplicationAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::ApplicationAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::ApplicationAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::ApplicationAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::ApplicationAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::ApplicationAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::ApplicationTable::ApplicationTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "application-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::ApplicationTable::~ApplicationTable()
{
}

bool Native::Flow::Exporter::Option::ApplicationTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::ApplicationTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::ApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::ApplicationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::ApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::ApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::ApplicationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::ApplicationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::ApplicationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::C3PlClassTable::C3PlClassTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "c3pl-class-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::C3PlClassTable::~C3PlClassTable()
{
}

bool Native::Flow::Exporter::Option::C3PlClassTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::C3PlClassTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::C3PlClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::C3PlClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::C3PlClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::C3PlClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::C3PlClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::C3PlClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::C3PlClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::C3PlPolicyTable::C3PlPolicyTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "c3pl-policy-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::C3PlPolicyTable::~C3PlPolicyTable()
{
}

bool Native::Flow::Exporter::Option::C3PlPolicyTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::C3PlPolicyTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::C3PlPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-policy-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::C3PlPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::C3PlPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::C3PlPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::C3PlPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::C3PlPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::C3PlPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::ExporterStats::ExporterStats()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "exporter-stats"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::ExporterStats::~ExporterStats()
{
}

bool Native::Flow::Exporter::Option::ExporterStats::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::ExporterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::ExporterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::ExporterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::ExporterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::ExporterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::ExporterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::ExporterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::ExporterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::InterfaceTable::InterfaceTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "interface-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::InterfaceTable::~InterfaceTable()
{
}

bool Native::Flow::Exporter::Option::InterfaceTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::InterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::MetadataVersionTable::MetadataVersionTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "metadata-version-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::MetadataVersionTable::~MetadataVersionTable()
{
}

bool Native::Flow::Exporter::Option::MetadataVersionTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::MetadataVersionTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::MetadataVersionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-version-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::MetadataVersionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::MetadataVersionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::MetadataVersionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::MetadataVersionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::MetadataVersionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::MetadataVersionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::SamplerTable::SamplerTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "sampler-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::SamplerTable::~SamplerTable()
{
}

bool Native::Flow::Exporter::Option::SamplerTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::SamplerTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::SamplerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::SamplerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::SamplerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::SamplerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::SamplerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::SamplerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::SamplerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::SubApplicationTable::SubApplicationTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "sub-application-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::SubApplicationTable::~SubApplicationTable()
{
}

bool Native::Flow::Exporter::Option::SubApplicationTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::SubApplicationTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::SubApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-application-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::SubApplicationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::SubApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::SubApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::SubApplicationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::SubApplicationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::SubApplicationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::VrfTable::VrfTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "vrf-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::VrfTable::~VrfTable()
{
}

bool Native::Flow::Exporter::Option::VrfTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::VrfTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::VrfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::VrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Option::VrfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::VrfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::VrfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::OutputFeatures::OutputFeatures()
{

    yang_name = "output-features"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::OutputFeatures::~OutputFeatures()
{
}

bool Native::Flow::Exporter::OutputFeatures::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::OutputFeatures::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::OutputFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::OutputFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::OutputFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::OutputFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::OutputFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::OutputFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::OutputFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Source::Source()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Flow::Exporter::Source::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Flow::Exporter::Source::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Flow::Exporter::Source::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Flow::Exporter::Source::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Source::~Source()
{
}

bool Native::Flow::Exporter::Source::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Flow::Exporter::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Flow::Exporter::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Flow::Exporter::Source::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Flow::Exporter::Source::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Flow::Exporter::Source::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Flow::Exporter::Source::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
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

void Native::Flow::Exporter::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Source::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
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
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Flow::Exporter::Source::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Source::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Flow::Exporter::Source::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Flow::Exporter::Source::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Flow::Exporter::Source::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Source::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Source::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Source::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Source::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Flow::Exporter::Source::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Source::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Flow::Exporter::Source::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Flow::Exporter::Source::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Flow::Exporter::Source::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Source::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Source::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Source::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Source::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Flow::Exporter::Source::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Source::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Flow::Exporter::Source::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Flow::Exporter::Source::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Flow::Exporter::Source::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Source::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Source::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Source::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Source::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Flow::Exporter::Source::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Source::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Flow::Exporter::Source::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Flow::Exporter::Source::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Flow::Exporter::Source::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Source::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Source::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Source::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Source::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Flow::Exporter::Template_::Template_()
    :
    data(std::make_shared<Native::Flow::Exporter::Template_::Data>())
{
    data->parent = this;

    yang_name = "template"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Template_::~Template_()
{
}

bool Native::Flow::Exporter::Template_::has_data() const
{
    return (data !=  nullptr && data->has_data());
}

bool Native::Flow::Exporter::Template_::has_operation() const
{
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string Native::Flow::Exporter::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Flow::Exporter::Template_::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Native::Flow::Exporter::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Native::Flow::Exporter::Template_::Data::Data()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "data"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Template_::Data::~Data()
{
}

bool Native::Flow::Exporter::Template_::Data::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Template_::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Template_::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Template_::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Template_::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Template_::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Template_::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Template_::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Template_::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Transport::Transport()
    :
    udp{YType::uint16, "udp"}
{

    yang_name = "transport"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Transport::~Transport()
{
}

bool Native::Flow::Exporter::Transport::has_data() const
{
    return udp.is_set;
}

bool Native::Flow::Exporter::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udp.yfilter);
}

std::string Native::Flow::Exporter::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    type{YType::enumeration, "type"}
    	,
    cache(std::make_shared<Native::Flow::Monitor::Cache>())
	,default_(std::make_shared<Native::Flow::Monitor::Default_>())
	,history(std::make_shared<Native::Flow::Monitor::History>())
	,record(std::make_shared<Native::Flow::Monitor::Record>())
	,statistics(std::make_shared<Native::Flow::Monitor::Statistics>())
{
    cache->parent = this;
    default_->parent = this;
    history->parent = this;
    record->parent = this;
    statistics->parent = this;

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Flow::Monitor::~Monitor()
{
}

bool Native::Flow::Monitor::has_data() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| type.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (record !=  nullptr && record->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (record !=  nullptr && record->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Flow::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/flow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:monitor" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Flow::Monitor::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Flow::Monitor::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "exporter")
    {
        for(auto const & c : exporter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Flow::Monitor::Exporter>();
        c->parent = this;
        exporter.push_back(c);
        return c;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Flow::Monitor::History>();
        }
        return history;
    }

    if(child_yang_name == "record")
    {
        if(record == nullptr)
        {
            record = std::make_shared<Native::Flow::Monitor::Record>();
        }
        return record;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Flow::Monitor::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : exporter)
    {
        children[c->get_segment_path()] = c;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(record != nullptr)
    {
        children["record"] = record;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "default" || name == "exporter" || name == "history" || name == "record" || name == "statistics" || name == "name" || name == "description" || name == "type")
        return true;
    return false;
}

Native::Flow::Monitor::Cache::Cache()
    :
    entries{YType::uint32, "entries"},
    type{YType::enumeration, "type"}
    	,
    timeout(std::make_shared<Native::Flow::Monitor::Cache::Timeout>())
{
    timeout->parent = this;

    yang_name = "cache"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Cache::~Cache()
{
}

bool Native::Flow::Monitor::Cache::has_data() const
{
    return entries.is_set
	|| type.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Flow::Monitor::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Flow::Monitor::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Flow::Monitor::Cache::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::Flow::Monitor::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "entries" || name == "type")
        return true;
    return false;
}

Native::Flow::Monitor::Cache::Timeout::Timeout()
    :
    active{YType::uint32, "active"},
    inactive{YType::uint32, "inactive"},
    synchronized{YType::uint16, "synchronized"},
    update{YType::uint32, "update"}
    	,
    event(std::make_shared<Native::Flow::Monitor::Cache::Timeout::Event>())
{
    event->parent = this;

    yang_name = "timeout"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Cache::Timeout::~Timeout()
{
}

bool Native::Flow::Monitor::Cache::Timeout::has_data() const
{
    return active.is_set
	|| inactive.is_set
	|| synchronized.is_set
	|| update.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Native::Flow::Monitor::Cache::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(inactive.yfilter)
	|| ydk::is_set(synchronized.yfilter)
	|| ydk::is_set(update.yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Flow::Monitor::Cache::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Cache::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (inactive.is_set || is_set(inactive.yfilter)) leaf_name_data.push_back(inactive.get_name_leafdata());
    if (synchronized.is_set || is_set(synchronized.yfilter)) leaf_name_data.push_back(synchronized.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Cache::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Flow::Monitor::Cache::Timeout::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Cache::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Flow::Monitor::Cache::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive")
    {
        inactive = value;
        inactive.value_namespace = name_space;
        inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized")
    {
        synchronized = value;
        synchronized.value_namespace = name_space;
        synchronized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Cache::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "inactive")
    {
        inactive.yfilter = yfilter;
    }
    if(value_path == "synchronized")
    {
        synchronized.yfilter = yfilter;
    }
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Cache::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "active" || name == "inactive" || name == "synchronized" || name == "update")
        return true;
    return false;
}

Native::Flow::Monitor::Cache::Timeout::Event::Event()
    :
    transaction_end{YType::empty, "transaction-end"}
{

    yang_name = "event"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Cache::Timeout::Event::~Event()
{
}

bool Native::Flow::Monitor::Cache::Timeout::Event::has_data() const
{
    return transaction_end.is_set;
}

bool Native::Flow::Monitor::Cache::Timeout::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transaction_end.yfilter);
}

std::string Native::Flow::Monitor::Cache::Timeout::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Cache::Timeout::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transaction_end.is_set || is_set(transaction_end.yfilter)) leaf_name_data.push_back(transaction_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Cache::Timeout::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Cache::Timeout::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Cache::Timeout::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transaction-end")
    {
        transaction_end = value;
        transaction_end.value_namespace = name_space;
        transaction_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Cache::Timeout::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transaction-end")
    {
        transaction_end.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Cache::Timeout::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transaction-end")
        return true;
    return false;
}

Native::Flow::Monitor::Default_::Default_()
    :
    description{YType::empty, "description"},
    exporter{YType::empty, "exporter"},
    record{YType::empty, "record"}
    	,
    cache(std::make_shared<Native::Flow::Monitor::Default_::Cache>())
	,statistics(std::make_shared<Native::Flow::Monitor::Default_::Statistics>())
{
    cache->parent = this;
    statistics->parent = this;

    yang_name = "default"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default_::~Default_()
{
}

bool Native::Flow::Monitor::Default_::has_data() const
{
    return description.is_set
	|| exporter.is_set
	|| record.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Flow::Monitor::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(exporter.yfilter)
	|| ydk::is_set(record.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Flow::Monitor::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (exporter.is_set || is_set(exporter.yfilter)) leaf_name_data.push_back(exporter.get_name_leafdata());
    if (record.is_set || is_set(record.yfilter)) leaf_name_data.push_back(record.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Flow::Monitor::Default_::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Flow::Monitor::Default_::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Flow::Monitor::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exporter")
    {
        exporter = value;
        exporter.value_namespace = name_space;
        exporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record")
    {
        record = value;
        record.value_namespace = name_space;
        record.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "exporter")
    {
        exporter.yfilter = yfilter;
    }
    if(value_path == "record")
    {
        record.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "statistics" || name == "description" || name == "exporter" || name == "record")
        return true;
    return false;
}

Native::Flow::Monitor::Default_::Cache::Cache()
    :
    entries{YType::empty, "entries"},
    type{YType::empty, "type"}
    	,
    timeout(std::make_shared<Native::Flow::Monitor::Default_::Cache::Timeout>())
{
    timeout->parent = this;

    yang_name = "cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default_::Cache::~Cache()
{
}

bool Native::Flow::Monitor::Default_::Cache::has_data() const
{
    return entries.is_set
	|| type.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Flow::Monitor::Default_::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Flow::Monitor::Default_::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default_::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Flow::Monitor::Default_::Cache::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::Flow::Monitor::Default_::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default_::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default_::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "entries" || name == "type")
        return true;
    return false;
}

Native::Flow::Monitor::Default_::Cache::Timeout::Timeout()
    :
    active{YType::empty, "active"},
    inactive{YType::empty, "inactive"},
    synchronized{YType::empty, "synchronized"},
    update{YType::empty, "update"}
    	,
    event(std::make_shared<Native::Flow::Monitor::Default_::Cache::Timeout::Event>())
{
    event->parent = this;

    yang_name = "timeout"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default_::Cache::Timeout::~Timeout()
{
}

bool Native::Flow::Monitor::Default_::Cache::Timeout::has_data() const
{
    return active.is_set
	|| inactive.is_set
	|| synchronized.is_set
	|| update.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Native::Flow::Monitor::Default_::Cache::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(inactive.yfilter)
	|| ydk::is_set(synchronized.yfilter)
	|| ydk::is_set(update.yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Flow::Monitor::Default_::Cache::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default_::Cache::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (inactive.is_set || is_set(inactive.yfilter)) leaf_name_data.push_back(inactive.get_name_leafdata());
    if (synchronized.is_set || is_set(synchronized.yfilter)) leaf_name_data.push_back(synchronized.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::Cache::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Flow::Monitor::Default_::Cache::Timeout::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::Cache::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Flow::Monitor::Default_::Cache::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive")
    {
        inactive = value;
        inactive.value_namespace = name_space;
        inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized")
    {
        synchronized = value;
        synchronized.value_namespace = name_space;
        synchronized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default_::Cache::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "inactive")
    {
        inactive.yfilter = yfilter;
    }
    if(value_path == "synchronized")
    {
        synchronized.yfilter = yfilter;
    }
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default_::Cache::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "active" || name == "inactive" || name == "synchronized" || name == "update")
        return true;
    return false;
}

Native::Flow::Monitor::Default_::Cache::Timeout::Event::Event()
    :
    transaction_end{YType::empty, "transaction-end"}
{

    yang_name = "event"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default_::Cache::Timeout::Event::~Event()
{
}

bool Native::Flow::Monitor::Default_::Cache::Timeout::Event::has_data() const
{
    return transaction_end.is_set;
}

bool Native::Flow::Monitor::Default_::Cache::Timeout::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transaction_end.yfilter);
}

std::string Native::Flow::Monitor::Default_::Cache::Timeout::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default_::Cache::Timeout::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transaction_end.is_set || is_set(transaction_end.yfilter)) leaf_name_data.push_back(transaction_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::Cache::Timeout::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::Cache::Timeout::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Default_::Cache::Timeout::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transaction-end")
    {
        transaction_end = value;
        transaction_end.value_namespace = name_space;
        transaction_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default_::Cache::Timeout::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transaction-end")
    {
        transaction_end.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default_::Cache::Timeout::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transaction-end")
        return true;
    return false;
}

Native::Flow::Monitor::Default_::Statistics::Statistics()
    :
    packet(std::make_shared<Native::Flow::Monitor::Default_::Statistics::Packet>())
{
    packet->parent = this;

    yang_name = "statistics"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default_::Statistics::~Statistics()
{
}

bool Native::Flow::Monitor::Default_::Statistics::has_data() const
{
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Flow::Monitor::Default_::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Flow::Monitor::Default_::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default_::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Flow::Monitor::Default_::Statistics::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Flow::Monitor::Default_::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Monitor::Default_::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Monitor::Default_::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet")
        return true;
    return false;
}

Native::Flow::Monitor::Default_::Statistics::Packet::Packet()
    :
    protocol{YType::empty, "protocol"},
    size{YType::empty, "size"}
{

    yang_name = "packet"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default_::Statistics::Packet::~Packet()
{
}

bool Native::Flow::Monitor::Default_::Statistics::Packet::has_data() const
{
    return protocol.is_set
	|| size.is_set;
}

bool Native::Flow::Monitor::Default_::Statistics::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Monitor::Default_::Statistics::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default_::Statistics::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::Statistics::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::Statistics::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Default_::Statistics::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default_::Statistics::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default_::Statistics::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "size")
        return true;
    return false;
}

Native::Flow::Monitor::Exporter::Exporter()
    :
    name{YType::str, "name"}
{

    yang_name = "exporter"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Exporter::~Exporter()
{
}

bool Native::Flow::Monitor::Exporter::has_data() const
{
    return name.is_set;
}

bool Native::Flow::Monitor::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Flow::Monitor::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Flow::Monitor::History::History()
    :
    size{YType::uint8, "size"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "history"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::History::~History()
{
}

bool Native::Flow::Monitor::History::has_data() const
{
    return size.is_set
	|| timeout.is_set;
}

bool Native::Flow::Monitor::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Monitor::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "timeout")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Record()
    :
    type{YType::str, "type"}
    	,
    netflow(std::make_shared<Native::Flow::Monitor::Record::Netflow>())
{
    netflow->parent = this;

    yang_name = "record"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::~Record()
{
}

bool Native::Flow::Monitor::Record::has_data() const
{
    return type.is_set
	|| (netflow !=  nullptr && netflow->has_data());
}

bool Native::Flow::Monitor::Record::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (netflow !=  nullptr && netflow->has_operation());
}

std::string Native::Flow::Monitor::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netflow")
    {
        if(netflow == nullptr)
        {
            netflow = std::make_shared<Native::Flow::Monitor::Record::Netflow>();
        }
        return netflow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(netflow != nullptr)
    {
        children["netflow"] = netflow;
    }

    return children;
}

void Native::Flow::Monitor::Record::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netflow" || name == "type")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Netflow()
    :
    ipv4(std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "netflow"; yang_parent_name = "record"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::~Netflow()
{
}

bool Native::Flow::Monitor::Record::Netflow::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Monitor::Record::Netflow::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Monitor::Record::Netflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::get_children() const
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

void Native::Flow::Monitor::Record::Netflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Monitor::Record::Netflow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Monitor::Record::Netflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::Ipv4()
    :
    prefix_port{YType::empty, "prefix-port"},
    protocol_port{YType::empty, "protocol-port"},
    protocol_port_tos{YType::empty, "protocol-port-tos"}
    	,
    as(nullptr) // presence node
	,as_tos(nullptr) // presence node
	,bgp_nexthop_tos(nullptr) // presence node
	,destination_prefix(nullptr) // presence node
	,destination_prefix_tos(nullptr) // presence node
	,original_input(nullptr) // presence node
	,original_output(nullptr) // presence node
	,prefix(nullptr) // presence node
	,prefix_tos(nullptr) // presence node
	,source_prefix(nullptr) // presence node
	,source_prefix_tos(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "netflow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::~Ipv4()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::has_data() const
{
    return prefix_port.is_set
	|| protocol_port.is_set
	|| protocol_port_tos.is_set
	|| (as !=  nullptr && as->has_data())
	|| (as_tos !=  nullptr && as_tos->has_data())
	|| (bgp_nexthop_tos !=  nullptr && bgp_nexthop_tos->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (destination_prefix_tos !=  nullptr && destination_prefix_tos->has_data())
	|| (original_input !=  nullptr && original_input->has_data())
	|| (original_output !=  nullptr && original_output->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (prefix_tos !=  nullptr && prefix_tos->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data())
	|| (source_prefix_tos !=  nullptr && source_prefix_tos->has_data());
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_port.yfilter)
	|| ydk::is_set(protocol_port.yfilter)
	|| ydk::is_set(protocol_port_tos.yfilter)
	|| (as !=  nullptr && as->has_operation())
	|| (as_tos !=  nullptr && as_tos->has_operation())
	|| (bgp_nexthop_tos !=  nullptr && bgp_nexthop_tos->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (destination_prefix_tos !=  nullptr && destination_prefix_tos->has_operation())
	|| (original_input !=  nullptr && original_input->has_operation())
	|| (original_output !=  nullptr && original_output->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (prefix_tos !=  nullptr && prefix_tos->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation())
	|| (source_prefix_tos !=  nullptr && source_prefix_tos->has_operation());
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_port.is_set || is_set(prefix_port.yfilter)) leaf_name_data.push_back(prefix_port.get_name_leafdata());
    if (protocol_port.is_set || is_set(protocol_port.yfilter)) leaf_name_data.push_back(protocol_port.get_name_leafdata());
    if (protocol_port_tos.is_set || is_set(protocol_port_tos.yfilter)) leaf_name_data.push_back(protocol_port_tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::As>();
        }
        return as;
    }

    if(child_yang_name == "as-tos")
    {
        if(as_tos == nullptr)
        {
            as_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos>();
        }
        return as_tos;
    }

    if(child_yang_name == "bgp-nexthop-tos")
    {
        if(bgp_nexthop_tos == nullptr)
        {
            bgp_nexthop_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos>();
        }
        return bgp_nexthop_tos;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "destination-prefix-tos")
    {
        if(destination_prefix_tos == nullptr)
        {
            destination_prefix_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos>();
        }
        return destination_prefix_tos;
    }

    if(child_yang_name == "original-input")
    {
        if(original_input == nullptr)
        {
            original_input = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput>();
        }
        return original_input;
    }

    if(child_yang_name == "original-output")
    {
        if(original_output == nullptr)
        {
            original_output = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput>();
        }
        return original_output;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "prefix-tos")
    {
        if(prefix_tos == nullptr)
        {
            prefix_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos>();
        }
        return prefix_tos;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix>();
        }
        return source_prefix;
    }

    if(child_yang_name == "source-prefix-tos")
    {
        if(source_prefix_tos == nullptr)
        {
            source_prefix_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos>();
        }
        return source_prefix_tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as != nullptr)
    {
        children["as"] = as;
    }

    if(as_tos != nullptr)
    {
        children["as-tos"] = as_tos;
    }

    if(bgp_nexthop_tos != nullptr)
    {
        children["bgp-nexthop-tos"] = bgp_nexthop_tos;
    }

    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(destination_prefix_tos != nullptr)
    {
        children["destination-prefix-tos"] = destination_prefix_tos;
    }

    if(original_input != nullptr)
    {
        children["original-input"] = original_input;
    }

    if(original_output != nullptr)
    {
        children["original-output"] = original_output;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(prefix_tos != nullptr)
    {
        children["prefix-tos"] = prefix_tos;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    if(source_prefix_tos != nullptr)
    {
        children["source-prefix-tos"] = source_prefix_tos;
    }

    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-port")
    {
        prefix_port = value;
        prefix_port.value_namespace = name_space;
        prefix_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-port")
    {
        protocol_port = value;
        protocol_port.value_namespace = name_space;
        protocol_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-port-tos")
    {
        protocol_port_tos = value;
        protocol_port_tos.value_namespace = name_space;
        protocol_port_tos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-port")
    {
        prefix_port.yfilter = yfilter;
    }
    if(value_path == "protocol-port")
    {
        protocol_port.yfilter = yfilter;
    }
    if(value_path == "protocol-port-tos")
    {
        protocol_port_tos.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as-tos" || name == "bgp-nexthop-tos" || name == "destination-prefix" || name == "destination-prefix-tos" || name == "original-input" || name == "original-output" || name == "prefix" || name == "prefix-tos" || name == "source-prefix" || name == "source-prefix-tos" || name == "prefix-port" || name == "protocol-port" || name == "protocol-port-tos")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::As::As()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "as"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::As::~As()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::As::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::AsTos()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "as-tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::~AsTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::BgpNexthopTos()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "bgp-nexthop-tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::~BgpNexthopTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-nexthop-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::DestinationPrefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "destination-prefix"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::~DestinationPrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::DestinationPrefixTos()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "destination-prefix-tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::~DestinationPrefixTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::OriginalInput()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "original-input"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::~OriginalInput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::OriginalOutput()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "original-output"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::~OriginalOutput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::Prefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "prefix"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::~Prefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::PrefixTos()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "prefix-tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::~PrefixTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::SourcePrefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "source-prefix"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::~SourcePrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::SourcePrefixTos()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "source-prefix-tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::~SourcePrefixTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::Ipv6()
    :
    protocol_port{YType::empty, "protocol-port"}
    	,
    as(nullptr) // presence node
	,bgp_nexthop(nullptr) // presence node
	,destination_prefix(nullptr) // presence node
	,original_input(nullptr) // presence node
	,original_output(nullptr) // presence node
	,prefix(nullptr) // presence node
	,source_prefix(nullptr) // presence node
{

    yang_name = "ipv6"; yang_parent_name = "netflow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::~Ipv6()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::has_data() const
{
    return protocol_port.is_set
	|| (as !=  nullptr && as->has_data())
	|| (bgp_nexthop !=  nullptr && bgp_nexthop->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (original_input !=  nullptr && original_input->has_data())
	|| (original_output !=  nullptr && original_output->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data());
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_port.yfilter)
	|| (as !=  nullptr && as->has_operation())
	|| (bgp_nexthop !=  nullptr && bgp_nexthop->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (original_input !=  nullptr && original_input->has_operation())
	|| (original_output !=  nullptr && original_output->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation());
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_port.is_set || is_set(protocol_port.yfilter)) leaf_name_data.push_back(protocol_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::As>();
        }
        return as;
    }

    if(child_yang_name == "bgp-nexthop")
    {
        if(bgp_nexthop == nullptr)
        {
            bgp_nexthop = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop>();
        }
        return bgp_nexthop;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "original-input")
    {
        if(original_input == nullptr)
        {
            original_input = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput>();
        }
        return original_input;
    }

    if(child_yang_name == "original-output")
    {
        if(original_output == nullptr)
        {
            original_output = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput>();
        }
        return original_output;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix>();
        }
        return source_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as != nullptr)
    {
        children["as"] = as;
    }

    if(bgp_nexthop != nullptr)
    {
        children["bgp-nexthop"] = bgp_nexthop;
    }

    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(original_input != nullptr)
    {
        children["original-input"] = original_input;
    }

    if(original_output != nullptr)
    {
        children["original-output"] = original_output;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-port")
    {
        protocol_port = value;
        protocol_port.value_namespace = name_space;
        protocol_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-port")
    {
        protocol_port.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "bgp-nexthop" || name == "destination-prefix" || name == "original-input" || name == "original-output" || name == "prefix" || name == "source-prefix" || name == "protocol-port")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::As::As()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "as"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::As::~As()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::As::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::BgpNexthop()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "bgp-nexthop"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::~BgpNexthop()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::DestinationPrefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "destination-prefix"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::~DestinationPrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::OriginalInput()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "original-input"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::~OriginalInput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::OriginalOutput()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "original-output"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::~OriginalOutput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::Prefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "prefix"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::~Prefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::SourcePrefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "source-prefix"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::~SourcePrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Statistics::Statistics()
    :
    packet(std::make_shared<Native::Flow::Monitor::Statistics::Packet>())
{
    packet->parent = this;

    yang_name = "statistics"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Statistics::~Statistics()
{
}

bool Native::Flow::Monitor::Statistics::has_data() const
{
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Flow::Monitor::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Flow::Monitor::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Flow::Monitor::Statistics::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Flow::Monitor::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Monitor::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Monitor::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet")
        return true;
    return false;
}

Native::Flow::Monitor::Statistics::Packet::Packet()
    :
    protocol{YType::empty, "protocol"},
    size{YType::empty, "size"}
{

    yang_name = "packet"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Statistics::Packet::~Packet()
{
}

bool Native::Flow::Monitor::Statistics::Packet::has_data() const
{
    return protocol.is_set
	|| size.is_set;
}

bool Native::Flow::Monitor::Statistics::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Monitor::Statistics::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Statistics::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Statistics::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Statistics::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Statistics::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Statistics::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Statistics::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "size")
        return true;
    return false;
}

Native::Flow::Record::Record()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    type{YType::enumeration, "type"}
    	,
    collect(std::make_shared<Native::Flow::Record::Collect>())
	,default_(std::make_shared<Native::Flow::Record::Default_>())
	,match(std::make_shared<Native::Flow::Record::Match>())
{
    collect->parent = this;
    default_->parent = this;
    match->parent = this;

    yang_name = "record"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Flow::Record::~Record()
{
}

bool Native::Flow::Record::has_data() const
{
    return name.is_set
	|| description.is_set
	|| type.is_set
	|| (collect !=  nullptr && collect->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Flow::Record::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (collect !=  nullptr && collect->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Flow::Record::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/flow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Flow::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:record" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collect")
    {
        if(collect == nullptr)
        {
            collect = std::make_shared<Native::Flow::Record::Collect>();
        }
        return collect;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Flow::Record::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Flow::Record::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(collect != nullptr)
    {
        children["collect"] = collect;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Flow::Record::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collect" || name == "default" || name == "match" || name == "name" || name == "description" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Collect::Collect()
    :
    application(std::make_shared<Native::Flow::Record::Collect::Application>())
	,connection(std::make_shared<Native::Flow::Record::Collect::Connection>())
	,counter(std::make_shared<Native::Flow::Record::Collect::Counter>())
	,datalink(std::make_shared<Native::Flow::Record::Collect::Datalink>())
	,flow(std::make_shared<Native::Flow::Record::Collect::Flow_>())
	,interface(std::make_shared<Native::Flow::Record::Collect::Interface>())
	,ipv4(std::make_shared<Native::Flow::Record::Collect::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Collect::Ipv6>())
	,metadata(std::make_shared<Native::Flow::Record::Collect::Metadata>())
	,monitor(std::make_shared<Native::Flow::Record::Collect::Monitor>())
	,mpls(std::make_shared<Native::Flow::Record::Collect::Mpls>())
	,network(std::make_shared<Native::Flow::Record::Collect::Network>())
	,pfr(std::make_shared<Native::Flow::Record::Collect::Pfr>())
	,policy(std::make_shared<Native::Flow::Record::Collect::Policy>())
	,routing(std::make_shared<Native::Flow::Record::Collect::Routing>())
	,services(std::make_shared<Native::Flow::Record::Collect::Services>())
	,timestamp(std::make_shared<Native::Flow::Record::Collect::Timestamp>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Transport>())
{
    application->parent = this;
    connection->parent = this;
    counter->parent = this;
    datalink->parent = this;
    flow->parent = this;
    interface->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    metadata->parent = this;
    monitor->parent = this;
    mpls->parent = this;
    network->parent = this;
    pfr->parent = this;
    policy->parent = this;
    routing->parent = this;
    services->parent = this;
    timestamp->parent = this;
    transport->parent = this;

    yang_name = "collect"; yang_parent_name = "record"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::~Collect()
{
}

bool Native::Flow::Record::Collect::has_data() const
{
    return (application !=  nullptr && application->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (counter !=  nullptr && counter->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metadata !=  nullptr && metadata->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (services !=  nullptr && services->has_data())
	|| (timestamp !=  nullptr && timestamp->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::has_operation() const
{
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (counter !=  nullptr && counter->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metadata !=  nullptr && metadata->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (services !=  nullptr && services->has_operation())
	|| (timestamp !=  nullptr && timestamp->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Collect::Application>();
        }
        return application;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Native::Flow::Record::Collect::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Flow::Record::Collect::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Collect::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Flow::Record::Collect::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metadata")
    {
        if(metadata == nullptr)
        {
            metadata = std::make_shared<Native::Flow::Record::Collect::Metadata>();
        }
        return metadata;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Flow::Record::Collect::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Flow::Record::Collect::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Network>();
        }
        return network;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::Flow::Record::Collect::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Flow::Record::Collect::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<Native::Flow::Record::Collect::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<Native::Flow::Record::Collect::Services>();
        }
        return services;
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Native::Flow::Record::Collect::Timestamp>();
        }
        return timestamp;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(datalink != nullptr)
    {
        children["datalink"] = datalink;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(metadata != nullptr)
    {
        children["metadata"] = metadata;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(pfr != nullptr)
    {
        children["pfr"] = pfr;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    if(services != nullptr)
    {
        children["services"] = services;
    }

    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "connection" || name == "counter" || name == "datalink" || name == "flow" || name == "interface" || name == "ipv4" || name == "ipv6" || name == "metadata" || name == "monitor" || name == "mpls" || name == "network" || name == "pfr" || name == "policy" || name == "routing" || name == "services" || name == "timestamp" || name == "transport")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Application()
    :
    vendor{YType::empty, "vendor"},
    version{YType::empty, "version"}
    	,
    dns(std::make_shared<Native::Flow::Record::Collect::Application::Dns>())
	,http(std::make_shared<Native::Flow::Record::Collect::Application::Http>())
	,media(std::make_shared<Native::Flow::Record::Collect::Application::Media>())
	,name(nullptr) // presence node
	,nntp(std::make_shared<Native::Flow::Record::Collect::Application::Nntp>())
	,pop3(std::make_shared<Native::Flow::Record::Collect::Application::Pop3>())
	,rtmp(std::make_shared<Native::Flow::Record::Collect::Application::Rtmp>())
	,rtsp(std::make_shared<Native::Flow::Record::Collect::Application::Rtsp>())
	,sip(std::make_shared<Native::Flow::Record::Collect::Application::Sip>())
	,smtp(std::make_shared<Native::Flow::Record::Collect::Application::Smtp>())
	,ssl(std::make_shared<Native::Flow::Record::Collect::Application::Ssl>())
{
    dns->parent = this;
    http->parent = this;
    media->parent = this;
    nntp->parent = this;
    pop3->parent = this;
    rtmp->parent = this;
    rtsp->parent = this;
    sip->parent = this;
    smtp->parent = this;
    ssl->parent = this;

    yang_name = "application"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::~Application()
{
}

bool Native::Flow::Record::Collect::Application::has_data() const
{
    return vendor.is_set
	|| version.is_set
	|| (dns !=  nullptr && dns->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (name !=  nullptr && name->has_data())
	|| (nntp !=  nullptr && nntp->has_data())
	|| (pop3 !=  nullptr && pop3->has_data())
	|| (rtmp !=  nullptr && rtmp->has_data())
	|| (rtsp !=  nullptr && rtsp->has_data())
	|| (sip !=  nullptr && sip->has_data())
	|| (smtp !=  nullptr && smtp->has_data())
	|| (ssl !=  nullptr && ssl->has_data());
}

bool Native::Flow::Record::Collect::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (dns !=  nullptr && dns->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (name !=  nullptr && name->has_operation())
	|| (nntp !=  nullptr && nntp->has_operation())
	|| (pop3 !=  nullptr && pop3->has_operation())
	|| (rtmp !=  nullptr && rtmp->has_operation())
	|| (rtsp !=  nullptr && rtsp->has_operation())
	|| (sip !=  nullptr && sip->has_operation())
	|| (smtp !=  nullptr && smtp->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation());
}

std::string Native::Flow::Record::Collect::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Flow::Record::Collect::Application::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Flow::Record::Collect::Application::Http>();
        }
        return http;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Flow::Record::Collect::Application::Media>();
        }
        return media;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Flow::Record::Collect::Application::Name>();
        }
        return name;
    }

    if(child_yang_name == "nntp")
    {
        if(nntp == nullptr)
        {
            nntp = std::make_shared<Native::Flow::Record::Collect::Application::Nntp>();
        }
        return nntp;
    }

    if(child_yang_name == "pop3")
    {
        if(pop3 == nullptr)
        {
            pop3 = std::make_shared<Native::Flow::Record::Collect::Application::Pop3>();
        }
        return pop3;
    }

    if(child_yang_name == "rtmp")
    {
        if(rtmp == nullptr)
        {
            rtmp = std::make_shared<Native::Flow::Record::Collect::Application::Rtmp>();
        }
        return rtmp;
    }

    if(child_yang_name == "rtsp")
    {
        if(rtsp == nullptr)
        {
            rtsp = std::make_shared<Native::Flow::Record::Collect::Application::Rtsp>();
        }
        return rtsp;
    }

    if(child_yang_name == "sip")
    {
        if(sip == nullptr)
        {
            sip = std::make_shared<Native::Flow::Record::Collect::Application::Sip>();
        }
        return sip;
    }

    if(child_yang_name == "smtp")
    {
        if(smtp == nullptr)
        {
            smtp = std::make_shared<Native::Flow::Record::Collect::Application::Smtp>();
        }
        return smtp;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Flow::Record::Collect::Application::Ssl>();
        }
        return ssl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(media != nullptr)
    {
        children["media"] = media;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    if(nntp != nullptr)
    {
        children["nntp"] = nntp;
    }

    if(pop3 != nullptr)
    {
        children["pop3"] = pop3;
    }

    if(rtmp != nullptr)
    {
        children["rtmp"] = rtmp;
    }

    if(rtsp != nullptr)
    {
        children["rtsp"] = rtsp;
    }

    if(sip != nullptr)
    {
        children["sip"] = sip;
    }

    if(smtp != nullptr)
    {
        children["smtp"] = smtp;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns" || name == "http" || name == "media" || name == "name" || name == "nntp" || name == "pop3" || name == "rtmp" || name == "rtsp" || name == "sip" || name == "smtp" || name == "ssl" || name == "vendor" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Dns::Dns()
    :
    domain_name{YType::empty, "domain-name"}
{

    yang_name = "dns"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Dns::~Dns()
{
}

bool Native::Flow::Record::Collect::Application::Dns::has_data() const
{
    return domain_name.is_set;
}

bool Native::Flow::Record::Collect::Application::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Http::Http()
    :
    host{YType::empty, "host"},
    referer{YType::empty, "referer"},
    url{YType::empty, "url"},
    user_agent{YType::empty, "user-agent"}
    	,
    uri(std::make_shared<Native::Flow::Record::Collect::Application::Http::Uri>())
{
    uri->parent = this;

    yang_name = "http"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Http::~Http()
{
}

bool Native::Flow::Record::Collect::Application::Http::has_data() const
{
    return host.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| (uri !=  nullptr && uri->has_data());
}

bool Native::Flow::Record::Collect::Application::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(referer.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(user_agent.yfilter)
	|| (uri !=  nullptr && uri->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (referer.is_set || is_set(referer.yfilter)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.yfilter)) leaf_name_data.push_back(user_agent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uri")
    {
        if(uri == nullptr)
        {
            uri = std::make_shared<Native::Flow::Record::Collect::Application::Http::Uri>();
        }
        return uri;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(uri != nullptr)
    {
        children["uri"] = uri;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referer")
    {
        referer = value;
        referer.value_namespace = name_space;
        referer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-agent")
    {
        user_agent = value;
        user_agent.value_namespace = name_space;
        user_agent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "referer")
    {
        referer.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "user-agent")
    {
        user_agent.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uri" || name == "host" || name == "referer" || name == "url" || name == "user-agent")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Http::Uri::Uri()
    :
    statistics{YType::empty, "statistics"}
{

    yang_name = "uri"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Http::Uri::~Uri()
{
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_data() const
{
    return statistics.is_set;
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Http::Uri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Http::Uri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Http::Uri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Http::Uri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Http::Uri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Http::Uri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Media()
    :
    event{YType::empty, "event"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes>())
	,packets(std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "media"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::~Media()
{
}

bool Native::Flow::Record::Collect::Application::Media::has_data() const
{
    return event.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "event")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Bytes()
    :
    counter(nullptr) // presence node
	,rate(nullptr) // presence node
{

    yang_name = "bytes"; yang_parent_name = "media"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Counter::Counter()
    :
    long_{YType::empty, "long"}
{

    yang_name = "counter"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_data() const
{
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_flow != nullptr)
    {
        children["per-flow"] = per_flow;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-flow")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "per-flow"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Packets::Packets()
    :
    counter(nullptr) // presence node
	,rate(nullptr) // presence node
{

    yang_name = "packets"; yang_parent_name = "media"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Packets::Counter::Counter()
    :
    long_{YType::empty, "long"}
{

    yang_name = "counter"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Packets::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Counter::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::Packets::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::Rate()
    :
    variation(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::has_data() const
{
    return (variation !=  nullptr && variation->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (variation !=  nullptr && variation->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "variation")
    {
        if(variation == nullptr)
        {
            variation = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation>();
        }
        return variation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(variation != nullptr)
    {
        children["variation"] = variation;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Packets::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "variation")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::Variation()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "variation"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::~Variation()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Name::Name()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{

    yang_name = "name"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Name::~Name()
{
}

bool Native::Flow::Record::Collect::Application::Name::has_data() const
{
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Collect::Application::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_on_resolution.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.yfilter)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
        account_on_resolution.value_namespace = name_space;
        account_on_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-on-resolution")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Nntp::Nntp()
    :
    group_name{YType::empty, "group-name"}
{

    yang_name = "nntp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Nntp::~Nntp()
{
}

bool Native::Flow::Record::Collect::Application::Nntp::has_data() const
{
    return group_name.is_set;
}

bool Native::Flow::Record::Collect::Application::Nntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Nntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Nntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Nntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Nntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Nntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Nntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Nntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Pop3::Pop3()
    :
    server{YType::empty, "server"}
{

    yang_name = "pop3"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Pop3::~Pop3()
{
}

bool Native::Flow::Record::Collect::Application::Pop3::has_data() const
{
    return server.is_set;
}

bool Native::Flow::Record::Collect::Application::Pop3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Pop3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Pop3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Pop3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Pop3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Pop3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Pop3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Pop3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Rtmp::Rtmp()
    :
    pageurl{YType::empty, "pageUrl"}
{

    yang_name = "rtmp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Rtmp::~Rtmp()
{
}

bool Native::Flow::Record::Collect::Application::Rtmp::has_data() const
{
    return pageurl.is_set;
}

bool Native::Flow::Record::Collect::Application::Rtmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pageurl.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Rtmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Rtmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pageurl.is_set || is_set(pageurl.yfilter)) leaf_name_data.push_back(pageurl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Rtmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Rtmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Rtmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pageUrl")
    {
        pageurl = value;
        pageurl.value_namespace = name_space;
        pageurl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Rtmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pageUrl")
    {
        pageurl.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Rtmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pageUrl")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Rtsp::Rtsp()
    :
    host{YType::empty, "host"}
{

    yang_name = "rtsp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Rtsp::~Rtsp()
{
}

bool Native::Flow::Record::Collect::Application::Rtsp::has_data() const
{
    return host.is_set;
}

bool Native::Flow::Record::Collect::Application::Rtsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Rtsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Rtsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Rtsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Rtsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Rtsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Rtsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Rtsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Sip::Sip()
    :
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "sip"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Sip::~Sip()
{
}

bool Native::Flow::Record::Collect::Application::Sip::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool Native::Flow::Record::Collect::Application::Sip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Sip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Sip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Sip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Sip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Sip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Sip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Sip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Smtp::Smtp()
    :
    sender{YType::empty, "sender"},
    server{YType::empty, "server"}
{

    yang_name = "smtp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Smtp::~Smtp()
{
}

bool Native::Flow::Record::Collect::Application::Smtp::has_data() const
{
    return sender.is_set
	|| server.is_set;
}

bool Native::Flow::Record::Collect::Application::Smtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Smtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Smtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Smtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Smtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Smtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Smtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Smtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender" || name == "server")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Ssl::Ssl()
    :
    common_name{YType::empty, "common-name"}
{

    yang_name = "ssl"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Ssl::~Ssl()
{
}

bool Native::Flow::Record::Collect::Application::Ssl::has_data() const
{
    return common_name.is_set;
}

bool Native::Flow::Record::Collect::Application::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_name.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_name.is_set || is_set(common_name.yfilter)) leaf_name_data.push_back(common_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-name")
    {
        common_name = value;
        common_name.value_namespace = name_space;
        common_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-name")
    {
        common_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-name")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Connection()
    :
    id{YType::empty, "id"},
    initiator{YType::empty, "initiator"},
    new_connections{YType::empty, "new-connections"},
    sum_duration{YType::empty, "sum-duration"},
    transaction_id{YType::empty, "transaction-id"}
    	,
    client(std::make_shared<Native::Flow::Record::Collect::Connection::Client>())
	,delay(std::make_shared<Native::Flow::Record::Collect::Connection::Delay>())
	,server(std::make_shared<Native::Flow::Record::Collect::Connection::Server>())
	,transaction(std::make_shared<Native::Flow::Record::Collect::Connection::Transaction>())
{
    client->parent = this;
    delay->parent = this;
    server->parent = this;
    transaction->parent = this;

    yang_name = "connection"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::~Connection()
{
}

bool Native::Flow::Record::Collect::Connection::has_data() const
{
    return id.is_set
	|| initiator.is_set
	|| new_connections.is_set
	|| sum_duration.is_set
	|| transaction_id.is_set
	|| (client !=  nullptr && client->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (transaction !=  nullptr && transaction->has_data());
}

bool Native::Flow::Record::Collect::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(initiator.yfilter)
	|| ydk::is_set(new_connections.yfilter)
	|| ydk::is_set(sum_duration.yfilter)
	|| ydk::is_set(transaction_id.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (transaction !=  nullptr && transaction->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (initiator.is_set || is_set(initiator.yfilter)) leaf_name_data.push_back(initiator.get_name_leafdata());
    if (new_connections.is_set || is_set(new_connections.yfilter)) leaf_name_data.push_back(new_connections.get_name_leafdata());
    if (sum_duration.is_set || is_set(sum_duration.yfilter)) leaf_name_data.push_back(sum_duration.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.yfilter)) leaf_name_data.push_back(transaction_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Flow::Record::Collect::Connection::Client>();
        }
        return client;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Flow::Record::Collect::Connection::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Flow::Record::Collect::Connection::Server>();
        }
        return server;
    }

    if(child_yang_name == "transaction")
    {
        if(transaction == nullptr)
        {
            transaction = std::make_shared<Native::Flow::Record::Collect::Connection::Transaction>();
        }
        return transaction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(transaction != nullptr)
    {
        children["transaction"] = transaction;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initiator")
    {
        initiator = value;
        initiator.value_namespace = name_space;
        initiator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-connections")
    {
        new_connections = value;
        new_connections.value_namespace = name_space;
        new_connections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-duration")
    {
        sum_duration = value;
        sum_duration.value_namespace = name_space;
        sum_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
        transaction_id.value_namespace = name_space;
        transaction_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "initiator")
    {
        initiator.yfilter = yfilter;
    }
    if(value_path == "new-connections")
    {
        new_connections.yfilter = yfilter;
    }
    if(value_path == "sum-duration")
    {
        sum_duration.yfilter = yfilter;
    }
    if(value_path == "transaction-id")
    {
        transaction_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "delay" || name == "server" || name == "transaction" || name == "id" || name == "initiator" || name == "new-connections" || name == "sum-duration" || name == "transaction-id")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Client()
    :
    all{YType::empty, "all"}
    	,
    counter(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter>())
	,ipv4(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv6>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Transport>())
{
    counter->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;

    yang_name = "client"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Client::~Client()
{
}

bool Native::Flow::Record::Collect::Connection::Client::has_data() const
{
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "ipv4" || name == "ipv6" || name == "transport" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Counter()
    :
    bytes(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes>())
	,packets(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "counter"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Client::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::has_data() const
{
    return (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::has_operation() const
{
    return is_set(yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Connection::Client::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
    	,
    network(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport>())
{
    network->parent = this;
    transport->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set
	|| (network !=  nullptr && network->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network>();
        }
        return network;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "transport" || name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::Network()
    :
    long_{YType::empty, "long"}
{

    yang_name = "network"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::~Network()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::Transport()
    :
    long_{YType::empty, "long"}
{

    yang_name = "transport"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Packets::Packets()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Packets::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Client::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv4::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Client::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Transport::Transport()
    :
    port{YType::empty, "port"}
{

    yang_name = "transport"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Client::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Transport::has_data() const
{
    return port.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Client::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Client::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Client::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Delay()
    :
    all{YType::empty, "all"}
    	,
    application(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Application>())
	,network(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network>())
	,response(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response>())
{
    application->parent = this;
    network->parent = this;
    response->parent = this;

    yang_name = "delay"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::~Delay()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::has_data() const
{
    return all.is_set
	|| (application !=  nullptr && application->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Application>();
        }
        return application;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network>();
        }
        return network;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(response != nullptr)
    {
        children["response"] = response;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "network" || name == "response" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Application::Application()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "application"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Application::~Application()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Application::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::Network()
    :
    client_to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer>())
	,long_lived(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived>())
	,to_client(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToClient>())
	,to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToServer>())
{
    client_to_server->parent = this;
    long_lived->parent = this;
    to_client->parent = this;
    to_server->parent = this;

    yang_name = "network"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Network::~Network()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::has_data() const
{
    return (client_to_server !=  nullptr && client_to_server->has_data())
	|| (long_lived !=  nullptr && long_lived->has_data())
	|| (to_client !=  nullptr && to_client->has_data())
	|| (to_server !=  nullptr && to_server->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_server !=  nullptr && client_to_server->has_operation())
	|| (long_lived !=  nullptr && long_lived->has_operation())
	|| (to_client !=  nullptr && to_client->has_operation())
	|| (to_server !=  nullptr && to_server->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-server")
    {
        if(client_to_server == nullptr)
        {
            client_to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer>();
        }
        return client_to_server;
    }

    if(child_yang_name == "long-lived")
    {
        if(long_lived == nullptr)
        {
            long_lived = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived>();
        }
        return long_lived;
    }

    if(child_yang_name == "to-client")
    {
        if(to_client == nullptr)
        {
            to_client = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToClient>();
        }
        return to_client;
    }

    if(child_yang_name == "to-server")
    {
        if(to_server == nullptr)
        {
            to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToServer>();
        }
        return to_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_to_server != nullptr)
    {
        children["client-to-server"] = client_to_server;
    }

    if(long_lived != nullptr)
    {
        children["long-lived"] = long_lived;
    }

    if(to_client != nullptr)
    {
        children["to-client"] = to_client;
    }

    if(to_server != nullptr)
    {
        children["to-server"] = to_server;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Connection::Delay::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-server" || name == "long-lived" || name == "to-client" || name == "to-server")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::ClientToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-server"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::~ClientToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::has_data() const
{
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::LongLived()
    :
    client_to_serve(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe>())
	,to_client(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient>())
	,to_serve(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe>())
{
    client_to_serve->parent = this;
    to_client->parent = this;
    to_serve->parent = this;

    yang_name = "long-lived"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::~LongLived()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::has_data() const
{
    return (client_to_serve !=  nullptr && client_to_serve->has_data())
	|| (to_client !=  nullptr && to_client->has_data())
	|| (to_serve !=  nullptr && to_serve->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_serve !=  nullptr && client_to_serve->has_operation())
	|| (to_client !=  nullptr && to_client->has_operation())
	|| (to_serve !=  nullptr && to_serve->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-lived";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-serve")
    {
        if(client_to_serve == nullptr)
        {
            client_to_serve = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe>();
        }
        return client_to_serve;
    }

    if(child_yang_name == "to-client")
    {
        if(to_client == nullptr)
        {
            to_client = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient>();
        }
        return to_client;
    }

    if(child_yang_name == "to-serve")
    {
        if(to_serve == nullptr)
        {
            to_serve = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe>();
        }
        return to_serve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_to_serve != nullptr)
    {
        children["client-to-serve"] = client_to_serve;
    }

    if(to_client != nullptr)
    {
        children["to-client"] = to_client;
    }

    if(to_serve != nullptr)
    {
        children["to-serve"] = to_serve;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-serve" || name == "to-client" || name == "to-serve")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::ClientToServe()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-serve"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::~ClientToServe()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::ToClient()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "to-client"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::~ToClient()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::ToServe()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "to-serve"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::~ToServe()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::ToClient()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-client"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::~ToClient()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::has_data() const
{
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::ToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-server"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::~ToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::has_data() const
{
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Response::Response()
    :
    client_to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer>())
	,to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ToServer>())
{
    client_to_server->parent = this;
    to_server->parent = this;

    yang_name = "response"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Response::~Response()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::has_data() const
{
    return (client_to_server !=  nullptr && client_to_server->has_data())
	|| (to_server !=  nullptr && to_server->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_server !=  nullptr && client_to_server->has_operation())
	|| (to_server !=  nullptr && to_server->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-server")
    {
        if(client_to_server == nullptr)
        {
            client_to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer>();
        }
        return client_to_server;
    }

    if(child_yang_name == "to-server")
    {
        if(to_server == nullptr)
        {
            to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ToServer>();
        }
        return to_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_to_server != nullptr)
    {
        children["client-to-server"] = client_to_server;
    }

    if(to_server != nullptr)
    {
        children["to-server"] = to_server;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Connection::Delay::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-server" || name == "to-server")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::ClientToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-server"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::~ClientToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::ToServer()
    :
    histogram{YType::empty, "histogram"},
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-server"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::~ToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::has_data() const
{
    return histogram.is_set
	|| max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(histogram.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (histogram.is_set || is_set(histogram.yfilter)) leaf_name_data.push_back(histogram.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "histogram")
    {
        histogram = value;
        histogram.value_namespace = name_space;
        histogram.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "histogram")
    {
        histogram.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "histogram" || name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Server()
    :
    all{YType::empty, "all"}
    	,
    counter(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter>())
	,ipv4(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv6>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Transport>())
{
    counter->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;

    yang_name = "server"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Server::~Server()
{
}

bool Native::Flow::Record::Collect::Connection::Server::has_data() const
{
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "ipv4" || name == "ipv6" || name == "transport" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Counter()
    :
    responses{YType::empty, "responses"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes>())
	,packets(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "counter"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Server::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::has_data() const
{
    return responses.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(responses.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (responses.is_set || is_set(responses.yfilter)) leaf_name_data.push_back(responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "responses")
    {
        responses = value;
        responses.value_namespace = name_space;
        responses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "responses")
    {
        responses.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "responses")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
    	,
    network(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport>())
{
    network->parent = this;
    transport->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set
	|| (network !=  nullptr && network->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network>();
        }
        return network;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "transport" || name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::Network()
    :
    long_{YType::empty, "long"}
{

    yang_name = "network"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::~Network()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::Transport()
    :
    long_{YType::empty, "long"}
{

    yang_name = "transport"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Packets::Packets()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Packets::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Server::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv4::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Server::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Transport::Transport()
    :
    port{YType::empty, "port"}
{

    yang_name = "transport"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Server::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Transport::has_data() const
{
    return port.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Server::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Server::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Server::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Transaction::Transaction()
    :
    all{YType::empty, "all"}
    	,
    counter(std::make_shared<Native::Flow::Record::Collect::Connection::Transaction::Counter>())
	,duration(std::make_shared<Native::Flow::Record::Collect::Connection::Transaction::Duration>())
{
    counter->parent = this;
    duration->parent = this;

    yang_name = "transaction"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Transaction::~Transaction()
{
}

bool Native::Flow::Record::Collect::Connection::Transaction::has_data() const
{
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Flow::Record::Collect::Connection::Transaction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Transaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transaction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Transaction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Transaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Connection::Transaction::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Flow::Record::Collect::Connection::Transaction::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Transaction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
}

void Native::Flow::Record::Collect::Connection::Transaction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Transaction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Transaction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "duration" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Transaction::Counter::Counter()
    :
    complete{YType::empty, "complete"}
{

    yang_name = "counter"; yang_parent_name = "transaction"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Transaction::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Connection::Transaction::Counter::has_data() const
{
    return complete.is_set;
}

bool Native::Flow::Record::Collect::Connection::Transaction::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Transaction::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Transaction::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete.is_set || is_set(complete.yfilter)) leaf_name_data.push_back(complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Transaction::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Transaction::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Transaction::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete")
    {
        complete = value;
        complete.value_namespace = name_space;
        complete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Transaction::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete")
    {
        complete.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Transaction::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Transaction::Duration::Duration()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "duration"; yang_parent_name = "transaction"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Connection::Transaction::Duration::~Duration()
{
}

bool Native::Flow::Record::Collect::Connection::Transaction::Duration::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Transaction::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Transaction::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Transaction::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Connection::Transaction::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Connection::Transaction::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Connection::Transaction::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Transaction::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Transaction::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Counter::Counter()
    :
    flows{YType::empty, "flows"}
    	,
    bytes(nullptr) // presence node
	,packets(nullptr) // presence node
{

    yang_name = "counter"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Counter::has_data() const
{
    return flows.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flows.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flows.is_set || is_set(flows.yfilter)) leaf_name_data.push_back(flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Collect::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flows")
    {
        flows = value;
        flows.value_namespace = name_space;
        flows.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flows")
    {
        flows.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "flows")
        return true;
    return false;
}

Native::Flow::Record::Collect::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"}
    	,
    rate(nullptr) // presence node
	,squared(std::make_shared<Native::Flow::Record::Collect::Counter::Bytes::Squared>())
{
    squared->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Counter::Bytes::has_data() const
{
    return long_.is_set
	|| (rate !=  nullptr && rate->has_data())
	|| (squared !=  nullptr && squared->has_data());
}

bool Native::Flow::Record::Collect::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| (rate !=  nullptr && rate->has_operation())
	|| (squared !=  nullptr && squared->has_operation());
}

std::string Native::Flow::Record::Collect::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Counter::Bytes::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "squared")
    {
        if(squared == nullptr)
        {
            squared = std::make_shared<Native::Flow::Record::Collect::Counter::Bytes::Squared>();
        }
        return squared;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    if(squared != nullptr)
    {
        children["squared"] = squared;
    }

    return children;
}

void Native::Flow::Record::Collect::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "squared" || name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Counter::Bytes::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Counter::Bytes::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Counter::Bytes::Rate::has_data() const
{
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Collect::Counter::Bytes::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Collect::Counter::Bytes::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Counter::Bytes::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Bytes::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Bytes::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_flow != nullptr)
    {
        children["per-flow"] = per_flow;
    }

    return children;
}

void Native::Flow::Record::Collect::Counter::Bytes::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Counter::Bytes::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Counter::Bytes::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-flow")
        return true;
    return false;
}

Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "per-flow"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Collect::Counter::Bytes::Squared::Squared()
    :
    long_{YType::empty, "long"}
{

    yang_name = "squared"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Counter::Bytes::Squared::~Squared()
{
}

bool Native::Flow::Record::Collect::Counter::Bytes::Squared::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Counter::Bytes::Squared::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Counter::Bytes::Squared::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "squared";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Counter::Bytes::Squared::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Bytes::Squared::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Bytes::Squared::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Counter::Bytes::Squared::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Counter::Bytes::Squared::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Counter::Bytes::Squared::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Counter::Packets::Packets()
    :
    dropped{YType::empty, "dropped"},
    long_{YType::empty, "long"}
    	,
    rate(nullptr) // presence node
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Counter::Packets::has_data() const
{
    return dropped.is_set
	|| long_.is_set
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(long_.yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Counter::Packets::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Collect::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "dropped" || name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Counter::Packets::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Counter::Packets::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Counter::Packets::Rate::has_data() const
{
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Collect::Counter::Packets::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Collect::Counter::Packets::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Counter::Packets::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Packets::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Packets::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_flow != nullptr)
    {
        children["per-flow"] = per_flow;
    }

    return children;
}

void Native::Flow::Record::Collect::Counter::Packets::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Counter::Packets::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Counter::Packets::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-flow")
        return true;
    return false;
}

Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "per-flow"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Collect::Datalink::Datalink()
    :
    destination_vlan_id{YType::empty, "destination-vlan-id"},
    ethertype{YType::empty, "ethertype"},
    source_vlan_id{YType::empty, "source-vlan-id"}
    	,
    dot1q(std::make_shared<Native::Flow::Record::Collect::Datalink::Dot1Q>())
	,mac(std::make_shared<Native::Flow::Record::Collect::Datalink::Mac>())
{
    dot1q->parent = this;
    mac->parent = this;

    yang_name = "datalink"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Datalink::~Datalink()
{
}

bool Native::Flow::Record::Collect::Datalink::has_data() const
{
    return destination_vlan_id.is_set
	|| ethertype.is_set
	|| source_vlan_id.is_set
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Flow::Record::Collect::Datalink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_vlan_id.yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(source_vlan_id.yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Flow::Record::Collect::Datalink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datalink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Datalink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_vlan_id.is_set || is_set(destination_vlan_id.yfilter)) leaf_name_data.push_back(destination_vlan_id.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (source_vlan_id.is_set || is_set(source_vlan_id.yfilter)) leaf_name_data.push_back(source_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Flow::Record::Collect::Datalink::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Flow::Record::Collect::Datalink::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Flow::Record::Collect::Datalink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-vlan-id")
    {
        destination_vlan_id = value;
        destination_vlan_id.value_namespace = name_space;
        destination_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vlan-id")
    {
        source_vlan_id = value;
        source_vlan_id.value_namespace = name_space;
        source_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Datalink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-vlan-id")
    {
        destination_vlan_id.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "source-vlan-id")
    {
        source_vlan_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Datalink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mac" || name == "destination-vlan-id" || name == "ethertype" || name == "source-vlan-id")
        return true;
    return false;
}

Native::Flow::Record::Collect::Datalink::Dot1Q::Dot1Q()
    :
    priority{YType::empty, "priority"}
    	,
    vlan(std::make_shared<Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan>())
{
    vlan->parent = this;

    yang_name = "dot1q"; yang_parent_name = "datalink"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Datalink::Dot1Q::~Dot1Q()
{
}

bool Native::Flow::Record::Collect::Datalink::Dot1Q::has_data() const
{
    return priority.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Flow::Record::Collect::Datalink::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Flow::Record::Collect::Datalink::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Datalink::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Flow::Record::Collect::Datalink::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Datalink::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Datalink::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "priority")
        return true;
    return false;
}

Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::Vlan()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "vlan"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::~Vlan()
{
}

bool Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Collect::Datalink::Mac::Mac()
    :
    destination(std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Destination>())
	,source(std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "mac"; yang_parent_name = "datalink"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Datalink::Mac::~Mac()
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Collect::Datalink::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Collect::Datalink::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Datalink::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Flow::Record::Collect::Datalink::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Datalink::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Collect::Datalink::Mac::Destination::Destination()
    :
    address(std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Destination::Address>())
{
    address->parent = this;

    yang_name = "destination"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Datalink::Mac::Destination::~Destination()
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::Destination::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Collect::Datalink::Mac::Destination::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Collect::Datalink::Mac::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Datalink::Mac::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Mac::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Destination::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Mac::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Flow::Record::Collect::Datalink::Mac::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Datalink::Mac::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::Address()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "address"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::~Address()
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Flow::Record::Collect::Datalink::Mac::Destination::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Collect::Datalink::Mac::Source::Source()
    :
    address(std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Source::Address>())
{
    address->parent = this;

    yang_name = "source"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Datalink::Mac::Source::~Source()
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::Source::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Collect::Datalink::Mac::Source::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Collect::Datalink::Mac::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Datalink::Mac::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Mac::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Collect::Datalink::Mac::Source::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Mac::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Flow::Record::Collect::Datalink::Mac::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Datalink::Mac::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Datalink::Mac::Source::Address::Address()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "address"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Datalink::Mac::Source::Address::~Address()
{
}

bool Native::Flow::Record::Collect::Datalink::Mac::Source::Address::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Collect::Datalink::Mac::Source::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Collect::Datalink::Mac::Source::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Datalink::Mac::Source::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Datalink::Mac::Source::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Datalink::Mac::Source::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Datalink::Mac::Source::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Flow::Record::Collect::Datalink::Mac::Source::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Flow::Record::Collect::Datalink::Mac::Source::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Collect::Flow_::Flow_()
    :
    direction{YType::empty, "direction"},
    end_reason{YType::empty, "end-reason"},
    sampler{YType::empty, "sampler"}
    	,
    cts(std::make_shared<Native::Flow::Record::Collect::Flow_::Cts>())
	,observation(std::make_shared<Native::Flow::Record::Collect::Flow_::Observation>())
{
    cts->parent = this;
    observation->parent = this;

    yang_name = "flow"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Flow_::~Flow_()
{
}

bool Native::Flow::Record::Collect::Flow_::has_data() const
{
    return direction.is_set
	|| end_reason.is_set
	|| sampler.is_set
	|| (cts !=  nullptr && cts->has_data())
	|| (observation !=  nullptr && observation->has_data());
}

bool Native::Flow::Record::Collect::Flow_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(end_reason.yfilter)
	|| ydk::is_set(sampler.yfilter)
	|| (cts !=  nullptr && cts->has_operation())
	|| (observation !=  nullptr && observation->has_operation());
}

std::string Native::Flow::Record::Collect::Flow_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Flow_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (end_reason.is_set || is_set(end_reason.yfilter)) leaf_name_data.push_back(end_reason.get_name_leafdata());
    if (sampler.is_set || is_set(sampler.yfilter)) leaf_name_data.push_back(sampler.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Flow_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Flow::Record::Collect::Flow_::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "observation")
    {
        if(observation == nullptr)
        {
            observation = std::make_shared<Native::Flow::Record::Collect::Flow_::Observation>();
        }
        return observation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Flow_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(observation != nullptr)
    {
        children["observation"] = observation;
    }

    return children;
}

void Native::Flow::Record::Collect::Flow_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-reason")
    {
        end_reason = value;
        end_reason.value_namespace = name_space;
        end_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler")
    {
        sampler = value;
        sampler.value_namespace = name_space;
        sampler.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Flow_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "end-reason")
    {
        end_reason.yfilter = yfilter;
    }
    if(value_path == "sampler")
    {
        sampler.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Flow_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts" || name == "observation" || name == "direction" || name == "end-reason" || name == "sampler")
        return true;
    return false;
}

Native::Flow::Record::Collect::Flow_::Cts::Cts()
    :
    destination(std::make_shared<Native::Flow::Record::Collect::Flow_::Cts::Destination>())
	,source(std::make_shared<Native::Flow::Record::Collect::Flow_::Cts::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "cts"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Flow_::Cts::~Cts()
{
}

bool Native::Flow::Record::Collect::Flow_::Cts::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Collect::Flow_::Cts::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Collect::Flow_::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Flow_::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Flow_::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Collect::Flow_::Cts::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Collect::Flow_::Cts::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Flow_::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Flow::Record::Collect::Flow_::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Flow_::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Flow_::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Collect::Flow_::Cts::Destination::Destination()
    :
    group_tag{YType::empty, "group-tag"}
{

    yang_name = "destination"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Flow_::Cts::Destination::~Destination()
{
}

bool Native::Flow::Record::Collect::Flow_::Cts::Destination::has_data() const
{
    return group_tag.is_set;
}

bool Native::Flow::Record::Collect::Flow_::Cts::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_tag.yfilter);
}

std::string Native::Flow::Record::Collect::Flow_::Cts::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Flow_::Cts::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_tag.is_set || is_set(group_tag.yfilter)) leaf_name_data.push_back(group_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Flow_::Cts::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Flow_::Cts::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Flow_::Cts::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-tag")
    {
        group_tag = value;
        group_tag.value_namespace = name_space;
        group_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Flow_::Cts::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-tag")
    {
        group_tag.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Flow_::Cts::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-tag")
        return true;
    return false;
}

Native::Flow::Record::Collect::Flow_::Cts::Source::Source()
    :
    group_tag{YType::empty, "group-tag"}
{

    yang_name = "source"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Flow_::Cts::Source::~Source()
{
}

bool Native::Flow::Record::Collect::Flow_::Cts::Source::has_data() const
{
    return group_tag.is_set;
}

bool Native::Flow::Record::Collect::Flow_::Cts::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_tag.yfilter);
}

std::string Native::Flow::Record::Collect::Flow_::Cts::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Flow_::Cts::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_tag.is_set || is_set(group_tag.yfilter)) leaf_name_data.push_back(group_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Flow_::Cts::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Flow_::Cts::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Flow_::Cts::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-tag")
    {
        group_tag = value;
        group_tag.value_namespace = name_space;
        group_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Flow_::Cts::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-tag")
    {
        group_tag.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Flow_::Cts::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-tag")
        return true;
    return false;
}

Native::Flow::Record::Collect::Flow_::Observation::Observation()
    :
    point{YType::empty, "point"}
{

    yang_name = "observation"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Flow_::Observation::~Observation()
{
}

bool Native::Flow::Record::Collect::Flow_::Observation::has_data() const
{
    return point.is_set;
}

bool Native::Flow::Record::Collect::Flow_::Observation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(point.yfilter);
}

std::string Native::Flow::Record::Collect::Flow_::Observation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "observation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Flow_::Observation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (point.is_set || is_set(point.yfilter)) leaf_name_data.push_back(point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Flow_::Observation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Flow_::Observation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Flow_::Observation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "point")
    {
        point = value;
        point.value_namespace = name_space;
        point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Flow_::Observation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "point")
    {
        point.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Flow_::Observation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point")
        return true;
    return false;
}

Native::Flow::Record::Collect::Interface::Interface()
    :
    input(nullptr) // presence node
	,output(nullptr) // presence node
{

    yang_name = "interface"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Interface::~Interface()
{
}

bool Native::Flow::Record::Collect::Interface::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Flow::Record::Collect::Interface::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Flow::Record::Collect::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Flow::Record::Collect::Interface::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Flow::Record::Collect::Interface::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Flow::Record::Collect::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Collect::Interface::Input::Input()
    :
    snmp{YType::empty, "snmp"}
{

    yang_name = "input"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Interface::Input::~Input()
{
}

bool Native::Flow::Record::Collect::Interface::Input::has_data() const
{
    return snmp.is_set;
}

bool Native::Flow::Record::Collect::Interface::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp.yfilter);
}

std::string Native::Flow::Record::Collect::Interface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Interface::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Interface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Interface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Interface::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Interface::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Interface::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp")
        return true;
    return false;
}

Native::Flow::Record::Collect::Interface::Output::Output()
    :
    snmp{YType::empty, "snmp"}
{

    yang_name = "output"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Interface::Output::~Output()
{
}

bool Native::Flow::Record::Collect::Interface::Output::has_data() const
{
    return snmp.is_set;
}

bool Native::Flow::Record::Collect::Interface::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp.yfilter);
}

std::string Native::Flow::Record::Collect::Interface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Interface::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Interface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Interface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Interface::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Interface::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Interface::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Ipv4()
    :
    dscp{YType::empty, "dscp"},
    header_length{YType::empty, "header-length"},
    id{YType::empty, "id"},
    precedence{YType::empty, "precedence"},
    protocol{YType::empty, "protocol"},
    tos{YType::empty, "tos"},
    version{YType::empty, "version"}
    	,
    destination(std::make_shared<Native::Flow::Record::Collect::Ipv4::Destination>())
	,fragmentation(std::make_shared<Native::Flow::Record::Collect::Ipv4::Fragmentation>())
	,length(std::make_shared<Native::Flow::Record::Collect::Ipv4::Length>())
	,option(std::make_shared<Native::Flow::Record::Collect::Ipv4::Option>())
	,section(std::make_shared<Native::Flow::Record::Collect::Ipv4::Section>())
	,source(std::make_shared<Native::Flow::Record::Collect::Ipv4::Source>())
	,total_length(nullptr) // presence node
	,ttl(nullptr) // presence node
{
    destination->parent = this;
    fragmentation->parent = this;
    length->parent = this;
    option->parent = this;
    section->parent = this;
    source->parent = this;

    yang_name = "ipv4"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Collect::Ipv4::has_data() const
{
    return dscp.is_set
	|| header_length.is_set
	|| id.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| tos.is_set
	|| version.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (section !=  nullptr && section->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (total_length !=  nullptr && total_length->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Flow::Record::Collect::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(header_length.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (section !=  nullptr && section->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (total_length !=  nullptr && total_length->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (header_length.is_set || is_set(header_length.yfilter)) leaf_name_data.push_back(header_length.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Collect::Ipv4::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Flow::Record::Collect::Ipv4::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Flow::Record::Collect::Ipv4::Length>();
        }
        return length;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Record::Collect::Ipv4::Option>();
        }
        return option;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<Native::Flow::Record::Collect::Ipv4::Section>();
        }
        return section;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Collect::Ipv4::Source>();
        }
        return source;
    }

    if(child_yang_name == "total-length")
    {
        if(total_length == nullptr)
        {
            total_length = std::make_shared<Native::Flow::Record::Collect::Ipv4::TotalLength>();
        }
        return total_length;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Flow::Record::Collect::Ipv4::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(fragmentation != nullptr)
    {
        children["fragmentation"] = fragmentation;
    }

    if(length != nullptr)
    {
        children["length"] = length;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(section != nullptr)
    {
        children["section"] = section;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(total_length != nullptr)
    {
        children["total-length"] = total_length;
    }

    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Native::Flow::Record::Collect::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-length")
    {
        header_length = value;
        header_length.value_namespace = name_space;
        header_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "header-length")
    {
        header_length.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "fragmentation" || name == "length" || name == "option" || name == "section" || name == "source" || name == "total-length" || name == "ttl" || name == "dscp" || name == "header-length" || name == "id" || name == "precedence" || name == "protocol" || name == "tos" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Destination::Destination()
    :
    address{YType::empty, "address"}
    	,
    mask(nullptr) // presence node
	,prefix(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Destination::~Destination()
{
}

bool Native::Flow::Record::Collect::Ipv4::Destination::has_data() const
{
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Collect::Ipv4::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv4::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Collect::Ipv4::Destination::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Collect::Ipv4::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Collect::Ipv4::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Destination::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Destination::Mask::~Mask()
{
}

bool Native::Flow::Record::Collect::Ipv4::Destination::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Destination::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv4::Destination::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Destination::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Destination::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Destination::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Destination::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Destination::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Destination::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Destination::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Collect::Ipv4::Destination::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv4::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Fragmentation::Fragmentation()
    :
    flags{YType::empty, "flags"},
    offset{YType::empty, "offset"}
{

    yang_name = "fragmentation"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Fragmentation::~Fragmentation()
{
}

bool Native::Flow::Record::Collect::Ipv4::Fragmentation::has_data() const
{
    return flags.is_set
	|| offset.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv4::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "offset")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Length::Length()
    :
    header{YType::empty, "header"},
    payload{YType::empty, "payload"}
    	,
    total(nullptr) // presence node
{

    yang_name = "length"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Length::~Length()
{
}

bool Native::Flow::Record::Collect::Ipv4::Length::has_data() const
{
    return header.is_set
	|| payload.is_set
	|| (total !=  nullptr && total->has_data());
}

bool Native::Flow::Record::Collect::Ipv4::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv4::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header.is_set || is_set(header.yfilter)) leaf_name_data.push_back(header.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Flow::Record::Collect::Ipv4::Length::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Flow::Record::Collect::Ipv4::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header")
    {
        header = value;
        header.value_namespace = name_space;
        header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header")
    {
        header.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Length::Total::Total()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "total"; yang_parent_name = "length"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Length::Total::~Total()
{
}

bool Native::Flow::Record::Collect::Ipv4::Length::Total::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Length::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv4::Length::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Length::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Length::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Length::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Length::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Length::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Length::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Option::Option()
    :
    map{YType::empty, "map"}
{

    yang_name = "option"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Option::~Option()
{
}

bool Native::Flow::Record::Collect::Ipv4::Option::has_data() const
{
    return map.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv4::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Section::Section()
    :
    header(std::make_shared<Native::Flow::Record::Collect::Ipv4::Section::Header>())
	,payload(std::make_shared<Native::Flow::Record::Collect::Ipv4::Section::Payload>())
{
    header->parent = this;
    payload->parent = this;

    yang_name = "section"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Section::~Section()
{
}

bool Native::Flow::Record::Collect::Ipv4::Section::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (payload !=  nullptr && payload->has_data());
}

bool Native::Flow::Record::Collect::Ipv4::Section::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (payload !=  nullptr && payload->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv4::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Flow::Record::Collect::Ipv4::Section::Header>();
        }
        return header;
    }

    if(child_yang_name == "payload")
    {
        if(payload == nullptr)
        {
            payload = std::make_shared<Native::Flow::Record::Collect::Ipv4::Section::Payload>();
        }
        return payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(payload != nullptr)
    {
        children["payload"] = payload;
    }

    return children;
}

void Native::Flow::Record::Collect::Ipv4::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Ipv4::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Ipv4::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Section::Header::Header()
    :
    size{YType::uint16, "size"}
{

    yang_name = "header"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Section::Header::~Header()
{
}

bool Native::Flow::Record::Collect::Ipv4::Section::Header::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Section::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv4::Section::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Section::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Section::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Section::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Section::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Section::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Section::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{

    yang_name = "payload"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Collect::Ipv4::Section::Payload::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Section::Payload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv4::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Section::Payload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Section::Payload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Section::Payload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Section::Payload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Source::Source()
    :
    address{YType::empty, "address"}
    	,
    mask(nullptr) // presence node
	,prefix(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Source::~Source()
{
}

bool Native::Flow::Record::Collect::Ipv4::Source::has_data() const
{
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Collect::Ipv4::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv4::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Collect::Ipv4::Source::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Collect::Ipv4::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Collect::Ipv4::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv4::Source::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv4::Source::Mask::~Mask()
{
}

bool Native::Flow::Record::Collect::Ipv4::Source::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv4::Source::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv4::Source::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv4::Source::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv4::Source::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv4::Source::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Ipv4::Source::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv4::Source::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv4::Source::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

const Enum::YLeaf Native::Flow::Monitor::Type::performance_monitor {0, "performance-monitor"};

const Enum::YLeaf Native::Flow::Monitor::Cache::Type::immediate {0, "immediate"};
const Enum::YLeaf Native::Flow::Monitor::Cache::Type::normal {1, "normal"};
const Enum::YLeaf Native::Flow::Monitor::Cache::Type::permanent {2, "permanent"};
const Enum::YLeaf Native::Flow::Monitor::Cache::Type::synchronized {3, "synchronized"};

const Enum::YLeaf Native::Flow::Monitor::Record::Type::default_rtp {0, "default-rtp"};
const Enum::YLeaf Native::Flow::Monitor::Record::Type::default_tcp {1, "default-tcp"};
const Enum::YLeaf Native::Flow::Monitor::Record::Type::netflow_original {2, "netflow-original"};

const Enum::YLeaf Native::Flow::Record::Type::performance_monitor {0, "performance-monitor"};


}
}

