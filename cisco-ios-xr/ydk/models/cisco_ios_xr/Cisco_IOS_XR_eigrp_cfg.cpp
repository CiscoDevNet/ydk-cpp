
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_eigrp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_eigrp_cfg {

Eigrp::Eigrp()
    :
    processes(std::make_shared<Eigrp::Processes>())
{
    processes->parent = this;

    yang_name = "eigrp"; yang_parent_name = "Cisco-IOS-XR-eigrp-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Eigrp::~Eigrp()
{
}

bool Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return (processes !=  nullptr && processes->has_data());
}

bool Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| (processes !=  nullptr && processes->has_operation());
}

std::string Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-eigrp-cfg:eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<Eigrp::Processes>();
        }
        return processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(processes != nullptr)
    {
        _children["processes"] = processes;
    }

    return _children;
}

void Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Eigrp::clone_ptr() const
{
    return std::make_shared<Eigrp>();
}

std::string Eigrp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Eigrp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Eigrp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Eigrp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processes")
        return true;
    return false;
}

Eigrp::Processes::Processes()
    :
    process(this, {"process_id"})
{

    yang_name = "processes"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Eigrp::Processes::~Processes()
{
}

bool Eigrp::Processes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-eigrp-cfg:eigrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Eigrp::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Eigrp::Processes::Process::Process()
    :
    process_id{YType::str, "process-id"},
    nsf_disable{YType::empty, "nsf-disable"}
        ,
    vrfs(std::make_shared<Eigrp::Processes::Process::Vrfs>())
    , default_vrf(std::make_shared<Eigrp::Processes::Process::DefaultVrf>())
{
    vrfs->parent = this;
    default_vrf->parent = this;

    yang_name = "process"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = false; 
}

Eigrp::Processes::Process::~Process()
{
}

bool Eigrp::Processes::Process::has_data() const
{
    if (is_presence_container) return true;
    return process_id.is_set
	|| nsf_disable.is_set
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data());
}

bool Eigrp::Processes::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(nsf_disable.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation());
}

std::string Eigrp::Processes::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-eigrp-cfg:eigrp/processes/" << get_segment_path();
    return path_buffer.str();
}

std::string Eigrp::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(process_id, "process-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (nsf_disable.is_set || is_set(nsf_disable.yfilter)) leaf_name_data.push_back(nsf_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Eigrp::Processes::Process::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Eigrp::Processes::Process::DefaultVrf>();
        }
        return default_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    return _children;
}

void Eigrp::Processes::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-disable")
    {
        nsf_disable = value;
        nsf_disable.value_namespace = name_space;
        nsf_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "nsf-disable")
    {
        nsf_disable.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "default-vrf" || name == "process-id" || name == "nsf-disable")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::~Vrfs()
{
}

bool Eigrp::Processes::Process::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    enable{YType::empty, "enable"}
        ,
    afs(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs>())
{
    afs->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::~Vrf()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| enable.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "vrf-name" || name == "enable")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Afs()
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::~Afs()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    enable{YType::empty, "enable"},
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint32, "maximum-paths"},
    router_id{YType::str, "router-id"},
    log_neighbor_warnings{YType::empty, "log-neighbor-warnings"},
    autonomous_system{YType::uint32, "autonomous-system"},
    variance{YType::uint32, "variance"},
    nsf_disable{YType::empty, "nsf-disable"},
    passive_interface_default{YType::empty, "passive-interface-default"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"}
        ,
    all_neighbors_maximum_prefix(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix>())
    , redist_maximum_prefix(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix>())
    , neighbor_maximum_prefixes(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes>())
    , maximum_prefix(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix>())
    , stub(nullptr) // presence node
    , redistributes(nullptr) // presence node
    , filter_policies(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies>())
    , default_metric(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric>())
    , metrics(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics>())
    , timers(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers>())
    , default_accepts(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts>())
    , interfaces(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces>())
    , distance(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance>())
{
    all_neighbors_maximum_prefix->parent = this;
    redist_maximum_prefix->parent = this;
    neighbor_maximum_prefixes->parent = this;
    maximum_prefix->parent = this;
    filter_policies->parent = this;
    default_metric->parent = this;
    metrics->parent = this;
    timers->parent = this;
    default_accepts->parent = this;
    interfaces->parent = this;
    distance->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| enable.is_set
	|| auto_summary.is_set
	|| maximum_paths.is_set
	|| router_id.is_set
	|| log_neighbor_warnings.is_set
	|| autonomous_system.is_set
	|| variance.is_set
	|| nsf_disable.is_set
	|| passive_interface_default.is_set
	|| log_neighbor_changes.is_set
	|| (all_neighbors_maximum_prefix !=  nullptr && all_neighbors_maximum_prefix->has_data())
	|| (redist_maximum_prefix !=  nullptr && redist_maximum_prefix->has_data())
	|| (neighbor_maximum_prefixes !=  nullptr && neighbor_maximum_prefixes->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (stub !=  nullptr && stub->has_data())
	|| (redistributes !=  nullptr && redistributes->has_data())
	|| (filter_policies !=  nullptr && filter_policies->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (default_accepts !=  nullptr && default_accepts->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (distance !=  nullptr && distance->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(log_neighbor_warnings.yfilter)
	|| ydk::is_set(autonomous_system.yfilter)
	|| ydk::is_set(variance.yfilter)
	|| ydk::is_set(nsf_disable.yfilter)
	|| ydk::is_set(passive_interface_default.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| (all_neighbors_maximum_prefix !=  nullptr && all_neighbors_maximum_prefix->has_operation())
	|| (redist_maximum_prefix !=  nullptr && redist_maximum_prefix->has_operation())
	|| (neighbor_maximum_prefixes !=  nullptr && neighbor_maximum_prefixes->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (stub !=  nullptr && stub->has_operation())
	|| (redistributes !=  nullptr && redistributes->has_operation())
	|| (filter_policies !=  nullptr && filter_policies->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (default_accepts !=  nullptr && default_accepts->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (distance !=  nullptr && distance->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (log_neighbor_warnings.is_set || is_set(log_neighbor_warnings.yfilter)) leaf_name_data.push_back(log_neighbor_warnings.get_name_leafdata());
    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());
    if (nsf_disable.is_set || is_set(nsf_disable.yfilter)) leaf_name_data.push_back(nsf_disable.get_name_leafdata());
    if (passive_interface_default.is_set || is_set(passive_interface_default.yfilter)) leaf_name_data.push_back(passive_interface_default.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-neighbors-maximum-prefix")
    {
        if(all_neighbors_maximum_prefix == nullptr)
        {
            all_neighbors_maximum_prefix = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix>();
        }
        return all_neighbors_maximum_prefix;
    }

    if(child_yang_name == "redist-maximum-prefix")
    {
        if(redist_maximum_prefix == nullptr)
        {
            redist_maximum_prefix = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix>();
        }
        return redist_maximum_prefix;
    }

    if(child_yang_name == "neighbor-maximum-prefixes")
    {
        if(neighbor_maximum_prefixes == nullptr)
        {
            neighbor_maximum_prefixes = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes>();
        }
        return neighbor_maximum_prefixes;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub>();
        }
        return stub;
    }

    if(child_yang_name == "redistributes")
    {
        if(redistributes == nullptr)
        {
            redistributes = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes>();
        }
        return redistributes;
    }

    if(child_yang_name == "filter-policies")
    {
        if(filter_policies == nullptr)
        {
            filter_policies = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies>();
        }
        return filter_policies;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "metrics")
    {
        if(metrics == nullptr)
        {
            metrics = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics>();
        }
        return metrics;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "default-accepts")
    {
        if(default_accepts == nullptr)
        {
            default_accepts = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts>();
        }
        return default_accepts;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance>();
        }
        return distance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all_neighbors_maximum_prefix != nullptr)
    {
        _children["all-neighbors-maximum-prefix"] = all_neighbors_maximum_prefix;
    }

    if(redist_maximum_prefix != nullptr)
    {
        _children["redist-maximum-prefix"] = redist_maximum_prefix;
    }

    if(neighbor_maximum_prefixes != nullptr)
    {
        _children["neighbor-maximum-prefixes"] = neighbor_maximum_prefixes;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(stub != nullptr)
    {
        _children["stub"] = stub;
    }

    if(redistributes != nullptr)
    {
        _children["redistributes"] = redistributes;
    }

    if(filter_policies != nullptr)
    {
        _children["filter-policies"] = filter_policies;
    }

    if(default_metric != nullptr)
    {
        _children["default-metric"] = default_metric;
    }

    if(metrics != nullptr)
    {
        _children["metrics"] = metrics;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(default_accepts != nullptr)
    {
        _children["default-accepts"] = default_accepts;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-warnings")
    {
        log_neighbor_warnings = value;
        log_neighbor_warnings.value_namespace = name_space;
        log_neighbor_warnings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-disable")
    {
        nsf_disable = value;
        nsf_disable.value_namespace = name_space;
        nsf_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface-default")
    {
        passive_interface_default = value;
        passive_interface_default.value_namespace = name_space;
        passive_interface_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-warnings")
    {
        log_neighbor_warnings.yfilter = yfilter;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
    if(value_path == "nsf-disable")
    {
        nsf_disable.yfilter = yfilter;
    }
    if(value_path == "passive-interface-default")
    {
        passive_interface_default.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-neighbors-maximum-prefix" || name == "redist-maximum-prefix" || name == "neighbor-maximum-prefixes" || name == "maximum-prefix" || name == "stub" || name == "redistributes" || name == "filter-policies" || name == "default-metric" || name == "metrics" || name == "timers" || name == "default-accepts" || name == "interfaces" || name == "distance" || name == "af-name" || name == "enable" || name == "auto-summary" || name == "maximum-paths" || name == "router-id" || name == "log-neighbor-warnings" || name == "autonomous-system" || name == "variance" || name == "nsf-disable" || name == "passive-interface-default" || name == "log-neighbor-changes")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::AllNeighborsMaximumPrefix()
    :
    max_prefix{YType::uint32, "max-prefix"},
    threshold{YType::uint32, "threshold"},
    dampened{YType::boolean, "dampened"},
    reset_time{YType::uint32, "reset-time"},
    restart{YType::uint32, "restart"},
    restart_count{YType::uint32, "restart-count"},
    warning_only{YType::boolean, "warning-only"}
{

    yang_name = "all-neighbors-maximum-prefix"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::~AllNeighborsMaximumPrefix()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix.is_set
	|| threshold.is_set
	|| dampened.is_set
	|| reset_time.is_set
	|| restart.is_set
	|| restart_count.is_set
	|| warning_only.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(dampened.yfilter)
	|| ydk::is_set(reset_time.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_count.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-neighbors-maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix.is_set || is_set(max_prefix.yfilter)) leaf_name_data.push_back(max_prefix.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (dampened.is_set || is_set(dampened.yfilter)) leaf_name_data.push_back(dampened.get_name_leafdata());
    if (reset_time.is_set || is_set(reset_time.yfilter)) leaf_name_data.push_back(reset_time.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.yfilter)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix")
    {
        max_prefix = value;
        max_prefix.value_namespace = name_space;
        max_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampened")
    {
        dampened = value;
        dampened.value_namespace = name_space;
        dampened.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-time")
    {
        reset_time = value;
        reset_time.value_namespace = name_space;
        reset_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
        restart_count.value_namespace = name_space;
        restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix")
    {
        max_prefix.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "dampened")
    {
        dampened.yfilter = yfilter;
    }
    if(value_path == "reset-time")
    {
        reset_time.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-count")
    {
        restart_count.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::AllNeighborsMaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix" || name == "threshold" || name == "dampened" || name == "reset-time" || name == "restart" || name == "restart-count" || name == "warning-only")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::RedistMaximumPrefix()
    :
    max_prefix{YType::uint32, "max-prefix"},
    threshold{YType::uint32, "threshold"},
    dampened{YType::uint32, "dampened"},
    reset_time{YType::uint32, "reset-time"},
    restart{YType::uint32, "restart"},
    restart_count{YType::uint32, "restart-count"},
    warning_only{YType::boolean, "warning-only"}
{

    yang_name = "redist-maximum-prefix"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::~RedistMaximumPrefix()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix.is_set
	|| threshold.is_set
	|| dampened.is_set
	|| reset_time.is_set
	|| restart.is_set
	|| restart_count.is_set
	|| warning_only.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(dampened.yfilter)
	|| ydk::is_set(reset_time.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_count.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix.is_set || is_set(max_prefix.yfilter)) leaf_name_data.push_back(max_prefix.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (dampened.is_set || is_set(dampened.yfilter)) leaf_name_data.push_back(dampened.get_name_leafdata());
    if (reset_time.is_set || is_set(reset_time.yfilter)) leaf_name_data.push_back(reset_time.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.yfilter)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix")
    {
        max_prefix = value;
        max_prefix.value_namespace = name_space;
        max_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampened")
    {
        dampened = value;
        dampened.value_namespace = name_space;
        dampened.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-time")
    {
        reset_time = value;
        reset_time.value_namespace = name_space;
        reset_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
        restart_count.value_namespace = name_space;
        restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix")
    {
        max_prefix.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "dampened")
    {
        dampened.yfilter = yfilter;
    }
    if(value_path == "reset-time")
    {
        reset_time.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-count")
    {
        restart_count.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::RedistMaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix" || name == "threshold" || name == "dampened" || name == "reset-time" || name == "restart" || name == "restart-count" || name == "warning-only")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefixes()
    :
    neighbor_maximum_prefix(this, {"neighbor_address"})
{

    yang_name = "neighbor-maximum-prefixes"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::~NeighborMaximumPrefixes()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_maximum_prefix.len(); index++)
    {
        if(neighbor_maximum_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::has_operation() const
{
    for (std::size_t index=0; index<neighbor_maximum_prefix.len(); index++)
    {
        if(neighbor_maximum_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-maximum-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-maximum-prefix")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix>();
        ent_->parent = this;
        neighbor_maximum_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_maximum_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-maximum-prefix")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::NeighborMaximumPrefix()
    :
    neighbor_address{YType::str, "neighbor-address"},
    max_prefix{YType::uint32, "max-prefix"},
    threshold{YType::uint32, "threshold"},
    warning_only{YType::boolean, "warning-only"}
{

    yang_name = "neighbor-maximum-prefix"; yang_parent_name = "neighbor-maximum-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::~NeighborMaximumPrefix()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| max_prefix.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(max_prefix.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-maximum-prefix";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (max_prefix.is_set || is_set(max_prefix.yfilter)) leaf_name_data.push_back(max_prefix.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix")
    {
        max_prefix = value;
        max_prefix.value_namespace = name_space;
        max_prefix.value_namespace_prefix = name_space_prefix;
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

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "max-prefix")
    {
        max_prefix.yfilter = yfilter;
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

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::NeighborMaximumPrefixes::NeighborMaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "max-prefix" || name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::MaximumPrefix()
    :
    max_prefix{YType::uint32, "max-prefix"},
    threshold{YType::uint32, "threshold"},
    dampened{YType::boolean, "dampened"},
    reset_time{YType::uint32, "reset-time"},
    restart{YType::uint32, "restart"},
    restart_count{YType::uint32, "restart-count"},
    warning_only{YType::boolean, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::~MaximumPrefix()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix.is_set
	|| threshold.is_set
	|| dampened.is_set
	|| reset_time.is_set
	|| restart.is_set
	|| restart_count.is_set
	|| warning_only.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(dampened.yfilter)
	|| ydk::is_set(reset_time.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_count.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix.is_set || is_set(max_prefix.yfilter)) leaf_name_data.push_back(max_prefix.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (dampened.is_set || is_set(dampened.yfilter)) leaf_name_data.push_back(dampened.get_name_leafdata());
    if (reset_time.is_set || is_set(reset_time.yfilter)) leaf_name_data.push_back(reset_time.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.yfilter)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix")
    {
        max_prefix = value;
        max_prefix.value_namespace = name_space;
        max_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampened")
    {
        dampened = value;
        dampened.value_namespace = name_space;
        dampened.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-time")
    {
        reset_time = value;
        reset_time.value_namespace = name_space;
        reset_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
        restart_count.value_namespace = name_space;
        restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix")
    {
        max_prefix.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "dampened")
    {
        dampened.yfilter = yfilter;
    }
    if(value_path == "reset-time")
    {
        reset_time.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-count")
    {
        restart_count.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix" || name == "threshold" || name == "dampened" || name == "reset-time" || name == "restart" || name == "restart-count" || name == "warning-only")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::Stub()
    :
    type{YType::enumeration, "type"},
    connected{YType::boolean, "connected"},
    redistributed{YType::boolean, "redistributed"},
    static_{YType::boolean, "static"},
    summary{YType::boolean, "summary"}
{

    yang_name = "stub"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::~Stub()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| connected.is_set
	|| redistributed.is_set
	|| static_.is_set
	|| summary.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(redistributed.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(summary.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (redistributed.is_set || is_set(redistributed.yfilter)) leaf_name_data.push_back(redistributed.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (summary.is_set || is_set(summary.yfilter)) leaf_name_data.push_back(summary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistributed")
    {
        redistributed = value;
        redistributed.value_namespace = name_space;
        redistributed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary")
    {
        summary = value;
        summary.value_namespace = name_space;
        summary.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "redistributed")
    {
        redistributed.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "summary")
    {
        summary.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Stub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "connected" || name == "redistributed" || name == "static" || name == "summary")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistributes()
    :
    redistribute(this, {"protocol_name"})
    , redistribute_as_xx(this, {"as_xx", "protocol_name"})
    , redistribute_as_yy(this, {"as_yy", "protocol_name"})
    , redistribute_as_xx_as_yy(this, {"as_xx", "as_yy", "protocol_name"})
    , redistribute_tag_name(this, {"tag_name", "protocol_name"})
    , redistribute_as_xx_tag_name(this, {"as_xx", "tag_name", "protocol_name"})
    , redistribute_as_yy_tag_name(this, {"as_yy", "tag_name", "protocol_name"})
    , redistribute_as_xx_as_yy_tag_name(this, {"as_xx", "as_yy", "tag_name", "protocol_name"})
{

    yang_name = "redistributes"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::~Redistributes()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redistribute.len(); index++)
    {
        if(redistribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx.len(); index++)
    {
        if(redistribute_as_xx[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_yy.len(); index++)
    {
        if(redistribute_as_yy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_as_yy.len(); index++)
    {
        if(redistribute_as_xx_as_yy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_tag_name.len(); index++)
    {
        if(redistribute_tag_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_tag_name.len(); index++)
    {
        if(redistribute_as_xx_tag_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_yy_tag_name.len(); index++)
    {
        if(redistribute_as_yy_tag_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_as_yy_tag_name.len(); index++)
    {
        if(redistribute_as_xx_as_yy_tag_name[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::has_operation() const
{
    for (std::size_t index=0; index<redistribute.len(); index++)
    {
        if(redistribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx.len(); index++)
    {
        if(redistribute_as_xx[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_yy.len(); index++)
    {
        if(redistribute_as_yy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_as_yy.len(); index++)
    {
        if(redistribute_as_xx_as_yy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_tag_name.len(); index++)
    {
        if(redistribute_tag_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_tag_name.len(); index++)
    {
        if(redistribute_as_xx_tag_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_yy_tag_name.len(); index++)
    {
        if(redistribute_as_yy_tag_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_as_yy_tag_name.len(); index++)
    {
        if(redistribute_as_xx_as_yy_tag_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribute")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute>();
        ent_->parent = this;
        redistribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-xx")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx>();
        ent_->parent = this;
        redistribute_as_xx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-yy")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy>();
        ent_->parent = this;
        redistribute_as_yy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-xx-as-yy")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy>();
        ent_->parent = this;
        redistribute_as_xx_as_yy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-tag-name")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName>();
        ent_->parent = this;
        redistribute_tag_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-xx-tag-name")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName>();
        ent_->parent = this;
        redistribute_as_xx_tag_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-yy-tag-name")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName>();
        ent_->parent = this;
        redistribute_as_yy_tag_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-xx-as-yy-tag-name")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName>();
        ent_->parent = this;
        redistribute_as_xx_as_yy_tag_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : redistribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_xx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_yy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_xx_as_yy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_tag_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_xx_tag_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_yy_tag_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_xx_as_yy_tag_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribute" || name == "redistribute-as-xx" || name == "redistribute-as-yy" || name == "redistribute-as-xx-as-yy" || name == "redistribute-tag-name" || name == "redistribute-as-xx-tag-name" || name == "redistribute-as-yy-tag-name" || name == "redistribute-as-xx-as-yy-tag-name")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::Redistribute()
    :
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::~Redistribute()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::RedistributeAsXx()
    :
    as_xx{YType::uint32, "as-xx"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-xx"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::~RedistributeAsXx()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-xx";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::RedistributeAsYy()
    :
    as_yy{YType::uint32, "as-yy"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-yy"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::~RedistributeAsYy()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::has_data() const
{
    if (is_presence_container) return true;
    return as_yy.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-yy";
    ADD_KEY_TOKEN(as_yy, "as-yy");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-yy" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::RedistributeAsXxAsYy()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-xx-as-yy"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::~RedistributeAsXxAsYy()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-xx-as-yy";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(as_yy, "as-yy");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::RedistributeTagName()
    :
    tag_name{YType::str, "tag-name"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-tag-name"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::~RedistributeTagName()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::has_data() const
{
    if (is_presence_container) return true;
    return tag_name.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag_name.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-tag-name";
    ADD_KEY_TOKEN(tag_name, "tag-name");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_name.is_set || is_set(tag_name.yfilter)) leaf_name_data.push_back(tag_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-name")
    {
        tag_name = value;
        tag_name.value_namespace = name_space;
        tag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-name")
    {
        tag_name.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeTagName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-name" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::RedistributeAsXxTagName()
    :
    as_xx{YType::uint32, "as-xx"},
    tag_name{YType::str, "tag-name"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-xx-tag-name"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::~RedistributeAsXxTagName()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| tag_name.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(tag_name.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-xx-tag-name";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(tag_name, "tag-name");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (tag_name.is_set || is_set(tag_name.yfilter)) leaf_name_data.push_back(tag_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-name")
    {
        tag_name = value;
        tag_name.value_namespace = name_space;
        tag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "tag-name")
    {
        tag_name.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxTagName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "tag-name" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::RedistributeAsYyTagName()
    :
    as_yy{YType::uint32, "as-yy"},
    tag_name{YType::str, "tag-name"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-yy-tag-name"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::~RedistributeAsYyTagName()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::has_data() const
{
    if (is_presence_container) return true;
    return as_yy.is_set
	|| tag_name.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(tag_name.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-yy-tag-name";
    ADD_KEY_TOKEN(as_yy, "as-yy");
    ADD_KEY_TOKEN(tag_name, "tag-name");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (tag_name.is_set || is_set(tag_name.yfilter)) leaf_name_data.push_back(tag_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-name")
    {
        tag_name = value;
        tag_name.value_namespace = name_space;
        tag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "tag-name")
    {
        tag_name.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsYyTagName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-yy" || name == "tag-name" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::RedistributeAsXxAsYyTagName()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    tag_name{YType::str, "tag-name"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-xx-as-yy-tag-name"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::~RedistributeAsXxAsYyTagName()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set
	|| tag_name.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(tag_name.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-xx-as-yy-tag-name";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(as_yy, "as-yy");
    ADD_KEY_TOKEN(tag_name, "tag-name");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (tag_name.is_set || is_set(tag_name.yfilter)) leaf_name_data.push_back(tag_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-name")
    {
        tag_name = value;
        tag_name.value_namespace = name_space;
        tag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "tag-name")
    {
        tag_name.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Redistributes::RedistributeAsXxAsYyTagName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "tag-name" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicies()
    :
    filter_policy(this, {"direction"})
{

    yang_name = "filter-policies"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::~FilterPolicies()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter_policy.len(); index++)
    {
        if(filter_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::has_operation() const
{
    for (std::size_t index=0; index<filter_policy.len(); index++)
    {
        if(filter_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter-policy")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy>();
        ent_->parent = this;
        filter_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : filter_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-policy")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::FilterPolicy()
    :
    direction{YType::enumeration, "direction"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "filter-policy"; yang_parent_name = "filter-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::~FilterPolicy()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| policy_name.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-policy";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::FilterPolicies::FilterPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "policy-name")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::DefaultMetric()
    :
    bandwidth{YType::uint32, "bandwidth"},
    delay{YType::uint32, "delay"},
    reliability{YType::uint32, "reliability"},
    load{YType::uint32, "load"},
    mtu{YType::uint32, "mtu"}
{

    yang_name = "default-metric"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::~DefaultMetric()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| delay.is_set
	|| reliability.is_set
	|| load.is_set
	|| mtu.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(load.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (load.is_set || is_set(load.yfilter)) leaf_name_data.push_back(load.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load")
    {
        load = value;
        load.value_namespace = name_space;
        load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "load")
    {
        load.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "delay" || name == "reliability" || name == "load" || name == "mtu")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metrics()
    :
    metric(this, {"metric_name"})
{

    yang_name = "metrics"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::~Metrics()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric>();
        ent_->parent = this;
        metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::Metric()
    :
    metric_name{YType::enumeration, "metric-name"},
    max_hops{YType::uint32, "max-hops"},
    tos{YType::uint32, "tos"},
    k1{YType::uint32, "k1"},
    k2{YType::uint32, "k2"},
    k3{YType::uint32, "k3"},
    k4{YType::uint32, "k4"},
    k5{YType::uint32, "k5"},
    k6{YType::uint32, "k6"},
    rib_scale{YType::uint32, "rib-scale"},
    metric_version{YType::enumeration, "metric-version"}
{

    yang_name = "metric"; yang_parent_name = "metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::~Metric()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_name.is_set
	|| max_hops.is_set
	|| tos.is_set
	|| k1.is_set
	|| k2.is_set
	|| k3.is_set
	|| k4.is_set
	|| k5.is_set
	|| k6.is_set
	|| rib_scale.is_set
	|| metric_version.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_name.yfilter)
	|| ydk::is_set(max_hops.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(k1.yfilter)
	|| ydk::is_set(k2.yfilter)
	|| ydk::is_set(k3.yfilter)
	|| ydk::is_set(k4.yfilter)
	|| ydk::is_set(k5.yfilter)
	|| ydk::is_set(k6.yfilter)
	|| ydk::is_set(rib_scale.yfilter)
	|| ydk::is_set(metric_version.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    ADD_KEY_TOKEN(metric_name, "metric-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_name.is_set || is_set(metric_name.yfilter)) leaf_name_data.push_back(metric_name.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (k1.is_set || is_set(k1.yfilter)) leaf_name_data.push_back(k1.get_name_leafdata());
    if (k2.is_set || is_set(k2.yfilter)) leaf_name_data.push_back(k2.get_name_leafdata());
    if (k3.is_set || is_set(k3.yfilter)) leaf_name_data.push_back(k3.get_name_leafdata());
    if (k4.is_set || is_set(k4.yfilter)) leaf_name_data.push_back(k4.get_name_leafdata());
    if (k5.is_set || is_set(k5.yfilter)) leaf_name_data.push_back(k5.get_name_leafdata());
    if (k6.is_set || is_set(k6.yfilter)) leaf_name_data.push_back(k6.get_name_leafdata());
    if (rib_scale.is_set || is_set(rib_scale.yfilter)) leaf_name_data.push_back(rib_scale.get_name_leafdata());
    if (metric_version.is_set || is_set(metric_version.yfilter)) leaf_name_data.push_back(metric_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-name")
    {
        metric_name = value;
        metric_name.value_namespace = name_space;
        metric_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k1")
    {
        k1 = value;
        k1.value_namespace = name_space;
        k1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k2")
    {
        k2 = value;
        k2.value_namespace = name_space;
        k2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k3")
    {
        k3 = value;
        k3.value_namespace = name_space;
        k3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k4")
    {
        k4 = value;
        k4.value_namespace = name_space;
        k4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k5")
    {
        k5 = value;
        k5.value_namespace = name_space;
        k5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k6")
    {
        k6 = value;
        k6.value_namespace = name_space;
        k6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-scale")
    {
        rib_scale = value;
        rib_scale.value_namespace = name_space;
        rib_scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-version")
    {
        metric_version = value;
        metric_version.value_namespace = name_space;
        metric_version.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-name")
    {
        metric_name.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "k1")
    {
        k1.yfilter = yfilter;
    }
    if(value_path == "k2")
    {
        k2.yfilter = yfilter;
    }
    if(value_path == "k3")
    {
        k3.yfilter = yfilter;
    }
    if(value_path == "k4")
    {
        k4.yfilter = yfilter;
    }
    if(value_path == "k5")
    {
        k5.yfilter = yfilter;
    }
    if(value_path == "k6")
    {
        k6.yfilter = yfilter;
    }
    if(value_path == "rib-scale")
    {
        rib_scale.yfilter = yfilter;
    }
    if(value_path == "metric-version")
    {
        metric_version.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Metrics::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-name" || name == "max-hops" || name == "tos" || name == "k1" || name == "k2" || name == "k3" || name == "k4" || name == "k5" || name == "k6" || name == "rib-scale" || name == "metric-version")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timers()
    :
    timer(this, {"timer_type"})
{

    yang_name = "timers"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::~Timers()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<timer.len(); index++)
    {
        if(timer[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::has_operation() const
{
    for (std::size_t index=0; index<timer.len(); index++)
    {
        if(timer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timer")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer>();
        ent_->parent = this;
        timer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : timer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::Timer()
    :
    timer_type{YType::enumeration, "timer-type"},
    active_time{YType::uint32, "active-time"},
    hold_time{YType::uint32, "hold-time"},
    signal_time{YType::uint32, "signal-time"},
    converge_time{YType::uint32, "converge-time"}
{

    yang_name = "timer"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::~Timer()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::has_data() const
{
    if (is_presence_container) return true;
    return timer_type.is_set
	|| active_time.is_set
	|| hold_time.is_set
	|| signal_time.is_set
	|| converge_time.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_type.yfilter)
	|| ydk::is_set(active_time.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(signal_time.yfilter)
	|| ydk::is_set(converge_time.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    ADD_KEY_TOKEN(timer_type, "timer-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());
    if (active_time.is_set || is_set(active_time.yfilter)) leaf_name_data.push_back(active_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (signal_time.is_set || is_set(signal_time.yfilter)) leaf_name_data.push_back(signal_time.get_name_leafdata());
    if (converge_time.is_set || is_set(converge_time.yfilter)) leaf_name_data.push_back(converge_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-time")
    {
        active_time = value;
        active_time.value_namespace = name_space;
        active_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-time")
    {
        signal_time = value;
        signal_time.value_namespace = name_space;
        signal_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "converge-time")
    {
        converge_time = value;
        converge_time.value_namespace = name_space;
        converge_time.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
    if(value_path == "active-time")
    {
        active_time.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "signal-time")
    {
        signal_time.yfilter = yfilter;
    }
    if(value_path == "converge-time")
    {
        converge_time.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Timers::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-type" || name == "active-time" || name == "hold-time" || name == "signal-time" || name == "converge-time")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccepts()
    :
    default_accept(this, {"direction"})
{

    yang_name = "default-accepts"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::~DefaultAccepts()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<default_accept.len(); index++)
    {
        if(default_accept[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::has_operation() const
{
    for (std::size_t index=0; index<default_accept.len(); index++)
    {
        if(default_accept[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-accepts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-accept")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept>();
        ent_->parent = this;
        default_accept.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : default_accept.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-accept")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::DefaultAccept()
    :
    direction{YType::enumeration, "direction"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "default-accept"; yang_parent_name = "default-accepts"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::~DefaultAccept()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-accept";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::DefaultAccepts::DefaultAccept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::~Interfaces()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    hold_time{YType::uint32, "hold-time"},
    bandwidth_percent{YType::uint32, "bandwidth-percent"},
    passive_interface{YType::boolean, "passive-interface"},
    hello_interval{YType::uint32, "hello-interval"},
    next_hop_self{YType::empty, "next-hop-self"},
    enable{YType::empty, "enable"},
    split_horizon{YType::empty, "split-horizon"}
        ,
    interface_metric(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric>())
    , remote_neighbor(nullptr) // presence node
    , bfd(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd>())
    , site_of_origin(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin>())
    , authentication(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication>())
    , summary_addresses(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses>())
    , interface_filter_policies(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies>())
    , interface_static_neighbors(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors>())
{
    interface_metric->parent = this;
    bfd->parent = this;
    site_of_origin->parent = this;
    authentication->parent = this;
    summary_addresses->parent = this;
    interface_filter_policies->parent = this;
    interface_static_neighbors->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::~Interface()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| hold_time.is_set
	|| bandwidth_percent.is_set
	|| passive_interface.is_set
	|| hello_interval.is_set
	|| next_hop_self.is_set
	|| enable.is_set
	|| split_horizon.is_set
	|| (interface_metric !=  nullptr && interface_metric->has_data())
	|| (remote_neighbor !=  nullptr && remote_neighbor->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (summary_addresses !=  nullptr && summary_addresses->has_data())
	|| (interface_filter_policies !=  nullptr && interface_filter_policies->has_data())
	|| (interface_static_neighbors !=  nullptr && interface_static_neighbors->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(bandwidth_percent.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| (interface_metric !=  nullptr && interface_metric->has_operation())
	|| (remote_neighbor !=  nullptr && remote_neighbor->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (summary_addresses !=  nullptr && summary_addresses->has_operation())
	|| (interface_filter_policies !=  nullptr && interface_filter_policies->has_operation())
	|| (interface_static_neighbors !=  nullptr && interface_static_neighbors->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (bandwidth_percent.is_set || is_set(bandwidth_percent.yfilter)) leaf_name_data.push_back(bandwidth_percent.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-metric")
    {
        if(interface_metric == nullptr)
        {
            interface_metric = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric>();
        }
        return interface_metric;
    }

    if(child_yang_name == "remote-neighbor")
    {
        if(remote_neighbor == nullptr)
        {
            remote_neighbor = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor>();
        }
        return remote_neighbor;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin == nullptr)
        {
            site_of_origin = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin>();
        }
        return site_of_origin;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "summary-addresses")
    {
        if(summary_addresses == nullptr)
        {
            summary_addresses = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses>();
        }
        return summary_addresses;
    }

    if(child_yang_name == "interface-filter-policies")
    {
        if(interface_filter_policies == nullptr)
        {
            interface_filter_policies = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies>();
        }
        return interface_filter_policies;
    }

    if(child_yang_name == "interface-static-neighbors")
    {
        if(interface_static_neighbors == nullptr)
        {
            interface_static_neighbors = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors>();
        }
        return interface_static_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_metric != nullptr)
    {
        _children["interface-metric"] = interface_metric;
    }

    if(remote_neighbor != nullptr)
    {
        _children["remote-neighbor"] = remote_neighbor;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(site_of_origin != nullptr)
    {
        _children["site-of-origin"] = site_of_origin;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(summary_addresses != nullptr)
    {
        _children["summary-addresses"] = summary_addresses;
    }

    if(interface_filter_policies != nullptr)
    {
        _children["interface-filter-policies"] = interface_filter_policies;
    }

    if(interface_static_neighbors != nullptr)
    {
        _children["interface-static-neighbors"] = interface_static_neighbors;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent = value;
        bandwidth_percent.value_namespace = name_space;
        bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-metric" || name == "remote-neighbor" || name == "bfd" || name == "site-of-origin" || name == "authentication" || name == "summary-addresses" || name == "interface-filter-policies" || name == "interface-static-neighbors" || name == "interface-name" || name == "hold-time" || name == "bandwidth-percent" || name == "passive-interface" || name == "hello-interval" || name == "next-hop-self" || name == "enable" || name == "split-horizon")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::InterfaceMetric()
    :
    bandwidth{YType::uint32, "bandwidth"},
    delay{YType::uint32, "delay"},
    delay_unit{YType::enumeration, "delay-unit"},
    reliability{YType::uint32, "reliability"},
    load{YType::uint32, "load"}
{

    yang_name = "interface-metric"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::~InterfaceMetric()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| delay.is_set
	|| delay_unit.is_set
	|| reliability.is_set
	|| load.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(delay_unit.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(load.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (delay_unit.is_set || is_set(delay_unit.yfilter)) leaf_name_data.push_back(delay_unit.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (load.is_set || is_set(load.yfilter)) leaf_name_data.push_back(load.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-unit")
    {
        delay_unit = value;
        delay_unit.value_namespace = name_space;
        delay_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load")
    {
        load = value;
        load.value_namespace = name_space;
        load.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "delay-unit")
    {
        delay_unit.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "load")
    {
        load.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "delay" || name == "delay-unit" || name == "reliability" || name == "load")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::RemoteNeighbor()
    :
    enable{YType::boolean, "enable"},
    allow_list{YType::str, "allow-list"},
    max_neighbors{YType::uint32, "max-neighbors"}
{

    yang_name = "remote-neighbor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::~RemoteNeighbor()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| allow_list.is_set
	|| max_neighbors.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(allow_list.yfilter)
	|| ydk::is_set(max_neighbors.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (allow_list.is_set || is_set(allow_list.yfilter)) leaf_name_data.push_back(allow_list.get_name_leafdata());
    if (max_neighbors.is_set || is_set(max_neighbors.yfilter)) leaf_name_data.push_back(max_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-list")
    {
        allow_list = value;
        allow_list.value_namespace = name_space;
        allow_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-neighbors")
    {
        max_neighbors = value;
        max_neighbors.value_namespace = name_space;
        max_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "allow-list")
    {
        allow_list.yfilter = yfilter;
    }
    if(value_path == "max-neighbors")
    {
        max_neighbors.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::RemoteNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "allow-list" || name == "max-neighbors")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::Bfd()
    :
    fast_detect{YType::boolean, "fast-detect"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return fast_detect.is_set
	|| detection_multiplier.is_set
	|| interval.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-detect" || name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::SiteOfOrigin()
    :
    type{YType::enumeration, "type"},
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    index_{YType::uint32, "index"},
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"}
{

    yang_name = "site-of-origin"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as_xx.is_set
	|| as_yy.is_set
	|| index_.is_set
	|| address.is_set
	|| address_index.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SiteOfOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as-xx" || name == "as-yy" || name == "index" || name == "address" || name == "address-index")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::Authentication()
    :
    keychain{YType::str, "keychain"}
{

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return keychain.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddresses()
    :
    summary_address(this, {"summary_address_addr", "summary_address_prefix"})
{

    yang_name = "summary-addresses"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::~SummaryAddresses()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_address.len(); index++)
    {
        if(summary_address[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::has_operation() const
{
    for (std::size_t index=0; index<summary_address.len(); index++)
    {
        if(summary_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-address")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress>();
        ent_->parent = this;
        summary_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-address")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::SummaryAddress()
    :
    summary_address_addr{YType::str, "summary-address-addr"},
    summary_address_prefix{YType::uint16, "summary-address-prefix"},
    distance{YType::uint32, "distance"}
{

    yang_name = "summary-address"; yang_parent_name = "summary-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::~SummaryAddress()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::has_data() const
{
    if (is_presence_container) return true;
    return summary_address_addr.is_set
	|| summary_address_prefix.is_set
	|| distance.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(summary_address_addr.yfilter)
	|| ydk::is_set(summary_address_prefix.yfilter)
	|| ydk::is_set(distance.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    ADD_KEY_TOKEN(summary_address_addr, "summary-address-addr");
    ADD_KEY_TOKEN(summary_address_prefix, "summary-address-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_address_addr.is_set || is_set(summary_address_addr.yfilter)) leaf_name_data.push_back(summary_address_addr.get_name_leafdata());
    if (summary_address_prefix.is_set || is_set(summary_address_prefix.yfilter)) leaf_name_data.push_back(summary_address_prefix.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-address-addr")
    {
        summary_address_addr = value;
        summary_address_addr.value_namespace = name_space;
        summary_address_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-address-prefix")
    {
        summary_address_prefix = value;
        summary_address_prefix.value_namespace = name_space;
        summary_address_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-address-addr")
    {
        summary_address_addr.yfilter = yfilter;
    }
    if(value_path == "summary-address-prefix")
    {
        summary_address_prefix.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::SummaryAddresses::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-address-addr" || name == "summary-address-prefix" || name == "distance")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicies()
    :
    interface_filter_policy(this, {"direction"})
{

    yang_name = "interface-filter-policies"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::~InterfaceFilterPolicies()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_filter_policy.len(); index++)
    {
        if(interface_filter_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::has_operation() const
{
    for (std::size_t index=0; index<interface_filter_policy.len(); index++)
    {
        if(interface_filter_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-filter-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-filter-policy")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy>();
        ent_->parent = this;
        interface_filter_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_filter_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-filter-policy")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::InterfaceFilterPolicy()
    :
    direction{YType::enumeration, "direction"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "interface-filter-policy"; yang_parent_name = "interface-filter-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::~InterfaceFilterPolicy()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| policy_name.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-filter-policy";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "policy-name")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbors()
    :
    interface_static_neighbor(this, {"neighbor_address"})
{

    yang_name = "interface-static-neighbors"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::~InterfaceStaticNeighbors()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_static_neighbor.len(); index++)
    {
        if(interface_static_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::has_operation() const
{
    for (std::size_t index=0; index<interface_static_neighbor.len(); index++)
    {
        if(interface_static_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-static-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-static-neighbor")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor>();
        ent_->parent = this;
        interface_static_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_static_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-static-neighbor")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::InterfaceStaticNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    max_hops{YType::uint32, "max-hops"}
{

    yang_name = "interface-static-neighbor"; yang_parent_name = "interface-static-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::~InterfaceStaticNeighbor()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| max_hops.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(max_hops.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-static-neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "max-hops")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::Distance()
    :
    internal_distance{YType::uint32, "internal-distance"},
    external_distance{YType::uint32, "external-distance"}
{

    yang_name = "distance"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::~Distance()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::has_data() const
{
    if (is_presence_container) return true;
    return internal_distance.is_set
	|| external_distance.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_distance.yfilter)
	|| ydk::is_set(external_distance.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_distance.is_set || is_set(internal_distance.yfilter)) leaf_name_data.push_back(internal_distance.get_name_leafdata());
    if (external_distance.is_set || is_set(external_distance.yfilter)) leaf_name_data.push_back(external_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-distance")
    {
        internal_distance = value;
        internal_distance.value_namespace = name_space;
        internal_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-distance")
    {
        external_distance = value;
        external_distance.value_namespace = name_space;
        external_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-distance")
    {
        internal_distance.yfilter = yfilter;
    }
    if(value_path == "external-distance")
    {
        external_distance.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-distance" || name == "external-distance")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultVrf()
    :
    enable{YType::empty, "enable"}
        ,
    default_afs(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs>())
{
    default_afs->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::~DefaultVrf()
{
}

bool Eigrp::Processes::Process::DefaultVrf::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (default_afs !=  nullptr && default_afs->has_data());
}

bool Eigrp::Processes::Process::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (default_afs !=  nullptr && default_afs->has_operation());
}

std::string Eigrp::Processes::Process::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-afs")
    {
        if(default_afs == nullptr)
        {
            default_afs = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs>();
        }
        return default_afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_afs != nullptr)
    {
        _children["default-afs"] = default_afs;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-afs" || name == "enable")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAfs()
    :
    default_af(this, {"af_name"})
{

    yang_name = "default-afs"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::~DefaultAfs()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<default_af.len(); index++)
    {
        if(default_af[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::has_operation() const
{
    for (std::size_t index=0; index<default_af.len(); index++)
    {
        if(default_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-af")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf>();
        ent_->parent = this;
        default_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : default_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-af")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAf()
    :
    af_name{YType::enumeration, "af-name"},
    enable{YType::empty, "enable"},
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint32, "maximum-paths"},
    router_id{YType::str, "router-id"},
    log_neighbor_warnings{YType::empty, "log-neighbor-warnings"},
    autonomous_system{YType::uint32, "autonomous-system"},
    variance{YType::uint32, "variance"},
    nsf_disable{YType::empty, "nsf-disable"},
    passive_interface_default{YType::empty, "passive-interface-default"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"}
        ,
    stub(nullptr) // presence node
    , redistributes(nullptr) // presence node
    , filter_policies(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies>())
    , default_metric(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric>())
    , metrics(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics>())
    , timers(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers>())
    , default_accepts(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts>())
    , interfaces(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces>())
    , distance(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance>())
{
    filter_policies->parent = this;
    default_metric->parent = this;
    metrics->parent = this;
    timers->parent = this;
    default_accepts->parent = this;
    interfaces->parent = this;
    distance->parent = this;

    yang_name = "default-af"; yang_parent_name = "default-afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::~DefaultAf()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| enable.is_set
	|| auto_summary.is_set
	|| maximum_paths.is_set
	|| router_id.is_set
	|| log_neighbor_warnings.is_set
	|| autonomous_system.is_set
	|| variance.is_set
	|| nsf_disable.is_set
	|| passive_interface_default.is_set
	|| log_neighbor_changes.is_set
	|| (stub !=  nullptr && stub->has_data())
	|| (redistributes !=  nullptr && redistributes->has_data())
	|| (filter_policies !=  nullptr && filter_policies->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (default_accepts !=  nullptr && default_accepts->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (distance !=  nullptr && distance->has_data());
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(log_neighbor_warnings.yfilter)
	|| ydk::is_set(autonomous_system.yfilter)
	|| ydk::is_set(variance.yfilter)
	|| ydk::is_set(nsf_disable.yfilter)
	|| ydk::is_set(passive_interface_default.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| (stub !=  nullptr && stub->has_operation())
	|| (redistributes !=  nullptr && redistributes->has_operation())
	|| (filter_policies !=  nullptr && filter_policies->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (default_accepts !=  nullptr && default_accepts->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (distance !=  nullptr && distance->has_operation());
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (log_neighbor_warnings.is_set || is_set(log_neighbor_warnings.yfilter)) leaf_name_data.push_back(log_neighbor_warnings.get_name_leafdata());
    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());
    if (nsf_disable.is_set || is_set(nsf_disable.yfilter)) leaf_name_data.push_back(nsf_disable.get_name_leafdata());
    if (passive_interface_default.is_set || is_set(passive_interface_default.yfilter)) leaf_name_data.push_back(passive_interface_default.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub>();
        }
        return stub;
    }

    if(child_yang_name == "redistributes")
    {
        if(redistributes == nullptr)
        {
            redistributes = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes>();
        }
        return redistributes;
    }

    if(child_yang_name == "filter-policies")
    {
        if(filter_policies == nullptr)
        {
            filter_policies = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies>();
        }
        return filter_policies;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "metrics")
    {
        if(metrics == nullptr)
        {
            metrics = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics>();
        }
        return metrics;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "default-accepts")
    {
        if(default_accepts == nullptr)
        {
            default_accepts = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts>();
        }
        return default_accepts;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance>();
        }
        return distance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stub != nullptr)
    {
        _children["stub"] = stub;
    }

    if(redistributes != nullptr)
    {
        _children["redistributes"] = redistributes;
    }

    if(filter_policies != nullptr)
    {
        _children["filter-policies"] = filter_policies;
    }

    if(default_metric != nullptr)
    {
        _children["default-metric"] = default_metric;
    }

    if(metrics != nullptr)
    {
        _children["metrics"] = metrics;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(default_accepts != nullptr)
    {
        _children["default-accepts"] = default_accepts;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-warnings")
    {
        log_neighbor_warnings = value;
        log_neighbor_warnings.value_namespace = name_space;
        log_neighbor_warnings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-disable")
    {
        nsf_disable = value;
        nsf_disable.value_namespace = name_space;
        nsf_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface-default")
    {
        passive_interface_default = value;
        passive_interface_default.value_namespace = name_space;
        passive_interface_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-warnings")
    {
        log_neighbor_warnings.yfilter = yfilter;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
    if(value_path == "nsf-disable")
    {
        nsf_disable.yfilter = yfilter;
    }
    if(value_path == "passive-interface-default")
    {
        passive_interface_default.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stub" || name == "redistributes" || name == "filter-policies" || name == "default-metric" || name == "metrics" || name == "timers" || name == "default-accepts" || name == "interfaces" || name == "distance" || name == "af-name" || name == "enable" || name == "auto-summary" || name == "maximum-paths" || name == "router-id" || name == "log-neighbor-warnings" || name == "autonomous-system" || name == "variance" || name == "nsf-disable" || name == "passive-interface-default" || name == "log-neighbor-changes")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::Stub()
    :
    type{YType::enumeration, "type"},
    connected{YType::boolean, "connected"},
    redistributed{YType::boolean, "redistributed"},
    static_{YType::boolean, "static"},
    summary{YType::boolean, "summary"}
{

    yang_name = "stub"; yang_parent_name = "default-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::~Stub()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| connected.is_set
	|| redistributed.is_set
	|| static_.is_set
	|| summary.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(redistributed.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(summary.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (redistributed.is_set || is_set(redistributed.yfilter)) leaf_name_data.push_back(redistributed.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (summary.is_set || is_set(summary.yfilter)) leaf_name_data.push_back(summary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistributed")
    {
        redistributed = value;
        redistributed.value_namespace = name_space;
        redistributed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary")
    {
        summary = value;
        summary.value_namespace = name_space;
        summary.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "redistributed")
    {
        redistributed.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "summary")
    {
        summary.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Stub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "connected" || name == "redistributed" || name == "static" || name == "summary")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistributes()
    :
    redistribute(this, {"protocol_name"})
    , redistribute_as_xx(this, {"as_xx", "protocol_name"})
    , redistribute_as_yy(this, {"as_yy", "protocol_name"})
    , redistribute_as_xx_as_yy(this, {"as_xx", "as_yy", "protocol_name"})
    , redistribute_tag_name(this, {"tag_name", "protocol_name"})
    , redistribute_as_xx_tag_name(this, {"as_xx", "tag_name", "protocol_name"})
    , redistribute_as_yy_tag_name(this, {"as_yy", "tag_name", "protocol_name"})
    , redistribute_as_xx_as_yy_tag_name(this, {"as_xx", "as_yy", "tag_name", "protocol_name"})
{

    yang_name = "redistributes"; yang_parent_name = "default-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::~Redistributes()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redistribute.len(); index++)
    {
        if(redistribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx.len(); index++)
    {
        if(redistribute_as_xx[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_yy.len(); index++)
    {
        if(redistribute_as_yy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_as_yy.len(); index++)
    {
        if(redistribute_as_xx_as_yy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_tag_name.len(); index++)
    {
        if(redistribute_tag_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_tag_name.len(); index++)
    {
        if(redistribute_as_xx_tag_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_yy_tag_name.len(); index++)
    {
        if(redistribute_as_yy_tag_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_as_yy_tag_name.len(); index++)
    {
        if(redistribute_as_xx_as_yy_tag_name[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::has_operation() const
{
    for (std::size_t index=0; index<redistribute.len(); index++)
    {
        if(redistribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx.len(); index++)
    {
        if(redistribute_as_xx[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_yy.len(); index++)
    {
        if(redistribute_as_yy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_as_yy.len(); index++)
    {
        if(redistribute_as_xx_as_yy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_tag_name.len(); index++)
    {
        if(redistribute_tag_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_tag_name.len(); index++)
    {
        if(redistribute_as_xx_tag_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_yy_tag_name.len(); index++)
    {
        if(redistribute_as_yy_tag_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribute_as_xx_as_yy_tag_name.len(); index++)
    {
        if(redistribute_as_xx_as_yy_tag_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribute")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute>();
        ent_->parent = this;
        redistribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-xx")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx>();
        ent_->parent = this;
        redistribute_as_xx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-yy")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy>();
        ent_->parent = this;
        redistribute_as_yy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-xx-as-yy")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy>();
        ent_->parent = this;
        redistribute_as_xx_as_yy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-tag-name")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName>();
        ent_->parent = this;
        redistribute_tag_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-xx-tag-name")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName>();
        ent_->parent = this;
        redistribute_as_xx_tag_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-yy-tag-name")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName>();
        ent_->parent = this;
        redistribute_as_yy_tag_name.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redistribute-as-xx-as-yy-tag-name")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName>();
        ent_->parent = this;
        redistribute_as_xx_as_yy_tag_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : redistribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_xx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_yy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_xx_as_yy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_tag_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_xx_tag_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_yy_tag_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redistribute_as_xx_as_yy_tag_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribute" || name == "redistribute-as-xx" || name == "redistribute-as-yy" || name == "redistribute-as-xx-as-yy" || name == "redistribute-tag-name" || name == "redistribute-as-xx-tag-name" || name == "redistribute-as-yy-tag-name" || name == "redistribute-as-xx-as-yy-tag-name")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::Redistribute()
    :
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::~Redistribute()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::RedistributeAsXx()
    :
    as_xx{YType::uint32, "as-xx"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-xx"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::~RedistributeAsXx()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-xx";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::RedistributeAsYy()
    :
    as_yy{YType::uint32, "as-yy"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-yy"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::~RedistributeAsYy()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::has_data() const
{
    if (is_presence_container) return true;
    return as_yy.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-yy";
    ADD_KEY_TOKEN(as_yy, "as-yy");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-yy" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::RedistributeAsXxAsYy()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-xx-as-yy"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::~RedistributeAsXxAsYy()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-xx-as-yy";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(as_yy, "as-yy");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::RedistributeTagName()
    :
    tag_name{YType::str, "tag-name"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-tag-name"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::~RedistributeTagName()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::has_data() const
{
    if (is_presence_container) return true;
    return tag_name.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag_name.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-tag-name";
    ADD_KEY_TOKEN(tag_name, "tag-name");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_name.is_set || is_set(tag_name.yfilter)) leaf_name_data.push_back(tag_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-name")
    {
        tag_name = value;
        tag_name.value_namespace = name_space;
        tag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-name")
    {
        tag_name.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeTagName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-name" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::RedistributeAsXxTagName()
    :
    as_xx{YType::uint32, "as-xx"},
    tag_name{YType::str, "tag-name"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-xx-tag-name"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::~RedistributeAsXxTagName()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| tag_name.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(tag_name.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-xx-tag-name";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(tag_name, "tag-name");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (tag_name.is_set || is_set(tag_name.yfilter)) leaf_name_data.push_back(tag_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-name")
    {
        tag_name = value;
        tag_name.value_namespace = name_space;
        tag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "tag-name")
    {
        tag_name.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxTagName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "tag-name" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::RedistributeAsYyTagName()
    :
    as_yy{YType::uint32, "as-yy"},
    tag_name{YType::str, "tag-name"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-yy-tag-name"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::~RedistributeAsYyTagName()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::has_data() const
{
    if (is_presence_container) return true;
    return as_yy.is_set
	|| tag_name.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(tag_name.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-yy-tag-name";
    ADD_KEY_TOKEN(as_yy, "as-yy");
    ADD_KEY_TOKEN(tag_name, "tag-name");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (tag_name.is_set || is_set(tag_name.yfilter)) leaf_name_data.push_back(tag_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-name")
    {
        tag_name = value;
        tag_name.value_namespace = name_space;
        tag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "tag-name")
    {
        tag_name.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsYyTagName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-yy" || name == "tag-name" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::RedistributeAsXxAsYyTagName()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    tag_name{YType::str, "tag-name"},
    protocol_name{YType::enumeration, "protocol-name"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "redistribute-as-xx-as-yy-tag-name"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::~RedistributeAsXxAsYyTagName()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set
	|| tag_name.is_set
	|| protocol_name.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(tag_name.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute-as-xx-as-yy-tag-name";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(as_yy, "as-yy");
    ADD_KEY_TOKEN(tag_name, "tag-name");
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (tag_name.is_set || is_set(tag_name.yfilter)) leaf_name_data.push_back(tag_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-name")
    {
        tag_name = value;
        tag_name.value_namespace = name_space;
        tag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "tag-name")
    {
        tag_name.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Redistributes::RedistributeAsXxAsYyTagName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "tag-name" || name == "protocol-name" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicies()
    :
    filter_policy(this, {"direction"})
{

    yang_name = "filter-policies"; yang_parent_name = "default-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::~FilterPolicies()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter_policy.len(); index++)
    {
        if(filter_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::has_operation() const
{
    for (std::size_t index=0; index<filter_policy.len(); index++)
    {
        if(filter_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter-policy")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy>();
        ent_->parent = this;
        filter_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : filter_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-policy")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::FilterPolicy()
    :
    direction{YType::enumeration, "direction"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "filter-policy"; yang_parent_name = "filter-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::~FilterPolicy()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| policy_name.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-policy";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::FilterPolicies::FilterPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "policy-name")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::DefaultMetric()
    :
    bandwidth{YType::uint32, "bandwidth"},
    delay{YType::uint32, "delay"},
    reliability{YType::uint32, "reliability"},
    load{YType::uint32, "load"},
    mtu{YType::uint32, "mtu"}
{

    yang_name = "default-metric"; yang_parent_name = "default-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::~DefaultMetric()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| delay.is_set
	|| reliability.is_set
	|| load.is_set
	|| mtu.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(load.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (load.is_set || is_set(load.yfilter)) leaf_name_data.push_back(load.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load")
    {
        load = value;
        load.value_namespace = name_space;
        load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "load")
    {
        load.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "delay" || name == "reliability" || name == "load" || name == "mtu")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metrics()
    :
    metric(this, {"metric_name"})
{

    yang_name = "metrics"; yang_parent_name = "default-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::~Metrics()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric>();
        ent_->parent = this;
        metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::Metric()
    :
    metric_name{YType::enumeration, "metric-name"},
    max_hops{YType::uint32, "max-hops"},
    tos{YType::uint32, "tos"},
    k1{YType::uint32, "k1"},
    k2{YType::uint32, "k2"},
    k3{YType::uint32, "k3"},
    k4{YType::uint32, "k4"},
    k5{YType::uint32, "k5"},
    k6{YType::uint32, "k6"},
    rib_scale{YType::uint32, "rib-scale"},
    metric_version{YType::enumeration, "metric-version"}
{

    yang_name = "metric"; yang_parent_name = "metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::~Metric()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_name.is_set
	|| max_hops.is_set
	|| tos.is_set
	|| k1.is_set
	|| k2.is_set
	|| k3.is_set
	|| k4.is_set
	|| k5.is_set
	|| k6.is_set
	|| rib_scale.is_set
	|| metric_version.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_name.yfilter)
	|| ydk::is_set(max_hops.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(k1.yfilter)
	|| ydk::is_set(k2.yfilter)
	|| ydk::is_set(k3.yfilter)
	|| ydk::is_set(k4.yfilter)
	|| ydk::is_set(k5.yfilter)
	|| ydk::is_set(k6.yfilter)
	|| ydk::is_set(rib_scale.yfilter)
	|| ydk::is_set(metric_version.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    ADD_KEY_TOKEN(metric_name, "metric-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_name.is_set || is_set(metric_name.yfilter)) leaf_name_data.push_back(metric_name.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (k1.is_set || is_set(k1.yfilter)) leaf_name_data.push_back(k1.get_name_leafdata());
    if (k2.is_set || is_set(k2.yfilter)) leaf_name_data.push_back(k2.get_name_leafdata());
    if (k3.is_set || is_set(k3.yfilter)) leaf_name_data.push_back(k3.get_name_leafdata());
    if (k4.is_set || is_set(k4.yfilter)) leaf_name_data.push_back(k4.get_name_leafdata());
    if (k5.is_set || is_set(k5.yfilter)) leaf_name_data.push_back(k5.get_name_leafdata());
    if (k6.is_set || is_set(k6.yfilter)) leaf_name_data.push_back(k6.get_name_leafdata());
    if (rib_scale.is_set || is_set(rib_scale.yfilter)) leaf_name_data.push_back(rib_scale.get_name_leafdata());
    if (metric_version.is_set || is_set(metric_version.yfilter)) leaf_name_data.push_back(metric_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-name")
    {
        metric_name = value;
        metric_name.value_namespace = name_space;
        metric_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k1")
    {
        k1 = value;
        k1.value_namespace = name_space;
        k1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k2")
    {
        k2 = value;
        k2.value_namespace = name_space;
        k2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k3")
    {
        k3 = value;
        k3.value_namespace = name_space;
        k3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k4")
    {
        k4 = value;
        k4.value_namespace = name_space;
        k4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k5")
    {
        k5 = value;
        k5.value_namespace = name_space;
        k5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "k6")
    {
        k6 = value;
        k6.value_namespace = name_space;
        k6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-scale")
    {
        rib_scale = value;
        rib_scale.value_namespace = name_space;
        rib_scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-version")
    {
        metric_version = value;
        metric_version.value_namespace = name_space;
        metric_version.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-name")
    {
        metric_name.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "k1")
    {
        k1.yfilter = yfilter;
    }
    if(value_path == "k2")
    {
        k2.yfilter = yfilter;
    }
    if(value_path == "k3")
    {
        k3.yfilter = yfilter;
    }
    if(value_path == "k4")
    {
        k4.yfilter = yfilter;
    }
    if(value_path == "k5")
    {
        k5.yfilter = yfilter;
    }
    if(value_path == "k6")
    {
        k6.yfilter = yfilter;
    }
    if(value_path == "rib-scale")
    {
        rib_scale.yfilter = yfilter;
    }
    if(value_path == "metric-version")
    {
        metric_version.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Metrics::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-name" || name == "max-hops" || name == "tos" || name == "k1" || name == "k2" || name == "k3" || name == "k4" || name == "k5" || name == "k6" || name == "rib-scale" || name == "metric-version")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timers()
    :
    timer(this, {"timer_type"})
{

    yang_name = "timers"; yang_parent_name = "default-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::~Timers()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<timer.len(); index++)
    {
        if(timer[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::has_operation() const
{
    for (std::size_t index=0; index<timer.len(); index++)
    {
        if(timer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timer")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer>();
        ent_->parent = this;
        timer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : timer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::Timer()
    :
    timer_type{YType::enumeration, "timer-type"},
    active_time{YType::uint32, "active-time"},
    hold_time{YType::uint32, "hold-time"},
    signal_time{YType::uint32, "signal-time"},
    converge_time{YType::uint32, "converge-time"}
{

    yang_name = "timer"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::~Timer()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::has_data() const
{
    if (is_presence_container) return true;
    return timer_type.is_set
	|| active_time.is_set
	|| hold_time.is_set
	|| signal_time.is_set
	|| converge_time.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_type.yfilter)
	|| ydk::is_set(active_time.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(signal_time.yfilter)
	|| ydk::is_set(converge_time.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    ADD_KEY_TOKEN(timer_type, "timer-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());
    if (active_time.is_set || is_set(active_time.yfilter)) leaf_name_data.push_back(active_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (signal_time.is_set || is_set(signal_time.yfilter)) leaf_name_data.push_back(signal_time.get_name_leafdata());
    if (converge_time.is_set || is_set(converge_time.yfilter)) leaf_name_data.push_back(converge_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-time")
    {
        active_time = value;
        active_time.value_namespace = name_space;
        active_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-time")
    {
        signal_time = value;
        signal_time.value_namespace = name_space;
        signal_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "converge-time")
    {
        converge_time = value;
        converge_time.value_namespace = name_space;
        converge_time.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
    if(value_path == "active-time")
    {
        active_time.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "signal-time")
    {
        signal_time.yfilter = yfilter;
    }
    if(value_path == "converge-time")
    {
        converge_time.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Timers::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-type" || name == "active-time" || name == "hold-time" || name == "signal-time" || name == "converge-time")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccepts()
    :
    default_accept(this, {"direction"})
{

    yang_name = "default-accepts"; yang_parent_name = "default-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::~DefaultAccepts()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<default_accept.len(); index++)
    {
        if(default_accept[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::has_operation() const
{
    for (std::size_t index=0; index<default_accept.len(); index++)
    {
        if(default_accept[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-accepts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-accept")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept>();
        ent_->parent = this;
        default_accept.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : default_accept.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-accept")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::DefaultAccept()
    :
    direction{YType::enumeration, "direction"},
    policy_name{YType::str, "policy-name"},
    policy_specified{YType::boolean, "policy-specified"}
{

    yang_name = "default-accept"; yang_parent_name = "default-accepts"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::~DefaultAccept()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| policy_name.is_set
	|| policy_specified.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_specified.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-accept";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_specified.is_set || is_set(policy_specified.yfilter)) leaf_name_data.push_back(policy_specified.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-specified")
    {
        policy_specified = value;
        policy_specified.value_namespace = name_space;
        policy_specified.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-specified")
    {
        policy_specified.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::DefaultAccepts::DefaultAccept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "policy-name" || name == "policy-specified")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "default-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::~Interfaces()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    hold_time{YType::uint32, "hold-time"},
    bandwidth_percent{YType::uint32, "bandwidth-percent"},
    passive_interface{YType::boolean, "passive-interface"},
    hello_interval{YType::uint32, "hello-interval"},
    next_hop_self{YType::empty, "next-hop-self"},
    enable{YType::empty, "enable"},
    split_horizon{YType::empty, "split-horizon"}
        ,
    interface_metric(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric>())
    , remote_neighbor(nullptr) // presence node
    , bfd(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd>())
    , site_of_origin(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin>())
    , authentication(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication>())
    , summary_addresses(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses>())
    , interface_filter_policies(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies>())
    , interface_static_neighbors(std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors>())
{
    interface_metric->parent = this;
    bfd->parent = this;
    site_of_origin->parent = this;
    authentication->parent = this;
    summary_addresses->parent = this;
    interface_filter_policies->parent = this;
    interface_static_neighbors->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::~Interface()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| hold_time.is_set
	|| bandwidth_percent.is_set
	|| passive_interface.is_set
	|| hello_interval.is_set
	|| next_hop_self.is_set
	|| enable.is_set
	|| split_horizon.is_set
	|| (interface_metric !=  nullptr && interface_metric->has_data())
	|| (remote_neighbor !=  nullptr && remote_neighbor->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (summary_addresses !=  nullptr && summary_addresses->has_data())
	|| (interface_filter_policies !=  nullptr && interface_filter_policies->has_data())
	|| (interface_static_neighbors !=  nullptr && interface_static_neighbors->has_data());
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(bandwidth_percent.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| (interface_metric !=  nullptr && interface_metric->has_operation())
	|| (remote_neighbor !=  nullptr && remote_neighbor->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (summary_addresses !=  nullptr && summary_addresses->has_operation())
	|| (interface_filter_policies !=  nullptr && interface_filter_policies->has_operation())
	|| (interface_static_neighbors !=  nullptr && interface_static_neighbors->has_operation());
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (bandwidth_percent.is_set || is_set(bandwidth_percent.yfilter)) leaf_name_data.push_back(bandwidth_percent.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-metric")
    {
        if(interface_metric == nullptr)
        {
            interface_metric = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric>();
        }
        return interface_metric;
    }

    if(child_yang_name == "remote-neighbor")
    {
        if(remote_neighbor == nullptr)
        {
            remote_neighbor = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor>();
        }
        return remote_neighbor;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin == nullptr)
        {
            site_of_origin = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin>();
        }
        return site_of_origin;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "summary-addresses")
    {
        if(summary_addresses == nullptr)
        {
            summary_addresses = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses>();
        }
        return summary_addresses;
    }

    if(child_yang_name == "interface-filter-policies")
    {
        if(interface_filter_policies == nullptr)
        {
            interface_filter_policies = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies>();
        }
        return interface_filter_policies;
    }

    if(child_yang_name == "interface-static-neighbors")
    {
        if(interface_static_neighbors == nullptr)
        {
            interface_static_neighbors = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors>();
        }
        return interface_static_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_metric != nullptr)
    {
        _children["interface-metric"] = interface_metric;
    }

    if(remote_neighbor != nullptr)
    {
        _children["remote-neighbor"] = remote_neighbor;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(site_of_origin != nullptr)
    {
        _children["site-of-origin"] = site_of_origin;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(summary_addresses != nullptr)
    {
        _children["summary-addresses"] = summary_addresses;
    }

    if(interface_filter_policies != nullptr)
    {
        _children["interface-filter-policies"] = interface_filter_policies;
    }

    if(interface_static_neighbors != nullptr)
    {
        _children["interface-static-neighbors"] = interface_static_neighbors;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent = value;
        bandwidth_percent.value_namespace = name_space;
        bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-metric" || name == "remote-neighbor" || name == "bfd" || name == "site-of-origin" || name == "authentication" || name == "summary-addresses" || name == "interface-filter-policies" || name == "interface-static-neighbors" || name == "interface-name" || name == "hold-time" || name == "bandwidth-percent" || name == "passive-interface" || name == "hello-interval" || name == "next-hop-self" || name == "enable" || name == "split-horizon")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::InterfaceMetric()
    :
    bandwidth{YType::uint32, "bandwidth"},
    delay{YType::uint32, "delay"},
    delay_unit{YType::enumeration, "delay-unit"},
    reliability{YType::uint32, "reliability"},
    load{YType::uint32, "load"}
{

    yang_name = "interface-metric"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::~InterfaceMetric()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| delay.is_set
	|| delay_unit.is_set
	|| reliability.is_set
	|| load.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(delay_unit.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(load.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (delay_unit.is_set || is_set(delay_unit.yfilter)) leaf_name_data.push_back(delay_unit.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (load.is_set || is_set(load.yfilter)) leaf_name_data.push_back(load.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-unit")
    {
        delay_unit = value;
        delay_unit.value_namespace = name_space;
        delay_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load")
    {
        load = value;
        load.value_namespace = name_space;
        load.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "delay-unit")
    {
        delay_unit.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "load")
    {
        load.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "delay" || name == "delay-unit" || name == "reliability" || name == "load")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::RemoteNeighbor()
    :
    enable{YType::boolean, "enable"},
    allow_list{YType::str, "allow-list"},
    max_neighbors{YType::uint32, "max-neighbors"}
{

    yang_name = "remote-neighbor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::~RemoteNeighbor()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| allow_list.is_set
	|| max_neighbors.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(allow_list.yfilter)
	|| ydk::is_set(max_neighbors.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (allow_list.is_set || is_set(allow_list.yfilter)) leaf_name_data.push_back(allow_list.get_name_leafdata());
    if (max_neighbors.is_set || is_set(max_neighbors.yfilter)) leaf_name_data.push_back(max_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-list")
    {
        allow_list = value;
        allow_list.value_namespace = name_space;
        allow_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-neighbors")
    {
        max_neighbors = value;
        max_neighbors.value_namespace = name_space;
        max_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "allow-list")
    {
        allow_list.yfilter = yfilter;
    }
    if(value_path == "max-neighbors")
    {
        max_neighbors.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::RemoteNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "allow-list" || name == "max-neighbors")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::Bfd()
    :
    fast_detect{YType::boolean, "fast-detect"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return fast_detect.is_set
	|| detection_multiplier.is_set
	|| interval.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-detect" || name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::SiteOfOrigin()
    :
    type{YType::enumeration, "type"},
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    index_{YType::uint32, "index"},
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"}
{

    yang_name = "site-of-origin"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as_xx.is_set
	|| as_yy.is_set
	|| index_.is_set
	|| address.is_set
	|| address_index.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SiteOfOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as-xx" || name == "as-yy" || name == "index" || name == "address" || name == "address-index")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::Authentication()
    :
    keychain{YType::str, "keychain"}
{

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return keychain.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddresses()
    :
    summary_address(this, {"summary_address_addr", "summary_address_prefix"})
{

    yang_name = "summary-addresses"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::~SummaryAddresses()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_address.len(); index++)
    {
        if(summary_address[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::has_operation() const
{
    for (std::size_t index=0; index<summary_address.len(); index++)
    {
        if(summary_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-address")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress>();
        ent_->parent = this;
        summary_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-address")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::SummaryAddress()
    :
    summary_address_addr{YType::str, "summary-address-addr"},
    summary_address_prefix{YType::uint16, "summary-address-prefix"},
    distance{YType::uint32, "distance"}
{

    yang_name = "summary-address"; yang_parent_name = "summary-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::~SummaryAddress()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::has_data() const
{
    if (is_presence_container) return true;
    return summary_address_addr.is_set
	|| summary_address_prefix.is_set
	|| distance.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(summary_address_addr.yfilter)
	|| ydk::is_set(summary_address_prefix.yfilter)
	|| ydk::is_set(distance.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    ADD_KEY_TOKEN(summary_address_addr, "summary-address-addr");
    ADD_KEY_TOKEN(summary_address_prefix, "summary-address-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_address_addr.is_set || is_set(summary_address_addr.yfilter)) leaf_name_data.push_back(summary_address_addr.get_name_leafdata());
    if (summary_address_prefix.is_set || is_set(summary_address_prefix.yfilter)) leaf_name_data.push_back(summary_address_prefix.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-address-addr")
    {
        summary_address_addr = value;
        summary_address_addr.value_namespace = name_space;
        summary_address_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-address-prefix")
    {
        summary_address_prefix = value;
        summary_address_prefix.value_namespace = name_space;
        summary_address_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-address-addr")
    {
        summary_address_addr.yfilter = yfilter;
    }
    if(value_path == "summary-address-prefix")
    {
        summary_address_prefix.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::SummaryAddresses::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-address-addr" || name == "summary-address-prefix" || name == "distance")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicies()
    :
    interface_filter_policy(this, {"direction"})
{

    yang_name = "interface-filter-policies"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::~InterfaceFilterPolicies()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_filter_policy.len(); index++)
    {
        if(interface_filter_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::has_operation() const
{
    for (std::size_t index=0; index<interface_filter_policy.len(); index++)
    {
        if(interface_filter_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-filter-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-filter-policy")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy>();
        ent_->parent = this;
        interface_filter_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_filter_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-filter-policy")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::InterfaceFilterPolicy()
    :
    direction{YType::enumeration, "direction"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "interface-filter-policy"; yang_parent_name = "interface-filter-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::~InterfaceFilterPolicy()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| policy_name.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-filter-policy";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceFilterPolicies::InterfaceFilterPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "policy-name")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbors()
    :
    interface_static_neighbor(this, {"neighbor_address"})
{

    yang_name = "interface-static-neighbors"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::~InterfaceStaticNeighbors()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_static_neighbor.len(); index++)
    {
        if(interface_static_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::has_operation() const
{
    for (std::size_t index=0; index<interface_static_neighbor.len(); index++)
    {
        if(interface_static_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-static-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-static-neighbor")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor>();
        ent_->parent = this;
        interface_static_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_static_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-static-neighbor")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::InterfaceStaticNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    max_hops{YType::uint32, "max-hops"}
{

    yang_name = "interface-static-neighbor"; yang_parent_name = "interface-static-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::~InterfaceStaticNeighbor()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| max_hops.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(max_hops.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-static-neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Interfaces::Interface::InterfaceStaticNeighbors::InterfaceStaticNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "max-hops")
        return true;
    return false;
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::Distance()
    :
    internal_distance{YType::uint32, "internal-distance"},
    external_distance{YType::uint32, "external-distance"}
{

    yang_name = "distance"; yang_parent_name = "default-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::~Distance()
{
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::has_data() const
{
    if (is_presence_container) return true;
    return internal_distance.is_set
	|| external_distance.is_set;
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_distance.yfilter)
	|| ydk::is_set(external_distance.yfilter);
}

std::string Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_distance.is_set || is_set(internal_distance.yfilter)) leaf_name_data.push_back(internal_distance.get_name_leafdata());
    if (external_distance.is_set || is_set(external_distance.yfilter)) leaf_name_data.push_back(external_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-distance")
    {
        internal_distance = value;
        internal_distance.value_namespace = name_space;
        internal_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-distance")
    {
        external_distance = value;
        external_distance.value_namespace = name_space;
        external_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-distance")
    {
        internal_distance.yfilter = yfilter;
    }
    if(value_path == "external-distance")
    {
        external_distance.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::DefaultVrf::DefaultAfs::DefaultAf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-distance" || name == "external-distance")
        return true;
    return false;
}

const Enum::YLeaf EigrpMetricVersion::Y_64bit {0, "64bit"};
const Enum::YLeaf EigrpMetricVersion::Y_32bit {1, "32bit"};

const Enum::YLeaf EigrpSoo::as {1, "as"};
const Enum::YLeaf EigrpSoo::ipv4_address {2, "ipv4-address"};
const Enum::YLeaf EigrpSoo::four_byte_as {3, "four-byte-as"};

const Enum::YLeaf EigrpRedistProto::bgp {1, "bgp"};
const Enum::YLeaf EigrpRedistProto::connected {2, "connected"};
const Enum::YLeaf EigrpRedistProto::eigrp {3, "eigrp"};
const Enum::YLeaf EigrpRedistProto::isis {4, "isis"};
const Enum::YLeaf EigrpRedistProto::ospf {5, "ospf"};
const Enum::YLeaf EigrpRedistProto::rip {6, "rip"};
const Enum::YLeaf EigrpRedistProto::static_ {7, "static"};
const Enum::YLeaf EigrpRedistProto::ospfv3 {8, "ospfv3"};
const Enum::YLeaf EigrpRedistProto::subscriber {9, "subscriber"};
const Enum::YLeaf EigrpRedistProto::application {10, "application"};
const Enum::YLeaf EigrpRedistProto::mobile {11, "mobile"};

const Enum::YLeaf EigrpStub::receive_only {1, "receive-only"};
const Enum::YLeaf EigrpStub::filtered {2, "filtered"};

const Enum::YLeaf EigrpDelayUnit::ten_microsecond {0, "ten-microsecond"};
const Enum::YLeaf EigrpDelayUnit::picosecond {1, "picosecond"};

const Enum::YLeaf EigrpMet::maximum_hops {1, "maximum-hops"};
const Enum::YLeaf EigrpMet::weights {2, "weights"};
const Enum::YLeaf EigrpMet::rib_scale {3, "rib-scale"};
const Enum::YLeaf EigrpMet::version {4, "version"};

const Enum::YLeaf EigrpDir::in {1, "in"};
const Enum::YLeaf EigrpDir::out {2, "out"};

const Enum::YLeaf EigrpTimer::active {1, "active"};
const Enum::YLeaf EigrpTimer::route_hold {2, "route-hold"};
const Enum::YLeaf EigrpTimer::signal {3, "signal"};
const Enum::YLeaf EigrpTimer::converge {4, "converge"};


}
}

