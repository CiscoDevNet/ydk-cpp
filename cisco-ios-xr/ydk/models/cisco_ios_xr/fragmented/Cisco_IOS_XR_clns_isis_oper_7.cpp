
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_7.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_8.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::Tags()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "tags"; yang_parent_name = "multicast-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::~Tags()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::NodalSid()
    :
    sid_value{YType::uint32, "sid-value"},
    rflag{YType::uint8, "rflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    eflag{YType::uint8, "eflag"},
    vflag{YType::uint8, "vflag"},
    lflag{YType::uint8, "lflag"},
    algorithm{YType::uint8, "algorithm"}
{

    yang_name = "nodal-sid"; yang_parent_name = "multicast-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::has_data() const
{
    if (is_presence_container) return true;
    return sid_value.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| algorithm.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-value" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag" || name == "algorithm")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::PerLevelAdvertisingDetail()
    :
    level{YType::enumeration, "level"},
    advertising_origin{YType::enumeration, "advertising-origin"},
    metric{YType::uint32, "metric"},
    is_propagated{YType::boolean, "is-propagated"},
    is_external_metric{YType::boolean, "is-external-metric"},
    is_external_reachability{YType::boolean, "is-external-reachability"},
    is_interarea{YType::boolean, "is-interarea"}
        ,
    summarization_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus>())
    , tags(this, {})
    , nodal_sid(this, {})
{
    summarization_status->parent = this;

    yang_name = "per-level-advertising-detail"; yang_parent_name = "ipv4-flex-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::~PerLevelAdvertisingDetail()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    return level.is_set
	|| advertising_origin.is_set
	|| metric.is_set
	|| is_propagated.is_set
	|| is_external_metric.is_set
	|| is_external_reachability.is_set
	|| is_interarea.is_set
	|| (summarization_status !=  nullptr && summarization_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::has_operation() const
{
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(advertising_origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(is_propagated.yfilter)
	|| ydk::is_set(is_external_metric.yfilter)
	|| ydk::is_set(is_external_reachability.yfilter)
	|| ydk::is_set(is_interarea.yfilter)
	|| (summarization_status !=  nullptr && summarization_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-level-advertising-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (advertising_origin.is_set || is_set(advertising_origin.yfilter)) leaf_name_data.push_back(advertising_origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (is_propagated.is_set || is_set(is_propagated.yfilter)) leaf_name_data.push_back(is_propagated.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.yfilter)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (is_external_reachability.is_set || is_set(is_external_reachability.yfilter)) leaf_name_data.push_back(is_external_reachability.get_name_leafdata());
    if (is_interarea.is_set || is_set(is_interarea.yfilter)) leaf_name_data.push_back(is_interarea.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summarization-status")
    {
        if(summarization_status == nullptr)
        {
            summarization_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus>();
        }
        return summarization_status;
    }

    if(child_yang_name == "tags")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags>();
        c->parent = this;
        tags.append(c);
        return c;
    }

    if(child_yang_name == "nodal-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid>();
        c->parent = this;
        nodal_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summarization_status != nullptr)
    {
        children["summarization-status"] = summarization_status;
    }

    count = 0;
    for (auto c : tags.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nodal_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-origin")
    {
        advertising_origin = value;
        advertising_origin.value_namespace = name_space;
        advertising_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-propagated")
    {
        is_propagated = value;
        is_propagated.value_namespace = name_space;
        is_propagated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
        is_external_metric.value_namespace = name_space;
        is_external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-external-reachability")
    {
        is_external_reachability = value;
        is_external_reachability.value_namespace = name_space;
        is_external_reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interarea")
    {
        is_interarea = value;
        is_interarea.value_namespace = name_space;
        is_interarea.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "advertising-origin")
    {
        advertising_origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "is-propagated")
    {
        is_propagated.yfilter = yfilter;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric.yfilter = yfilter;
    }
    if(value_path == "is-external-reachability")
    {
        is_external_reachability.yfilter = yfilter;
    }
    if(value_path == "is-interarea")
    {
        is_interarea.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summarization-status" || name == "tags" || name == "nodal-sid" || name == "level" || name == "advertising-origin" || name == "metric" || name == "is-propagated" || name == "is-external-metric" || name == "is-external-reachability" || name == "is-interarea")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummarizationStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
        ,
    summary_prefix(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix>())
{
    summary_prefix->parent = this;

    yang_name = "summarization-status"; yang_parent_name = "per-level-advertising-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::~SummarizationStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| (summary_prefix !=  nullptr && summary_prefix->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (summary_prefix !=  nullptr && summary_prefix->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summarization-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        if(summary_prefix == nullptr)
        {
            summary_prefix = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix>();
        }
        return summary_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary_prefix != nullptr)
    {
        children["summary-prefix"] = summary_prefix;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix" || name == "is-valid")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summarization-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::~SummaryPrefix()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::Tags()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "tags"; yang_parent_name = "per-level-advertising-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::~Tags()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::NodalSid()
    :
    sid_value{YType::uint32, "sid-value"},
    rflag{YType::uint8, "rflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    eflag{YType::uint8, "eflag"},
    vflag{YType::uint8, "vflag"},
    lflag{YType::uint8, "lflag"},
    algorithm{YType::uint8, "algorithm"}
{

    yang_name = "nodal-sid"; yang_parent_name = "per-level-advertising-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::has_data() const
{
    if (is_presence_container) return true;
    return sid_value.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| algorithm.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-value" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag" || name == "algorithm")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Routes()
    :
    ipv4_route(this, {})
{

    yang_name = "ipv4-routes"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::~Ipv4Routes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_route.len(); index++)
    {
        if(ipv4_route[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::has_operation() const
{
    for (std::size_t index=0; index<ipv4_route.len(); index++)
    {
        if(ipv4_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-route")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route>();
        c->parent = this;
        ipv4_route.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv4_route.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-route")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::Ipv4Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
        ,
    connected_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus>())
    , redistributed_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus>())
    , native_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus>())
    , per_level_advertising_detail(this, {})
{
    connected_status->parent = this;
    redistributed_status->parent = this;
    native_status->parent = this;

    yang_name = "ipv4-route"; yang_parent_name = "ipv4-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::~Ipv4Route()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_level_advertising_detail.len(); index++)
    {
        if(per_level_advertising_detail[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| (connected_status !=  nullptr && connected_status->has_data())
	|| (redistributed_status !=  nullptr && redistributed_status->has_data())
	|| (native_status !=  nullptr && native_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::has_operation() const
{
    for (std::size_t index=0; index<per_level_advertising_detail.len(); index++)
    {
        if(per_level_advertising_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (connected_status !=  nullptr && connected_status->has_operation())
	|| (redistributed_status !=  nullptr && redistributed_status->has_operation())
	|| (native_status !=  nullptr && native_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-status")
    {
        if(connected_status == nullptr)
        {
            connected_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus>();
        }
        return connected_status;
    }

    if(child_yang_name == "redistributed-status")
    {
        if(redistributed_status == nullptr)
        {
            redistributed_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus>();
        }
        return redistributed_status;
    }

    if(child_yang_name == "native-status")
    {
        if(native_status == nullptr)
        {
            native_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus>();
        }
        return native_status;
    }

    if(child_yang_name == "per-level-advertising-detail")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail>();
        c->parent = this;
        per_level_advertising_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(connected_status != nullptr)
    {
        children["connected-status"] = connected_status;
    }

    if(redistributed_status != nullptr)
    {
        children["redistributed-status"] = redistributed_status;
    }

    if(native_status != nullptr)
    {
        children["native-status"] = native_status;
    }

    count = 0;
    for (auto c : per_level_advertising_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-status" || name == "redistributed-status" || name == "native-status" || name == "per-level-advertising-detail" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
        ,
    connected_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails>())
{
    connected_details->parent = this;

    yang_name = "connected-status"; yang_parent_name = "ipv4-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::~ConnectedStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| (connected_details !=  nullptr && connected_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (connected_details !=  nullptr && connected_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-details")
    {
        if(connected_details == nullptr)
        {
            connected_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails>();
        }
        return connected_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(connected_details != nullptr)
    {
        children["connected-details"] = connected_details;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-details" || name == "is-valid")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::ConnectedDetails()
    :
    interface(this, {})
{

    yang_name = "connected-details"; yang_parent_name = "connected-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::~ConnectedDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::Interface()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface"; yang_parent_name = "connected-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::~Interface()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributedStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
        ,
    redistribution_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails>())
{
    redistribution_details->parent = this;

    yang_name = "redistributed-status"; yang_parent_name = "ipv4-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::~RedistributedStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| (redistribution_details !=  nullptr && redistribution_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (redistribution_details !=  nullptr && redistribution_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributed-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution-details")
    {
        if(redistribution_details == nullptr)
        {
            redistribution_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails>();
        }
        return redistribution_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redistribution_details != nullptr)
    {
        children["redistribution-details"] = redistribution_details;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution-details" || name == "is-valid")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::RedistributionDetails()
    :
    isis_sh_route_redist_detail(this, {})
{

    yang_name = "redistribution-details"; yang_parent_name = "redistributed-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::~RedistributionDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_sh_route_redist_detail.len(); index++)
    {
        if(isis_sh_route_redist_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_route_redist_detail.len(); index++)
    {
        if(isis_sh_route_redist_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-sh-route-redist-detail")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail>();
        c->parent = this;
        isis_sh_route_redist_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : isis_sh_route_redist_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-sh-route-redist-detail")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::IsisShRouteRedistDetail()
    :
    level{YType::enumeration, "level"}
        ,
    owner(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner>())
{
    owner->parent = this;

    yang_name = "isis-sh-route-redist-detail"; yang_parent_name = "redistribution-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::~IsisShRouteRedistDetail()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| (owner !=  nullptr && owner->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (owner !=  nullptr && owner->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-route-redist-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner")
    {
        if(owner == nullptr)
        {
            owner = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner>();
        }
        return owner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(owner != nullptr)
    {
        children["owner"] = owner;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::Owner()
    :
    protocol{YType::enumeration, "protocol"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    ospfv3_process_id{YType::str, "ospfv3-process-id"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    application_name{YType::str, "application-name"}
{

    yang_name = "owner"; yang_parent_name = "isis-sh-route-redist-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::~Owner()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| ospfv3_process_id.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| application_name.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(ospfv3_process_id.yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(application_name.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (ospfv3_process_id.is_set || is_set(ospfv3_process_id.yfilter)) leaf_name_data.push_back(ospfv3_process_id.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
        isis_instance_id.value_namespace = name_space;
        isis_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
        ospf_process_id.value_namespace = name_space;
        ospf_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id = value;
        ospfv3_process_id.value_namespace = name_space;
        ospfv3_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "isis-instance-id" || name == "ospf-process-id" || name == "ospfv3-process-id" || name == "bgp-as-number" || name == "eigrp-as-number" || name == "application-name")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
        ,
    native_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails>())
{
    native_details->parent = this;

    yang_name = "native-status"; yang_parent_name = "ipv4-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::~NativeStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| (native_details !=  nullptr && native_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (native_details !=  nullptr && native_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "native-details")
    {
        if(native_details == nullptr)
        {
            native_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails>();
        }
        return native_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(native_details != nullptr)
    {
        children["native-details"] = native_details;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native-details" || name == "is-valid")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::NativeDetails()
    :
    priority{YType::enumeration, "priority"}
        ,
    primary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary>())
    , backup(this, {})
{
    primary->parent = this;

    yang_name = "native-details"; yang_parent_name = "native-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::~NativeDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup.len(); index++)
    {
        if(backup[index]->has_data())
            return true;
    }
    return priority.is_set
	|| (primary !=  nullptr && primary->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::has_operation() const
{
    for (std::size_t index=0; index<backup.len(); index++)
    {
        if(backup[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "backup")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup>();
        c->parent = this;
        backup.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    count = 0;
    for (auto c : backup.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "backup" || name == "priority")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Primary()
    :
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    multicast_metric{YType::uint32, "multicast-metric"},
    is_external_metric{YType::boolean, "is-external-metric"},
    administrative_distance{YType::uint16, "administrative-distance"}
        ,
    paths(this, {})
    , ucmp_next_hop(this, {})
    , multicast_path(this, {})
    , srte_path(this, {})
    , explicit_path(this, {})
    , source(this, {})
    , multicast_source(this, {})
{

    yang_name = "primary"; yang_parent_name = "native-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::~Primary()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.len(); index++)
    {
        if(ucmp_next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.len(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srte_path.len(); index++)
    {
        if(srte_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<explicit_path.len(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.len(); index++)
    {
        if(multicast_source[index]->has_data())
            return true;
    }
    return origin.is_set
	|| metric.is_set
	|| multicast_metric.is_set
	|| is_external_metric.is_set
	|| administrative_distance.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::has_operation() const
{
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.len(); index++)
    {
        if(ucmp_next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.len(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srte_path.len(); index++)
    {
        if(srte_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<explicit_path.len(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.len(); index++)
    {
        if(multicast_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(multicast_metric.yfilter)
	|| ydk::is_set(is_external_metric.yfilter)
	|| ydk::is_set(administrative_distance.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast_metric.is_set || is_set(multicast_metric.yfilter)) leaf_name_data.push_back(multicast_metric.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.yfilter)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (administrative_distance.is_set || is_set(administrative_distance.yfilter)) leaf_name_data.push_back(administrative_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths>();
        c->parent = this;
        paths.append(c);
        return c;
    }

    if(child_yang_name == "ucmp-next-hop")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop>();
        c->parent = this;
        ucmp_next_hop.append(c);
        return c;
    }

    if(child_yang_name == "multicast-path")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath>();
        c->parent = this;
        multicast_path.append(c);
        return c;
    }

    if(child_yang_name == "srte-path")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath>();
        c->parent = this;
        srte_path.append(c);
        return c;
    }

    if(child_yang_name == "explicit-path")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath>();
        c->parent = this;
        explicit_path.append(c);
        return c;
    }

    if(child_yang_name == "source")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source>();
        c->parent = this;
        source.append(c);
        return c;
    }

    if(child_yang_name == "multicast-source")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource>();
        c->parent = this;
        multicast_source.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : paths.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ucmp_next_hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : multicast_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : srte_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : explicit_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : source.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : multicast_source.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric = value;
        multicast_metric.value_namespace = name_space;
        multicast_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
        is_external_metric.value_namespace = name_space;
        is_external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-distance")
    {
        administrative_distance = value;
        administrative_distance.value_namespace = name_space;
        administrative_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric.yfilter = yfilter;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric.yfilter = yfilter;
    }
    if(value_path == "administrative-distance")
    {
        administrative_distance.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "ucmp-next-hop" || name == "multicast-path" || name == "srte-path" || name == "explicit-path" || name == "source" || name == "multicast-source" || name == "origin" || name == "metric" || name == "multicast-metric" || name == "is-external-metric" || name == "administrative-distance")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Paths()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "paths"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit>();
        c->parent = this;
        uloop_explicit.append(c);
        return c;
    }

    if(child_yang_name == "nnh")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh>();
        c->parent = this;
        nnh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    count = 0;
    for (auto c : uloop_explicit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nnh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.append(c);
        return c;
    }

    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : segment_routing_sid_value_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : backup_repair.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::UcmpNextHop()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    total_ucmp_distance{YType::uint32, "total-ucmp-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup>())
{
    frr_backup->parent = this;

    yang_name = "ucmp-next-hop"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::~UcmpNextHop()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| total_ucmp_distance.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(total_ucmp_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (total_ucmp_distance.is_set || is_set(total_ucmp_distance.yfilter)) leaf_name_data.push_back(total_ucmp_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup>();
        }
        return frr_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ucmp-distance")
    {
        total_ucmp_distance = value;
        total_ucmp_distance.value_namespace = name_space;
        total_ucmp_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "total-ucmp-distance")
    {
        total_ucmp_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "total-ucmp-distance" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "ucmp-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.append(c);
        return c;
    }

    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : segment_routing_sid_value_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : backup_repair.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::MulticastPath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "multicast-path"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.append(c);
        return c;
    }

    if(child_yang_name == "nnh")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh>();
        c->parent = this;
        nnh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    count = 0;
    for (auto c : uloop_explicit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nnh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.append(c);
        return c;
    }

    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : segment_routing_sid_value_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : backup_repair.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::SrtePath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "srte-path"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::~SrtePath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.append(c);
        return c;
    }

    if(child_yang_name == "nnh")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh>();
        c->parent = this;
        nnh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    count = 0;
    for (auto c : uloop_explicit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nnh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "srte-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.append(c);
        return c;
    }

    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : segment_routing_sid_value_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : backup_repair.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "srte-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "srte-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::ExplicitPath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "explicit-path"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::~ExplicitPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.append(c);
        return c;
    }

    if(child_yang_name == "nnh")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh>();
        c->parent = this;
        nnh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    count = 0;
    for (auto c : uloop_explicit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nnh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.append(c);
        return c;
    }

    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : segment_routing_sid_value_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : backup_repair.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Source()
    :
    source_lsp_id{YType::str, "source-lsp-id"},
    source_address{YType::str, "source-address"}
        ,
    tags(this, {})
    , nodal_sid(this, {})
{

    yang_name = "source"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::~Source()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    return source_lsp_id.is_set
	|| source_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::has_operation() const
{
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_lsp_id.is_set || is_set(source_lsp_id.yfilter)) leaf_name_data.push_back(source_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tags")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags>();
        c->parent = this;
        tags.append(c);
        return c;
    }

    if(child_yang_name == "nodal-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid>();
        c->parent = this;
        nodal_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tags.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nodal_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-lsp-id")
    {
        source_lsp_id = value;
        source_lsp_id.value_namespace = name_space;
        source_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-lsp-id")
    {
        source_lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tags" || name == "nodal-sid" || name == "source-lsp-id" || name == "source-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::Tags()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "tags"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::~Tags()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::NodalSid()
    :
    sid_value{YType::uint32, "sid-value"},
    rflag{YType::uint8, "rflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    eflag{YType::uint8, "eflag"},
    vflag{YType::uint8, "vflag"},
    lflag{YType::uint8, "lflag"},
    algorithm{YType::uint8, "algorithm"}
{

    yang_name = "nodal-sid"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::has_data() const
{
    if (is_presence_container) return true;
    return sid_value.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| algorithm.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-value" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag" || name == "algorithm")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::MulticastSource()
    :
    source_lsp_id{YType::str, "source-lsp-id"},
    source_address{YType::str, "source-address"}
        ,
    tags(this, {})
    , nodal_sid(this, {})
{

    yang_name = "multicast-source"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::~MulticastSource()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    return source_lsp_id.is_set
	|| source_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::has_operation() const
{
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_lsp_id.is_set || is_set(source_lsp_id.yfilter)) leaf_name_data.push_back(source_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tags")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags>();
        c->parent = this;
        tags.append(c);
        return c;
    }

    if(child_yang_name == "nodal-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid>();
        c->parent = this;
        nodal_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tags.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nodal_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-lsp-id")
    {
        source_lsp_id = value;
        source_lsp_id.value_namespace = name_space;
        source_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-lsp-id")
    {
        source_lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tags" || name == "nodal-sid" || name == "source-lsp-id" || name == "source-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::Tags()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "tags"; yang_parent_name = "multicast-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::~Tags()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::NodalSid()
    :
    sid_value{YType::uint32, "sid-value"},
    rflag{YType::uint8, "rflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    eflag{YType::uint8, "eflag"},
    vflag{YType::uint8, "vflag"},
    lflag{YType::uint8, "lflag"},
    algorithm{YType::uint8, "algorithm"}
{

    yang_name = "nodal-sid"; yang_parent_name = "multicast-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::has_data() const
{
    if (is_presence_container) return true;
    return sid_value.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| algorithm.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-value" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag" || name == "algorithm")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Backup()
    :
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    multicast_metric{YType::uint32, "multicast-metric"},
    is_external_metric{YType::boolean, "is-external-metric"},
    administrative_distance{YType::uint16, "administrative-distance"}
        ,
    paths(this, {})
    , ucmp_next_hop(this, {})
    , multicast_path(this, {})
    , srte_path(this, {})
    , explicit_path(this, {})
    , source(this, {})
    , multicast_source(this, {})
{

    yang_name = "backup"; yang_parent_name = "native-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::~Backup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.len(); index++)
    {
        if(ucmp_next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.len(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srte_path.len(); index++)
    {
        if(srte_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<explicit_path.len(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.len(); index++)
    {
        if(multicast_source[index]->has_data())
            return true;
    }
    return origin.is_set
	|| metric.is_set
	|| multicast_metric.is_set
	|| is_external_metric.is_set
	|| administrative_distance.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::has_operation() const
{
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.len(); index++)
    {
        if(ucmp_next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.len(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srte_path.len(); index++)
    {
        if(srte_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<explicit_path.len(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.len(); index++)
    {
        if(multicast_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(multicast_metric.yfilter)
	|| ydk::is_set(is_external_metric.yfilter)
	|| ydk::is_set(administrative_distance.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast_metric.is_set || is_set(multicast_metric.yfilter)) leaf_name_data.push_back(multicast_metric.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.yfilter)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (administrative_distance.is_set || is_set(administrative_distance.yfilter)) leaf_name_data.push_back(administrative_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths>();
        c->parent = this;
        paths.append(c);
        return c;
    }

    if(child_yang_name == "ucmp-next-hop")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop>();
        c->parent = this;
        ucmp_next_hop.append(c);
        return c;
    }

    if(child_yang_name == "multicast-path")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath>();
        c->parent = this;
        multicast_path.append(c);
        return c;
    }

    if(child_yang_name == "srte-path")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath>();
        c->parent = this;
        srte_path.append(c);
        return c;
    }

    if(child_yang_name == "explicit-path")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath>();
        c->parent = this;
        explicit_path.append(c);
        return c;
    }

    if(child_yang_name == "source")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source>();
        c->parent = this;
        source.append(c);
        return c;
    }

    if(child_yang_name == "multicast-source")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource>();
        c->parent = this;
        multicast_source.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : paths.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ucmp_next_hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : multicast_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : srte_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : explicit_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : source.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : multicast_source.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric = value;
        multicast_metric.value_namespace = name_space;
        multicast_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
        is_external_metric.value_namespace = name_space;
        is_external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-distance")
    {
        administrative_distance = value;
        administrative_distance.value_namespace = name_space;
        administrative_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric.yfilter = yfilter;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric.yfilter = yfilter;
    }
    if(value_path == "administrative-distance")
    {
        administrative_distance.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "ucmp-next-hop" || name == "multicast-path" || name == "srte-path" || name == "explicit-path" || name == "source" || name == "multicast-source" || name == "origin" || name == "metric" || name == "multicast-metric" || name == "is-external-metric" || name == "administrative-distance")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Paths()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "paths"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit>();
        c->parent = this;
        uloop_explicit.append(c);
        return c;
    }

    if(child_yang_name == "nnh")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh>();
        c->parent = this;
        nnh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    count = 0;
    for (auto c : uloop_explicit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nnh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.append(c);
        return c;
    }

    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : segment_routing_sid_value_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : backup_repair.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::UcmpNextHop()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    total_ucmp_distance{YType::uint32, "total-ucmp-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup>())
{
    frr_backup->parent = this;

    yang_name = "ucmp-next-hop"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::~UcmpNextHop()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| total_ucmp_distance.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(total_ucmp_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (total_ucmp_distance.is_set || is_set(total_ucmp_distance.yfilter)) leaf_name_data.push_back(total_ucmp_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup>();
        }
        return frr_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-ucmp-distance")
    {
        total_ucmp_distance = value;
        total_ucmp_distance.value_namespace = name_space;
        total_ucmp_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "total-ucmp-distance")
    {
        total_ucmp_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "total-ucmp-distance" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "ucmp-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.append(c);
        return c;
    }

    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : segment_routing_sid_value_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : backup_repair.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::MulticastPath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "multicast-path"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.append(c);
        return c;
    }

    if(child_yang_name == "nnh")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh>();
        c->parent = this;
        nnh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    count = 0;
    for (auto c : uloop_explicit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nnh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.append(c);
        return c;
    }

    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : segment_routing_sid_value_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : backup_repair.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::SrtePath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "srte-path"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::~SrtePath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.append(c);
        return c;
    }

    if(child_yang_name == "nnh")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh>();
        c->parent = this;
        nnh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    count = 0;
    for (auto c : uloop_explicit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nnh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "srte-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.append(c);
        return c;
    }

    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : segment_routing_sid_value_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : backup_repair.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "srte-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "srte-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::ExplicitPath()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    weight{YType::uint32, "weight"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"}
        ,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup>())
    , uloop_explicit(this, {})
    , nnh(this, {})
{
    frr_backup->parent = this;

    yang_name = "explicit-path"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::~ExplicitPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_snpa.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| segment_routing_sid_value.is_set
	|| weight.is_set
	|| is_te_tunnel_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.len(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nnh.len(); index++)
    {
        if(nnh[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.append(c);
        return c;
    }

    if(child_yang_name == "nnh")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh>();
        c->parent = this;
        nnh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    count = 0;
    for (auto c : uloop_explicit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nnh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "nnh" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "neighbor-snpa" || name == "tag" || name == "tunnel-interface" || name == "segment-routing-sid-value" || name == "weight" || name == "is-te-tunnel-interface" || name == "is-sr-exclude-tunnel-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::FrrBackup()
    :
    neighbor_id{YType::str, "neighbor-id"},
    egress_interface{YType::str, "egress-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    num_sid{YType::uint32, "num-sid"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    is_downstream{YType::boolean, "is-downstream"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    weight{YType::uint32, "weight"}
        ,
    segment_routing_sid_value_entry(this, {})
    , backup_repair(this, {})
{

    yang_name = "frr-backup"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return neighbor_id.is_set
	|| egress_interface.is_set
	|| neighbor_address.is_set
	|| tunnel_egress_interface.is_set
	|| neighbor_snpa.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_system_pid.is_set
	|| remote_lfa_router_pid.is_set
	|| total_backup_distance.is_set
	|| segment_routing_sid_value.is_set
	|| num_sid.is_set
	|| backup_repair_list_size.is_set
	|| tilfa_computation.is_set
	|| prefix_source_node_id.is_set
	|| is_downstream.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_srlg_disjoint.is_set
	|| is_remote_lfa.is_set
	|| is_epcfrr_lfa.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_sid_value_entry.len(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_repair.len(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.append(c);
        return c;
    }

    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : segment_routing_sid_value_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : backup_repair.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-sid-value-entry" || name == "backup-repair" || name == "neighbor-id" || name == "egress-interface" || name == "neighbor-address" || name == "tunnel-egress-interface" || name == "neighbor-snpa" || name == "remote-lfa-system-id" || name == "remote-lfa-router-id" || name == "remote-lfa-system-pid" || name == "remote-lfa-router-pid" || name == "total-backup-distance" || name == "segment-routing-sid-value" || name == "num-sid" || name == "backup-repair-list-size" || name == "tilfa-computation" || name == "prefix-source-node-id" || name == "is-downstream" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-srlg-disjoint" || name == "is-remote-lfa" || name == "is-epcfrr-lfa" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::has_data() const
{
    if (is_presence_container) return true;
    return repair_element_node_id.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-element-type" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::Nnh()
    :
    link_id_set{YType::boolean, "link-id-set"},
    ipv4_set{YType::boolean, "ipv4-set"},
    link_id{YType::uint32, "link-id"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "nnh"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::~Nnh()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::has_data() const
{
    if (is_presence_container) return true;
    return link_id_set.is_set
	|| ipv4_set.is_set
	|| link_id.is_set
	|| ipv4_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id_set.yfilter)
	|| ydk::is_set(ipv4_set.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nnh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id_set.is_set || is_set(link_id_set.yfilter)) leaf_name_data.push_back(link_id_set.get_name_leafdata());
    if (ipv4_set.is_set || is_set(ipv4_set.yfilter)) leaf_name_data.push_back(ipv4_set.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id-set")
    {
        link_id_set = value;
        link_id_set.value_namespace = name_space;
        link_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set = value;
        ipv4_set.value_namespace = name_space;
        ipv4_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id-set")
    {
        link_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-set")
    {
        ipv4_set.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id-set" || name == "ipv4-set" || name == "link-id" || name == "ipv4-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Source()
    :
    source_lsp_id{YType::str, "source-lsp-id"},
    source_address{YType::str, "source-address"}
        ,
    tags(this, {})
    , nodal_sid(this, {})
{

    yang_name = "source"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::~Source()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    return source_lsp_id.is_set
	|| source_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::has_operation() const
{
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_lsp_id.is_set || is_set(source_lsp_id.yfilter)) leaf_name_data.push_back(source_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tags")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags>();
        c->parent = this;
        tags.append(c);
        return c;
    }

    if(child_yang_name == "nodal-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid>();
        c->parent = this;
        nodal_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tags.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nodal_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-lsp-id")
    {
        source_lsp_id = value;
        source_lsp_id.value_namespace = name_space;
        source_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-lsp-id")
    {
        source_lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tags" || name == "nodal-sid" || name == "source-lsp-id" || name == "source-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::Tags()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "tags"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::~Tags()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::NodalSid()
    :
    sid_value{YType::uint32, "sid-value"},
    rflag{YType::uint8, "rflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    eflag{YType::uint8, "eflag"},
    vflag{YType::uint8, "vflag"},
    lflag{YType::uint8, "lflag"},
    algorithm{YType::uint8, "algorithm"}
{

    yang_name = "nodal-sid"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::has_data() const
{
    if (is_presence_container) return true;
    return sid_value.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| algorithm.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-value" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag" || name == "algorithm")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::MulticastSource()
    :
    source_lsp_id{YType::str, "source-lsp-id"},
    source_address{YType::str, "source-address"}
        ,
    tags(this, {})
    , nodal_sid(this, {})
{

    yang_name = "multicast-source"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::~MulticastSource()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    return source_lsp_id.is_set
	|| source_address.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::has_operation() const
{
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_lsp_id.is_set || is_set(source_lsp_id.yfilter)) leaf_name_data.push_back(source_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tags")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags>();
        c->parent = this;
        tags.append(c);
        return c;
    }

    if(child_yang_name == "nodal-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid>();
        c->parent = this;
        nodal_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tags.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nodal_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-lsp-id")
    {
        source_lsp_id = value;
        source_lsp_id.value_namespace = name_space;
        source_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-lsp-id")
    {
        source_lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tags" || name == "nodal-sid" || name == "source-lsp-id" || name == "source-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::Tags()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "tags"; yang_parent_name = "multicast-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::~Tags()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::NodalSid()
    :
    sid_value{YType::uint32, "sid-value"},
    rflag{YType::uint8, "rflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    eflag{YType::uint8, "eflag"},
    vflag{YType::uint8, "vflag"},
    lflag{YType::uint8, "lflag"},
    algorithm{YType::uint8, "algorithm"}
{

    yang_name = "nodal-sid"; yang_parent_name = "multicast-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::has_data() const
{
    if (is_presence_container) return true;
    return sid_value.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| algorithm.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-value" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag" || name == "algorithm")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::PerLevelAdvertisingDetail()
    :
    level{YType::enumeration, "level"},
    advertising_origin{YType::enumeration, "advertising-origin"},
    metric{YType::uint32, "metric"},
    is_propagated{YType::boolean, "is-propagated"},
    is_external_metric{YType::boolean, "is-external-metric"},
    is_external_reachability{YType::boolean, "is-external-reachability"},
    is_interarea{YType::boolean, "is-interarea"}
        ,
    summarization_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus>())
    , tags(this, {})
    , nodal_sid(this, {})
{
    summarization_status->parent = this;

    yang_name = "per-level-advertising-detail"; yang_parent_name = "ipv4-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::~PerLevelAdvertisingDetail()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_data())
            return true;
    }
    return level.is_set
	|| advertising_origin.is_set
	|| metric.is_set
	|| is_propagated.is_set
	|| is_external_metric.is_set
	|| is_external_reachability.is_set
	|| is_interarea.is_set
	|| (summarization_status !=  nullptr && summarization_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::has_operation() const
{
    for (std::size_t index=0; index<tags.len(); index++)
    {
        if(tags[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nodal_sid.len(); index++)
    {
        if(nodal_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(advertising_origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(is_propagated.yfilter)
	|| ydk::is_set(is_external_metric.yfilter)
	|| ydk::is_set(is_external_reachability.yfilter)
	|| ydk::is_set(is_interarea.yfilter)
	|| (summarization_status !=  nullptr && summarization_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-level-advertising-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (advertising_origin.is_set || is_set(advertising_origin.yfilter)) leaf_name_data.push_back(advertising_origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (is_propagated.is_set || is_set(is_propagated.yfilter)) leaf_name_data.push_back(is_propagated.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.yfilter)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (is_external_reachability.is_set || is_set(is_external_reachability.yfilter)) leaf_name_data.push_back(is_external_reachability.get_name_leafdata());
    if (is_interarea.is_set || is_set(is_interarea.yfilter)) leaf_name_data.push_back(is_interarea.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summarization-status")
    {
        if(summarization_status == nullptr)
        {
            summarization_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus>();
        }
        return summarization_status;
    }

    if(child_yang_name == "tags")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags>();
        c->parent = this;
        tags.append(c);
        return c;
    }

    if(child_yang_name == "nodal-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid>();
        c->parent = this;
        nodal_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summarization_status != nullptr)
    {
        children["summarization-status"] = summarization_status;
    }

    count = 0;
    for (auto c : tags.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nodal_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-origin")
    {
        advertising_origin = value;
        advertising_origin.value_namespace = name_space;
        advertising_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-propagated")
    {
        is_propagated = value;
        is_propagated.value_namespace = name_space;
        is_propagated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
        is_external_metric.value_namespace = name_space;
        is_external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-external-reachability")
    {
        is_external_reachability = value;
        is_external_reachability.value_namespace = name_space;
        is_external_reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interarea")
    {
        is_interarea = value;
        is_interarea.value_namespace = name_space;
        is_interarea.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "advertising-origin")
    {
        advertising_origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "is-propagated")
    {
        is_propagated.yfilter = yfilter;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric.yfilter = yfilter;
    }
    if(value_path == "is-external-reachability")
    {
        is_external_reachability.yfilter = yfilter;
    }
    if(value_path == "is-interarea")
    {
        is_interarea.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summarization-status" || name == "tags" || name == "nodal-sid" || name == "level" || name == "advertising-origin" || name == "metric" || name == "is-propagated" || name == "is-external-metric" || name == "is-external-reachability" || name == "is-interarea")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummarizationStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
        ,
    summary_prefix(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix>())
{
    summary_prefix->parent = this;

    yang_name = "summarization-status"; yang_parent_name = "per-level-advertising-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::~SummarizationStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| (summary_prefix !=  nullptr && summary_prefix->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (summary_prefix !=  nullptr && summary_prefix->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summarization-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        if(summary_prefix == nullptr)
        {
            summary_prefix = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix>();
        }
        return summary_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary_prefix != nullptr)
    {
        children["summary-prefix"] = summary_prefix;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix" || name == "is-valid")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summarization-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::~SummaryPrefix()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::Tags()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "tags"; yang_parent_name = "per-level-advertising-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::~Tags()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::NodalSid()
    :
    sid_value{YType::uint32, "sid-value"},
    rflag{YType::uint8, "rflag"},
    nflag{YType::uint8, "nflag"},
    pflag{YType::uint8, "pflag"},
    eflag{YType::uint8, "eflag"},
    vflag{YType::uint8, "vflag"},
    lflag{YType::uint8, "lflag"},
    algorithm{YType::uint8, "algorithm"}
{

    yang_name = "nodal-sid"; yang_parent_name = "per-level-advertising-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::~NodalSid()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::has_data() const
{
    if (is_presence_container) return true;
    return sid_value.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| algorithm.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodal-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-value" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag" || name == "algorithm")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::NsrStatus()
    :
    isis_vm_state{YType::uint16, "isis-vm-state"}
        ,
    isis_nsr_peer(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer>())
    , isis_nsr_infra(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra>())
{
    isis_nsr_peer->parent = this;
    isis_nsr_infra->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::~NsrStatus()
{
}

bool Isis::Instances::Instance::NsrStatus::has_data() const
{
    if (is_presence_container) return true;
    return isis_vm_state.is_set
	|| (isis_nsr_peer !=  nullptr && isis_nsr_peer->has_data())
	|| (isis_nsr_infra !=  nullptr && isis_nsr_infra->has_data());
}

bool Isis::Instances::Instance::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_vm_state.yfilter)
	|| (isis_nsr_peer !=  nullptr && isis_nsr_peer->has_operation())
	|| (isis_nsr_infra !=  nullptr && isis_nsr_infra->has_operation());
}

std::string Isis::Instances::Instance::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_vm_state.is_set || is_set(isis_vm_state.yfilter)) leaf_name_data.push_back(isis_vm_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-nsr-peer")
    {
        if(isis_nsr_peer == nullptr)
        {
            isis_nsr_peer = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer>();
        }
        return isis_nsr_peer;
    }

    if(child_yang_name == "isis-nsr-infra")
    {
        if(isis_nsr_infra == nullptr)
        {
            isis_nsr_infra = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra>();
        }
        return isis_nsr_infra;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis_nsr_peer != nullptr)
    {
        children["isis-nsr-peer"] = isis_nsr_peer;
    }

    if(isis_nsr_infra != nullptr)
    {
        children["isis-nsr-infra"] = isis_nsr_infra;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state = value;
        isis_vm_state.value_namespace = name_space;
        isis_vm_state.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-nsr-peer" || name == "isis-nsr-infra" || name == "isis-vm-state")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::IsisNsrPeer()
    :
    full_sync_achieved(this, {})
    , man_sync_count(this, {})
    , nsr_chg_count(this, {})
    , uptime(this, {})
    , uptime_valid(this, {})
{

    yang_name = "isis-nsr-peer"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::~IsisNsrPeer()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<full_sync_achieved.len(); index++)
    {
        if(full_sync_achieved[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<man_sync_count.len(); index++)
    {
        if(man_sync_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nsr_chg_count.len(); index++)
    {
        if(nsr_chg_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<uptime.len(); index++)
    {
        if(uptime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<uptime_valid.len(); index++)
    {
        if(uptime_valid[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::has_operation() const
{
    for (std::size_t index=0; index<full_sync_achieved.len(); index++)
    {
        if(full_sync_achieved[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<man_sync_count.len(); index++)
    {
        if(man_sync_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nsr_chg_count.len(); index++)
    {
        if(nsr_chg_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<uptime.len(); index++)
    {
        if(uptime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<uptime_valid.len(); index++)
    {
        if(uptime_valid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-nsr-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "full-sync-achieved")
    {
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved>();
        c->parent = this;
        full_sync_achieved.append(c);
        return c;
    }

    if(child_yang_name == "man-sync-count")
    {
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount>();
        c->parent = this;
        man_sync_count.append(c);
        return c;
    }

    if(child_yang_name == "nsr-chg-count")
    {
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount>();
        c->parent = this;
        nsr_chg_count.append(c);
        return c;
    }

    if(child_yang_name == "uptime")
    {
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime>();
        c->parent = this;
        uptime.append(c);
        return c;
    }

    if(child_yang_name == "uptime-valid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid>();
        c->parent = this;
        uptime_valid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : full_sync_achieved.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : man_sync_count.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nsr_chg_count.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : uptime.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : uptime_valid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full-sync-achieved" || name == "man-sync-count" || name == "nsr-chg-count" || name == "uptime" || name == "uptime-valid")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::FullSyncAchieved()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "full-sync-achieved"; yang_parent_name = "isis-nsr-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::~FullSyncAchieved()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "full-sync-achieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::ManSyncCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "man-sync-count"; yang_parent_name = "isis-nsr-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::~ManSyncCount()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "man-sync-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::NsrChgCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-chg-count"; yang_parent_name = "isis-nsr-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::~NsrChgCount()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-chg-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::Uptime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "uptime"; yang_parent_name = "isis-nsr-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::~Uptime()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uptime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::UptimeValid()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "uptime-valid"; yang_parent_name = "isis-nsr-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::~UptimeValid()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uptime-valid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::IsisNsrInfra()
    :
    gen(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen>())
    , pm(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm>())
    , ds(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds>())
    , te(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te>())
    , ncd(this, {})
    , nii_idb(this, {})
{
    gen->parent = this;
    pm->parent = this;
    ds->parent = this;
    te->parent = this;

    yang_name = "isis-nsr-infra"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::~IsisNsrInfra()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ncd.len(); index++)
    {
        if(ncd[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nii_idb.len(); index++)
    {
        if(nii_idb[index]->has_data())
            return true;
    }
    return (gen !=  nullptr && gen->has_data())
	|| (pm !=  nullptr && pm->has_data())
	|| (ds !=  nullptr && ds->has_data())
	|| (te !=  nullptr && te->has_data());
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::has_operation() const
{
    for (std::size_t index=0; index<ncd.len(); index++)
    {
        if(ncd[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nii_idb.len(); index++)
    {
        if(nii_idb[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (gen !=  nullptr && gen->has_operation())
	|| (pm !=  nullptr && pm->has_operation())
	|| (ds !=  nullptr && ds->has_operation())
	|| (te !=  nullptr && te->has_operation());
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-nsr-infra";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gen")
    {
        if(gen == nullptr)
        {
            gen = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen>();
        }
        return gen;
    }

    if(child_yang_name == "pm")
    {
        if(pm == nullptr)
        {
            pm = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm>();
        }
        return pm;
    }

    if(child_yang_name == "ds")
    {
        if(ds == nullptr)
        {
            ds = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds>();
        }
        return ds;
    }

    if(child_yang_name == "te")
    {
        if(te == nullptr)
        {
            te = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te>();
        }
        return te;
    }

    if(child_yang_name == "ncd")
    {
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd>();
        c->parent = this;
        ncd.append(c);
        return c;
    }

    if(child_yang_name == "nii-idb")
    {
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb>();
        c->parent = this;
        nii_idb.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gen != nullptr)
    {
        children["gen"] = gen;
    }

    if(pm != nullptr)
    {
        children["pm"] = pm;
    }

    if(ds != nullptr)
    {
        children["ds"] = ds;
    }

    if(te != nullptr)
    {
        children["te"] = te;
    }

    count = 0;
    for (auto c : ncd.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : nii_idb.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gen" || name == "pm" || name == "ds" || name == "te" || name == "ncd" || name == "nii-idb")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::Gen()
    :
    my_nodeid{YType::uint32, "my-nodeid"},
    my_process_id{YType::uint32, "my-process-id"},
    pm_issu_role{YType::uint8, "pm-issu-role"},
    pm_ha_role{YType::uint8, "pm-ha-role"},
    sysmgr_ha_role{YType::uint8, "sysmgr-ha-role"},
    nsr_send_ready{YType::uint8, "nsr-send-ready"},
    nsr_send_unready{YType::uint8, "nsr-send-unready"},
    nsr_send_err{YType::uint32, "nsr-send-err"},
    nsr_recv_err{YType::uint32, "nsr-recv-err"},
    retry_flag{YType::uint32, "retry-flag"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_configured{YType::boolean, "nsr-configured"},
    nsf_configured{YType::boolean, "nsf-configured"},
    failover{YType::boolean, "failover"},
    lanid_req_needed{YType::boolean, "lanid-req-needed"}
{

    yang_name = "gen"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::~Gen()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::has_data() const
{
    if (is_presence_container) return true;
    return my_nodeid.is_set
	|| my_process_id.is_set
	|| pm_issu_role.is_set
	|| pm_ha_role.is_set
	|| sysmgr_ha_role.is_set
	|| nsr_send_ready.is_set
	|| nsr_send_unready.is_set
	|| nsr_send_err.is_set
	|| nsr_recv_err.is_set
	|| retry_flag.is_set
	|| nsr_enabled.is_set
	|| nsr_configured.is_set
	|| nsf_configured.is_set
	|| failover.is_set
	|| lanid_req_needed.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(my_nodeid.yfilter)
	|| ydk::is_set(my_process_id.yfilter)
	|| ydk::is_set(pm_issu_role.yfilter)
	|| ydk::is_set(pm_ha_role.yfilter)
	|| ydk::is_set(sysmgr_ha_role.yfilter)
	|| ydk::is_set(nsr_send_ready.yfilter)
	|| ydk::is_set(nsr_send_unready.yfilter)
	|| ydk::is_set(nsr_send_err.yfilter)
	|| ydk::is_set(nsr_recv_err.yfilter)
	|| ydk::is_set(retry_flag.yfilter)
	|| ydk::is_set(nsr_enabled.yfilter)
	|| ydk::is_set(nsr_configured.yfilter)
	|| ydk::is_set(nsf_configured.yfilter)
	|| ydk::is_set(failover.yfilter)
	|| ydk::is_set(lanid_req_needed.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (my_nodeid.is_set || is_set(my_nodeid.yfilter)) leaf_name_data.push_back(my_nodeid.get_name_leafdata());
    if (my_process_id.is_set || is_set(my_process_id.yfilter)) leaf_name_data.push_back(my_process_id.get_name_leafdata());
    if (pm_issu_role.is_set || is_set(pm_issu_role.yfilter)) leaf_name_data.push_back(pm_issu_role.get_name_leafdata());
    if (pm_ha_role.is_set || is_set(pm_ha_role.yfilter)) leaf_name_data.push_back(pm_ha_role.get_name_leafdata());
    if (sysmgr_ha_role.is_set || is_set(sysmgr_ha_role.yfilter)) leaf_name_data.push_back(sysmgr_ha_role.get_name_leafdata());
    if (nsr_send_ready.is_set || is_set(nsr_send_ready.yfilter)) leaf_name_data.push_back(nsr_send_ready.get_name_leafdata());
    if (nsr_send_unready.is_set || is_set(nsr_send_unready.yfilter)) leaf_name_data.push_back(nsr_send_unready.get_name_leafdata());
    if (nsr_send_err.is_set || is_set(nsr_send_err.yfilter)) leaf_name_data.push_back(nsr_send_err.get_name_leafdata());
    if (nsr_recv_err.is_set || is_set(nsr_recv_err.yfilter)) leaf_name_data.push_back(nsr_recv_err.get_name_leafdata());
    if (retry_flag.is_set || is_set(retry_flag.yfilter)) leaf_name_data.push_back(retry_flag.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.yfilter)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_configured.is_set || is_set(nsr_configured.yfilter)) leaf_name_data.push_back(nsr_configured.get_name_leafdata());
    if (nsf_configured.is_set || is_set(nsf_configured.yfilter)) leaf_name_data.push_back(nsf_configured.get_name_leafdata());
    if (failover.is_set || is_set(failover.yfilter)) leaf_name_data.push_back(failover.get_name_leafdata());
    if (lanid_req_needed.is_set || is_set(lanid_req_needed.yfilter)) leaf_name_data.push_back(lanid_req_needed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "my-nodeid")
    {
        my_nodeid = value;
        my_nodeid.value_namespace = name_space;
        my_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-process-id")
    {
        my_process_id = value;
        my_process_id.value_namespace = name_space;
        my_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm-issu-role")
    {
        pm_issu_role = value;
        pm_issu_role.value_namespace = name_space;
        pm_issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm-ha-role")
    {
        pm_ha_role = value;
        pm_ha_role.value_namespace = name_space;
        pm_ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysmgr-ha-role")
    {
        sysmgr_ha_role = value;
        sysmgr_ha_role.value_namespace = name_space;
        sysmgr_ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-send-ready")
    {
        nsr_send_ready = value;
        nsr_send_ready.value_namespace = name_space;
        nsr_send_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-send-unready")
    {
        nsr_send_unready = value;
        nsr_send_unready.value_namespace = name_space;
        nsr_send_unready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-send-err")
    {
        nsr_send_err = value;
        nsr_send_err.value_namespace = name_space;
        nsr_send_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-recv-err")
    {
        nsr_recv_err = value;
        nsr_recv_err.value_namespace = name_space;
        nsr_recv_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-flag")
    {
        retry_flag = value;
        retry_flag.value_namespace = name_space;
        retry_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
        nsr_enabled.value_namespace = name_space;
        nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-configured")
    {
        nsr_configured = value;
        nsr_configured.value_namespace = name_space;
        nsr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-configured")
    {
        nsf_configured = value;
        nsf_configured.value_namespace = name_space;
        nsf_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failover")
    {
        failover = value;
        failover.value_namespace = name_space;
        failover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanid-req-needed")
    {
        lanid_req_needed = value;
        lanid_req_needed.value_namespace = name_space;
        lanid_req_needed.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "my-nodeid")
    {
        my_nodeid.yfilter = yfilter;
    }
    if(value_path == "my-process-id")
    {
        my_process_id.yfilter = yfilter;
    }
    if(value_path == "pm-issu-role")
    {
        pm_issu_role.yfilter = yfilter;
    }
    if(value_path == "pm-ha-role")
    {
        pm_ha_role.yfilter = yfilter;
    }
    if(value_path == "sysmgr-ha-role")
    {
        sysmgr_ha_role.yfilter = yfilter;
    }
    if(value_path == "nsr-send-ready")
    {
        nsr_send_ready.yfilter = yfilter;
    }
    if(value_path == "nsr-send-unready")
    {
        nsr_send_unready.yfilter = yfilter;
    }
    if(value_path == "nsr-send-err")
    {
        nsr_send_err.yfilter = yfilter;
    }
    if(value_path == "nsr-recv-err")
    {
        nsr_recv_err.yfilter = yfilter;
    }
    if(value_path == "retry-flag")
    {
        retry_flag.yfilter = yfilter;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "nsr-configured")
    {
        nsr_configured.yfilter = yfilter;
    }
    if(value_path == "nsf-configured")
    {
        nsf_configured.yfilter = yfilter;
    }
    if(value_path == "failover")
    {
        failover.yfilter = yfilter;
    }
    if(value_path == "lanid-req-needed")
    {
        lanid_req_needed.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "my-nodeid" || name == "my-process-id" || name == "pm-issu-role" || name == "pm-ha-role" || name == "sysmgr-ha-role" || name == "nsr-send-ready" || name == "nsr-send-unready" || name == "nsr-send-err" || name == "nsr-recv-err" || name == "retry-flag" || name == "nsr-enabled" || name == "nsr-configured" || name == "nsf-configured" || name == "failover" || name == "lanid-req-needed")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::Pm()
    :
    reg{YType::uint8, "reg"},
    conn_cb{YType::uint8, "conn-cb"},
    disconn_cb{YType::uint8, "disconn-cb"},
    conn_status{YType::boolean, "conn-status"}
{

    yang_name = "pm"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::~Pm()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::has_data() const
{
    if (is_presence_container) return true;
    return reg.is_set
	|| conn_cb.is_set
	|| disconn_cb.is_set
	|| conn_status.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reg.yfilter)
	|| ydk::is_set(conn_cb.yfilter)
	|| ydk::is_set(disconn_cb.yfilter)
	|| ydk::is_set(conn_status.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reg.is_set || is_set(reg.yfilter)) leaf_name_data.push_back(reg.get_name_leafdata());
    if (conn_cb.is_set || is_set(conn_cb.yfilter)) leaf_name_data.push_back(conn_cb.get_name_leafdata());
    if (disconn_cb.is_set || is_set(disconn_cb.yfilter)) leaf_name_data.push_back(disconn_cb.get_name_leafdata());
    if (conn_status.is_set || is_set(conn_status.yfilter)) leaf_name_data.push_back(conn_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reg")
    {
        reg = value;
        reg.value_namespace = name_space;
        reg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-cb")
    {
        conn_cb = value;
        conn_cb.value_namespace = name_space;
        conn_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconn-cb")
    {
        disconn_cb = value;
        disconn_cb.value_namespace = name_space;
        disconn_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-status")
    {
        conn_status = value;
        conn_status.value_namespace = name_space;
        conn_status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reg")
    {
        reg.yfilter = yfilter;
    }
    if(value_path == "conn-cb")
    {
        conn_cb.yfilter = yfilter;
    }
    if(value_path == "disconn-cb")
    {
        disconn_cb.yfilter = yfilter;
    }
    if(value_path == "conn-status")
    {
        conn_status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg" || name == "conn-cb" || name == "disconn-cb" || name == "conn-status")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::Ds()
    :
    conn{YType::uint8, "conn"},
    conn_cb{YType::uint8, "conn-cb"},
    pub{YType::uint8, "pub"},
    pub_cb{YType::uint8, "pub-cb"},
    reg{YType::uint8, "reg"},
    reg_cb{YType::uint8, "reg-cb"},
    unreg{YType::uint8, "unreg"},
    unreg_cb{YType::uint8, "unreg-cb"},
    disconn_cb{YType::uint8, "disconn-cb"},
    notify_cb{YType::uint8, "notify-cb"},
    notify_peer_xr{YType::str, "notify-peer-xr"},
    del_cb{YType::uint8, "del-cb"},
    remove_srv{YType::uint8, "remove-srv"},
    conn_status{YType::boolean, "conn-status"}
        ,
    conn_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs>())
    , conn_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs>())
    , pub_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs>())
    , pub_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs>())
    , reg_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs>())
    , reg_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs>())
    , unreg_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs>())
    , unreg_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs>())
    , disconn_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs>())
    , notify_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs>())
    , del_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs>())
    , remove_srv_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs>())
    , conn_status_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs>())
    , notify_peer(this, {})
{
    conn_ts->parent = this;
    conn_cb_ts->parent = this;
    pub_ts->parent = this;
    pub_cb_ts->parent = this;
    reg_ts->parent = this;
    reg_cb_ts->parent = this;
    unreg_ts->parent = this;
    unreg_cb_ts->parent = this;
    disconn_cb_ts->parent = this;
    notify_cb_ts->parent = this;
    del_cb_ts->parent = this;
    remove_srv_ts->parent = this;
    conn_status_ts->parent = this;

    yang_name = "ds"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::~Ds()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notify_peer.len(); index++)
    {
        if(notify_peer[index]->has_data())
            return true;
    }
    return conn.is_set
	|| conn_cb.is_set
	|| pub.is_set
	|| pub_cb.is_set
	|| reg.is_set
	|| reg_cb.is_set
	|| unreg.is_set
	|| unreg_cb.is_set
	|| disconn_cb.is_set
	|| notify_cb.is_set
	|| notify_peer_xr.is_set
	|| del_cb.is_set
	|| remove_srv.is_set
	|| conn_status.is_set
	|| (conn_ts !=  nullptr && conn_ts->has_data())
	|| (conn_cb_ts !=  nullptr && conn_cb_ts->has_data())
	|| (pub_ts !=  nullptr && pub_ts->has_data())
	|| (pub_cb_ts !=  nullptr && pub_cb_ts->has_data())
	|| (reg_ts !=  nullptr && reg_ts->has_data())
	|| (reg_cb_ts !=  nullptr && reg_cb_ts->has_data())
	|| (unreg_ts !=  nullptr && unreg_ts->has_data())
	|| (unreg_cb_ts !=  nullptr && unreg_cb_ts->has_data())
	|| (disconn_cb_ts !=  nullptr && disconn_cb_ts->has_data())
	|| (notify_cb_ts !=  nullptr && notify_cb_ts->has_data())
	|| (del_cb_ts !=  nullptr && del_cb_ts->has_data())
	|| (remove_srv_ts !=  nullptr && remove_srv_ts->has_data())
	|| (conn_status_ts !=  nullptr && conn_status_ts->has_data());
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::has_operation() const
{
    for (std::size_t index=0; index<notify_peer.len(); index++)
    {
        if(notify_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(conn.yfilter)
	|| ydk::is_set(conn_cb.yfilter)
	|| ydk::is_set(pub.yfilter)
	|| ydk::is_set(pub_cb.yfilter)
	|| ydk::is_set(reg.yfilter)
	|| ydk::is_set(reg_cb.yfilter)
	|| ydk::is_set(unreg.yfilter)
	|| ydk::is_set(unreg_cb.yfilter)
	|| ydk::is_set(disconn_cb.yfilter)
	|| ydk::is_set(notify_cb.yfilter)
	|| ydk::is_set(notify_peer_xr.yfilter)
	|| ydk::is_set(del_cb.yfilter)
	|| ydk::is_set(remove_srv.yfilter)
	|| ydk::is_set(conn_status.yfilter)
	|| (conn_ts !=  nullptr && conn_ts->has_operation())
	|| (conn_cb_ts !=  nullptr && conn_cb_ts->has_operation())
	|| (pub_ts !=  nullptr && pub_ts->has_operation())
	|| (pub_cb_ts !=  nullptr && pub_cb_ts->has_operation())
	|| (reg_ts !=  nullptr && reg_ts->has_operation())
	|| (reg_cb_ts !=  nullptr && reg_cb_ts->has_operation())
	|| (unreg_ts !=  nullptr && unreg_ts->has_operation())
	|| (unreg_cb_ts !=  nullptr && unreg_cb_ts->has_operation())
	|| (disconn_cb_ts !=  nullptr && disconn_cb_ts->has_operation())
	|| (notify_cb_ts !=  nullptr && notify_cb_ts->has_operation())
	|| (del_cb_ts !=  nullptr && del_cb_ts->has_operation())
	|| (remove_srv_ts !=  nullptr && remove_srv_ts->has_operation())
	|| (conn_status_ts !=  nullptr && conn_status_ts->has_operation());
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conn.is_set || is_set(conn.yfilter)) leaf_name_data.push_back(conn.get_name_leafdata());
    if (conn_cb.is_set || is_set(conn_cb.yfilter)) leaf_name_data.push_back(conn_cb.get_name_leafdata());
    if (pub.is_set || is_set(pub.yfilter)) leaf_name_data.push_back(pub.get_name_leafdata());
    if (pub_cb.is_set || is_set(pub_cb.yfilter)) leaf_name_data.push_back(pub_cb.get_name_leafdata());
    if (reg.is_set || is_set(reg.yfilter)) leaf_name_data.push_back(reg.get_name_leafdata());
    if (reg_cb.is_set || is_set(reg_cb.yfilter)) leaf_name_data.push_back(reg_cb.get_name_leafdata());
    if (unreg.is_set || is_set(unreg.yfilter)) leaf_name_data.push_back(unreg.get_name_leafdata());
    if (unreg_cb.is_set || is_set(unreg_cb.yfilter)) leaf_name_data.push_back(unreg_cb.get_name_leafdata());
    if (disconn_cb.is_set || is_set(disconn_cb.yfilter)) leaf_name_data.push_back(disconn_cb.get_name_leafdata());
    if (notify_cb.is_set || is_set(notify_cb.yfilter)) leaf_name_data.push_back(notify_cb.get_name_leafdata());
    if (notify_peer_xr.is_set || is_set(notify_peer_xr.yfilter)) leaf_name_data.push_back(notify_peer_xr.get_name_leafdata());
    if (del_cb.is_set || is_set(del_cb.yfilter)) leaf_name_data.push_back(del_cb.get_name_leafdata());
    if (remove_srv.is_set || is_set(remove_srv.yfilter)) leaf_name_data.push_back(remove_srv.get_name_leafdata());
    if (conn_status.is_set || is_set(conn_status.yfilter)) leaf_name_data.push_back(conn_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conn-ts")
    {
        if(conn_ts == nullptr)
        {
            conn_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs>();
        }
        return conn_ts;
    }

    if(child_yang_name == "conn-cb-ts")
    {
        if(conn_cb_ts == nullptr)
        {
            conn_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs>();
        }
        return conn_cb_ts;
    }

    if(child_yang_name == "pub-ts")
    {
        if(pub_ts == nullptr)
        {
            pub_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs>();
        }
        return pub_ts;
    }

    if(child_yang_name == "pub-cb-ts")
    {
        if(pub_cb_ts == nullptr)
        {
            pub_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs>();
        }
        return pub_cb_ts;
    }

    if(child_yang_name == "reg-ts")
    {
        if(reg_ts == nullptr)
        {
            reg_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs>();
        }
        return reg_ts;
    }

    if(child_yang_name == "reg-cb-ts")
    {
        if(reg_cb_ts == nullptr)
        {
            reg_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs>();
        }
        return reg_cb_ts;
    }

    if(child_yang_name == "unreg-ts")
    {
        if(unreg_ts == nullptr)
        {
            unreg_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs>();
        }
        return unreg_ts;
    }

    if(child_yang_name == "unreg-cb-ts")
    {
        if(unreg_cb_ts == nullptr)
        {
            unreg_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs>();
        }
        return unreg_cb_ts;
    }

    if(child_yang_name == "disconn-cb-ts")
    {
        if(disconn_cb_ts == nullptr)
        {
            disconn_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs>();
        }
        return disconn_cb_ts;
    }

    if(child_yang_name == "notify-cb-ts")
    {
        if(notify_cb_ts == nullptr)
        {
            notify_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs>();
        }
        return notify_cb_ts;
    }

    if(child_yang_name == "del-cb-ts")
    {
        if(del_cb_ts == nullptr)
        {
            del_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs>();
        }
        return del_cb_ts;
    }

    if(child_yang_name == "remove-srv-ts")
    {
        if(remove_srv_ts == nullptr)
        {
            remove_srv_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs>();
        }
        return remove_srv_ts;
    }

    if(child_yang_name == "conn-status-ts")
    {
        if(conn_status_ts == nullptr)
        {
            conn_status_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs>();
        }
        return conn_status_ts;
    }

    if(child_yang_name == "notify-peer")
    {
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer>();
        c->parent = this;
        notify_peer.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conn_ts != nullptr)
    {
        children["conn-ts"] = conn_ts;
    }

    if(conn_cb_ts != nullptr)
    {
        children["conn-cb-ts"] = conn_cb_ts;
    }

    if(pub_ts != nullptr)
    {
        children["pub-ts"] = pub_ts;
    }

    if(pub_cb_ts != nullptr)
    {
        children["pub-cb-ts"] = pub_cb_ts;
    }

    if(reg_ts != nullptr)
    {
        children["reg-ts"] = reg_ts;
    }

    if(reg_cb_ts != nullptr)
    {
        children["reg-cb-ts"] = reg_cb_ts;
    }

    if(unreg_ts != nullptr)
    {
        children["unreg-ts"] = unreg_ts;
    }

    if(unreg_cb_ts != nullptr)
    {
        children["unreg-cb-ts"] = unreg_cb_ts;
    }

    if(disconn_cb_ts != nullptr)
    {
        children["disconn-cb-ts"] = disconn_cb_ts;
    }

    if(notify_cb_ts != nullptr)
    {
        children["notify-cb-ts"] = notify_cb_ts;
    }

    if(del_cb_ts != nullptr)
    {
        children["del-cb-ts"] = del_cb_ts;
    }

    if(remove_srv_ts != nullptr)
    {
        children["remove-srv-ts"] = remove_srv_ts;
    }

    if(conn_status_ts != nullptr)
    {
        children["conn-status-ts"] = conn_status_ts;
    }

    count = 0;
    for (auto c : notify_peer.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conn")
    {
        conn = value;
        conn.value_namespace = name_space;
        conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-cb")
    {
        conn_cb = value;
        conn_cb.value_namespace = name_space;
        conn_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pub")
    {
        pub = value;
        pub.value_namespace = name_space;
        pub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pub-cb")
    {
        pub_cb = value;
        pub_cb.value_namespace = name_space;
        pub_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg")
    {
        reg = value;
        reg.value_namespace = name_space;
        reg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-cb")
    {
        reg_cb = value;
        reg_cb.value_namespace = name_space;
        reg_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreg")
    {
        unreg = value;
        unreg.value_namespace = name_space;
        unreg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreg-cb")
    {
        unreg_cb = value;
        unreg_cb.value_namespace = name_space;
        unreg_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconn-cb")
    {
        disconn_cb = value;
        disconn_cb.value_namespace = name_space;
        disconn_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-cb")
    {
        notify_cb = value;
        notify_cb.value_namespace = name_space;
        notify_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-peer-xr")
    {
        notify_peer_xr = value;
        notify_peer_xr.value_namespace = name_space;
        notify_peer_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "del-cb")
    {
        del_cb = value;
        del_cb.value_namespace = name_space;
        del_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-srv")
    {
        remove_srv = value;
        remove_srv.value_namespace = name_space;
        remove_srv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-status")
    {
        conn_status = value;
        conn_status.value_namespace = name_space;
        conn_status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conn")
    {
        conn.yfilter = yfilter;
    }
    if(value_path == "conn-cb")
    {
        conn_cb.yfilter = yfilter;
    }
    if(value_path == "pub")
    {
        pub.yfilter = yfilter;
    }
    if(value_path == "pub-cb")
    {
        pub_cb.yfilter = yfilter;
    }
    if(value_path == "reg")
    {
        reg.yfilter = yfilter;
    }
    if(value_path == "reg-cb")
    {
        reg_cb.yfilter = yfilter;
    }
    if(value_path == "unreg")
    {
        unreg.yfilter = yfilter;
    }
    if(value_path == "unreg-cb")
    {
        unreg_cb.yfilter = yfilter;
    }
    if(value_path == "disconn-cb")
    {
        disconn_cb.yfilter = yfilter;
    }
    if(value_path == "notify-cb")
    {
        notify_cb.yfilter = yfilter;
    }
    if(value_path == "notify-peer-xr")
    {
        notify_peer_xr.yfilter = yfilter;
    }
    if(value_path == "del-cb")
    {
        del_cb.yfilter = yfilter;
    }
    if(value_path == "remove-srv")
    {
        remove_srv.yfilter = yfilter;
    }
    if(value_path == "conn-status")
    {
        conn_status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conn-ts" || name == "conn-cb-ts" || name == "pub-ts" || name == "pub-cb-ts" || name == "reg-ts" || name == "reg-cb-ts" || name == "unreg-ts" || name == "unreg-cb-ts" || name == "disconn-cb-ts" || name == "notify-cb-ts" || name == "del-cb-ts" || name == "remove-srv-ts" || name == "conn-status-ts" || name == "notify-peer" || name == "conn" || name == "conn-cb" || name == "pub" || name == "pub-cb" || name == "reg" || name == "reg-cb" || name == "unreg" || name == "unreg-cb" || name == "disconn-cb" || name == "notify-cb" || name == "notify-peer-xr" || name == "del-cb" || name == "remove-srv" || name == "conn-status")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::ConnTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "conn-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::~ConnTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::ConnCbTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "conn-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::~ConnCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::PubTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "pub-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::~PubTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::PubCbTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "pub-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::~PubCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::RegTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "reg-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::~RegTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::RegCbTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "reg-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::~RegCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::UnregTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "unreg-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::~UnregTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreg-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::UnregCbTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "unreg-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::~UnregCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreg-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::DisconnCbTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "disconn-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::~DisconnCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconn-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::NotifyCbTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "notify-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::~NotifyCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::DelCbTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "del-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::~DelCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "del-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::RemoveSrvTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "remove-srv-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::~RemoveSrvTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-srv-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::ConnStatusTs()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "conn-status-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::~ConnStatusTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-status-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::NotifyPeer()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "notify-peer"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::~NotifyPeer()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::Te()
    :
    enabled{YType::uint8, "enabled"},
    conn_up{YType::uint8, "conn-up"},
    te_link_cb{YType::uint8, "te-link-cb"},
    te_tunnel_cb{YType::uint8, "te-tunnel-cb"},
    adv_sync_data{YType::uint8, "adv-sync-data"},
    link_purge_time_on{YType::uint8, "link-purge-time-on"},
    tunnel_purge_time_on{YType::uint8, "tunnel-purge-time-on"},
    has_info_from_te{YType::uint8, "has-info-from-te"}
{

    yang_name = "te"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::~Te()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| conn_up.is_set
	|| te_link_cb.is_set
	|| te_tunnel_cb.is_set
	|| adv_sync_data.is_set
	|| link_purge_time_on.is_set
	|| tunnel_purge_time_on.is_set
	|| has_info_from_te.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(conn_up.yfilter)
	|| ydk::is_set(te_link_cb.yfilter)
	|| ydk::is_set(te_tunnel_cb.yfilter)
	|| ydk::is_set(adv_sync_data.yfilter)
	|| ydk::is_set(link_purge_time_on.yfilter)
	|| ydk::is_set(tunnel_purge_time_on.yfilter)
	|| ydk::is_set(has_info_from_te.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.yfilter)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (te_link_cb.is_set || is_set(te_link_cb.yfilter)) leaf_name_data.push_back(te_link_cb.get_name_leafdata());
    if (te_tunnel_cb.is_set || is_set(te_tunnel_cb.yfilter)) leaf_name_data.push_back(te_tunnel_cb.get_name_leafdata());
    if (adv_sync_data.is_set || is_set(adv_sync_data.yfilter)) leaf_name_data.push_back(adv_sync_data.get_name_leafdata());
    if (link_purge_time_on.is_set || is_set(link_purge_time_on.yfilter)) leaf_name_data.push_back(link_purge_time_on.get_name_leafdata());
    if (tunnel_purge_time_on.is_set || is_set(tunnel_purge_time_on.yfilter)) leaf_name_data.push_back(tunnel_purge_time_on.get_name_leafdata());
    if (has_info_from_te.is_set || is_set(has_info_from_te.yfilter)) leaf_name_data.push_back(has_info_from_te.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
        conn_up.value_namespace = name_space;
        conn_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-link-cb")
    {
        te_link_cb = value;
        te_link_cb.value_namespace = name_space;
        te_link_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-tunnel-cb")
    {
        te_tunnel_cb = value;
        te_tunnel_cb.value_namespace = name_space;
        te_tunnel_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-sync-data")
    {
        adv_sync_data = value;
        adv_sync_data.value_namespace = name_space;
        adv_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-purge-time-on")
    {
        link_purge_time_on = value;
        link_purge_time_on.value_namespace = name_space;
        link_purge_time_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-purge-time-on")
    {
        tunnel_purge_time_on = value;
        tunnel_purge_time_on.value_namespace = name_space;
        tunnel_purge_time_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-info-from-te")
    {
        has_info_from_te = value;
        has_info_from_te.value_namespace = name_space;
        has_info_from_te.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "conn-up")
    {
        conn_up.yfilter = yfilter;
    }
    if(value_path == "te-link-cb")
    {
        te_link_cb.yfilter = yfilter;
    }
    if(value_path == "te-tunnel-cb")
    {
        te_tunnel_cb.yfilter = yfilter;
    }
    if(value_path == "adv-sync-data")
    {
        adv_sync_data.yfilter = yfilter;
    }
    if(value_path == "link-purge-time-on")
    {
        link_purge_time_on.yfilter = yfilter;
    }
    if(value_path == "tunnel-purge-time-on")
    {
        tunnel_purge_time_on.yfilter = yfilter;
    }
    if(value_path == "has-info-from-te")
    {
        has_info_from_te.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "conn-up" || name == "te-link-cb" || name == "te-tunnel-cb" || name == "adv-sync-data" || name == "link-purge-time-on" || name == "tunnel-purge-time-on" || name == "has-info-from-te")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::Ncd()
    :
    vm_idx{YType::uint8, "vm-idx"},
    conn_up{YType::boolean, "conn-up"},
    endp_hdl{YType::uint8, "endp-hdl"},
    chksum{YType::uint16, "chksum"},
    send_seqnum{YType::uint32, "send-seqnum"},
    recv_cnt{YType::uint32, "recv-cnt"}
{

    yang_name = "ncd"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::~Ncd()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::has_data() const
{
    if (is_presence_container) return true;
    return vm_idx.is_set
	|| conn_up.is_set
	|| endp_hdl.is_set
	|| chksum.is_set
	|| send_seqnum.is_set
	|| recv_cnt.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vm_idx.yfilter)
	|| ydk::is_set(conn_up.yfilter)
	|| ydk::is_set(endp_hdl.yfilter)
	|| ydk::is_set(chksum.yfilter)
	|| ydk::is_set(send_seqnum.yfilter)
	|| ydk::is_set(recv_cnt.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vm_idx.is_set || is_set(vm_idx.yfilter)) leaf_name_data.push_back(vm_idx.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.yfilter)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (endp_hdl.is_set || is_set(endp_hdl.yfilter)) leaf_name_data.push_back(endp_hdl.get_name_leafdata());
    if (chksum.is_set || is_set(chksum.yfilter)) leaf_name_data.push_back(chksum.get_name_leafdata());
    if (send_seqnum.is_set || is_set(send_seqnum.yfilter)) leaf_name_data.push_back(send_seqnum.get_name_leafdata());
    if (recv_cnt.is_set || is_set(recv_cnt.yfilter)) leaf_name_data.push_back(recv_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vm-idx")
    {
        vm_idx = value;
        vm_idx.value_namespace = name_space;
        vm_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
        conn_up.value_namespace = name_space;
        conn_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endp-hdl")
    {
        endp_hdl = value;
        endp_hdl.value_namespace = name_space;
        endp_hdl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chksum")
    {
        chksum = value;
        chksum.value_namespace = name_space;
        chksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-seqnum")
    {
        send_seqnum = value;
        send_seqnum.value_namespace = name_space;
        send_seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recv-cnt")
    {
        recv_cnt = value;
        recv_cnt.value_namespace = name_space;
        recv_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vm-idx")
    {
        vm_idx.yfilter = yfilter;
    }
    if(value_path == "conn-up")
    {
        conn_up.yfilter = yfilter;
    }
    if(value_path == "endp-hdl")
    {
        endp_hdl.yfilter = yfilter;
    }
    if(value_path == "chksum")
    {
        chksum.yfilter = yfilter;
    }
    if(value_path == "send-seqnum")
    {
        send_seqnum.yfilter = yfilter;
    }
    if(value_path == "recv-cnt")
    {
        recv_cnt.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vm-idx" || name == "conn-up" || name == "endp-hdl" || name == "chksum" || name == "send-seqnum" || name == "recv-cnt")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::NiiIdb()
    :
    exist{YType::boolean, "exist"},
    brought_up{YType::boolean, "brought-up"},
    retry_timer{YType::boolean, "retry-timer"},
    running{YType::boolean, "running"},
    has_adj{YType::boolean, "has-adj"}
{

    yang_name = "nii-idb"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::~NiiIdb()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::has_data() const
{
    if (is_presence_container) return true;
    return exist.is_set
	|| brought_up.is_set
	|| retry_timer.is_set
	|| running.is_set
	|| has_adj.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exist.yfilter)
	|| ydk::is_set(brought_up.yfilter)
	|| ydk::is_set(retry_timer.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(has_adj.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nii-idb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exist.is_set || is_set(exist.yfilter)) leaf_name_data.push_back(exist.get_name_leafdata());
    if (brought_up.is_set || is_set(brought_up.yfilter)) leaf_name_data.push_back(brought_up.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (has_adj.is_set || is_set(has_adj.yfilter)) leaf_name_data.push_back(has_adj.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exist")
    {
        exist = value;
        exist.value_namespace = name_space;
        exist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brought-up")
    {
        brought_up = value;
        brought_up.value_namespace = name_space;
        brought_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-adj")
    {
        has_adj = value;
        has_adj.value_namespace = name_space;
        has_adj.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exist")
    {
        exist.yfilter = yfilter;
    }
    if(value_path == "brought-up")
    {
        brought_up.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "has-adj")
    {
        has_adj.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exist" || name == "brought-up" || name == "retry-timer" || name == "running" || name == "has-adj")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::~Interfaces()
{
}

bool Isis::Instances::Instance::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configured_circuit_type{YType::enumeration, "configured-circuit-type"},
    mesh_group{YType::uint32, "mesh-group"},
    is_type{YType::enumeration, "is-type"},
    nsr_intf{YType::boolean, "nsr-intf"}
        ,
    configured_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus>())
    , interface_status_and_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData>())
{
    configured_status->parent = this;
    interface_status_and_data->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::~Interface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| configured_circuit_type.is_set
	|| mesh_group.is_set
	|| is_type.is_set
	|| nsr_intf.is_set
	|| (configured_status !=  nullptr && configured_status->has_data())
	|| (interface_status_and_data !=  nullptr && interface_status_and_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(configured_circuit_type.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(is_type.yfilter)
	|| ydk::is_set(nsr_intf.yfilter)
	|| (configured_status !=  nullptr && configured_status->has_operation())
	|| (interface_status_and_data !=  nullptr && interface_status_and_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configured_circuit_type.is_set || is_set(configured_circuit_type.yfilter)) leaf_name_data.push_back(configured_circuit_type.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.yfilter)) leaf_name_data.push_back(is_type.get_name_leafdata());
    if (nsr_intf.is_set || is_set(nsr_intf.yfilter)) leaf_name_data.push_back(nsr_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-status")
    {
        if(configured_status == nullptr)
        {
            configured_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus>();
        }
        return configured_status;
    }

    if(child_yang_name == "interface-status-and-data")
    {
        if(interface_status_and_data == nullptr)
        {
            interface_status_and_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData>();
        }
        return interface_status_and_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(configured_status != nullptr)
    {
        children["configured-status"] = configured_status;
    }

    if(interface_status_and_data != nullptr)
    {
        children["interface-status-and-data"] = interface_status_and_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-circuit-type")
    {
        configured_circuit_type = value;
        configured_circuit_type.value_namespace = name_space;
        configured_circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-type")
    {
        is_type = value;
        is_type.value_namespace = name_space;
        is_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-intf")
    {
        nsr_intf = value;
        nsr_intf.value_namespace = name_space;
        nsr_intf.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "configured-circuit-type")
    {
        configured_circuit_type.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "is-type")
    {
        is_type.yfilter = yfilter;
    }
    if(value_path == "nsr-intf")
    {
        nsr_intf.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-status" || name == "interface-status-and-data" || name == "interface-name" || name == "configured-circuit-type" || name == "mesh-group" || name == "is-type" || name == "nsr-intf")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::ConfiguredStatus()
    :
    adjacency_form_status{YType::boolean, "adjacency-form-status"},
    adv_prefix_status{YType::boolean, "adv-prefix-status"}
{

    yang_name = "configured-status"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::~ConfiguredStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_data() const
{
    if (is_presence_container) return true;
    return adjacency_form_status.is_set
	|| adv_prefix_status.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_form_status.yfilter)
	|| ydk::is_set(adv_prefix_status.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_form_status.is_set || is_set(adjacency_form_status.yfilter)) leaf_name_data.push_back(adjacency_form_status.get_name_leafdata());
    if (adv_prefix_status.is_set || is_set(adv_prefix_status.yfilter)) leaf_name_data.push_back(adv_prefix_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-form-status")
    {
        adjacency_form_status = value;
        adjacency_form_status.value_namespace = name_space;
        adjacency_form_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-prefix-status")
    {
        adv_prefix_status = value;
        adv_prefix_status.value_namespace = name_space;
        adv_prefix_status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-form-status")
    {
        adjacency_form_status.yfilter = yfilter;
    }
    if(value_path == "adv-prefix-status")
    {
        adv_prefix_status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-form-status" || name == "adv-prefix-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::InterfaceStatusAndData()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled>())
    , enabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled>())
{
    disabled->parent = this;
    enabled->parent = this;

    yang_name = "interface-status-and-data"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::~InterfaceStatusAndData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (enabled !=  nullptr && enabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (enabled !=  nullptr && enabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-status-and-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled>();
        }
        return disabled;
    }

    if(child_yang_name == "enabled")
    {
        if(enabled == nullptr)
        {
            enabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled>();
        }
        return enabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    if(enabled != nullptr)
    {
        children["enabled"] = enabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "interface-status-and-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::Enabled()
    :
    interface_media_type{YType::enumeration, "interface-media-type"},
    enabled_circuit_type{YType::enumeration, "enabled-circuit-type"},
    local_circuit_number{YType::uint8, "local-circuit-number"},
    rsi_srlg_registered{YType::boolean, "rsi-srlg-registered"},
    bandwidth{YType::uint32, "bandwidth"}
        ,
    adjacency_form_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus>())
    , adv_prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus>())
    , p2p_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData>())
    , bfd_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData>())
    , clns_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData>())
    , underlying_interface(this, {})
    , per_area_data(this, {})
    , per_topology_data(this, {})
    , per_address_family_data(this, {})
{
    adjacency_form_status->parent = this;
    adv_prefix_status->parent = this;
    p2p_data->parent = this;
    bfd_data->parent = this;
    clns_data->parent = this;

    yang_name = "enabled"; yang_parent_name = "interface-status-and-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::~Enabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<underlying_interface.len(); index++)
    {
        if(underlying_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_topology_data.len(); index++)
    {
        if(per_topology_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_address_family_data.len(); index++)
    {
        if(per_address_family_data[index]->has_data())
            return true;
    }
    return interface_media_type.is_set
	|| enabled_circuit_type.is_set
	|| local_circuit_number.is_set
	|| rsi_srlg_registered.is_set
	|| bandwidth.is_set
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_data())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_data())
	|| (p2p_data !=  nullptr && p2p_data->has_data())
	|| (bfd_data !=  nullptr && bfd_data->has_data())
	|| (clns_data !=  nullptr && clns_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_operation() const
{
    for (std::size_t index=0; index<underlying_interface.len(); index++)
    {
        if(underlying_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_topology_data.len(); index++)
    {
        if(per_topology_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_address_family_data.len(); index++)
    {
        if(per_address_family_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_media_type.yfilter)
	|| ydk::is_set(enabled_circuit_type.yfilter)
	|| ydk::is_set(local_circuit_number.yfilter)
	|| ydk::is_set(rsi_srlg_registered.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_operation())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_operation())
	|| (p2p_data !=  nullptr && p2p_data->has_operation())
	|| (bfd_data !=  nullptr && bfd_data->has_operation())
	|| (clns_data !=  nullptr && clns_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_media_type.is_set || is_set(interface_media_type.yfilter)) leaf_name_data.push_back(interface_media_type.get_name_leafdata());
    if (enabled_circuit_type.is_set || is_set(enabled_circuit_type.yfilter)) leaf_name_data.push_back(enabled_circuit_type.get_name_leafdata());
    if (local_circuit_number.is_set || is_set(local_circuit_number.yfilter)) leaf_name_data.push_back(local_circuit_number.get_name_leafdata());
    if (rsi_srlg_registered.is_set || is_set(rsi_srlg_registered.yfilter)) leaf_name_data.push_back(rsi_srlg_registered.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-form-status")
    {
        if(adjacency_form_status == nullptr)
        {
            adjacency_form_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus>();
        }
        return adjacency_form_status;
    }

    if(child_yang_name == "adv-prefix-status")
    {
        if(adv_prefix_status == nullptr)
        {
            adv_prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus>();
        }
        return adv_prefix_status;
    }

    if(child_yang_name == "p2p-data")
    {
        if(p2p_data == nullptr)
        {
            p2p_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData>();
        }
        return p2p_data;
    }

    if(child_yang_name == "bfd-data")
    {
        if(bfd_data == nullptr)
        {
            bfd_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData>();
        }
        return bfd_data;
    }

    if(child_yang_name == "clns-data")
    {
        if(clns_data == nullptr)
        {
            clns_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData>();
        }
        return clns_data;
    }

    if(child_yang_name == "underlying-interface")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface>();
        c->parent = this;
        underlying_interface.append(c);
        return c;
    }

    if(child_yang_name == "per-area-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData>();
        c->parent = this;
        per_area_data.append(c);
        return c;
    }

    if(child_yang_name == "per-topology-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData>();
        c->parent = this;
        per_topology_data.append(c);
        return c;
    }

    if(child_yang_name == "per-address-family-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData>();
        c->parent = this;
        per_address_family_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjacency_form_status != nullptr)
    {
        children["adjacency-form-status"] = adjacency_form_status;
    }

    if(adv_prefix_status != nullptr)
    {
        children["adv-prefix-status"] = adv_prefix_status;
    }

    if(p2p_data != nullptr)
    {
        children["p2p-data"] = p2p_data;
    }

    if(bfd_data != nullptr)
    {
        children["bfd-data"] = bfd_data;
    }

    if(clns_data != nullptr)
    {
        children["clns-data"] = clns_data;
    }

    count = 0;
    for (auto c : underlying_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : per_area_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : per_topology_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : per_address_family_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-media-type")
    {
        interface_media_type = value;
        interface_media_type.value_namespace = name_space;
        interface_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-circuit-type")
    {
        enabled_circuit_type = value;
        enabled_circuit_type.value_namespace = name_space;
        enabled_circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number = value;
        local_circuit_number.value_namespace = name_space;
        local_circuit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-srlg-registered")
    {
        rsi_srlg_registered = value;
        rsi_srlg_registered.value_namespace = name_space;
        rsi_srlg_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-media-type")
    {
        interface_media_type.yfilter = yfilter;
    }
    if(value_path == "enabled-circuit-type")
    {
        enabled_circuit_type.yfilter = yfilter;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number.yfilter = yfilter;
    }
    if(value_path == "rsi-srlg-registered")
    {
        rsi_srlg_registered.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-form-status" || name == "adv-prefix-status" || name == "p2p-data" || name == "bfd-data" || name == "clns-data" || name == "underlying-interface" || name == "per-area-data" || name == "per-topology-data" || name == "per-address-family-data" || name == "interface-media-type" || name == "enabled-circuit-type" || name == "local-circuit-number" || name == "rsi-srlg-registered" || name == "bandwidth")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::AdjacencyFormStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adjacency-form-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::~AdjacencyFormStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-form-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adjacency-form-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::AdvPrefixStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adv-prefix-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::~AdvPrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-prefix-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adv-prefix-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::P2pData()
    :
    time_until_next_iih{YType::uint32, "time-until-next-iih"},
    retransmit_lsp_queue_size{YType::uint32, "retransmit-lsp-queue-size"},
    retransmit_lsp_interval{YType::uint32, "retransmit-lsp-interval"},
    extended_circuit_number{YType::uint32, "extended-circuit-number"}
{

    yang_name = "p2p-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::~P2pData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::has_data() const
{
    if (is_presence_container) return true;
    return time_until_next_iih.is_set
	|| retransmit_lsp_queue_size.is_set
	|| retransmit_lsp_interval.is_set
	|| extended_circuit_number.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_until_next_iih.yfilter)
	|| ydk::is_set(retransmit_lsp_queue_size.yfilter)
	|| ydk::is_set(retransmit_lsp_interval.yfilter)
	|| ydk::is_set(extended_circuit_number.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_until_next_iih.is_set || is_set(time_until_next_iih.yfilter)) leaf_name_data.push_back(time_until_next_iih.get_name_leafdata());
    if (retransmit_lsp_queue_size.is_set || is_set(retransmit_lsp_queue_size.yfilter)) leaf_name_data.push_back(retransmit_lsp_queue_size.get_name_leafdata());
    if (retransmit_lsp_interval.is_set || is_set(retransmit_lsp_interval.yfilter)) leaf_name_data.push_back(retransmit_lsp_interval.get_name_leafdata());
    if (extended_circuit_number.is_set || is_set(extended_circuit_number.yfilter)) leaf_name_data.push_back(extended_circuit_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih = value;
        time_until_next_iih.value_namespace = name_space;
        time_until_next_iih.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-lsp-queue-size")
    {
        retransmit_lsp_queue_size = value;
        retransmit_lsp_queue_size.value_namespace = name_space;
        retransmit_lsp_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-lsp-interval")
    {
        retransmit_lsp_interval = value;
        retransmit_lsp_interval.value_namespace = name_space;
        retransmit_lsp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-circuit-number")
    {
        extended_circuit_number = value;
        extended_circuit_number.value_namespace = name_space;
        extended_circuit_number.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih.yfilter = yfilter;
    }
    if(value_path == "retransmit-lsp-queue-size")
    {
        retransmit_lsp_queue_size.yfilter = yfilter;
    }
    if(value_path == "retransmit-lsp-interval")
    {
        retransmit_lsp_interval.yfilter = yfilter;
    }
    if(value_path == "extended-circuit-number")
    {
        extended_circuit_number.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-until-next-iih" || name == "retransmit-lsp-queue-size" || name == "retransmit-lsp-interval" || name == "extended-circuit-number")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::BfdData()
    :
    enabled{YType::boolean, "enabled"},
    ipv6_enabled{YType::boolean, "ipv6-enabled"},
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "bfd-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::~BfdData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| ipv6_enabled.is_set
	|| interval.is_set
	|| multiplier.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(ipv6_enabled.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ipv6_enabled.is_set || is_set(ipv6_enabled.yfilter)) leaf_name_data.push_back(ipv6_enabled.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-enabled")
    {
        ipv6_enabled = value;
        ipv6_enabled.value_namespace = name_space;
        ipv6_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "ipv6-enabled")
    {
        ipv6_enabled.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "ipv6-enabled" || name == "interval" || name == "multiplier")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsData()
    :
    time_until_next_lsp{YType::uint32, "time-until-next-lsp"},
    lsp_transmit_requested_flag{YType::boolean, "lsp-transmit-requested-flag"},
    lsp_transmitted_flag{YType::boolean, "lsp-transmitted-flag"},
    lsp_txmitd_b2b_limit{YType::uint32, "lsp-txmitd-b2b-limit"},
    lsp_txmt_b2b_msecs{YType::uint32, "lsp-txmt-b2b-msecs"},
    last_lsp_level_transmitted{YType::enumeration, "last-lsp-level-transmitted"},
    last_lsp_id_transmitted{YType::str, "last-lsp-id-transmitted"}
        ,
    clns_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus>())
    , mtu_info(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo>())
    , snpa_state(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState>())
    , media_specific_state(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState>())
{
    clns_status->parent = this;
    mtu_info->parent = this;
    snpa_state->parent = this;
    media_specific_state->parent = this;

    yang_name = "clns-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::~ClnsData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_data() const
{
    if (is_presence_container) return true;
    return time_until_next_lsp.is_set
	|| lsp_transmit_requested_flag.is_set
	|| lsp_transmitted_flag.is_set
	|| lsp_txmitd_b2b_limit.is_set
	|| lsp_txmt_b2b_msecs.is_set
	|| last_lsp_level_transmitted.is_set
	|| last_lsp_id_transmitted.is_set
	|| (clns_status !=  nullptr && clns_status->has_data())
	|| (mtu_info !=  nullptr && mtu_info->has_data())
	|| (snpa_state !=  nullptr && snpa_state->has_data())
	|| (media_specific_state !=  nullptr && media_specific_state->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_until_next_lsp.yfilter)
	|| ydk::is_set(lsp_transmit_requested_flag.yfilter)
	|| ydk::is_set(lsp_transmitted_flag.yfilter)
	|| ydk::is_set(lsp_txmitd_b2b_limit.yfilter)
	|| ydk::is_set(lsp_txmt_b2b_msecs.yfilter)
	|| ydk::is_set(last_lsp_level_transmitted.yfilter)
	|| ydk::is_set(last_lsp_id_transmitted.yfilter)
	|| (clns_status !=  nullptr && clns_status->has_operation())
	|| (mtu_info !=  nullptr && mtu_info->has_operation())
	|| (snpa_state !=  nullptr && snpa_state->has_operation())
	|| (media_specific_state !=  nullptr && media_specific_state->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_until_next_lsp.is_set || is_set(time_until_next_lsp.yfilter)) leaf_name_data.push_back(time_until_next_lsp.get_name_leafdata());
    if (lsp_transmit_requested_flag.is_set || is_set(lsp_transmit_requested_flag.yfilter)) leaf_name_data.push_back(lsp_transmit_requested_flag.get_name_leafdata());
    if (lsp_transmitted_flag.is_set || is_set(lsp_transmitted_flag.yfilter)) leaf_name_data.push_back(lsp_transmitted_flag.get_name_leafdata());
    if (lsp_txmitd_b2b_limit.is_set || is_set(lsp_txmitd_b2b_limit.yfilter)) leaf_name_data.push_back(lsp_txmitd_b2b_limit.get_name_leafdata());
    if (lsp_txmt_b2b_msecs.is_set || is_set(lsp_txmt_b2b_msecs.yfilter)) leaf_name_data.push_back(lsp_txmt_b2b_msecs.get_name_leafdata());
    if (last_lsp_level_transmitted.is_set || is_set(last_lsp_level_transmitted.yfilter)) leaf_name_data.push_back(last_lsp_level_transmitted.get_name_leafdata());
    if (last_lsp_id_transmitted.is_set || is_set(last_lsp_id_transmitted.yfilter)) leaf_name_data.push_back(last_lsp_id_transmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns-status")
    {
        if(clns_status == nullptr)
        {
            clns_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus>();
        }
        return clns_status;
    }

    if(child_yang_name == "mtu-info")
    {
        if(mtu_info == nullptr)
        {
            mtu_info = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo>();
        }
        return mtu_info;
    }

    if(child_yang_name == "snpa-state")
    {
        if(snpa_state == nullptr)
        {
            snpa_state = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState>();
        }
        return snpa_state;
    }

    if(child_yang_name == "media-specific-state")
    {
        if(media_specific_state == nullptr)
        {
            media_specific_state = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState>();
        }
        return media_specific_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clns_status != nullptr)
    {
        children["clns-status"] = clns_status;
    }

    if(mtu_info != nullptr)
    {
        children["mtu-info"] = mtu_info;
    }

    if(snpa_state != nullptr)
    {
        children["snpa-state"] = snpa_state;
    }

    if(media_specific_state != nullptr)
    {
        children["media-specific-state"] = media_specific_state;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-until-next-lsp")
    {
        time_until_next_lsp = value;
        time_until_next_lsp.value_namespace = name_space;
        time_until_next_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-transmit-requested-flag")
    {
        lsp_transmit_requested_flag = value;
        lsp_transmit_requested_flag.value_namespace = name_space;
        lsp_transmit_requested_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-transmitted-flag")
    {
        lsp_transmitted_flag = value;
        lsp_transmitted_flag.value_namespace = name_space;
        lsp_transmitted_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-txmitd-b2b-limit")
    {
        lsp_txmitd_b2b_limit = value;
        lsp_txmitd_b2b_limit.value_namespace = name_space;
        lsp_txmitd_b2b_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-txmt-b2b-msecs")
    {
        lsp_txmt_b2b_msecs = value;
        lsp_txmt_b2b_msecs.value_namespace = name_space;
        lsp_txmt_b2b_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-lsp-level-transmitted")
    {
        last_lsp_level_transmitted = value;
        last_lsp_level_transmitted.value_namespace = name_space;
        last_lsp_level_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-lsp-id-transmitted")
    {
        last_lsp_id_transmitted = value;
        last_lsp_id_transmitted.value_namespace = name_space;
        last_lsp_id_transmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-until-next-lsp")
    {
        time_until_next_lsp.yfilter = yfilter;
    }
    if(value_path == "lsp-transmit-requested-flag")
    {
        lsp_transmit_requested_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-transmitted-flag")
    {
        lsp_transmitted_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-txmitd-b2b-limit")
    {
        lsp_txmitd_b2b_limit.yfilter = yfilter;
    }
    if(value_path == "lsp-txmt-b2b-msecs")
    {
        lsp_txmt_b2b_msecs.yfilter = yfilter;
    }
    if(value_path == "last-lsp-level-transmitted")
    {
        last_lsp_level_transmitted.yfilter = yfilter;
    }
    if(value_path == "last-lsp-id-transmitted")
    {
        last_lsp_id_transmitted.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns-status" || name == "mtu-info" || name == "snpa-state" || name == "media-specific-state" || name == "time-until-next-lsp" || name == "lsp-transmit-requested-flag" || name == "lsp-transmitted-flag" || name == "lsp-txmitd-b2b-limit" || name == "lsp-txmt-b2b-msecs" || name == "last-lsp-level-transmitted" || name == "last-lsp-id-transmitted")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsStatus()
    :
    status{YType::enumeration, "status"}
        ,
    clns_down_info(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo>())
{
    clns_down_info->parent = this;

    yang_name = "clns-status"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::~ClnsStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (clns_down_info !=  nullptr && clns_down_info->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (clns_down_info !=  nullptr && clns_down_info->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns-down-info")
    {
        if(clns_down_info == nullptr)
        {
            clns_down_info = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo>();
        }
        return clns_down_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clns_down_info != nullptr)
    {
        children["clns-down-info"] = clns_down_info;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns-down-info" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::ClnsDownInfo()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "clns-down-info"; yang_parent_name = "clns-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::~ClnsDownInfo()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-down-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::MtuInfo()
    :
    status{YType::enumeration, "status"},
    mtu{YType::uint32, "mtu"}
        ,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid>())
{
    invalid->parent = this;

    yang_name = "mtu-info"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::~MtuInfo()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| mtu.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid")
    {
        if(invalid == nullptr)
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid>();
        }
        return invalid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(invalid != nullptr)
    {
        children["invalid"] = invalid;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "status" || name == "mtu")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "invalid"; yang_parent_name = "mtu-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::SnpaState()
    :
    status{YType::enumeration, "status"}
        ,
    unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown>())
    , known(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known>())
{
    unknown->parent = this;
    known->parent = this;

    yang_name = "snpa-state"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::~SnpaState()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (unknown !=  nullptr && unknown->has_data())
	|| (known !=  nullptr && known->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (unknown !=  nullptr && unknown->has_operation())
	|| (known !=  nullptr && known->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snpa-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown>();
        }
        return unknown;
    }

    if(child_yang_name == "known")
    {
        if(known == nullptr)
        {
            known = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known>();
        }
        return known;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unknown != nullptr)
    {
        children["unknown"] = unknown;
    }

    if(known != nullptr)
    {
        children["known"] = known;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown" || name == "known" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "unknown"; yang_parent_name = "snpa-state"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::Known()
    :
    snpa{YType::str, "snpa"}
{

    yang_name = "known"; yang_parent_name = "snpa-state"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::~Known()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_data() const
{
    if (is_presence_container) return true;
    return snpa.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snpa.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snpa.is_set || is_set(snpa.yfilter)) leaf_name_data.push_back(snpa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snpa")
    {
        snpa = value;
        snpa.value_namespace = name_space;
        snpa.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snpa")
    {
        snpa.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snpa")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::MediaSpecificState()
    :
    clns_media_type{YType::enumeration, "clns-media-type"}
        ,
    clns_lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData>())
    , clns_p2p_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData>())
{
    clns_lan_data->parent = this;
    clns_p2p_data->parent = this;

    yang_name = "media-specific-state"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::~MediaSpecificState()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_data() const
{
    if (is_presence_container) return true;
    return clns_media_type.is_set
	|| (clns_lan_data !=  nullptr && clns_lan_data->has_data())
	|| (clns_p2p_data !=  nullptr && clns_p2p_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clns_media_type.yfilter)
	|| (clns_lan_data !=  nullptr && clns_lan_data->has_operation())
	|| (clns_p2p_data !=  nullptr && clns_p2p_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-specific-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clns_media_type.is_set || is_set(clns_media_type.yfilter)) leaf_name_data.push_back(clns_media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns-lan-data")
    {
        if(clns_lan_data == nullptr)
        {
            clns_lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData>();
        }
        return clns_lan_data;
    }

    if(child_yang_name == "clns-p2p-data")
    {
        if(clns_p2p_data == nullptr)
        {
            clns_p2p_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData>();
        }
        return clns_p2p_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clns_lan_data != nullptr)
    {
        children["clns-lan-data"] = clns_lan_data;
    }

    if(clns_p2p_data != nullptr)
    {
        children["clns-p2p-data"] = clns_p2p_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clns-media-type")
    {
        clns_media_type = value;
        clns_media_type.value_namespace = name_space;
        clns_media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clns-media-type")
    {
        clns_media_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns-lan-data" || name == "clns-p2p-data" || name == "clns-media-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::ClnsLanData()
    :
    per_area_data(this, {})
{

    yang_name = "clns-lan-data"; yang_parent_name = "media-specific-state"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::~ClnsLanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-area-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData>();
        c->parent = this;
        per_area_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : per_area_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-area-data")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
        ,
    multicast_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus>())
{
    multicast_status->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "clns-lan-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| (multicast_status !=  nullptr && multicast_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (multicast_status !=  nullptr && multicast_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-status")
    {
        if(multicast_status == nullptr)
        {
            multicast_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus>();
        }
        return multicast_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(multicast_status != nullptr)
    {
        children["multicast-status"] = multicast_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-status" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::MulticastStatus()
    :
    status{YType::enumeration, "status"}
        ,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid>())
{
    invalid->parent = this;

    yang_name = "multicast-status"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::~MulticastStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid")
    {
        if(invalid == nullptr)
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid>();
        }
        return invalid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(invalid != nullptr)
    {
        children["invalid"] = invalid;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "invalid"; yang_parent_name = "multicast-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::ClnsP2pData()
    :
    p2p_over_lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData>())
{
    p2p_over_lan_data->parent = this;

    yang_name = "clns-p2p-data"; yang_parent_name = "media-specific-state"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::~ClnsP2pData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::has_data() const
{
    if (is_presence_container) return true;
    return (p2p_over_lan_data !=  nullptr && p2p_over_lan_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::has_operation() const
{
    return is_set(yfilter)
	|| (p2p_over_lan_data !=  nullptr && p2p_over_lan_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-p2p-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-over-lan-data")
    {
        if(p2p_over_lan_data == nullptr)
        {
            p2p_over_lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData>();
        }
        return p2p_over_lan_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(p2p_over_lan_data != nullptr)
    {
        children["p2p-over-lan-data"] = p2p_over_lan_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-over-lan-data")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::P2pOverLanData()
    :
    multicast_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus>())
{
    multicast_status->parent = this;

    yang_name = "p2p-over-lan-data"; yang_parent_name = "clns-p2p-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::~P2pOverLanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::has_data() const
{
    if (is_presence_container) return true;
    return (multicast_status !=  nullptr && multicast_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::has_operation() const
{
    return is_set(yfilter)
	|| (multicast_status !=  nullptr && multicast_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-over-lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-status")
    {
        if(multicast_status == nullptr)
        {
            multicast_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus>();
        }
        return multicast_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(multicast_status != nullptr)
    {
        children["multicast-status"] = multicast_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::MulticastStatus()
    :
    status{YType::enumeration, "status"}
        ,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid>())
{
    invalid->parent = this;

    yang_name = "multicast-status"; yang_parent_name = "p2p-over-lan-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::~MulticastStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid")
    {
        if(invalid == nullptr)
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid>();
        }
        return invalid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(invalid != nullptr)
    {
        children["invalid"] = invalid;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "invalid"; yang_parent_name = "multicast-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}


}
}

