
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fib_common_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_oper {

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpdPlatfUpdStats()
    :
    fpus_num_failure{YType::uint64, "fpus-num-failure"},
    fpus_num_success{YType::uint64, "fpus-num-success"},
    fpus_upd_total_time{YType::uint64, "fpus-upd-total-time"}
{
    yang_name = "fpd-platf-upd-stats"; yang_parent_name = "mi-proto-dbg-stat";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::~FpdPlatfUpdStats()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::has_data() const
{
    for (std::size_t index=0; index<fpus_obj_stat.size(); index++)
    {
        if(fpus_obj_stat[index]->has_data())
            return true;
    }
    return fpus_num_failure.is_set
	|| fpus_num_success.is_set
	|| fpus_upd_total_time.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::has_operation() const
{
    for (std::size_t index=0; index<fpus_obj_stat.size(); index++)
    {
        if(fpus_obj_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fpus_num_failure.yfilter)
	|| ydk::is_set(fpus_num_success.yfilter)
	|| ydk::is_set(fpus_upd_total_time.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-platf-upd-stats";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpdPlatfUpdStats' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpus_num_failure.is_set || is_set(fpus_num_failure.yfilter)) leaf_name_data.push_back(fpus_num_failure.get_name_leafdata());
    if (fpus_num_success.is_set || is_set(fpus_num_success.yfilter)) leaf_name_data.push_back(fpus_num_success.get_name_leafdata());
    if (fpus_upd_total_time.is_set || is_set(fpus_upd_total_time.yfilter)) leaf_name_data.push_back(fpus_upd_total_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpus-obj-stat")
    {
        for(auto const & c : fpus_obj_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat>();
        c->parent = this;
        fpus_obj_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpus_obj_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpus-num-failure")
    {
        fpus_num_failure = value;
        fpus_num_failure.value_namespace = name_space;
        fpus_num_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpus-num-success")
    {
        fpus_num_success = value;
        fpus_num_success.value_namespace = name_space;
        fpus_num_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpus-upd-total-time")
    {
        fpus_upd_total_time = value;
        fpus_upd_total_time.value_namespace = name_space;
        fpus_upd_total_time.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpus-num-failure")
    {
        fpus_num_failure.yfilter = yfilter;
    }
    if(value_path == "fpus-num-success")
    {
        fpus_num_success.yfilter = yfilter;
    }
    if(value_path == "fpus-upd-total-time")
    {
        fpus_upd_total_time.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpus-obj-stat" || name == "fpus-num-failure" || name == "fpus-num-success" || name == "fpus-upd-total-time")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FpusObjStat()
    :
    fos_tot_upd_time{YType::uint64, "fos-tot-upd-time"},
    fos_tot_updates{YType::uint64, "fos-tot-updates"}
{
    yang_name = "fpus-obj-stat"; yang_parent_name = "fpd-platf-upd-stats";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::~FpusObjStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::has_data() const
{
    for (std::size_t index=0; index<fos_obj_act_stat.size(); index++)
    {
        if(fos_obj_act_stat[index]->has_data())
            return true;
    }
    return fos_tot_upd_time.is_set
	|| fos_tot_updates.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::has_operation() const
{
    for (std::size_t index=0; index<fos_obj_act_stat.size(); index++)
    {
        if(fos_obj_act_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fos_tot_upd_time.yfilter)
	|| ydk::is_set(fos_tot_updates.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpus-obj-stat";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpusObjStat' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fos_tot_upd_time.is_set || is_set(fos_tot_upd_time.yfilter)) leaf_name_data.push_back(fos_tot_upd_time.get_name_leafdata());
    if (fos_tot_updates.is_set || is_set(fos_tot_updates.yfilter)) leaf_name_data.push_back(fos_tot_updates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fos-obj-act-stat")
    {
        for(auto const & c : fos_obj_act_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat>();
        c->parent = this;
        fos_obj_act_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fos_obj_act_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fos-tot-upd-time")
    {
        fos_tot_upd_time = value;
        fos_tot_upd_time.value_namespace = name_space;
        fos_tot_upd_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fos-tot-updates")
    {
        fos_tot_updates = value;
        fos_tot_updates.value_namespace = name_space;
        fos_tot_updates.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fos-tot-upd-time")
    {
        fos_tot_upd_time.yfilter = yfilter;
    }
    if(value_path == "fos-tot-updates")
    {
        fos_tot_updates.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fos-obj-act-stat" || name == "fos-tot-upd-time" || name == "fos-tot-updates")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::FosObjActStat()
    :
    foas_max_time{YType::uint64, "foas-max-time"},
    foas_max_tstamp{YType::uint64, "foas-max-tstamp"},
    foas_num_failure{YType::uint64, "foas-num-failure"},
    foas_num_success{YType::uint64, "foas-num-success"},
    foas_tot_upd_time{YType::uint64, "foas-tot-upd-time"},
    foas_tot_updates{YType::uint64, "foas-tot-updates"},
    foas_tot_updates_zero{YType::uint64, "foas-tot-updates-zero"}
{
    yang_name = "fos-obj-act-stat"; yang_parent_name = "fpus-obj-stat";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::~FosObjActStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::has_data() const
{
    return foas_max_time.is_set
	|| foas_max_tstamp.is_set
	|| foas_num_failure.is_set
	|| foas_num_success.is_set
	|| foas_tot_upd_time.is_set
	|| foas_tot_updates.is_set
	|| foas_tot_updates_zero.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(foas_max_time.yfilter)
	|| ydk::is_set(foas_max_tstamp.yfilter)
	|| ydk::is_set(foas_num_failure.yfilter)
	|| ydk::is_set(foas_num_success.yfilter)
	|| ydk::is_set(foas_tot_upd_time.yfilter)
	|| ydk::is_set(foas_tot_updates.yfilter)
	|| ydk::is_set(foas_tot_updates_zero.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fos-obj-act-stat";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FosObjActStat' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foas_max_time.is_set || is_set(foas_max_time.yfilter)) leaf_name_data.push_back(foas_max_time.get_name_leafdata());
    if (foas_max_tstamp.is_set || is_set(foas_max_tstamp.yfilter)) leaf_name_data.push_back(foas_max_tstamp.get_name_leafdata());
    if (foas_num_failure.is_set || is_set(foas_num_failure.yfilter)) leaf_name_data.push_back(foas_num_failure.get_name_leafdata());
    if (foas_num_success.is_set || is_set(foas_num_success.yfilter)) leaf_name_data.push_back(foas_num_success.get_name_leafdata());
    if (foas_tot_upd_time.is_set || is_set(foas_tot_upd_time.yfilter)) leaf_name_data.push_back(foas_tot_upd_time.get_name_leafdata());
    if (foas_tot_updates.is_set || is_set(foas_tot_updates.yfilter)) leaf_name_data.push_back(foas_tot_updates.get_name_leafdata());
    if (foas_tot_updates_zero.is_set || is_set(foas_tot_updates_zero.yfilter)) leaf_name_data.push_back(foas_tot_updates_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "foas-max-time")
    {
        foas_max_time = value;
        foas_max_time.value_namespace = name_space;
        foas_max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-max-tstamp")
    {
        foas_max_tstamp = value;
        foas_max_tstamp.value_namespace = name_space;
        foas_max_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-num-failure")
    {
        foas_num_failure = value;
        foas_num_failure.value_namespace = name_space;
        foas_num_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-num-success")
    {
        foas_num_success = value;
        foas_num_success.value_namespace = name_space;
        foas_num_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-tot-upd-time")
    {
        foas_tot_upd_time = value;
        foas_tot_upd_time.value_namespace = name_space;
        foas_tot_upd_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-tot-updates")
    {
        foas_tot_updates = value;
        foas_tot_updates.value_namespace = name_space;
        foas_tot_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-tot-updates-zero")
    {
        foas_tot_updates_zero = value;
        foas_tot_updates_zero.value_namespace = name_space;
        foas_tot_updates_zero.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "foas-max-time")
    {
        foas_max_time.yfilter = yfilter;
    }
    if(value_path == "foas-max-tstamp")
    {
        foas_max_tstamp.yfilter = yfilter;
    }
    if(value_path == "foas-num-failure")
    {
        foas_num_failure.yfilter = yfilter;
    }
    if(value_path == "foas-num-success")
    {
        foas_num_success.yfilter = yfilter;
    }
    if(value_path == "foas-tot-upd-time")
    {
        foas_tot_upd_time.yfilter = yfilter;
    }
    if(value_path == "foas-tot-updates")
    {
        foas_tot_updates.yfilter = yfilter;
    }
    if(value_path == "foas-tot-updates-zero")
    {
        foas_tot_updates_zero.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foas-max-time" || name == "foas-max-tstamp" || name == "foas-num-failure" || name == "foas-num-success" || name == "foas-tot-upd-time" || name == "foas-tot-updates" || name == "foas-tot-updates-zero")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FpdGtrieTiming()
    :
    fgt_num_failure{YType::uint64, "fgt-num-failure"},
    fgt_num_success{YType::uint64, "fgt-num-success"},
    fgt_upd_total_time{YType::uint64, "fgt-upd-total-time"}
{
    yang_name = "fpd-gtrie-timing"; yang_parent_name = "mi-proto-dbg-stat";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::~FpdGtrieTiming()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::has_data() const
{
    for (std::size_t index=0; index<fgt_gtrie_fn_timing.size(); index++)
    {
        if(fgt_gtrie_fn_timing[index]->has_data())
            return true;
    }
    return fgt_num_failure.is_set
	|| fgt_num_success.is_set
	|| fgt_upd_total_time.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::has_operation() const
{
    for (std::size_t index=0; index<fgt_gtrie_fn_timing.size(); index++)
    {
        if(fgt_gtrie_fn_timing[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fgt_num_failure.yfilter)
	|| ydk::is_set(fgt_num_success.yfilter)
	|| ydk::is_set(fgt_upd_total_time.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-gtrie-timing";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpdGtrieTiming' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgt_num_failure.is_set || is_set(fgt_num_failure.yfilter)) leaf_name_data.push_back(fgt_num_failure.get_name_leafdata());
    if (fgt_num_success.is_set || is_set(fgt_num_success.yfilter)) leaf_name_data.push_back(fgt_num_success.get_name_leafdata());
    if (fgt_upd_total_time.is_set || is_set(fgt_upd_total_time.yfilter)) leaf_name_data.push_back(fgt_upd_total_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fgt-gtrie-fn-timing")
    {
        for(auto const & c : fgt_gtrie_fn_timing)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming>();
        c->parent = this;
        fgt_gtrie_fn_timing.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fgt_gtrie_fn_timing)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgt-num-failure")
    {
        fgt_num_failure = value;
        fgt_num_failure.value_namespace = name_space;
        fgt_num_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgt-num-success")
    {
        fgt_num_success = value;
        fgt_num_success.value_namespace = name_space;
        fgt_num_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgt-upd-total-time")
    {
        fgt_upd_total_time = value;
        fgt_upd_total_time.value_namespace = name_space;
        fgt_upd_total_time.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgt-num-failure")
    {
        fgt_num_failure.yfilter = yfilter;
    }
    if(value_path == "fgt-num-success")
    {
        fgt_num_success.yfilter = yfilter;
    }
    if(value_path == "fgt-upd-total-time")
    {
        fgt_upd_total_time.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgt-gtrie-fn-timing" || name == "fgt-num-failure" || name == "fgt-num-success" || name == "fgt-upd-total-time")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::FgtGtrieFnTiming()
    :
    fgft_fn{YType::str, "fgft-fn"},
    fgft_max_time{YType::uint64, "fgft-max-time"},
    fgft_max_tstamp{YType::uint64, "fgft-max-tstamp"},
    fgft_tot_upd_time{YType::uint64, "fgft-tot-upd-time"},
    fgft_tot_updates{YType::uint64, "fgft-tot-updates"},
    fgft_tot_updates_zero{YType::uint64, "fgft-tot-updates-zero"}
{
    yang_name = "fgt-gtrie-fn-timing"; yang_parent_name = "fpd-gtrie-timing";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::~FgtGtrieFnTiming()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::has_data() const
{
    return fgft_fn.is_set
	|| fgft_max_time.is_set
	|| fgft_max_tstamp.is_set
	|| fgft_tot_upd_time.is_set
	|| fgft_tot_updates.is_set
	|| fgft_tot_updates_zero.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fgft_fn.yfilter)
	|| ydk::is_set(fgft_max_time.yfilter)
	|| ydk::is_set(fgft_max_tstamp.yfilter)
	|| ydk::is_set(fgft_tot_upd_time.yfilter)
	|| ydk::is_set(fgft_tot_updates.yfilter)
	|| ydk::is_set(fgft_tot_updates_zero.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgt-gtrie-fn-timing";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FgtGtrieFnTiming' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgft_fn.is_set || is_set(fgft_fn.yfilter)) leaf_name_data.push_back(fgft_fn.get_name_leafdata());
    if (fgft_max_time.is_set || is_set(fgft_max_time.yfilter)) leaf_name_data.push_back(fgft_max_time.get_name_leafdata());
    if (fgft_max_tstamp.is_set || is_set(fgft_max_tstamp.yfilter)) leaf_name_data.push_back(fgft_max_tstamp.get_name_leafdata());
    if (fgft_tot_upd_time.is_set || is_set(fgft_tot_upd_time.yfilter)) leaf_name_data.push_back(fgft_tot_upd_time.get_name_leafdata());
    if (fgft_tot_updates.is_set || is_set(fgft_tot_updates.yfilter)) leaf_name_data.push_back(fgft_tot_updates.get_name_leafdata());
    if (fgft_tot_updates_zero.is_set || is_set(fgft_tot_updates_zero.yfilter)) leaf_name_data.push_back(fgft_tot_updates_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgft-fn")
    {
        fgft_fn = value;
        fgft_fn.value_namespace = name_space;
        fgft_fn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgft-max-time")
    {
        fgft_max_time = value;
        fgft_max_time.value_namespace = name_space;
        fgft_max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgft-max-tstamp")
    {
        fgft_max_tstamp = value;
        fgft_max_tstamp.value_namespace = name_space;
        fgft_max_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgft-tot-upd-time")
    {
        fgft_tot_upd_time = value;
        fgft_tot_upd_time.value_namespace = name_space;
        fgft_tot_upd_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgft-tot-updates")
    {
        fgft_tot_updates = value;
        fgft_tot_updates.value_namespace = name_space;
        fgft_tot_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgft-tot-updates-zero")
    {
        fgft_tot_updates_zero = value;
        fgft_tot_updates_zero.value_namespace = name_space;
        fgft_tot_updates_zero.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgft-fn")
    {
        fgft_fn.yfilter = yfilter;
    }
    if(value_path == "fgft-max-time")
    {
        fgft_max_time.yfilter = yfilter;
    }
    if(value_path == "fgft-max-tstamp")
    {
        fgft_max_tstamp.yfilter = yfilter;
    }
    if(value_path == "fgft-tot-upd-time")
    {
        fgft_tot_upd_time.yfilter = yfilter;
    }
    if(value_path == "fgft-tot-updates")
    {
        fgft_tot_updates.yfilter = yfilter;
    }
    if(value_path == "fgft-tot-updates-zero")
    {
        fgft_tot_updates_zero.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgft-fn" || name == "fgft-max-time" || name == "fgft-max-tstamp" || name == "fgft-tot-upd-time" || name == "fgft-tot-updates" || name == "fgft-tot-updates-zero")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::FpdGbltblSrcEntry()
    :
    entry{YType::uint64, "entry"}
{
    yang_name = "fpd-gbltbl-src-entry"; yang_parent_name = "mi-proto-dbg-stat";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::~FpdGbltblSrcEntry()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-gbltbl-src-entry";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpdGbltblSrcEntry' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::FpdVrftblSrcEntry()
    :
    entry{YType::uint64, "entry"}
{
    yang_name = "fpd-vrftbl-src-entry"; yang_parent_name = "mi-proto-dbg-stat";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::~FpdVrftblSrcEntry()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-vrftbl-src-entry";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpdVrftblSrcEntry' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::FpdNumRetry()
    :
    entry{YType::uint64, "entry"}
{
    yang_name = "fpd-num-retry"; yang_parent_name = "mi-proto-dbg-stat";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::~FpdNumRetry()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-num-retry";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpdNumRetry' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::MiIdbPurgeCntr()
{
    yang_name = "mi-idb-purge-cntr"; yang_parent_name = "misc";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::~MiIdbPurgeCntr()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::has_data() const
{
    for (std::size_t index=0; index<fpp_cntr.size(); index++)
    {
        if(fpp_cntr[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::has_operation() const
{
    for (std::size_t index=0; index<fpp_cntr.size(); index++)
    {
        if(fpp_cntr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-idb-purge-cntr";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MiIdbPurgeCntr' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpp-cntr")
    {
        for(auto const & c : fpp_cntr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr>();
        c->parent = this;
        fpp_cntr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpp_cntr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpp-cntr")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::FppCntr()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "fpp-cntr"; yang_parent_name = "mi-idb-purge-cntr";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::~FppCntr()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpp-cntr";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FppCntr' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::MiDel()
    :
    msec_time{YType::uint64, "msec-time"},
    prfx{YType::str, "prfx"},
    prfx_len{YType::uint16, "prfx-len"},
    prfx_proto{YType::uint16, "prfx-proto"},
    tableid{YType::uint32, "tableid"}
{
    yang_name = "mi-del"; yang_parent_name = "misc";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::~MiDel()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::has_data() const
{
    return msec_time.is_set
	|| prfx.is_set
	|| prfx_len.is_set
	|| prfx_proto.is_set
	|| tableid.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec_time.yfilter)
	|| ydk::is_set(prfx.yfilter)
	|| ydk::is_set(prfx_len.yfilter)
	|| ydk::is_set(prfx_proto.yfilter)
	|| ydk::is_set(tableid.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-del";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MiDel' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec_time.is_set || is_set(msec_time.yfilter)) leaf_name_data.push_back(msec_time.get_name_leafdata());
    if (prfx.is_set || is_set(prfx.yfilter)) leaf_name_data.push_back(prfx.get_name_leafdata());
    if (prfx_len.is_set || is_set(prfx_len.yfilter)) leaf_name_data.push_back(prfx_len.get_name_leafdata());
    if (prfx_proto.is_set || is_set(prfx_proto.yfilter)) leaf_name_data.push_back(prfx_proto.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec-time")
    {
        msec_time = value;
        msec_time.value_namespace = name_space;
        msec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prfx")
    {
        prfx = value;
        prfx.value_namespace = name_space;
        prfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prfx-len")
    {
        prfx_len = value;
        prfx_len.value_namespace = name_space;
        prfx_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prfx-proto")
    {
        prfx_proto = value;
        prfx_proto.value_namespace = name_space;
        prfx_proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableid")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec-time")
    {
        msec_time.yfilter = yfilter;
    }
    if(value_path == "prfx")
    {
        prfx.yfilter = yfilter;
    }
    if(value_path == "prfx-len")
    {
        prfx_len.yfilter = yfilter;
    }
    if(value_path == "prfx-proto")
    {
        prfx_proto.yfilter = yfilter;
    }
    if(value_path == "tableid")
    {
        tableid.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec-time" || name == "prfx" || name == "prfx-len" || name == "prfx-proto" || name == "tableid")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::MiFrrStat()
    :
    mi_num_bfd_down{YType::uint32, "mi-num-bfd-down"},
    mi_num_bkup_frr_objects{YType::uint32, "mi-num-bkup-frr-objects"},
    mi_num_frr_logs{YType::uint32, "mi-num-frr-logs"},
    mi_num_frr_proto_events{YType::uint32, "mi-num-frr-proto-events"},
    mi_num_frr_reset{YType::uint32, "mi-num-frr-reset"},
    mi_num_frr_reset_queue_adds{YType::uint32, "mi-num-frr-reset-queue-adds"},
    mi_num_frr_reset_queue_remove{YType::uint32, "mi-num-frr-reset-queue-remove"},
    mi_num_intf_frr{YType::uint32, "mi-num-intf-frr"},
    mi_num_parent_intf_frr{YType::uint32, "mi-num-parent-intf-frr"},
    mi_num_pfi_intf_down{YType::uint32, "mi-num-pfi-intf-down"},
    mi_num_prot_frr_objects{YType::uint32, "mi-num-prot-frr-objects"},
    mi_num_tunid_alloc_failures{YType::uint32, "mi-num-tunid-alloc-failures"},
    mi_num_tunid_allocs{YType::uint32, "mi-num-tunid-allocs"},
    mi_num_tunid_free_failures{YType::uint32, "mi-num-tunid-free-failures"},
    mi_num_tunid_frees{YType::uint32, "mi-num-tunid-frees"}
{
    yang_name = "mi-frr-stat"; yang_parent_name = "misc";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::~MiFrrStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::has_data() const
{
    return mi_num_bfd_down.is_set
	|| mi_num_bkup_frr_objects.is_set
	|| mi_num_frr_logs.is_set
	|| mi_num_frr_proto_events.is_set
	|| mi_num_frr_reset.is_set
	|| mi_num_frr_reset_queue_adds.is_set
	|| mi_num_frr_reset_queue_remove.is_set
	|| mi_num_intf_frr.is_set
	|| mi_num_parent_intf_frr.is_set
	|| mi_num_pfi_intf_down.is_set
	|| mi_num_prot_frr_objects.is_set
	|| mi_num_tunid_alloc_failures.is_set
	|| mi_num_tunid_allocs.is_set
	|| mi_num_tunid_free_failures.is_set
	|| mi_num_tunid_frees.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_num_bfd_down.yfilter)
	|| ydk::is_set(mi_num_bkup_frr_objects.yfilter)
	|| ydk::is_set(mi_num_frr_logs.yfilter)
	|| ydk::is_set(mi_num_frr_proto_events.yfilter)
	|| ydk::is_set(mi_num_frr_reset.yfilter)
	|| ydk::is_set(mi_num_frr_reset_queue_adds.yfilter)
	|| ydk::is_set(mi_num_frr_reset_queue_remove.yfilter)
	|| ydk::is_set(mi_num_intf_frr.yfilter)
	|| ydk::is_set(mi_num_parent_intf_frr.yfilter)
	|| ydk::is_set(mi_num_pfi_intf_down.yfilter)
	|| ydk::is_set(mi_num_prot_frr_objects.yfilter)
	|| ydk::is_set(mi_num_tunid_alloc_failures.yfilter)
	|| ydk::is_set(mi_num_tunid_allocs.yfilter)
	|| ydk::is_set(mi_num_tunid_free_failures.yfilter)
	|| ydk::is_set(mi_num_tunid_frees.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-frr-stat";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MiFrrStat' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_num_bfd_down.is_set || is_set(mi_num_bfd_down.yfilter)) leaf_name_data.push_back(mi_num_bfd_down.get_name_leafdata());
    if (mi_num_bkup_frr_objects.is_set || is_set(mi_num_bkup_frr_objects.yfilter)) leaf_name_data.push_back(mi_num_bkup_frr_objects.get_name_leafdata());
    if (mi_num_frr_logs.is_set || is_set(mi_num_frr_logs.yfilter)) leaf_name_data.push_back(mi_num_frr_logs.get_name_leafdata());
    if (mi_num_frr_proto_events.is_set || is_set(mi_num_frr_proto_events.yfilter)) leaf_name_data.push_back(mi_num_frr_proto_events.get_name_leafdata());
    if (mi_num_frr_reset.is_set || is_set(mi_num_frr_reset.yfilter)) leaf_name_data.push_back(mi_num_frr_reset.get_name_leafdata());
    if (mi_num_frr_reset_queue_adds.is_set || is_set(mi_num_frr_reset_queue_adds.yfilter)) leaf_name_data.push_back(mi_num_frr_reset_queue_adds.get_name_leafdata());
    if (mi_num_frr_reset_queue_remove.is_set || is_set(mi_num_frr_reset_queue_remove.yfilter)) leaf_name_data.push_back(mi_num_frr_reset_queue_remove.get_name_leafdata());
    if (mi_num_intf_frr.is_set || is_set(mi_num_intf_frr.yfilter)) leaf_name_data.push_back(mi_num_intf_frr.get_name_leafdata());
    if (mi_num_parent_intf_frr.is_set || is_set(mi_num_parent_intf_frr.yfilter)) leaf_name_data.push_back(mi_num_parent_intf_frr.get_name_leafdata());
    if (mi_num_pfi_intf_down.is_set || is_set(mi_num_pfi_intf_down.yfilter)) leaf_name_data.push_back(mi_num_pfi_intf_down.get_name_leafdata());
    if (mi_num_prot_frr_objects.is_set || is_set(mi_num_prot_frr_objects.yfilter)) leaf_name_data.push_back(mi_num_prot_frr_objects.get_name_leafdata());
    if (mi_num_tunid_alloc_failures.is_set || is_set(mi_num_tunid_alloc_failures.yfilter)) leaf_name_data.push_back(mi_num_tunid_alloc_failures.get_name_leafdata());
    if (mi_num_tunid_allocs.is_set || is_set(mi_num_tunid_allocs.yfilter)) leaf_name_data.push_back(mi_num_tunid_allocs.get_name_leafdata());
    if (mi_num_tunid_free_failures.is_set || is_set(mi_num_tunid_free_failures.yfilter)) leaf_name_data.push_back(mi_num_tunid_free_failures.get_name_leafdata());
    if (mi_num_tunid_frees.is_set || is_set(mi_num_tunid_frees.yfilter)) leaf_name_data.push_back(mi_num_tunid_frees.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-num-bfd-down")
    {
        mi_num_bfd_down = value;
        mi_num_bfd_down.value_namespace = name_space;
        mi_num_bfd_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-bkup-frr-objects")
    {
        mi_num_bkup_frr_objects = value;
        mi_num_bkup_frr_objects.value_namespace = name_space;
        mi_num_bkup_frr_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-frr-logs")
    {
        mi_num_frr_logs = value;
        mi_num_frr_logs.value_namespace = name_space;
        mi_num_frr_logs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-frr-proto-events")
    {
        mi_num_frr_proto_events = value;
        mi_num_frr_proto_events.value_namespace = name_space;
        mi_num_frr_proto_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-frr-reset")
    {
        mi_num_frr_reset = value;
        mi_num_frr_reset.value_namespace = name_space;
        mi_num_frr_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-frr-reset-queue-adds")
    {
        mi_num_frr_reset_queue_adds = value;
        mi_num_frr_reset_queue_adds.value_namespace = name_space;
        mi_num_frr_reset_queue_adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-frr-reset-queue-remove")
    {
        mi_num_frr_reset_queue_remove = value;
        mi_num_frr_reset_queue_remove.value_namespace = name_space;
        mi_num_frr_reset_queue_remove.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-intf-frr")
    {
        mi_num_intf_frr = value;
        mi_num_intf_frr.value_namespace = name_space;
        mi_num_intf_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-parent-intf-frr")
    {
        mi_num_parent_intf_frr = value;
        mi_num_parent_intf_frr.value_namespace = name_space;
        mi_num_parent_intf_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-pfi-intf-down")
    {
        mi_num_pfi_intf_down = value;
        mi_num_pfi_intf_down.value_namespace = name_space;
        mi_num_pfi_intf_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-prot-frr-objects")
    {
        mi_num_prot_frr_objects = value;
        mi_num_prot_frr_objects.value_namespace = name_space;
        mi_num_prot_frr_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-tunid-alloc-failures")
    {
        mi_num_tunid_alloc_failures = value;
        mi_num_tunid_alloc_failures.value_namespace = name_space;
        mi_num_tunid_alloc_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-tunid-allocs")
    {
        mi_num_tunid_allocs = value;
        mi_num_tunid_allocs.value_namespace = name_space;
        mi_num_tunid_allocs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-tunid-free-failures")
    {
        mi_num_tunid_free_failures = value;
        mi_num_tunid_free_failures.value_namespace = name_space;
        mi_num_tunid_free_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-tunid-frees")
    {
        mi_num_tunid_frees = value;
        mi_num_tunid_frees.value_namespace = name_space;
        mi_num_tunid_frees.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-num-bfd-down")
    {
        mi_num_bfd_down.yfilter = yfilter;
    }
    if(value_path == "mi-num-bkup-frr-objects")
    {
        mi_num_bkup_frr_objects.yfilter = yfilter;
    }
    if(value_path == "mi-num-frr-logs")
    {
        mi_num_frr_logs.yfilter = yfilter;
    }
    if(value_path == "mi-num-frr-proto-events")
    {
        mi_num_frr_proto_events.yfilter = yfilter;
    }
    if(value_path == "mi-num-frr-reset")
    {
        mi_num_frr_reset.yfilter = yfilter;
    }
    if(value_path == "mi-num-frr-reset-queue-adds")
    {
        mi_num_frr_reset_queue_adds.yfilter = yfilter;
    }
    if(value_path == "mi-num-frr-reset-queue-remove")
    {
        mi_num_frr_reset_queue_remove.yfilter = yfilter;
    }
    if(value_path == "mi-num-intf-frr")
    {
        mi_num_intf_frr.yfilter = yfilter;
    }
    if(value_path == "mi-num-parent-intf-frr")
    {
        mi_num_parent_intf_frr.yfilter = yfilter;
    }
    if(value_path == "mi-num-pfi-intf-down")
    {
        mi_num_pfi_intf_down.yfilter = yfilter;
    }
    if(value_path == "mi-num-prot-frr-objects")
    {
        mi_num_prot_frr_objects.yfilter = yfilter;
    }
    if(value_path == "mi-num-tunid-alloc-failures")
    {
        mi_num_tunid_alloc_failures.yfilter = yfilter;
    }
    if(value_path == "mi-num-tunid-allocs")
    {
        mi_num_tunid_allocs.yfilter = yfilter;
    }
    if(value_path == "mi-num-tunid-free-failures")
    {
        mi_num_tunid_free_failures.yfilter = yfilter;
    }
    if(value_path == "mi-num-tunid-frees")
    {
        mi_num_tunid_frees.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mi-num-bfd-down" || name == "mi-num-bkup-frr-objects" || name == "mi-num-frr-logs" || name == "mi-num-frr-proto-events" || name == "mi-num-frr-reset" || name == "mi-num-frr-reset-queue-adds" || name == "mi-num-frr-reset-queue-remove" || name == "mi-num-intf-frr" || name == "mi-num-parent-intf-frr" || name == "mi-num-pfi-intf-down" || name == "mi-num-prot-frr-objects" || name == "mi-num-tunid-alloc-failures" || name == "mi-num-tunid-allocs" || name == "mi-num-tunid-free-failures" || name == "mi-num-tunid-frees")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::LocalLabel()
    :
    conflicts(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts>())
{
    conflicts->parent = this;

    yang_name = "local-label"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::~LocalLabel()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::has_data() const
{
    return (conflicts !=  nullptr && conflicts->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::has_operation() const
{
    return is_set(yfilter)
	|| (conflicts !=  nullptr && conflicts->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalLabel' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conflicts")
    {
        if(conflicts == nullptr)
        {
            conflicts = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts>();
        }
        return conflicts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conflicts != nullptr)
    {
        children["conflicts"] = conflicts;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflicts")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflicts()
{
    yang_name = "conflicts"; yang_parent_name = "local-label";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::~Conflicts()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::has_data() const
{
    for (std::size_t index=0; index<conflict.size(); index++)
    {
        if(conflict[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::has_operation() const
{
    for (std::size_t index=0; index<conflict.size(); index++)
    {
        if(conflict[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conflicts";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Conflicts' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conflict")
    {
        for(auto const & c : conflict)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict>();
        c->parent = this;
        conflict.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : conflict)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflict")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Conflict()
    :
    label{YType::uint32, "label"},
    ll_ctype{YType::enumeration, "ll-ctype"},
    local_label{YType::uint32, "local-label"},
    num_retries{YType::uint32, "num-retries"},
    pfx_tbl_id{YType::int32, "pfx-tbl-id"},
    prefix{YType::str, "prefix"},
    prefix_len{YType::int32, "prefix-len"},
    retry_ts{YType::uint64, "retry-ts"},
    source{YType::enumeration, "source"},
    source_xr{YType::uint32, "source-xr"},
    update_ts{YType::uint64, "update-ts"}
    	,
    ext(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext>())
{
    ext->parent = this;

    yang_name = "conflict"; yang_parent_name = "conflicts";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::~Conflict()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::has_data() const
{
    return label.is_set
	|| ll_ctype.is_set
	|| local_label.is_set
	|| num_retries.is_set
	|| pfx_tbl_id.is_set
	|| prefix.is_set
	|| prefix_len.is_set
	|| retry_ts.is_set
	|| source.is_set
	|| source_xr.is_set
	|| update_ts.is_set
	|| (ext !=  nullptr && ext->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ll_ctype.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(num_retries.yfilter)
	|| ydk::is_set(pfx_tbl_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(retry_ts.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(source_xr.yfilter)
	|| ydk::is_set(update_ts.yfilter)
	|| (ext !=  nullptr && ext->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conflict";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Conflict' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ll_ctype.is_set || is_set(ll_ctype.yfilter)) leaf_name_data.push_back(ll_ctype.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (num_retries.is_set || is_set(num_retries.yfilter)) leaf_name_data.push_back(num_retries.get_name_leafdata());
    if (pfx_tbl_id.is_set || is_set(pfx_tbl_id.yfilter)) leaf_name_data.push_back(pfx_tbl_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (retry_ts.is_set || is_set(retry_ts.yfilter)) leaf_name_data.push_back(retry_ts.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (source_xr.is_set || is_set(source_xr.yfilter)) leaf_name_data.push_back(source_xr.get_name_leafdata());
    if (update_ts.is_set || is_set(update_ts.yfilter)) leaf_name_data.push_back(update_ts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext")
    {
        if(ext == nullptr)
        {
            ext = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext>();
        }
        return ext;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ext != nullptr)
    {
        children["ext"] = ext;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ll-ctype")
    {
        ll_ctype = value;
        ll_ctype.value_namespace = name_space;
        ll_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-retries")
    {
        num_retries = value;
        num_retries.value_namespace = name_space;
        num_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfx-tbl-id")
    {
        pfx_tbl_id = value;
        pfx_tbl_id.value_namespace = name_space;
        pfx_tbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-ts")
    {
        retry_ts = value;
        retry_ts.value_namespace = name_space;
        retry_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-xr")
    {
        source_xr = value;
        source_xr.value_namespace = name_space;
        source_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-ts")
    {
        update_ts = value;
        update_ts.value_namespace = name_space;
        update_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ll-ctype")
    {
        ll_ctype.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "num-retries")
    {
        num_retries.yfilter = yfilter;
    }
    if(value_path == "pfx-tbl-id")
    {
        pfx_tbl_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "retry-ts")
    {
        retry_ts.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "source-xr")
    {
        source_xr.yfilter = yfilter;
    }
    if(value_path == "update-ts")
    {
        update_ts.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext" || name == "label" || name == "ll-ctype" || name == "local-label" || name == "num-retries" || name == "pfx-tbl-id" || name == "prefix" || name == "prefix-len" || name == "retry-ts" || name == "source" || name == "source-xr" || name == "update-ts")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Ext()
    :
    type{YType::enumeration, "type"}
    	,
    lsm(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm>())
	,pfx(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx>())
{
    lsm->parent = this;

    pfx->parent = this;

    yang_name = "ext"; yang_parent_name = "conflict";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::~Ext()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::has_data() const
{
    return type.is_set
	|| (lsm !=  nullptr && lsm->has_data())
	|| (pfx !=  nullptr && pfx->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (lsm !=  nullptr && lsm->has_operation())
	|| (pfx !=  nullptr && pfx->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ext' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsm")
    {
        if(lsm == nullptr)
        {
            lsm = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm>();
        }
        return lsm;
    }

    if(child_yang_name == "pfx")
    {
        if(pfx == nullptr)
        {
            pfx = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx>();
        }
        return pfx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsm != nullptr)
    {
        children["lsm"] = lsm;
    }

    if(pfx != nullptr)
    {
        children["pfx"] = pfx;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsm" || name == "pfx" || name == "type")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::Pfx()
    :
    pfx{YType::str, "pfx"},
    tbl_id{YType::uint32, "tbl-id"}
{
    yang_name = "pfx"; yang_parent_name = "ext";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::~Pfx()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::has_data() const
{
    return pfx.is_set
	|| tbl_id.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(tbl_id.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfx' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (tbl_id.is_set || is_set(tbl_id.yfilter)) leaf_name_data.push_back(tbl_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-id")
    {
        tbl_id = value;
        tbl_id.value_namespace = name_space;
        tbl_id.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "tbl-id")
    {
        tbl_id.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx" || name == "tbl-id")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::Lsm()
    :
    mcast_id{YType::uint32, "mcast-id"},
    nh{YType::str, "nh"}
{
    yang_name = "lsm"; yang_parent_name = "ext";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::~Lsm()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::has_data() const
{
    return mcast_id.is_set
	|| nh.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcast_id.yfilter)
	|| ydk::is_set(nh.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsm";

    return path_buffer.str();

}

const EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsm' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_id.is_set || is_set(mcast_id.yfilter)) leaf_name_data.push_back(mcast_id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcast-id")
    {
        mcast_id = value;
        mcast_id.value_namespace = name_space;
        mcast_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcast-id")
    {
        mcast_id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-id" || name == "nh")
        return true;
    return false;
}

MplsForwarding::MplsForwarding()
    :
    nodes(std::make_shared<MplsForwarding::Nodes>())
{
    nodes->parent = this;

    yang_name = "mpls-forwarding"; yang_parent_name = "Cisco-IOS-XR-fib-common-oper";
}

MplsForwarding::~MplsForwarding()
{
}

bool MplsForwarding::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool MplsForwarding::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string MplsForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-oper:mpls-forwarding";

    return path_buffer.str();

}

const EntityPath MplsForwarding::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<MplsForwarding::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void MplsForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsForwarding::clone_ptr() const
{
    return std::make_shared<MplsForwarding>();
}

std::string MplsForwarding::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsForwarding::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsForwarding::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsForwarding::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MplsForwarding::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "mpls-forwarding";
}

MplsForwarding::Nodes::~Nodes()
{
}

bool MplsForwarding::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-oper:mpls-forwarding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    forwarding_summary(std::make_shared<MplsForwarding::Nodes::Node::ForwardingSummary>())
	,frr_database(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase>())
	,frr_logs(std::make_shared<MplsForwarding::Nodes::Node::FrrLogs>())
	,label_fib(std::make_shared<MplsForwarding::Nodes::Node::LabelFib>())
	,tunnel(std::make_shared<MplsForwarding::Nodes::Node::Tunnel>())
{
    forwarding_summary->parent = this;

    frr_database->parent = this;

    frr_logs->parent = this;

    label_fib->parent = this;

    tunnel->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

MplsForwarding::Nodes::Node::~Node()
{
}

bool MplsForwarding::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_data())
	|| (frr_database !=  nullptr && frr_database->has_data())
	|| (frr_logs !=  nullptr && frr_logs->has_data())
	|| (label_fib !=  nullptr && label_fib->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool MplsForwarding::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_operation())
	|| (frr_database !=  nullptr && frr_database->has_operation())
	|| (frr_logs !=  nullptr && frr_logs->has_operation())
	|| (label_fib !=  nullptr && label_fib->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string MplsForwarding::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-oper:mpls-forwarding/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-summary")
    {
        if(forwarding_summary == nullptr)
        {
            forwarding_summary = std::make_shared<MplsForwarding::Nodes::Node::ForwardingSummary>();
        }
        return forwarding_summary;
    }

    if(child_yang_name == "frr-database")
    {
        if(frr_database == nullptr)
        {
            frr_database = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase>();
        }
        return frr_database;
    }

    if(child_yang_name == "frr-logs")
    {
        if(frr_logs == nullptr)
        {
            frr_logs = std::make_shared<MplsForwarding::Nodes::Node::FrrLogs>();
        }
        return frr_logs;
    }

    if(child_yang_name == "label-fib")
    {
        if(label_fib == nullptr)
        {
            label_fib = std::make_shared<MplsForwarding::Nodes::Node::LabelFib>();
        }
        return label_fib;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<MplsForwarding::Nodes::Node::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding_summary != nullptr)
    {
        children["forwarding-summary"] = forwarding_summary;
    }

    if(frr_database != nullptr)
    {
        children["frr-database"] = frr_database;
    }

    if(frr_logs != nullptr)
    {
        children["frr-logs"] = frr_logs;
    }

    if(label_fib != nullptr)
    {
        children["label-fib"] = label_fib;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void MplsForwarding::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-summary" || name == "frr-database" || name == "frr-logs" || name == "label-fib" || name == "tunnel" || name == "node-name")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::ForwardingSummary::ForwardingSummary()
    :
    deleted_stale_entries{YType::uint32, "deleted-stale-entries"},
    global_dropped_packets{YType::uint64, "global-dropped-packets"},
    global_failed_lookups{YType::uint64, "global-failed-lookups"},
    global_fragmented_packets{YType::uint64, "global-fragmented-packets"},
    highest_label{YType::uint32, "highest-label"},
    ignore_protect{YType::uint32, "ignore-protect"},
    ipv4_imposition_entries{YType::uint32, "ipv4-imposition-entries"},
    label_switched_entries{YType::uint32, "label-switched-entries"},
    lowest_label{YType::uint32, "lowest-label"},
    lrpf_entries{YType::uint32, "lrpf-entries"},
    mte_head_entries{YType::uint32, "mte-head-entries"},
    mte_ll_entries{YType::uint32, "mte-ll-entries"},
    mte_midpoint_entries{YType::uint32, "mte-midpoint-entries"},
    reserved_label_entries{YType::uint32, "reserved-label-entries"},
    te_frr_head_entries{YType::uint32, "te-frr-head-entries"},
    te_frr_interface_entries{YType::uint32, "te-frr-interface-entries"},
    te_frr_internal_entries{YType::uint32, "te-frr-internal-entries"},
    te_frr_mid_points_entries{YType::uint32, "te-frr-mid-points-entries"},
    te_frr_next_hop_entries{YType::uint32, "te-frr-next-hop-entries"},
    te_head_entries{YType::uint32, "te-head-entries"},
    te_internal_entries{YType::uint32, "te-internal-entries"},
    te_mid_points_entries{YType::uint32, "te-mid-points-entries"},
    total_forwarding_update_messages{YType::uint32, "total-forwarding-update-messages"},
    total_forwarding_updates{YType::uint32, "total-forwarding-updates"},
    total_p2mp_forwarding_added_or_modify_messages{YType::uint32, "total-p2mp-forwarding-added-or-modify-messages"},
    total_p2mp_forwarding_delete_messages{YType::uint32, "total-p2mp-forwarding-delete-messages"},
    total_p2mp_forwarding_drop_messages{YType::uint32, "total-p2mp-forwarding-drop-messages"},
    total_p2mp_forwarding_updates{YType::uint32, "total-p2mp-forwarding-updates"},
    total_p2mp_iir_forwarding_drop_messages{YType::uint32, "total-p2mp-iir-forwarding-drop-messages"}
{
    yang_name = "forwarding-summary"; yang_parent_name = "node";
}

MplsForwarding::Nodes::Node::ForwardingSummary::~ForwardingSummary()
{
}

bool MplsForwarding::Nodes::Node::ForwardingSummary::has_data() const
{
    return deleted_stale_entries.is_set
	|| global_dropped_packets.is_set
	|| global_failed_lookups.is_set
	|| global_fragmented_packets.is_set
	|| highest_label.is_set
	|| ignore_protect.is_set
	|| ipv4_imposition_entries.is_set
	|| label_switched_entries.is_set
	|| lowest_label.is_set
	|| lrpf_entries.is_set
	|| mte_head_entries.is_set
	|| mte_ll_entries.is_set
	|| mte_midpoint_entries.is_set
	|| reserved_label_entries.is_set
	|| te_frr_head_entries.is_set
	|| te_frr_interface_entries.is_set
	|| te_frr_internal_entries.is_set
	|| te_frr_mid_points_entries.is_set
	|| te_frr_next_hop_entries.is_set
	|| te_head_entries.is_set
	|| te_internal_entries.is_set
	|| te_mid_points_entries.is_set
	|| total_forwarding_update_messages.is_set
	|| total_forwarding_updates.is_set
	|| total_p2mp_forwarding_added_or_modify_messages.is_set
	|| total_p2mp_forwarding_delete_messages.is_set
	|| total_p2mp_forwarding_drop_messages.is_set
	|| total_p2mp_forwarding_updates.is_set
	|| total_p2mp_iir_forwarding_drop_messages.is_set;
}

bool MplsForwarding::Nodes::Node::ForwardingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deleted_stale_entries.yfilter)
	|| ydk::is_set(global_dropped_packets.yfilter)
	|| ydk::is_set(global_failed_lookups.yfilter)
	|| ydk::is_set(global_fragmented_packets.yfilter)
	|| ydk::is_set(highest_label.yfilter)
	|| ydk::is_set(ignore_protect.yfilter)
	|| ydk::is_set(ipv4_imposition_entries.yfilter)
	|| ydk::is_set(label_switched_entries.yfilter)
	|| ydk::is_set(lowest_label.yfilter)
	|| ydk::is_set(lrpf_entries.yfilter)
	|| ydk::is_set(mte_head_entries.yfilter)
	|| ydk::is_set(mte_ll_entries.yfilter)
	|| ydk::is_set(mte_midpoint_entries.yfilter)
	|| ydk::is_set(reserved_label_entries.yfilter)
	|| ydk::is_set(te_frr_head_entries.yfilter)
	|| ydk::is_set(te_frr_interface_entries.yfilter)
	|| ydk::is_set(te_frr_internal_entries.yfilter)
	|| ydk::is_set(te_frr_mid_points_entries.yfilter)
	|| ydk::is_set(te_frr_next_hop_entries.yfilter)
	|| ydk::is_set(te_head_entries.yfilter)
	|| ydk::is_set(te_internal_entries.yfilter)
	|| ydk::is_set(te_mid_points_entries.yfilter)
	|| ydk::is_set(total_forwarding_update_messages.yfilter)
	|| ydk::is_set(total_forwarding_updates.yfilter)
	|| ydk::is_set(total_p2mp_forwarding_added_or_modify_messages.yfilter)
	|| ydk::is_set(total_p2mp_forwarding_delete_messages.yfilter)
	|| ydk::is_set(total_p2mp_forwarding_drop_messages.yfilter)
	|| ydk::is_set(total_p2mp_forwarding_updates.yfilter)
	|| ydk::is_set(total_p2mp_iir_forwarding_drop_messages.yfilter);
}

std::string MplsForwarding::Nodes::Node::ForwardingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-summary";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::ForwardingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deleted_stale_entries.is_set || is_set(deleted_stale_entries.yfilter)) leaf_name_data.push_back(deleted_stale_entries.get_name_leafdata());
    if (global_dropped_packets.is_set || is_set(global_dropped_packets.yfilter)) leaf_name_data.push_back(global_dropped_packets.get_name_leafdata());
    if (global_failed_lookups.is_set || is_set(global_failed_lookups.yfilter)) leaf_name_data.push_back(global_failed_lookups.get_name_leafdata());
    if (global_fragmented_packets.is_set || is_set(global_fragmented_packets.yfilter)) leaf_name_data.push_back(global_fragmented_packets.get_name_leafdata());
    if (highest_label.is_set || is_set(highest_label.yfilter)) leaf_name_data.push_back(highest_label.get_name_leafdata());
    if (ignore_protect.is_set || is_set(ignore_protect.yfilter)) leaf_name_data.push_back(ignore_protect.get_name_leafdata());
    if (ipv4_imposition_entries.is_set || is_set(ipv4_imposition_entries.yfilter)) leaf_name_data.push_back(ipv4_imposition_entries.get_name_leafdata());
    if (label_switched_entries.is_set || is_set(label_switched_entries.yfilter)) leaf_name_data.push_back(label_switched_entries.get_name_leafdata());
    if (lowest_label.is_set || is_set(lowest_label.yfilter)) leaf_name_data.push_back(lowest_label.get_name_leafdata());
    if (lrpf_entries.is_set || is_set(lrpf_entries.yfilter)) leaf_name_data.push_back(lrpf_entries.get_name_leafdata());
    if (mte_head_entries.is_set || is_set(mte_head_entries.yfilter)) leaf_name_data.push_back(mte_head_entries.get_name_leafdata());
    if (mte_ll_entries.is_set || is_set(mte_ll_entries.yfilter)) leaf_name_data.push_back(mte_ll_entries.get_name_leafdata());
    if (mte_midpoint_entries.is_set || is_set(mte_midpoint_entries.yfilter)) leaf_name_data.push_back(mte_midpoint_entries.get_name_leafdata());
    if (reserved_label_entries.is_set || is_set(reserved_label_entries.yfilter)) leaf_name_data.push_back(reserved_label_entries.get_name_leafdata());
    if (te_frr_head_entries.is_set || is_set(te_frr_head_entries.yfilter)) leaf_name_data.push_back(te_frr_head_entries.get_name_leafdata());
    if (te_frr_interface_entries.is_set || is_set(te_frr_interface_entries.yfilter)) leaf_name_data.push_back(te_frr_interface_entries.get_name_leafdata());
    if (te_frr_internal_entries.is_set || is_set(te_frr_internal_entries.yfilter)) leaf_name_data.push_back(te_frr_internal_entries.get_name_leafdata());
    if (te_frr_mid_points_entries.is_set || is_set(te_frr_mid_points_entries.yfilter)) leaf_name_data.push_back(te_frr_mid_points_entries.get_name_leafdata());
    if (te_frr_next_hop_entries.is_set || is_set(te_frr_next_hop_entries.yfilter)) leaf_name_data.push_back(te_frr_next_hop_entries.get_name_leafdata());
    if (te_head_entries.is_set || is_set(te_head_entries.yfilter)) leaf_name_data.push_back(te_head_entries.get_name_leafdata());
    if (te_internal_entries.is_set || is_set(te_internal_entries.yfilter)) leaf_name_data.push_back(te_internal_entries.get_name_leafdata());
    if (te_mid_points_entries.is_set || is_set(te_mid_points_entries.yfilter)) leaf_name_data.push_back(te_mid_points_entries.get_name_leafdata());
    if (total_forwarding_update_messages.is_set || is_set(total_forwarding_update_messages.yfilter)) leaf_name_data.push_back(total_forwarding_update_messages.get_name_leafdata());
    if (total_forwarding_updates.is_set || is_set(total_forwarding_updates.yfilter)) leaf_name_data.push_back(total_forwarding_updates.get_name_leafdata());
    if (total_p2mp_forwarding_added_or_modify_messages.is_set || is_set(total_p2mp_forwarding_added_or_modify_messages.yfilter)) leaf_name_data.push_back(total_p2mp_forwarding_added_or_modify_messages.get_name_leafdata());
    if (total_p2mp_forwarding_delete_messages.is_set || is_set(total_p2mp_forwarding_delete_messages.yfilter)) leaf_name_data.push_back(total_p2mp_forwarding_delete_messages.get_name_leafdata());
    if (total_p2mp_forwarding_drop_messages.is_set || is_set(total_p2mp_forwarding_drop_messages.yfilter)) leaf_name_data.push_back(total_p2mp_forwarding_drop_messages.get_name_leafdata());
    if (total_p2mp_forwarding_updates.is_set || is_set(total_p2mp_forwarding_updates.yfilter)) leaf_name_data.push_back(total_p2mp_forwarding_updates.get_name_leafdata());
    if (total_p2mp_iir_forwarding_drop_messages.is_set || is_set(total_p2mp_iir_forwarding_drop_messages.yfilter)) leaf_name_data.push_back(total_p2mp_iir_forwarding_drop_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::ForwardingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::ForwardingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::ForwardingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deleted-stale-entries")
    {
        deleted_stale_entries = value;
        deleted_stale_entries.value_namespace = name_space;
        deleted_stale_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-dropped-packets")
    {
        global_dropped_packets = value;
        global_dropped_packets.value_namespace = name_space;
        global_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-failed-lookups")
    {
        global_failed_lookups = value;
        global_failed_lookups.value_namespace = name_space;
        global_failed_lookups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-fragmented-packets")
    {
        global_fragmented_packets = value;
        global_fragmented_packets.value_namespace = name_space;
        global_fragmented_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-label")
    {
        highest_label = value;
        highest_label.value_namespace = name_space;
        highest_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-protect")
    {
        ignore_protect = value;
        ignore_protect.value_namespace = name_space;
        ignore_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-imposition-entries")
    {
        ipv4_imposition_entries = value;
        ipv4_imposition_entries.value_namespace = name_space;
        ipv4_imposition_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-switched-entries")
    {
        label_switched_entries = value;
        label_switched_entries.value_namespace = name_space;
        label_switched_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-label")
    {
        lowest_label = value;
        lowest_label.value_namespace = name_space;
        lowest_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lrpf-entries")
    {
        lrpf_entries = value;
        lrpf_entries.value_namespace = name_space;
        lrpf_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-head-entries")
    {
        mte_head_entries = value;
        mte_head_entries.value_namespace = name_space;
        mte_head_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-ll-entries")
    {
        mte_ll_entries = value;
        mte_ll_entries.value_namespace = name_space;
        mte_ll_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-midpoint-entries")
    {
        mte_midpoint_entries = value;
        mte_midpoint_entries.value_namespace = name_space;
        mte_midpoint_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-label-entries")
    {
        reserved_label_entries = value;
        reserved_label_entries.value_namespace = name_space;
        reserved_label_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-frr-head-entries")
    {
        te_frr_head_entries = value;
        te_frr_head_entries.value_namespace = name_space;
        te_frr_head_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-frr-interface-entries")
    {
        te_frr_interface_entries = value;
        te_frr_interface_entries.value_namespace = name_space;
        te_frr_interface_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-frr-internal-entries")
    {
        te_frr_internal_entries = value;
        te_frr_internal_entries.value_namespace = name_space;
        te_frr_internal_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-frr-mid-points-entries")
    {
        te_frr_mid_points_entries = value;
        te_frr_mid_points_entries.value_namespace = name_space;
        te_frr_mid_points_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-frr-next-hop-entries")
    {
        te_frr_next_hop_entries = value;
        te_frr_next_hop_entries.value_namespace = name_space;
        te_frr_next_hop_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-head-entries")
    {
        te_head_entries = value;
        te_head_entries.value_namespace = name_space;
        te_head_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-internal-entries")
    {
        te_internal_entries = value;
        te_internal_entries.value_namespace = name_space;
        te_internal_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-mid-points-entries")
    {
        te_mid_points_entries = value;
        te_mid_points_entries.value_namespace = name_space;
        te_mid_points_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forwarding-update-messages")
    {
        total_forwarding_update_messages = value;
        total_forwarding_update_messages.value_namespace = name_space;
        total_forwarding_update_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-forwarding-updates")
    {
        total_forwarding_updates = value;
        total_forwarding_updates.value_namespace = name_space;
        total_forwarding_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-forwarding-added-or-modify-messages")
    {
        total_p2mp_forwarding_added_or_modify_messages = value;
        total_p2mp_forwarding_added_or_modify_messages.value_namespace = name_space;
        total_p2mp_forwarding_added_or_modify_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-forwarding-delete-messages")
    {
        total_p2mp_forwarding_delete_messages = value;
        total_p2mp_forwarding_delete_messages.value_namespace = name_space;
        total_p2mp_forwarding_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-forwarding-drop-messages")
    {
        total_p2mp_forwarding_drop_messages = value;
        total_p2mp_forwarding_drop_messages.value_namespace = name_space;
        total_p2mp_forwarding_drop_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-forwarding-updates")
    {
        total_p2mp_forwarding_updates = value;
        total_p2mp_forwarding_updates.value_namespace = name_space;
        total_p2mp_forwarding_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-iir-forwarding-drop-messages")
    {
        total_p2mp_iir_forwarding_drop_messages = value;
        total_p2mp_iir_forwarding_drop_messages.value_namespace = name_space;
        total_p2mp_iir_forwarding_drop_messages.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::ForwardingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deleted-stale-entries")
    {
        deleted_stale_entries.yfilter = yfilter;
    }
    if(value_path == "global-dropped-packets")
    {
        global_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "global-failed-lookups")
    {
        global_failed_lookups.yfilter = yfilter;
    }
    if(value_path == "global-fragmented-packets")
    {
        global_fragmented_packets.yfilter = yfilter;
    }
    if(value_path == "highest-label")
    {
        highest_label.yfilter = yfilter;
    }
    if(value_path == "ignore-protect")
    {
        ignore_protect.yfilter = yfilter;
    }
    if(value_path == "ipv4-imposition-entries")
    {
        ipv4_imposition_entries.yfilter = yfilter;
    }
    if(value_path == "label-switched-entries")
    {
        label_switched_entries.yfilter = yfilter;
    }
    if(value_path == "lowest-label")
    {
        lowest_label.yfilter = yfilter;
    }
    if(value_path == "lrpf-entries")
    {
        lrpf_entries.yfilter = yfilter;
    }
    if(value_path == "mte-head-entries")
    {
        mte_head_entries.yfilter = yfilter;
    }
    if(value_path == "mte-ll-entries")
    {
        mte_ll_entries.yfilter = yfilter;
    }
    if(value_path == "mte-midpoint-entries")
    {
        mte_midpoint_entries.yfilter = yfilter;
    }
    if(value_path == "reserved-label-entries")
    {
        reserved_label_entries.yfilter = yfilter;
    }
    if(value_path == "te-frr-head-entries")
    {
        te_frr_head_entries.yfilter = yfilter;
    }
    if(value_path == "te-frr-interface-entries")
    {
        te_frr_interface_entries.yfilter = yfilter;
    }
    if(value_path == "te-frr-internal-entries")
    {
        te_frr_internal_entries.yfilter = yfilter;
    }
    if(value_path == "te-frr-mid-points-entries")
    {
        te_frr_mid_points_entries.yfilter = yfilter;
    }
    if(value_path == "te-frr-next-hop-entries")
    {
        te_frr_next_hop_entries.yfilter = yfilter;
    }
    if(value_path == "te-head-entries")
    {
        te_head_entries.yfilter = yfilter;
    }
    if(value_path == "te-internal-entries")
    {
        te_internal_entries.yfilter = yfilter;
    }
    if(value_path == "te-mid-points-entries")
    {
        te_mid_points_entries.yfilter = yfilter;
    }
    if(value_path == "total-forwarding-update-messages")
    {
        total_forwarding_update_messages.yfilter = yfilter;
    }
    if(value_path == "total-forwarding-updates")
    {
        total_forwarding_updates.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-forwarding-added-or-modify-messages")
    {
        total_p2mp_forwarding_added_or_modify_messages.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-forwarding-delete-messages")
    {
        total_p2mp_forwarding_delete_messages.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-forwarding-drop-messages")
    {
        total_p2mp_forwarding_drop_messages.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-forwarding-updates")
    {
        total_p2mp_forwarding_updates.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-iir-forwarding-drop-messages")
    {
        total_p2mp_iir_forwarding_drop_messages.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::ForwardingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deleted-stale-entries" || name == "global-dropped-packets" || name == "global-failed-lookups" || name == "global-fragmented-packets" || name == "highest-label" || name == "ignore-protect" || name == "ipv4-imposition-entries" || name == "label-switched-entries" || name == "lowest-label" || name == "lrpf-entries" || name == "mte-head-entries" || name == "mte-ll-entries" || name == "mte-midpoint-entries" || name == "reserved-label-entries" || name == "te-frr-head-entries" || name == "te-frr-interface-entries" || name == "te-frr-internal-entries" || name == "te-frr-mid-points-entries" || name == "te-frr-next-hop-entries" || name == "te-head-entries" || name == "te-internal-entries" || name == "te-mid-points-entries" || name == "total-forwarding-update-messages" || name == "total-forwarding-updates" || name == "total-p2mp-forwarding-added-or-modify-messages" || name == "total-p2mp-forwarding-delete-messages" || name == "total-p2mp-forwarding-drop-messages" || name == "total-p2mp-forwarding-updates" || name == "total-p2mp-iir-forwarding-drop-messages")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLogs()
{
    yang_name = "frr-logs"; yang_parent_name = "node";
}

MplsForwarding::Nodes::Node::FrrLogs::~FrrLogs()
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::has_data() const
{
    for (std::size_t index=0; index<frr_log.size(); index++)
    {
        if(frr_log[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrLogs::has_operation() const
{
    for (std::size_t index=0; index<frr_log.size(); index++)
    {
        if(frr_log[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-logs";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrLogs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrLogs' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-log")
    {
        for(auto const & c : frr_log)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrLogs::FrrLog>();
        c->parent = this;
        frr_log.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrLogs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_log)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrLogs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrLogs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-log")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::FrrLog()
    :
    event_id{YType::int32, "event-id"},
    fast_bundle_member_down_interface{YType::uint32, "fast-bundle-member-down-interface"},
    frr_event_node_id{YType::str, "frr-event-node-id"},
    main_processing{YType::uint32, "main-processing"},
    next_hop{YType::uint32, "next-hop"},
    number_of_rewrites_affected{YType::uint32, "number-of-rewrites-affected"},
    protected_frr_interface_name{YType::str, "protected-frr-interface-name"},
    switching_time_nsecs{YType::uint32, "switching-time-nsecs"}
    	,
    start_time(std::make_shared<MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime>())
{
    start_time->parent = this;

    yang_name = "frr-log"; yang_parent_name = "frr-logs";
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::~FrrLog()
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::has_data() const
{
    return event_id.is_set
	|| fast_bundle_member_down_interface.is_set
	|| frr_event_node_id.is_set
	|| main_processing.is_set
	|| next_hop.is_set
	|| number_of_rewrites_affected.is_set
	|| protected_frr_interface_name.is_set
	|| switching_time_nsecs.is_set
	|| (start_time !=  nullptr && start_time->has_data());
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(fast_bundle_member_down_interface.yfilter)
	|| ydk::is_set(frr_event_node_id.yfilter)
	|| ydk::is_set(main_processing.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(number_of_rewrites_affected.yfilter)
	|| ydk::is_set(protected_frr_interface_name.yfilter)
	|| ydk::is_set(switching_time_nsecs.yfilter)
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-log" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrLog' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (fast_bundle_member_down_interface.is_set || is_set(fast_bundle_member_down_interface.yfilter)) leaf_name_data.push_back(fast_bundle_member_down_interface.get_name_leafdata());
    if (frr_event_node_id.is_set || is_set(frr_event_node_id.yfilter)) leaf_name_data.push_back(frr_event_node_id.get_name_leafdata());
    if (main_processing.is_set || is_set(main_processing.yfilter)) leaf_name_data.push_back(main_processing.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (number_of_rewrites_affected.is_set || is_set(number_of_rewrites_affected.yfilter)) leaf_name_data.push_back(number_of_rewrites_affected.get_name_leafdata());
    if (protected_frr_interface_name.is_set || is_set(protected_frr_interface_name.yfilter)) leaf_name_data.push_back(protected_frr_interface_name.get_name_leafdata());
    if (switching_time_nsecs.is_set || is_set(switching_time_nsecs.yfilter)) leaf_name_data.push_back(switching_time_nsecs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_time != nullptr)
    {
        children["start-time"] = start_time;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrLogs::FrrLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-bundle-member-down-interface")
    {
        fast_bundle_member_down_interface = value;
        fast_bundle_member_down_interface.value_namespace = name_space;
        fast_bundle_member_down_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-event-node-id")
    {
        frr_event_node_id = value;
        frr_event_node_id.value_namespace = name_space;
        frr_event_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-processing")
    {
        main_processing = value;
        main_processing.value_namespace = name_space;
        main_processing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-rewrites-affected")
    {
        number_of_rewrites_affected = value;
        number_of_rewrites_affected.value_namespace = name_space;
        number_of_rewrites_affected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-frr-interface-name")
    {
        protected_frr_interface_name = value;
        protected_frr_interface_name.value_namespace = name_space;
        protected_frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-time-nsecs")
    {
        switching_time_nsecs = value;
        switching_time_nsecs.value_namespace = name_space;
        switching_time_nsecs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrLogs::FrrLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "fast-bundle-member-down-interface")
    {
        fast_bundle_member_down_interface.yfilter = yfilter;
    }
    if(value_path == "frr-event-node-id")
    {
        frr_event_node_id.yfilter = yfilter;
    }
    if(value_path == "main-processing")
    {
        main_processing.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "number-of-rewrites-affected")
    {
        number_of_rewrites_affected.yfilter = yfilter;
    }
    if(value_path == "protected-frr-interface-name")
    {
        protected_frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "switching-time-nsecs")
    {
        switching_time_nsecs.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "event-id" || name == "fast-bundle-member-down-interface" || name == "frr-event-node-id" || name == "main-processing" || name == "next-hop" || name == "number-of-rewrites-affected" || name == "protected-frr-interface-name" || name == "switching-time-nsecs")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::StartTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "start-time"; yang_parent_name = "frr-log";
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::~StartTime()
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartTime' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelFib()
    :
    forwarding_details(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails>())
	,informations(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations>())
	,label_security(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity>())
{
    forwarding_details->parent = this;

    informations->parent = this;

    label_security->parent = this;

    yang_name = "label-fib"; yang_parent_name = "node";
}

MplsForwarding::Nodes::Node::LabelFib::~LabelFib()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::has_data() const
{
    return (forwarding_details !=  nullptr && forwarding_details->has_data())
	|| (informations !=  nullptr && informations->has_data())
	|| (label_security !=  nullptr && label_security->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::has_operation() const
{
    return is_set(yfilter)
	|| (forwarding_details !=  nullptr && forwarding_details->has_operation())
	|| (informations !=  nullptr && informations->has_operation())
	|| (label_security !=  nullptr && label_security->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-fib";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelFib' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-details")
    {
        if(forwarding_details == nullptr)
        {
            forwarding_details = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails>();
        }
        return forwarding_details;
    }

    if(child_yang_name == "informations")
    {
        if(informations == nullptr)
        {
            informations = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations>();
        }
        return informations;
    }

    if(child_yang_name == "label-security")
    {
        if(label_security == nullptr)
        {
            label_security = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity>();
        }
        return label_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding_details != nullptr)
    {
        children["forwarding-details"] = forwarding_details;
    }

    if(informations != nullptr)
    {
        children["informations"] = informations;
    }

    if(label_security != nullptr)
    {
        children["label-security"] = label_security;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-details" || name == "informations" || name == "label-security")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetails()
{
    yang_name = "forwarding-details"; yang_parent_name = "label-fib";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::~ForwardingDetails()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::has_data() const
{
    for (std::size_t index=0; index<forwarding_detail.size(); index++)
    {
        if(forwarding_detail[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::has_operation() const
{
    for (std::size_t index=0; index<forwarding_detail.size(); index++)
    {
        if(forwarding_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-details";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingDetails' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-detail")
    {
        for(auto const & c : forwarding_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail>();
        c->parent = this;
        forwarding_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-detail")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::ForwardingDetail()
    :
    afi_table_id{YType::uint32, "afi-table-id"},
    eos{YType::enumeration, "eos"},
    eos_bit{YType::uint32, "eos-bit"},
    hardware_information{YType::str, "hardware-information"},
    label_value{YType::uint32, "label-value"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_pointer{YType::uint32, "ldi-pointer"},
    ldi_referance_count{YType::uint32, "ldi-referance-count"},
    ldi_type{YType::uint32, "ldi-type"},
    leaf_flags{YType::uint32, "leaf-flags"},
    leaf_local_label{YType::uint32, "leaf-local-label"},
    leaf_referance_count{YType::uint32, "leaf-referance-count"},
    leaf_time_in_milli_seconds{YType::uint64, "leaf-time-in-milli-seconds"},
    lspa_flags{YType::uint32, "lspa-flags"},
    lw_ldi_pointer{YType::uint32, "lw-ldi-pointer"},
    lw_ldi_refernace_count{YType::uint32, "lw-ldi-refernace-count"},
    lw_ldi_type{YType::uint32, "lw-ldi-type"},
    lw_shared_ldi_pointer{YType::uint32, "lw-shared-ldi-pointer"},
    multicast_label{YType::boolean, "multicast-label"},
    path_list_flags{YType::uint32, "path-list-flags"},
    path_list_referance_count{YType::uint32, "path-list-referance-count"}
    	,
    ldi_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation>())
	,multicast_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation>())
{
    ldi_information->parent = this;

    multicast_information->parent = this;

    yang_name = "forwarding-detail"; yang_parent_name = "forwarding-details";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::~ForwardingDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::has_data() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_data())
            return true;
    }
    return afi_table_id.is_set
	|| eos.is_set
	|| eos_bit.is_set
	|| hardware_information.is_set
	|| label_value.is_set
	|| ldi_flags.is_set
	|| ldi_pointer.is_set
	|| ldi_referance_count.is_set
	|| ldi_type.is_set
	|| leaf_flags.is_set
	|| leaf_local_label.is_set
	|| leaf_referance_count.is_set
	|| leaf_time_in_milli_seconds.is_set
	|| lspa_flags.is_set
	|| lw_ldi_pointer.is_set
	|| lw_ldi_refernace_count.is_set
	|| lw_ldi_type.is_set
	|| lw_shared_ldi_pointer.is_set
	|| multicast_label.is_set
	|| path_list_flags.is_set
	|| path_list_referance_count.is_set
	|| (ldi_information !=  nullptr && ldi_information->has_data())
	|| (multicast_information !=  nullptr && multicast_information->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::has_operation() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi_table_id.yfilter)
	|| ydk::is_set(eos.yfilter)
	|| ydk::is_set(eos_bit.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(label_value.yfilter)
	|| ydk::is_set(ldi_flags.yfilter)
	|| ydk::is_set(ldi_pointer.yfilter)
	|| ydk::is_set(ldi_referance_count.yfilter)
	|| ydk::is_set(ldi_type.yfilter)
	|| ydk::is_set(leaf_flags.yfilter)
	|| ydk::is_set(leaf_local_label.yfilter)
	|| ydk::is_set(leaf_referance_count.yfilter)
	|| ydk::is_set(leaf_time_in_milli_seconds.yfilter)
	|| ydk::is_set(lspa_flags.yfilter)
	|| ydk::is_set(lw_ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_refernace_count.yfilter)
	|| ydk::is_set(lw_ldi_type.yfilter)
	|| ydk::is_set(lw_shared_ldi_pointer.yfilter)
	|| ydk::is_set(multicast_label.yfilter)
	|| ydk::is_set(path_list_flags.yfilter)
	|| ydk::is_set(path_list_referance_count.yfilter)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-detail";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingDetail' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_table_id.is_set || is_set(afi_table_id.yfilter)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (eos.is_set || is_set(eos.yfilter)) leaf_name_data.push_back(eos.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.yfilter)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (label_value.is_set || is_set(label_value.yfilter)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.yfilter)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.yfilter)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.yfilter)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.yfilter)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.yfilter)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (leaf_local_label.is_set || is_set(leaf_local_label.yfilter)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.yfilter)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.yfilter)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.yfilter)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.yfilter)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.yfilter)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.yfilter)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.yfilter)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information")
    {
        for(auto const & c : label_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation>();
        c->parent = this;
        label_information.push_back(c);
        return c;
    }

    if(child_yang_name == "ldi-information")
    {
        if(ldi_information == nullptr)
        {
            ldi_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation>();
        }
        return ldi_information;
    }

    if(child_yang_name == "multicast-information")
    {
        if(multicast_information == nullptr)
        {
            multicast_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation>();
        }
        return multicast_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldi_information != nullptr)
    {
        children["ldi-information"] = ldi_information;
    }

    if(multicast_information != nullptr)
    {
        children["multicast-information"] = multicast_information;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
        afi_table_id.value_namespace = name_space;
        afi_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos")
    {
        eos = value;
        eos.value_namespace = name_space;
        eos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
        eos_bit.value_namespace = name_space;
        eos_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-value")
    {
        label_value = value;
        label_value.value_namespace = name_space;
        label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
        ldi_flags.value_namespace = name_space;
        ldi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
        ldi_pointer.value_namespace = name_space;
        ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
        ldi_referance_count.value_namespace = name_space;
        ldi_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
        ldi_type.value_namespace = name_space;
        ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
        leaf_flags.value_namespace = name_space;
        leaf_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
        leaf_local_label.value_namespace = name_space;
        leaf_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
        leaf_referance_count.value_namespace = name_space;
        leaf_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
        leaf_time_in_milli_seconds.value_namespace = name_space;
        leaf_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
        lspa_flags.value_namespace = name_space;
        lspa_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
        lw_ldi_pointer.value_namespace = name_space;
        lw_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
        lw_ldi_refernace_count.value_namespace = name_space;
        lw_ldi_refernace_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
        lw_ldi_type.value_namespace = name_space;
        lw_ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
        lw_shared_ldi_pointer.value_namespace = name_space;
        lw_shared_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
        multicast_label.value_namespace = name_space;
        multicast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
        path_list_flags.value_namespace = name_space;
        path_list_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
        path_list_referance_count.value_namespace = name_space;
        path_list_referance_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id.yfilter = yfilter;
    }
    if(value_path == "eos")
    {
        eos.yfilter = yfilter;
    }
    if(value_path == "eos-bit")
    {
        eos_bit.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "label-value")
    {
        label_value.yfilter = yfilter;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count.yfilter = yfilter;
    }
    if(value_path == "ldi-type")
    {
        ldi_type.yfilter = yfilter;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags.yfilter = yfilter;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label.yfilter = yfilter;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count.yfilter = yfilter;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type.yfilter = yfilter;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "multicast-label")
    {
        multicast_label.yfilter = yfilter;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags.yfilter = yfilter;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-information" || name == "ldi-information" || name == "multicast-information" || name == "afi-table-id" || name == "eos" || name == "eos-bit" || name == "hardware-information" || name == "label-value" || name == "ldi-flags" || name == "ldi-pointer" || name == "ldi-referance-count" || name == "ldi-type" || name == "leaf-flags" || name == "leaf-local-label" || name == "leaf-referance-count" || name == "leaf-time-in-milli-seconds" || name == "lspa-flags" || name == "lw-ldi-pointer" || name == "lw-ldi-refernace-count" || name == "lw-ldi-type" || name == "lw-shared-ldi-pointer" || name == "multicast-label" || name == "path-list-flags" || name == "path-list-referance-count")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{
    yang_name = "ldi-information"; yang_parent_name = "forwarding-detail";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::~LdiInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::has_data() const
{
    return ldi_hardware_information.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldi_hardware_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdiInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.yfilter)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
        ldi_hardware_information.value_namespace = name_space;
        ldi_hardware_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-hardware-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::MulticastInformation()
    :
    multicast_encap_id{YType::uint32, "multicast-encap-id"},
    multicast_mol_base_flags{YType::uint32, "multicast-mol-base-flags"},
    multicast_mol_flags{YType::uint16, "multicast-mol-flags"},
    multicast_mol_referance_count{YType::uint16, "multicast-mol-referance-count"},
    multicast_mpls_local_output_paths{YType::uint16, "multicast-mpls-local-output-paths"},
    multicast_mpls_output_paths{YType::uint16, "multicast-mpls-output-paths"},
    multicast_mpls_protocol_output_paths{YType::uint16, "multicast-mpls-protocol-output-paths"},
    multicast_platform_data{YType::str, "multicast-platform-data"},
    multicast_platform_data_length{YType::uint8, "multicast-platform-data-length"},
    multicast_rpf_id{YType::uint32, "multicast-rpf-id"},
    multicast_tunnel_id{YType::uint32, "multicast-tunnel-id"},
    multicast_tunnel_interface_handler{YType::str, "multicast-tunnel-interface-handler"},
    multicast_tunnel_lspvif{YType::uint32, "multicast-tunnel-lspvif"},
    multicast_tunnel_next_hop_information{YType::uint32, "multicast-tunnel-next-hop-information"}
{
    yang_name = "multicast-information"; yang_parent_name = "forwarding-detail";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::~MulticastInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::has_data() const
{
    return multicast_encap_id.is_set
	|| multicast_mol_base_flags.is_set
	|| multicast_mol_flags.is_set
	|| multicast_mol_referance_count.is_set
	|| multicast_mpls_local_output_paths.is_set
	|| multicast_mpls_output_paths.is_set
	|| multicast_mpls_protocol_output_paths.is_set
	|| multicast_platform_data.is_set
	|| multicast_platform_data_length.is_set
	|| multicast_rpf_id.is_set
	|| multicast_tunnel_id.is_set
	|| multicast_tunnel_interface_handler.is_set
	|| multicast_tunnel_lspvif.is_set
	|| multicast_tunnel_next_hop_information.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_encap_id.yfilter)
	|| ydk::is_set(multicast_mol_base_flags.yfilter)
	|| ydk::is_set(multicast_mol_flags.yfilter)
	|| ydk::is_set(multicast_mol_referance_count.yfilter)
	|| ydk::is_set(multicast_mpls_local_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_protocol_output_paths.yfilter)
	|| ydk::is_set(multicast_platform_data.yfilter)
	|| ydk::is_set(multicast_platform_data_length.yfilter)
	|| ydk::is_set(multicast_rpf_id.yfilter)
	|| ydk::is_set(multicast_tunnel_id.yfilter)
	|| ydk::is_set(multicast_tunnel_interface_handler.yfilter)
	|| ydk::is_set(multicast_tunnel_lspvif.yfilter)
	|| ydk::is_set(multicast_tunnel_next_hop_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_encap_id.is_set || is_set(multicast_encap_id.yfilter)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.yfilter)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.yfilter)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.yfilter)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.yfilter)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.yfilter)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.yfilter)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.yfilter)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.yfilter)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.yfilter)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.yfilter)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
        multicast_encap_id.value_namespace = name_space;
        multicast_encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
        multicast_mol_base_flags.value_namespace = name_space;
        multicast_mol_base_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
        multicast_mol_flags.value_namespace = name_space;
        multicast_mol_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
        multicast_mol_referance_count.value_namespace = name_space;
        multicast_mol_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
        multicast_mpls_local_output_paths.value_namespace = name_space;
        multicast_mpls_local_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
        multicast_mpls_output_paths.value_namespace = name_space;
        multicast_mpls_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
        multicast_mpls_protocol_output_paths.value_namespace = name_space;
        multicast_mpls_protocol_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
        multicast_platform_data.value_namespace = name_space;
        multicast_platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
        multicast_platform_data_length.value_namespace = name_space;
        multicast_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
        multicast_rpf_id.value_namespace = name_space;
        multicast_rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
        multicast_tunnel_id.value_namespace = name_space;
        multicast_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
        multicast_tunnel_interface_handler.value_namespace = name_space;
        multicast_tunnel_interface_handler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
        multicast_tunnel_lspvif.value_namespace = name_space;
        multicast_tunnel_lspvif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
        multicast_tunnel_next_hop_information.value_namespace = name_space;
        multicast_tunnel_next_hop_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-encap-id" || name == "multicast-mol-base-flags" || name == "multicast-mol-flags" || name == "multicast-mol-referance-count" || name == "multicast-mpls-local-output-paths" || name == "multicast-mpls-output-paths" || name == "multicast-mpls-protocol-output-paths" || name == "multicast-platform-data" || name == "multicast-platform-data-length" || name == "multicast-rpf-id" || name == "multicast-tunnel-id" || name == "multicast-tunnel-interface-handler" || name == "multicast-tunnel-lspvif" || name == "multicast-tunnel-next-hop-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformation()
    :
    label_information_next_hop_protocol{YType::enumeration, "label-information-next-hop-protocol"},
    label_information_next_hop_string{YType::str, "label-information-next-hop-string"},
    label_information_next_hop_type{YType::enumeration, "label-information-next-hop-type"},
    label_information_path_index{YType::uint32, "label-information-path-index"},
    label_information_route_version{YType::uint64, "label-information-route-version"},
    label_information_time_in_milli_seconds{YType::uint64, "label-information-time-in-milli-seconds"},
    label_information_type{YType::uint32, "label-information-type"},
    local_label{YType::uint32, "local-label"},
    mpls_adjacency_flags{YType::uint32, "mpls-adjacency-flags"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_interface_string{YType::str, "outgoing-interface-string"},
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_string{YType::str, "outgoing-label-string"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    prefix_or_id{YType::str, "prefix-or-id"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"}
    	,
    exact_route_hash_info(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo>())
	,label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail>())
{
    exact_route_hash_info->parent = this;

    label_information_detail->parent = this;

    yang_name = "label-information"; yang_parent_name = "forwarding-detail";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::~LabelInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::has_data() const
{
    return label_information_next_hop_protocol.is_set
	|| label_information_next_hop_string.is_set
	|| label_information_next_hop_type.is_set
	|| label_information_path_index.is_set
	|| label_information_route_version.is_set
	|| label_information_time_in_milli_seconds.is_set
	|| label_information_type.is_set
	|| local_label.is_set
	|| mpls_adjacency_flags.is_set
	|| outgoing_interface.is_set
	|| outgoing_interface_string.is_set
	|| outgoing_label.is_set
	|| outgoing_label_string.is_set
	|| outgoing_physical_interface.is_set
	|| prefix_or_id.is_set
	|| tunnel_id_present.is_set
	|| tunnel_interface.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_data())
	|| (label_information_detail !=  nullptr && label_information_detail->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_information_next_hop_protocol.yfilter)
	|| ydk::is_set(label_information_next_hop_string.yfilter)
	|| ydk::is_set(label_information_next_hop_type.yfilter)
	|| ydk::is_set(label_information_path_index.yfilter)
	|| ydk::is_set(label_information_route_version.yfilter)
	|| ydk::is_set(label_information_time_in_milli_seconds.yfilter)
	|| ydk::is_set(label_information_type.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(mpls_adjacency_flags.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_interface_string.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_string.yfilter)
	|| ydk::is_set(outgoing_physical_interface.yfilter)
	|| ydk::is_set(prefix_or_id.yfilter)
	|| ydk::is_set(tunnel_id_present.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_operation())
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.yfilter)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.yfilter)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.yfilter)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.yfilter)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.yfilter)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());
    if (label_information_type.is_set || is_set(label_information_type.yfilter)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.yfilter)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_interface_string.is_set || is_set(outgoing_interface_string.yfilter)) leaf_name_data.push_back(outgoing_interface_string.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.yfilter)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.yfilter)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.yfilter)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.yfilter)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exact-route-hash-info")
    {
        if(exact_route_hash_info == nullptr)
        {
            exact_route_hash_info = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo>();
        }
        return exact_route_hash_info;
    }

    if(child_yang_name == "label-information-detail")
    {
        if(label_information_detail == nullptr)
        {
            label_information_detail = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail>();
        }
        return label_information_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exact_route_hash_info != nullptr)
    {
        children["exact-route-hash-info"] = exact_route_hash_info;
    }

    if(label_information_detail != nullptr)
    {
        children["label-information-detail"] = label_information_detail;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
        label_information_next_hop_protocol.value_namespace = name_space;
        label_information_next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
        label_information_next_hop_string.value_namespace = name_space;
        label_information_next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
        label_information_next_hop_type.value_namespace = name_space;
        label_information_next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
        label_information_path_index.value_namespace = name_space;
        label_information_path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
        label_information_route_version.value_namespace = name_space;
        label_information_route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
        label_information_time_in_milli_seconds.value_namespace = name_space;
        label_information_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-type")
    {
        label_information_type = value;
        label_information_type.value_namespace = name_space;
        label_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
        mpls_adjacency_flags.value_namespace = name_space;
        mpls_adjacency_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string = value;
        outgoing_interface_string.value_namespace = name_space;
        outgoing_interface_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
        outgoing_label_string.value_namespace = name_space;
        outgoing_label_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
        outgoing_physical_interface.value_namespace = name_space;
        outgoing_physical_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
        prefix_or_id.value_namespace = name_space;
        prefix_or_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
        tunnel_id_present.value_namespace = name_space;
        tunnel_id_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type.yfilter = yfilter;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index.yfilter = yfilter;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version.yfilter = yfilter;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "label-information-type")
    {
        label_information_type.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface.yfilter = yfilter;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-route-hash-info" || name == "label-information-detail" || name == "label-information-next-hop-protocol" || name == "label-information-next-hop-string" || name == "label-information-next-hop-type" || name == "label-information-path-index" || name == "label-information-route-version" || name == "label-information-time-in-milli-seconds" || name == "label-information-type" || name == "local-label" || name == "mpls-adjacency-flags" || name == "outgoing-interface" || name == "outgoing-interface-string" || name == "outgoing-label" || name == "outgoing-label-string" || name == "outgoing-physical-interface" || name == "prefix-or-id" || name == "tunnel-id-present" || name == "tunnel-interface" || name == "tx-bytes" || name == "tx-packets")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    mac_size{YType::uint32, "mac-size"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"},
    status{YType::int32, "status"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "label-information-detail"; yang_parent_name = "label-information";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::has_data() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_data())
            return true;
    }
    return l3_mtu.is_set
	|| mac_size.is_set
	|| next_hop_interface.is_set
	|| next_hop_protocol.is_set
	|| next_hop_string.is_set
	|| status.is_set
	|| total_encapsulation_size.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::has_operation() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(l3_mtu.yfilter)
	|| ydk::is_set(mac_size.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_protocol.yfilter)
	|| ydk::is_set(next_hop_string.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(total_encapsulation_size.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformationDetail' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.yfilter)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.yfilter)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.yfilter)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.yfilter)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.yfilter)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        for(auto const & c : label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack>();
        c->parent = this;
        label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
        l3_mtu.value_namespace = name_space;
        l3_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
        mac_size.value_namespace = name_space;
        mac_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
        next_hop_protocol.value_namespace = name_space;
        next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
        next_hop_string.value_namespace = name_space;
        next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
        total_encapsulation_size.value_namespace = name_space;
        total_encapsulation_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu.yfilter = yfilter;
    }
    if(value_path == "mac-size")
    {
        mac_size.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "l3-mtu" || name == "mac-size" || name == "next-hop-interface" || name == "next-hop-protocol" || name == "next-hop-string" || name == "status" || name == "total-encapsulation-size" || name == "transmit-number-of-bytes-switched" || name == "transmit-number-of-packets-switched")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "label-stack"; yang_parent_name = "label-information-detail";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::~LabelStack()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelStack' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::ExactRouteHashInfo()
    :
    hash_index{YType::uint8, "hash-index"},
    hash_index_is_valid{YType::boolean, "hash-index-is-valid"}
{
    yang_name = "exact-route-hash-info"; yang_parent_name = "label-information";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::~ExactRouteHashInfo()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::has_data() const
{
    return hash_index.is_set
	|| hash_index_is_valid.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_index.yfilter)
	|| ydk::is_set(hash_index_is_valid.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-route-hash-info";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExactRouteHashInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_index.is_set || is_set(hash_index.yfilter)) leaf_name_data.push_back(hash_index.get_name_leafdata());
    if (hash_index_is_valid.is_set || is_set(hash_index_is_valid.yfilter)) leaf_name_data.push_back(hash_index_is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-index")
    {
        hash_index = value;
        hash_index.value_namespace = name_space;
        hash_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid = value;
        hash_index_is_valid.value_namespace = name_space;
        hash_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-index")
    {
        hash_index.yfilter = yfilter;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-index" || name == "hash-index-is-valid")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Informations()
{
    yang_name = "informations"; yang_parent_name = "label-fib";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::~Informations()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::has_data() const
{
    for (std::size_t index=0; index<information.size(); index++)
    {
        if(information[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::has_operation() const
{
    for (std::size_t index=0; index<information.size(); index++)
    {
        if(information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "informations";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Informations' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        for(auto const & c : information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information>();
        c->parent = this;
        information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::Information()
    :
    afi_table_id{YType::uint32, "afi-table-id"},
    eos{YType::enumeration, "eos"},
    eos_bit{YType::uint32, "eos-bit"},
    hardware_information{YType::str, "hardware-information"},
    label_value{YType::uint32, "label-value"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_pointer{YType::uint32, "ldi-pointer"},
    ldi_referance_count{YType::uint32, "ldi-referance-count"},
    ldi_type{YType::uint32, "ldi-type"},
    leaf_flags{YType::uint32, "leaf-flags"},
    leaf_local_label{YType::uint32, "leaf-local-label"},
    leaf_referance_count{YType::uint32, "leaf-referance-count"},
    leaf_time_in_milli_seconds{YType::uint64, "leaf-time-in-milli-seconds"},
    lspa_flags{YType::uint32, "lspa-flags"},
    lw_ldi_pointer{YType::uint32, "lw-ldi-pointer"},
    lw_ldi_refernace_count{YType::uint32, "lw-ldi-refernace-count"},
    lw_ldi_type{YType::uint32, "lw-ldi-type"},
    lw_shared_ldi_pointer{YType::uint32, "lw-shared-ldi-pointer"},
    multicast_label{YType::boolean, "multicast-label"},
    path_list_flags{YType::uint32, "path-list-flags"},
    path_list_referance_count{YType::uint32, "path-list-referance-count"}
    	,
    ldi_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation>())
	,multicast_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation>())
{
    ldi_information->parent = this;

    multicast_information->parent = this;

    yang_name = "information"; yang_parent_name = "informations";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::~Information()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::has_data() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_data())
            return true;
    }
    return afi_table_id.is_set
	|| eos.is_set
	|| eos_bit.is_set
	|| hardware_information.is_set
	|| label_value.is_set
	|| ldi_flags.is_set
	|| ldi_pointer.is_set
	|| ldi_referance_count.is_set
	|| ldi_type.is_set
	|| leaf_flags.is_set
	|| leaf_local_label.is_set
	|| leaf_referance_count.is_set
	|| leaf_time_in_milli_seconds.is_set
	|| lspa_flags.is_set
	|| lw_ldi_pointer.is_set
	|| lw_ldi_refernace_count.is_set
	|| lw_ldi_type.is_set
	|| lw_shared_ldi_pointer.is_set
	|| multicast_label.is_set
	|| path_list_flags.is_set
	|| path_list_referance_count.is_set
	|| (ldi_information !=  nullptr && ldi_information->has_data())
	|| (multicast_information !=  nullptr && multicast_information->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::has_operation() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi_table_id.yfilter)
	|| ydk::is_set(eos.yfilter)
	|| ydk::is_set(eos_bit.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(label_value.yfilter)
	|| ydk::is_set(ldi_flags.yfilter)
	|| ydk::is_set(ldi_pointer.yfilter)
	|| ydk::is_set(ldi_referance_count.yfilter)
	|| ydk::is_set(ldi_type.yfilter)
	|| ydk::is_set(leaf_flags.yfilter)
	|| ydk::is_set(leaf_local_label.yfilter)
	|| ydk::is_set(leaf_referance_count.yfilter)
	|| ydk::is_set(leaf_time_in_milli_seconds.yfilter)
	|| ydk::is_set(lspa_flags.yfilter)
	|| ydk::is_set(lw_ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_refernace_count.yfilter)
	|| ydk::is_set(lw_ldi_type.yfilter)
	|| ydk::is_set(lw_shared_ldi_pointer.yfilter)
	|| ydk::is_set(multicast_label.yfilter)
	|| ydk::is_set(path_list_flags.yfilter)
	|| ydk::is_set(path_list_referance_count.yfilter)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_table_id.is_set || is_set(afi_table_id.yfilter)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (eos.is_set || is_set(eos.yfilter)) leaf_name_data.push_back(eos.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.yfilter)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (label_value.is_set || is_set(label_value.yfilter)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.yfilter)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.yfilter)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.yfilter)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.yfilter)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.yfilter)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (leaf_local_label.is_set || is_set(leaf_local_label.yfilter)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.yfilter)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.yfilter)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.yfilter)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.yfilter)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.yfilter)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.yfilter)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.yfilter)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information")
    {
        for(auto const & c : label_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation>();
        c->parent = this;
        label_information.push_back(c);
        return c;
    }

    if(child_yang_name == "ldi-information")
    {
        if(ldi_information == nullptr)
        {
            ldi_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation>();
        }
        return ldi_information;
    }

    if(child_yang_name == "multicast-information")
    {
        if(multicast_information == nullptr)
        {
            multicast_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation>();
        }
        return multicast_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldi_information != nullptr)
    {
        children["ldi-information"] = ldi_information;
    }

    if(multicast_information != nullptr)
    {
        children["multicast-information"] = multicast_information;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
        afi_table_id.value_namespace = name_space;
        afi_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos")
    {
        eos = value;
        eos.value_namespace = name_space;
        eos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
        eos_bit.value_namespace = name_space;
        eos_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-value")
    {
        label_value = value;
        label_value.value_namespace = name_space;
        label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
        ldi_flags.value_namespace = name_space;
        ldi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
        ldi_pointer.value_namespace = name_space;
        ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
        ldi_referance_count.value_namespace = name_space;
        ldi_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
        ldi_type.value_namespace = name_space;
        ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
        leaf_flags.value_namespace = name_space;
        leaf_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
        leaf_local_label.value_namespace = name_space;
        leaf_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
        leaf_referance_count.value_namespace = name_space;
        leaf_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
        leaf_time_in_milli_seconds.value_namespace = name_space;
        leaf_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
        lspa_flags.value_namespace = name_space;
        lspa_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
        lw_ldi_pointer.value_namespace = name_space;
        lw_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
        lw_ldi_refernace_count.value_namespace = name_space;
        lw_ldi_refernace_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
        lw_ldi_type.value_namespace = name_space;
        lw_ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
        lw_shared_ldi_pointer.value_namespace = name_space;
        lw_shared_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
        multicast_label.value_namespace = name_space;
        multicast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
        path_list_flags.value_namespace = name_space;
        path_list_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
        path_list_referance_count.value_namespace = name_space;
        path_list_referance_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id.yfilter = yfilter;
    }
    if(value_path == "eos")
    {
        eos.yfilter = yfilter;
    }
    if(value_path == "eos-bit")
    {
        eos_bit.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "label-value")
    {
        label_value.yfilter = yfilter;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count.yfilter = yfilter;
    }
    if(value_path == "ldi-type")
    {
        ldi_type.yfilter = yfilter;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags.yfilter = yfilter;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label.yfilter = yfilter;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count.yfilter = yfilter;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type.yfilter = yfilter;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "multicast-label")
    {
        multicast_label.yfilter = yfilter;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags.yfilter = yfilter;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-information" || name == "ldi-information" || name == "multicast-information" || name == "afi-table-id" || name == "eos" || name == "eos-bit" || name == "hardware-information" || name == "label-value" || name == "ldi-flags" || name == "ldi-pointer" || name == "ldi-referance-count" || name == "ldi-type" || name == "leaf-flags" || name == "leaf-local-label" || name == "leaf-referance-count" || name == "leaf-time-in-milli-seconds" || name == "lspa-flags" || name == "lw-ldi-pointer" || name == "lw-ldi-refernace-count" || name == "lw-ldi-type" || name == "lw-shared-ldi-pointer" || name == "multicast-label" || name == "path-list-flags" || name == "path-list-referance-count")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{
    yang_name = "ldi-information"; yang_parent_name = "information";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::~LdiInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::has_data() const
{
    return ldi_hardware_information.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldi_hardware_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdiInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.yfilter)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
        ldi_hardware_information.value_namespace = name_space;
        ldi_hardware_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-hardware-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::MulticastInformation()
    :
    multicast_encap_id{YType::uint32, "multicast-encap-id"},
    multicast_mol_base_flags{YType::uint32, "multicast-mol-base-flags"},
    multicast_mol_flags{YType::uint16, "multicast-mol-flags"},
    multicast_mol_referance_count{YType::uint16, "multicast-mol-referance-count"},
    multicast_mpls_local_output_paths{YType::uint16, "multicast-mpls-local-output-paths"},
    multicast_mpls_output_paths{YType::uint16, "multicast-mpls-output-paths"},
    multicast_mpls_protocol_output_paths{YType::uint16, "multicast-mpls-protocol-output-paths"},
    multicast_platform_data{YType::str, "multicast-platform-data"},
    multicast_platform_data_length{YType::uint8, "multicast-platform-data-length"},
    multicast_rpf_id{YType::uint32, "multicast-rpf-id"},
    multicast_tunnel_id{YType::uint32, "multicast-tunnel-id"},
    multicast_tunnel_interface_handler{YType::str, "multicast-tunnel-interface-handler"},
    multicast_tunnel_lspvif{YType::uint32, "multicast-tunnel-lspvif"},
    multicast_tunnel_next_hop_information{YType::uint32, "multicast-tunnel-next-hop-information"}
{
    yang_name = "multicast-information"; yang_parent_name = "information";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::~MulticastInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::has_data() const
{
    return multicast_encap_id.is_set
	|| multicast_mol_base_flags.is_set
	|| multicast_mol_flags.is_set
	|| multicast_mol_referance_count.is_set
	|| multicast_mpls_local_output_paths.is_set
	|| multicast_mpls_output_paths.is_set
	|| multicast_mpls_protocol_output_paths.is_set
	|| multicast_platform_data.is_set
	|| multicast_platform_data_length.is_set
	|| multicast_rpf_id.is_set
	|| multicast_tunnel_id.is_set
	|| multicast_tunnel_interface_handler.is_set
	|| multicast_tunnel_lspvif.is_set
	|| multicast_tunnel_next_hop_information.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_encap_id.yfilter)
	|| ydk::is_set(multicast_mol_base_flags.yfilter)
	|| ydk::is_set(multicast_mol_flags.yfilter)
	|| ydk::is_set(multicast_mol_referance_count.yfilter)
	|| ydk::is_set(multicast_mpls_local_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_protocol_output_paths.yfilter)
	|| ydk::is_set(multicast_platform_data.yfilter)
	|| ydk::is_set(multicast_platform_data_length.yfilter)
	|| ydk::is_set(multicast_rpf_id.yfilter)
	|| ydk::is_set(multicast_tunnel_id.yfilter)
	|| ydk::is_set(multicast_tunnel_interface_handler.yfilter)
	|| ydk::is_set(multicast_tunnel_lspvif.yfilter)
	|| ydk::is_set(multicast_tunnel_next_hop_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_encap_id.is_set || is_set(multicast_encap_id.yfilter)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.yfilter)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.yfilter)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.yfilter)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.yfilter)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.yfilter)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.yfilter)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.yfilter)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.yfilter)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.yfilter)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.yfilter)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
        multicast_encap_id.value_namespace = name_space;
        multicast_encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
        multicast_mol_base_flags.value_namespace = name_space;
        multicast_mol_base_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
        multicast_mol_flags.value_namespace = name_space;
        multicast_mol_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
        multicast_mol_referance_count.value_namespace = name_space;
        multicast_mol_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
        multicast_mpls_local_output_paths.value_namespace = name_space;
        multicast_mpls_local_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
        multicast_mpls_output_paths.value_namespace = name_space;
        multicast_mpls_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
        multicast_mpls_protocol_output_paths.value_namespace = name_space;
        multicast_mpls_protocol_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
        multicast_platform_data.value_namespace = name_space;
        multicast_platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
        multicast_platform_data_length.value_namespace = name_space;
        multicast_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
        multicast_rpf_id.value_namespace = name_space;
        multicast_rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
        multicast_tunnel_id.value_namespace = name_space;
        multicast_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
        multicast_tunnel_interface_handler.value_namespace = name_space;
        multicast_tunnel_interface_handler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
        multicast_tunnel_lspvif.value_namespace = name_space;
        multicast_tunnel_lspvif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
        multicast_tunnel_next_hop_information.value_namespace = name_space;
        multicast_tunnel_next_hop_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-encap-id" || name == "multicast-mol-base-flags" || name == "multicast-mol-flags" || name == "multicast-mol-referance-count" || name == "multicast-mpls-local-output-paths" || name == "multicast-mpls-output-paths" || name == "multicast-mpls-protocol-output-paths" || name == "multicast-platform-data" || name == "multicast-platform-data-length" || name == "multicast-rpf-id" || name == "multicast-tunnel-id" || name == "multicast-tunnel-interface-handler" || name == "multicast-tunnel-lspvif" || name == "multicast-tunnel-next-hop-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformation()
    :
    label_information_next_hop_protocol{YType::enumeration, "label-information-next-hop-protocol"},
    label_information_next_hop_string{YType::str, "label-information-next-hop-string"},
    label_information_next_hop_type{YType::enumeration, "label-information-next-hop-type"},
    label_information_path_index{YType::uint32, "label-information-path-index"},
    label_information_route_version{YType::uint64, "label-information-route-version"},
    label_information_time_in_milli_seconds{YType::uint64, "label-information-time-in-milli-seconds"},
    label_information_type{YType::uint32, "label-information-type"},
    local_label{YType::uint32, "local-label"},
    mpls_adjacency_flags{YType::uint32, "mpls-adjacency-flags"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_interface_string{YType::str, "outgoing-interface-string"},
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_string{YType::str, "outgoing-label-string"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    prefix_or_id{YType::str, "prefix-or-id"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"}
    	,
    exact_route_hash_info(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo>())
	,label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail>())
{
    exact_route_hash_info->parent = this;

    label_information_detail->parent = this;

    yang_name = "label-information"; yang_parent_name = "information";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::~LabelInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::has_data() const
{
    return label_information_next_hop_protocol.is_set
	|| label_information_next_hop_string.is_set
	|| label_information_next_hop_type.is_set
	|| label_information_path_index.is_set
	|| label_information_route_version.is_set
	|| label_information_time_in_milli_seconds.is_set
	|| label_information_type.is_set
	|| local_label.is_set
	|| mpls_adjacency_flags.is_set
	|| outgoing_interface.is_set
	|| outgoing_interface_string.is_set
	|| outgoing_label.is_set
	|| outgoing_label_string.is_set
	|| outgoing_physical_interface.is_set
	|| prefix_or_id.is_set
	|| tunnel_id_present.is_set
	|| tunnel_interface.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_data())
	|| (label_information_detail !=  nullptr && label_information_detail->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_information_next_hop_protocol.yfilter)
	|| ydk::is_set(label_information_next_hop_string.yfilter)
	|| ydk::is_set(label_information_next_hop_type.yfilter)
	|| ydk::is_set(label_information_path_index.yfilter)
	|| ydk::is_set(label_information_route_version.yfilter)
	|| ydk::is_set(label_information_time_in_milli_seconds.yfilter)
	|| ydk::is_set(label_information_type.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(mpls_adjacency_flags.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_interface_string.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_string.yfilter)
	|| ydk::is_set(outgoing_physical_interface.yfilter)
	|| ydk::is_set(prefix_or_id.yfilter)
	|| ydk::is_set(tunnel_id_present.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_operation())
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.yfilter)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.yfilter)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.yfilter)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.yfilter)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.yfilter)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());
    if (label_information_type.is_set || is_set(label_information_type.yfilter)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.yfilter)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_interface_string.is_set || is_set(outgoing_interface_string.yfilter)) leaf_name_data.push_back(outgoing_interface_string.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.yfilter)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.yfilter)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.yfilter)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.yfilter)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exact-route-hash-info")
    {
        if(exact_route_hash_info == nullptr)
        {
            exact_route_hash_info = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo>();
        }
        return exact_route_hash_info;
    }

    if(child_yang_name == "label-information-detail")
    {
        if(label_information_detail == nullptr)
        {
            label_information_detail = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail>();
        }
        return label_information_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exact_route_hash_info != nullptr)
    {
        children["exact-route-hash-info"] = exact_route_hash_info;
    }

    if(label_information_detail != nullptr)
    {
        children["label-information-detail"] = label_information_detail;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
        label_information_next_hop_protocol.value_namespace = name_space;
        label_information_next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
        label_information_next_hop_string.value_namespace = name_space;
        label_information_next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
        label_information_next_hop_type.value_namespace = name_space;
        label_information_next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
        label_information_path_index.value_namespace = name_space;
        label_information_path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
        label_information_route_version.value_namespace = name_space;
        label_information_route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
        label_information_time_in_milli_seconds.value_namespace = name_space;
        label_information_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-type")
    {
        label_information_type = value;
        label_information_type.value_namespace = name_space;
        label_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
        mpls_adjacency_flags.value_namespace = name_space;
        mpls_adjacency_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string = value;
        outgoing_interface_string.value_namespace = name_space;
        outgoing_interface_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
        outgoing_label_string.value_namespace = name_space;
        outgoing_label_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
        outgoing_physical_interface.value_namespace = name_space;
        outgoing_physical_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
        prefix_or_id.value_namespace = name_space;
        prefix_or_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
        tunnel_id_present.value_namespace = name_space;
        tunnel_id_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type.yfilter = yfilter;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index.yfilter = yfilter;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version.yfilter = yfilter;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "label-information-type")
    {
        label_information_type.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface.yfilter = yfilter;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-route-hash-info" || name == "label-information-detail" || name == "label-information-next-hop-protocol" || name == "label-information-next-hop-string" || name == "label-information-next-hop-type" || name == "label-information-path-index" || name == "label-information-route-version" || name == "label-information-time-in-milli-seconds" || name == "label-information-type" || name == "local-label" || name == "mpls-adjacency-flags" || name == "outgoing-interface" || name == "outgoing-interface-string" || name == "outgoing-label" || name == "outgoing-label-string" || name == "outgoing-physical-interface" || name == "prefix-or-id" || name == "tunnel-id-present" || name == "tunnel-interface" || name == "tx-bytes" || name == "tx-packets")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    mac_size{YType::uint32, "mac-size"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"},
    status{YType::int32, "status"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "label-information-detail"; yang_parent_name = "label-information";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::has_data() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_data())
            return true;
    }
    return l3_mtu.is_set
	|| mac_size.is_set
	|| next_hop_interface.is_set
	|| next_hop_protocol.is_set
	|| next_hop_string.is_set
	|| status.is_set
	|| total_encapsulation_size.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::has_operation() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(l3_mtu.yfilter)
	|| ydk::is_set(mac_size.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_protocol.yfilter)
	|| ydk::is_set(next_hop_string.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(total_encapsulation_size.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformationDetail' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.yfilter)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.yfilter)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.yfilter)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.yfilter)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.yfilter)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        for(auto const & c : label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack>();
        c->parent = this;
        label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
        l3_mtu.value_namespace = name_space;
        l3_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
        mac_size.value_namespace = name_space;
        mac_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
        next_hop_protocol.value_namespace = name_space;
        next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
        next_hop_string.value_namespace = name_space;
        next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
        total_encapsulation_size.value_namespace = name_space;
        total_encapsulation_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu.yfilter = yfilter;
    }
    if(value_path == "mac-size")
    {
        mac_size.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "l3-mtu" || name == "mac-size" || name == "next-hop-interface" || name == "next-hop-protocol" || name == "next-hop-string" || name == "status" || name == "total-encapsulation-size" || name == "transmit-number-of-bytes-switched" || name == "transmit-number-of-packets-switched")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "label-stack"; yang_parent_name = "label-information-detail";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::~LabelStack()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelStack' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::ExactRouteHashInfo()
    :
    hash_index{YType::uint8, "hash-index"},
    hash_index_is_valid{YType::boolean, "hash-index-is-valid"}
{
    yang_name = "exact-route-hash-info"; yang_parent_name = "label-information";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::~ExactRouteHashInfo()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::has_data() const
{
    return hash_index.is_set
	|| hash_index_is_valid.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_index.yfilter)
	|| ydk::is_set(hash_index_is_valid.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-route-hash-info";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExactRouteHashInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_index.is_set || is_set(hash_index.yfilter)) leaf_name_data.push_back(hash_index.get_name_leafdata());
    if (hash_index_is_valid.is_set || is_set(hash_index_is_valid.yfilter)) leaf_name_data.push_back(hash_index_is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-index")
    {
        hash_index = value;
        hash_index.value_namespace = name_space;
        hash_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid = value;
        hash_index_is_valid.value_namespace = name_space;
        hash_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-index")
    {
        hash_index.yfilter = yfilter;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-index" || name == "hash-index-is-valid")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::LabelSecurity()
    :
    interfaces(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces>())
	,summary(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary>())
{
    interfaces->parent = this;

    summary->parent = this;

    yang_name = "label-security"; yang_parent_name = "label-fib";
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::~LabelSecurity()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-security";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelSecurity' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "summary")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "label-security";
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::~Interfaces()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    mld_enabled{YType::boolean, "mld-enabled"},
    mld_supported{YType::boolean, "mld-supported"},
    multi_label_drops{YType::uint64, "multi-label-drops"},
    rpf_drops{YType::uint64, "rpf-drops"},
    rpf_enabled{YType::boolean, "rpf-enabled"},
    rpf_supported{YType::boolean, "rpf-supported"},
    rpfifh{YType::str, "rpfifh"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::~Interface()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| mld_enabled.is_set
	|| mld_supported.is_set
	|| multi_label_drops.is_set
	|| rpf_drops.is_set
	|| rpf_enabled.is_set
	|| rpf_supported.is_set
	|| rpfifh.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mld_enabled.yfilter)
	|| ydk::is_set(mld_supported.yfilter)
	|| ydk::is_set(multi_label_drops.yfilter)
	|| ydk::is_set(rpf_drops.yfilter)
	|| ydk::is_set(rpf_enabled.yfilter)
	|| ydk::is_set(rpf_supported.yfilter)
	|| ydk::is_set(rpfifh.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mld_enabled.is_set || is_set(mld_enabled.yfilter)) leaf_name_data.push_back(mld_enabled.get_name_leafdata());
    if (mld_supported.is_set || is_set(mld_supported.yfilter)) leaf_name_data.push_back(mld_supported.get_name_leafdata());
    if (multi_label_drops.is_set || is_set(multi_label_drops.yfilter)) leaf_name_data.push_back(multi_label_drops.get_name_leafdata());
    if (rpf_drops.is_set || is_set(rpf_drops.yfilter)) leaf_name_data.push_back(rpf_drops.get_name_leafdata());
    if (rpf_enabled.is_set || is_set(rpf_enabled.yfilter)) leaf_name_data.push_back(rpf_enabled.get_name_leafdata());
    if (rpf_supported.is_set || is_set(rpf_supported.yfilter)) leaf_name_data.push_back(rpf_supported.get_name_leafdata());
    if (rpfifh.is_set || is_set(rpfifh.yfilter)) leaf_name_data.push_back(rpfifh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-enabled")
    {
        mld_enabled = value;
        mld_enabled.value_namespace = name_space;
        mld_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-supported")
    {
        mld_supported = value;
        mld_supported.value_namespace = name_space;
        mld_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-label-drops")
    {
        multi_label_drops = value;
        multi_label_drops.value_namespace = name_space;
        multi_label_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops = value;
        rpf_drops.value_namespace = name_space;
        rpf_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-enabled")
    {
        rpf_enabled = value;
        rpf_enabled.value_namespace = name_space;
        rpf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-supported")
    {
        rpf_supported = value;
        rpf_supported.value_namespace = name_space;
        rpf_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfifh")
    {
        rpfifh = value;
        rpfifh.value_namespace = name_space;
        rpfifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mld-enabled")
    {
        mld_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-supported")
    {
        mld_supported.yfilter = yfilter;
    }
    if(value_path == "multi-label-drops")
    {
        multi_label_drops.yfilter = yfilter;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops.yfilter = yfilter;
    }
    if(value_path == "rpf-enabled")
    {
        rpf_enabled.yfilter = yfilter;
    }
    if(value_path == "rpf-supported")
    {
        rpf_supported.yfilter = yfilter;
    }
    if(value_path == "rpfifh")
    {
        rpfifh.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "mld-enabled" || name == "mld-supported" || name == "multi-label-drops" || name == "rpf-drops" || name == "rpf-enabled" || name == "rpf-supported" || name == "rpfifh")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::Summary()
    :
    multi_label_drops{YType::uint64, "multi-label-drops"},
    rpf_drops{YType::uint64, "rpf-drops"}
{
    yang_name = "summary"; yang_parent_name = "label-security";
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::~Summary()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::has_data() const
{
    return multi_label_drops.is_set
	|| rpf_drops.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_label_drops.yfilter)
	|| ydk::is_set(rpf_drops.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_label_drops.is_set || is_set(multi_label_drops.yfilter)) leaf_name_data.push_back(multi_label_drops.get_name_leafdata());
    if (rpf_drops.is_set || is_set(rpf_drops.yfilter)) leaf_name_data.push_back(rpf_drops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-label-drops")
    {
        multi_label_drops = value;
        multi_label_drops.value_namespace = name_space;
        multi_label_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops = value;
        rpf_drops.value_namespace = name_space;
        rpf_drops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-label-drops")
    {
        multi_label_drops.yfilter = yfilter;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-label-drops" || name == "rpf-drops")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::Tunnel()
    :
    forwarding_tunnels(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels>())
{
    forwarding_tunnels->parent = this;

    yang_name = "tunnel"; yang_parent_name = "node";
}

MplsForwarding::Nodes::Node::Tunnel::~Tunnel()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::has_data() const
{
    return (forwarding_tunnels !=  nullptr && forwarding_tunnels->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| (forwarding_tunnels !=  nullptr && forwarding_tunnels->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-tunnels")
    {
        if(forwarding_tunnels == nullptr)
        {
            forwarding_tunnels = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels>();
        }
        return forwarding_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding_tunnels != nullptr)
    {
        children["forwarding-tunnels"] = forwarding_tunnels;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-tunnels")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnels()
{
    yang_name = "forwarding-tunnels"; yang_parent_name = "tunnel";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::~ForwardingTunnels()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::has_data() const
{
    for (std::size_t index=0; index<forwarding_tunnel.size(); index++)
    {
        if(forwarding_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::has_operation() const
{
    for (std::size_t index=0; index<forwarding_tunnel.size(); index++)
    {
        if(forwarding_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-tunnels";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingTunnels' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-tunnel")
    {
        for(auto const & c : forwarding_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel>();
        c->parent = this;
        forwarding_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-tunnel")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::ForwardingTunnel()
    :
    interface_name{YType::str, "interface-name"}
    	,
    fwdg(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg>())
	,tunnel_info(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo>())
{
    fwdg->parent = this;

    tunnel_info->parent = this;

    yang_name = "forwarding-tunnel"; yang_parent_name = "forwarding-tunnels";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::~ForwardingTunnel()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::has_data() const
{
    return interface_name.is_set
	|| (fwdg !=  nullptr && fwdg->has_data())
	|| (tunnel_info !=  nullptr && tunnel_info->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (fwdg !=  nullptr && fwdg->has_operation())
	|| (tunnel_info !=  nullptr && tunnel_info->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-tunnel" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingTunnel' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwdg")
    {
        if(fwdg == nullptr)
        {
            fwdg = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg>();
        }
        return fwdg;
    }

    if(child_yang_name == "tunnel-info")
    {
        if(tunnel_info == nullptr)
        {
            tunnel_info = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo>();
        }
        return tunnel_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fwdg != nullptr)
    {
        children["fwdg"] = fwdg;
    }

    if(tunnel_info != nullptr)
    {
        children["tunnel-info"] = tunnel_info;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdg" || name == "tunnel-info" || name == "interface-name")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::TunnelInfo()
    :
    tunnel_fwd_class{YType::uint8, "tunnel-fwd-class"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    tunnel_is_programmed_to_drop{YType::boolean, "tunnel-is-programmed-to-drop"},
    tunnel_is_srte{YType::boolean, "tunnel-is-srte"},
    tunnel_load_metric{YType::uint8, "tunnel-load-metric"},
    tunnel_local_label{YType::uint32, "tunnel-local-label"},
    tunnel_resolution_incomplete{YType::boolean, "tunnel-resolution-incomplete"},
    tunnel_resolution_inconsistent{YType::boolean, "tunnel-resolution-inconsistent"}
{
    yang_name = "tunnel-info"; yang_parent_name = "forwarding-tunnel";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::~TunnelInfo()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::has_data() const
{
    return tunnel_fwd_class.is_set
	|| tunnel_interface_name.is_set
	|| tunnel_is_programmed_to_drop.is_set
	|| tunnel_is_srte.is_set
	|| tunnel_load_metric.is_set
	|| tunnel_local_label.is_set
	|| tunnel_resolution_incomplete.is_set
	|| tunnel_resolution_inconsistent.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_fwd_class.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(tunnel_is_programmed_to_drop.yfilter)
	|| ydk::is_set(tunnel_is_srte.yfilter)
	|| ydk::is_set(tunnel_load_metric.yfilter)
	|| ydk::is_set(tunnel_local_label.yfilter)
	|| ydk::is_set(tunnel_resolution_incomplete.yfilter)
	|| ydk::is_set(tunnel_resolution_inconsistent.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_fwd_class.is_set || is_set(tunnel_fwd_class.yfilter)) leaf_name_data.push_back(tunnel_fwd_class.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (tunnel_is_programmed_to_drop.is_set || is_set(tunnel_is_programmed_to_drop.yfilter)) leaf_name_data.push_back(tunnel_is_programmed_to_drop.get_name_leafdata());
    if (tunnel_is_srte.is_set || is_set(tunnel_is_srte.yfilter)) leaf_name_data.push_back(tunnel_is_srte.get_name_leafdata());
    if (tunnel_load_metric.is_set || is_set(tunnel_load_metric.yfilter)) leaf_name_data.push_back(tunnel_load_metric.get_name_leafdata());
    if (tunnel_local_label.is_set || is_set(tunnel_local_label.yfilter)) leaf_name_data.push_back(tunnel_local_label.get_name_leafdata());
    if (tunnel_resolution_incomplete.is_set || is_set(tunnel_resolution_incomplete.yfilter)) leaf_name_data.push_back(tunnel_resolution_incomplete.get_name_leafdata());
    if (tunnel_resolution_inconsistent.is_set || is_set(tunnel_resolution_inconsistent.yfilter)) leaf_name_data.push_back(tunnel_resolution_inconsistent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class = value;
        tunnel_fwd_class.value_namespace = name_space;
        tunnel_fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-is-programmed-to-drop")
    {
        tunnel_is_programmed_to_drop = value;
        tunnel_is_programmed_to_drop.value_namespace = name_space;
        tunnel_is_programmed_to_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-is-srte")
    {
        tunnel_is_srte = value;
        tunnel_is_srte.value_namespace = name_space;
        tunnel_is_srte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric = value;
        tunnel_load_metric.value_namespace = name_space;
        tunnel_load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label = value;
        tunnel_local_label.value_namespace = name_space;
        tunnel_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-resolution-incomplete")
    {
        tunnel_resolution_incomplete = value;
        tunnel_resolution_incomplete.value_namespace = name_space;
        tunnel_resolution_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-resolution-inconsistent")
    {
        tunnel_resolution_inconsistent = value;
        tunnel_resolution_inconsistent.value_namespace = name_space;
        tunnel_resolution_inconsistent.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-is-programmed-to-drop")
    {
        tunnel_is_programmed_to_drop.yfilter = yfilter;
    }
    if(value_path == "tunnel-is-srte")
    {
        tunnel_is_srte.yfilter = yfilter;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric.yfilter = yfilter;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-resolution-incomplete")
    {
        tunnel_resolution_incomplete.yfilter = yfilter;
    }
    if(value_path == "tunnel-resolution-inconsistent")
    {
        tunnel_resolution_inconsistent.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-fwd-class" || name == "tunnel-interface-name" || name == "tunnel-is-programmed-to-drop" || name == "tunnel-is-srte" || name == "tunnel-load-metric" || name == "tunnel-local-label" || name == "tunnel-resolution-incomplete" || name == "tunnel-resolution-inconsistent")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Fwdg()
    :
    afi_table_id{YType::uint32, "afi-table-id"},
    eos_bit{YType::uint32, "eos-bit"},
    hardware_information{YType::str, "hardware-information"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_pointer{YType::uint32, "ldi-pointer"},
    ldi_referance_count{YType::uint32, "ldi-referance-count"},
    ldi_type{YType::uint32, "ldi-type"},
    leaf_flags{YType::uint32, "leaf-flags"},
    leaf_local_label{YType::uint32, "leaf-local-label"},
    leaf_referance_count{YType::uint32, "leaf-referance-count"},
    leaf_time_in_milli_seconds{YType::uint64, "leaf-time-in-milli-seconds"},
    lspa_flags{YType::uint32, "lspa-flags"},
    lw_ldi_pointer{YType::uint32, "lw-ldi-pointer"},
    lw_ldi_refernace_count{YType::uint32, "lw-ldi-refernace-count"},
    lw_ldi_type{YType::uint32, "lw-ldi-type"},
    lw_shared_ldi_pointer{YType::uint32, "lw-shared-ldi-pointer"},
    multicast_label{YType::boolean, "multicast-label"},
    path_list_flags{YType::uint32, "path-list-flags"},
    path_list_referance_count{YType::uint32, "path-list-referance-count"}
    	,
    ldi_information(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation>())
	,multicast_information(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation>())
{
    ldi_information->parent = this;

    multicast_information->parent = this;

    yang_name = "fwdg"; yang_parent_name = "forwarding-tunnel";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::~Fwdg()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::has_data() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_data())
            return true;
    }
    return afi_table_id.is_set
	|| eos_bit.is_set
	|| hardware_information.is_set
	|| ldi_flags.is_set
	|| ldi_pointer.is_set
	|| ldi_referance_count.is_set
	|| ldi_type.is_set
	|| leaf_flags.is_set
	|| leaf_local_label.is_set
	|| leaf_referance_count.is_set
	|| leaf_time_in_milli_seconds.is_set
	|| lspa_flags.is_set
	|| lw_ldi_pointer.is_set
	|| lw_ldi_refernace_count.is_set
	|| lw_ldi_type.is_set
	|| lw_shared_ldi_pointer.is_set
	|| multicast_label.is_set
	|| path_list_flags.is_set
	|| path_list_referance_count.is_set
	|| (ldi_information !=  nullptr && ldi_information->has_data())
	|| (multicast_information !=  nullptr && multicast_information->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::has_operation() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi_table_id.yfilter)
	|| ydk::is_set(eos_bit.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(ldi_flags.yfilter)
	|| ydk::is_set(ldi_pointer.yfilter)
	|| ydk::is_set(ldi_referance_count.yfilter)
	|| ydk::is_set(ldi_type.yfilter)
	|| ydk::is_set(leaf_flags.yfilter)
	|| ydk::is_set(leaf_local_label.yfilter)
	|| ydk::is_set(leaf_referance_count.yfilter)
	|| ydk::is_set(leaf_time_in_milli_seconds.yfilter)
	|| ydk::is_set(lspa_flags.yfilter)
	|| ydk::is_set(lw_ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_refernace_count.yfilter)
	|| ydk::is_set(lw_ldi_type.yfilter)
	|| ydk::is_set(lw_shared_ldi_pointer.yfilter)
	|| ydk::is_set(multicast_label.yfilter)
	|| ydk::is_set(path_list_flags.yfilter)
	|| ydk::is_set(path_list_referance_count.yfilter)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwdg";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fwdg' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_table_id.is_set || is_set(afi_table_id.yfilter)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.yfilter)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.yfilter)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.yfilter)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.yfilter)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.yfilter)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.yfilter)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (leaf_local_label.is_set || is_set(leaf_local_label.yfilter)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.yfilter)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.yfilter)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.yfilter)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.yfilter)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.yfilter)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.yfilter)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.yfilter)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information")
    {
        for(auto const & c : label_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation>();
        c->parent = this;
        label_information.push_back(c);
        return c;
    }

    if(child_yang_name == "ldi-information")
    {
        if(ldi_information == nullptr)
        {
            ldi_information = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation>();
        }
        return ldi_information;
    }

    if(child_yang_name == "multicast-information")
    {
        if(multicast_information == nullptr)
        {
            multicast_information = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation>();
        }
        return multicast_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldi_information != nullptr)
    {
        children["ldi-information"] = ldi_information;
    }

    if(multicast_information != nullptr)
    {
        children["multicast-information"] = multicast_information;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
        afi_table_id.value_namespace = name_space;
        afi_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
        eos_bit.value_namespace = name_space;
        eos_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
        ldi_flags.value_namespace = name_space;
        ldi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
        ldi_pointer.value_namespace = name_space;
        ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
        ldi_referance_count.value_namespace = name_space;
        ldi_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
        ldi_type.value_namespace = name_space;
        ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
        leaf_flags.value_namespace = name_space;
        leaf_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
        leaf_local_label.value_namespace = name_space;
        leaf_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
        leaf_referance_count.value_namespace = name_space;
        leaf_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
        leaf_time_in_milli_seconds.value_namespace = name_space;
        leaf_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
        lspa_flags.value_namespace = name_space;
        lspa_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
        lw_ldi_pointer.value_namespace = name_space;
        lw_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
        lw_ldi_refernace_count.value_namespace = name_space;
        lw_ldi_refernace_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
        lw_ldi_type.value_namespace = name_space;
        lw_ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
        lw_shared_ldi_pointer.value_namespace = name_space;
        lw_shared_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
        multicast_label.value_namespace = name_space;
        multicast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
        path_list_flags.value_namespace = name_space;
        path_list_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
        path_list_referance_count.value_namespace = name_space;
        path_list_referance_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id.yfilter = yfilter;
    }
    if(value_path == "eos-bit")
    {
        eos_bit.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count.yfilter = yfilter;
    }
    if(value_path == "ldi-type")
    {
        ldi_type.yfilter = yfilter;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags.yfilter = yfilter;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label.yfilter = yfilter;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count.yfilter = yfilter;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type.yfilter = yfilter;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "multicast-label")
    {
        multicast_label.yfilter = yfilter;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags.yfilter = yfilter;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-information" || name == "ldi-information" || name == "multicast-information" || name == "afi-table-id" || name == "eos-bit" || name == "hardware-information" || name == "ldi-flags" || name == "ldi-pointer" || name == "ldi-referance-count" || name == "ldi-type" || name == "leaf-flags" || name == "leaf-local-label" || name == "leaf-referance-count" || name == "leaf-time-in-milli-seconds" || name == "lspa-flags" || name == "lw-ldi-pointer" || name == "lw-ldi-refernace-count" || name == "lw-ldi-type" || name == "lw-shared-ldi-pointer" || name == "multicast-label" || name == "path-list-flags" || name == "path-list-referance-count")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{
    yang_name = "ldi-information"; yang_parent_name = "fwdg";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::~LdiInformation()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::has_data() const
{
    return ldi_hardware_information.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldi_hardware_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdiInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.yfilter)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
        ldi_hardware_information.value_namespace = name_space;
        ldi_hardware_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-hardware-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::MulticastInformation()
    :
    multicast_encap_id{YType::uint32, "multicast-encap-id"},
    multicast_mol_base_flags{YType::uint32, "multicast-mol-base-flags"},
    multicast_mol_flags{YType::uint16, "multicast-mol-flags"},
    multicast_mol_referance_count{YType::uint16, "multicast-mol-referance-count"},
    multicast_mpls_local_output_paths{YType::uint16, "multicast-mpls-local-output-paths"},
    multicast_mpls_output_paths{YType::uint16, "multicast-mpls-output-paths"},
    multicast_mpls_protocol_output_paths{YType::uint16, "multicast-mpls-protocol-output-paths"},
    multicast_platform_data{YType::str, "multicast-platform-data"},
    multicast_platform_data_length{YType::uint8, "multicast-platform-data-length"},
    multicast_rpf_id{YType::uint32, "multicast-rpf-id"},
    multicast_tunnel_id{YType::uint32, "multicast-tunnel-id"},
    multicast_tunnel_interface_handler{YType::str, "multicast-tunnel-interface-handler"},
    multicast_tunnel_lspvif{YType::uint32, "multicast-tunnel-lspvif"},
    multicast_tunnel_next_hop_information{YType::uint32, "multicast-tunnel-next-hop-information"}
{
    yang_name = "multicast-information"; yang_parent_name = "fwdg";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::~MulticastInformation()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::has_data() const
{
    return multicast_encap_id.is_set
	|| multicast_mol_base_flags.is_set
	|| multicast_mol_flags.is_set
	|| multicast_mol_referance_count.is_set
	|| multicast_mpls_local_output_paths.is_set
	|| multicast_mpls_output_paths.is_set
	|| multicast_mpls_protocol_output_paths.is_set
	|| multicast_platform_data.is_set
	|| multicast_platform_data_length.is_set
	|| multicast_rpf_id.is_set
	|| multicast_tunnel_id.is_set
	|| multicast_tunnel_interface_handler.is_set
	|| multicast_tunnel_lspvif.is_set
	|| multicast_tunnel_next_hop_information.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_encap_id.yfilter)
	|| ydk::is_set(multicast_mol_base_flags.yfilter)
	|| ydk::is_set(multicast_mol_flags.yfilter)
	|| ydk::is_set(multicast_mol_referance_count.yfilter)
	|| ydk::is_set(multicast_mpls_local_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_protocol_output_paths.yfilter)
	|| ydk::is_set(multicast_platform_data.yfilter)
	|| ydk::is_set(multicast_platform_data_length.yfilter)
	|| ydk::is_set(multicast_rpf_id.yfilter)
	|| ydk::is_set(multicast_tunnel_id.yfilter)
	|| ydk::is_set(multicast_tunnel_interface_handler.yfilter)
	|| ydk::is_set(multicast_tunnel_lspvif.yfilter)
	|| ydk::is_set(multicast_tunnel_next_hop_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_encap_id.is_set || is_set(multicast_encap_id.yfilter)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.yfilter)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.yfilter)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.yfilter)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.yfilter)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.yfilter)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.yfilter)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.yfilter)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.yfilter)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.yfilter)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.yfilter)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
        multicast_encap_id.value_namespace = name_space;
        multicast_encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
        multicast_mol_base_flags.value_namespace = name_space;
        multicast_mol_base_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
        multicast_mol_flags.value_namespace = name_space;
        multicast_mol_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
        multicast_mol_referance_count.value_namespace = name_space;
        multicast_mol_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
        multicast_mpls_local_output_paths.value_namespace = name_space;
        multicast_mpls_local_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
        multicast_mpls_output_paths.value_namespace = name_space;
        multicast_mpls_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
        multicast_mpls_protocol_output_paths.value_namespace = name_space;
        multicast_mpls_protocol_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
        multicast_platform_data.value_namespace = name_space;
        multicast_platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
        multicast_platform_data_length.value_namespace = name_space;
        multicast_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
        multicast_rpf_id.value_namespace = name_space;
        multicast_rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
        multicast_tunnel_id.value_namespace = name_space;
        multicast_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
        multicast_tunnel_interface_handler.value_namespace = name_space;
        multicast_tunnel_interface_handler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
        multicast_tunnel_lspvif.value_namespace = name_space;
        multicast_tunnel_lspvif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
        multicast_tunnel_next_hop_information.value_namespace = name_space;
        multicast_tunnel_next_hop_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-encap-id" || name == "multicast-mol-base-flags" || name == "multicast-mol-flags" || name == "multicast-mol-referance-count" || name == "multicast-mpls-local-output-paths" || name == "multicast-mpls-output-paths" || name == "multicast-mpls-protocol-output-paths" || name == "multicast-platform-data" || name == "multicast-platform-data-length" || name == "multicast-rpf-id" || name == "multicast-tunnel-id" || name == "multicast-tunnel-interface-handler" || name == "multicast-tunnel-lspvif" || name == "multicast-tunnel-next-hop-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformation()
    :
    label_information_next_hop_protocol{YType::enumeration, "label-information-next-hop-protocol"},
    label_information_next_hop_string{YType::str, "label-information-next-hop-string"},
    label_information_next_hop_type{YType::enumeration, "label-information-next-hop-type"},
    label_information_path_index{YType::uint32, "label-information-path-index"},
    label_information_route_version{YType::uint64, "label-information-route-version"},
    label_information_time_in_milli_seconds{YType::uint64, "label-information-time-in-milli-seconds"},
    label_information_type{YType::uint32, "label-information-type"},
    local_label{YType::uint32, "local-label"},
    mpls_adjacency_flags{YType::uint32, "mpls-adjacency-flags"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_interface_string{YType::str, "outgoing-interface-string"},
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_string{YType::str, "outgoing-label-string"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    prefix_or_id{YType::str, "prefix-or-id"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"}
    	,
    exact_route_hash_info(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo>())
	,label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail>())
{
    exact_route_hash_info->parent = this;

    label_information_detail->parent = this;

    yang_name = "label-information"; yang_parent_name = "fwdg";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::~LabelInformation()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::has_data() const
{
    return label_information_next_hop_protocol.is_set
	|| label_information_next_hop_string.is_set
	|| label_information_next_hop_type.is_set
	|| label_information_path_index.is_set
	|| label_information_route_version.is_set
	|| label_information_time_in_milli_seconds.is_set
	|| label_information_type.is_set
	|| local_label.is_set
	|| mpls_adjacency_flags.is_set
	|| outgoing_interface.is_set
	|| outgoing_interface_string.is_set
	|| outgoing_label.is_set
	|| outgoing_label_string.is_set
	|| outgoing_physical_interface.is_set
	|| prefix_or_id.is_set
	|| tunnel_id_present.is_set
	|| tunnel_interface.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_data())
	|| (label_information_detail !=  nullptr && label_information_detail->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_information_next_hop_protocol.yfilter)
	|| ydk::is_set(label_information_next_hop_string.yfilter)
	|| ydk::is_set(label_information_next_hop_type.yfilter)
	|| ydk::is_set(label_information_path_index.yfilter)
	|| ydk::is_set(label_information_route_version.yfilter)
	|| ydk::is_set(label_information_time_in_milli_seconds.yfilter)
	|| ydk::is_set(label_information_type.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(mpls_adjacency_flags.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_interface_string.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_string.yfilter)
	|| ydk::is_set(outgoing_physical_interface.yfilter)
	|| ydk::is_set(prefix_or_id.yfilter)
	|| ydk::is_set(tunnel_id_present.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_operation())
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.yfilter)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.yfilter)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.yfilter)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.yfilter)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.yfilter)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());
    if (label_information_type.is_set || is_set(label_information_type.yfilter)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.yfilter)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_interface_string.is_set || is_set(outgoing_interface_string.yfilter)) leaf_name_data.push_back(outgoing_interface_string.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.yfilter)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.yfilter)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.yfilter)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.yfilter)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exact-route-hash-info")
    {
        if(exact_route_hash_info == nullptr)
        {
            exact_route_hash_info = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo>();
        }
        return exact_route_hash_info;
    }

    if(child_yang_name == "label-information-detail")
    {
        if(label_information_detail == nullptr)
        {
            label_information_detail = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail>();
        }
        return label_information_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exact_route_hash_info != nullptr)
    {
        children["exact-route-hash-info"] = exact_route_hash_info;
    }

    if(label_information_detail != nullptr)
    {
        children["label-information-detail"] = label_information_detail;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
        label_information_next_hop_protocol.value_namespace = name_space;
        label_information_next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
        label_information_next_hop_string.value_namespace = name_space;
        label_information_next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
        label_information_next_hop_type.value_namespace = name_space;
        label_information_next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
        label_information_path_index.value_namespace = name_space;
        label_information_path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
        label_information_route_version.value_namespace = name_space;
        label_information_route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
        label_information_time_in_milli_seconds.value_namespace = name_space;
        label_information_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-type")
    {
        label_information_type = value;
        label_information_type.value_namespace = name_space;
        label_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
        mpls_adjacency_flags.value_namespace = name_space;
        mpls_adjacency_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string = value;
        outgoing_interface_string.value_namespace = name_space;
        outgoing_interface_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
        outgoing_label_string.value_namespace = name_space;
        outgoing_label_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
        outgoing_physical_interface.value_namespace = name_space;
        outgoing_physical_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
        prefix_or_id.value_namespace = name_space;
        prefix_or_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
        tunnel_id_present.value_namespace = name_space;
        tunnel_id_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type.yfilter = yfilter;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index.yfilter = yfilter;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version.yfilter = yfilter;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "label-information-type")
    {
        label_information_type.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface.yfilter = yfilter;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-route-hash-info" || name == "label-information-detail" || name == "label-information-next-hop-protocol" || name == "label-information-next-hop-string" || name == "label-information-next-hop-type" || name == "label-information-path-index" || name == "label-information-route-version" || name == "label-information-time-in-milli-seconds" || name == "label-information-type" || name == "local-label" || name == "mpls-adjacency-flags" || name == "outgoing-interface" || name == "outgoing-interface-string" || name == "outgoing-label" || name == "outgoing-label-string" || name == "outgoing-physical-interface" || name == "prefix-or-id" || name == "tunnel-id-present" || name == "tunnel-interface" || name == "tx-bytes" || name == "tx-packets")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    mac_size{YType::uint32, "mac-size"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"},
    status{YType::int32, "status"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "label-information-detail"; yang_parent_name = "label-information";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::has_data() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_data())
            return true;
    }
    return l3_mtu.is_set
	|| mac_size.is_set
	|| next_hop_interface.is_set
	|| next_hop_protocol.is_set
	|| next_hop_string.is_set
	|| status.is_set
	|| total_encapsulation_size.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::has_operation() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(l3_mtu.yfilter)
	|| ydk::is_set(mac_size.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_protocol.yfilter)
	|| ydk::is_set(next_hop_string.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(total_encapsulation_size.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformationDetail' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.yfilter)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.yfilter)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.yfilter)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.yfilter)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.yfilter)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        for(auto const & c : label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack>();
        c->parent = this;
        label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
        l3_mtu.value_namespace = name_space;
        l3_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
        mac_size.value_namespace = name_space;
        mac_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
        next_hop_protocol.value_namespace = name_space;
        next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
        next_hop_string.value_namespace = name_space;
        next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
        total_encapsulation_size.value_namespace = name_space;
        total_encapsulation_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu.yfilter = yfilter;
    }
    if(value_path == "mac-size")
    {
        mac_size.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "l3-mtu" || name == "mac-size" || name == "next-hop-interface" || name == "next-hop-protocol" || name == "next-hop-string" || name == "status" || name == "total-encapsulation-size" || name == "transmit-number-of-bytes-switched" || name == "transmit-number-of-packets-switched")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "label-stack"; yang_parent_name = "label-information-detail";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::~LabelStack()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelStack' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::ExactRouteHashInfo()
    :
    hash_index{YType::uint8, "hash-index"},
    hash_index_is_valid{YType::boolean, "hash-index-is-valid"}
{
    yang_name = "exact-route-hash-info"; yang_parent_name = "label-information";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::~ExactRouteHashInfo()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::has_data() const
{
    return hash_index.is_set
	|| hash_index_is_valid.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_index.yfilter)
	|| ydk::is_set(hash_index_is_valid.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-route-hash-info";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExactRouteHashInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_index.is_set || is_set(hash_index.yfilter)) leaf_name_data.push_back(hash_index.get_name_leafdata());
    if (hash_index_is_valid.is_set || is_set(hash_index_is_valid.yfilter)) leaf_name_data.push_back(hash_index_is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-index")
    {
        hash_index = value;
        hash_index.value_namespace = name_space;
        hash_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid = value;
        hash_index_is_valid.value_namespace = name_space;
        hash_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-index")
    {
        hash_index.yfilter = yfilter;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-index" || name == "hash-index-is-valid")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrDatabase()
    :
    frrdb_backup_interface_summaries(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries>())
	,frrdb_protected_interface_table_summaries(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries>())
	,frrdb_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary>())
	,frrdb_tunnel_head_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary>())
	,frrdb_tunnel_heads(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads>())
	,frrdb_tunnel_midpoint_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary>())
	,frrdb_tunnel_midpoints(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints>())
{
    frrdb_backup_interface_summaries->parent = this;

    frrdb_protected_interface_table_summaries->parent = this;

    frrdb_summary->parent = this;

    frrdb_tunnel_head_summary->parent = this;

    frrdb_tunnel_heads->parent = this;

    frrdb_tunnel_midpoint_summary->parent = this;

    frrdb_tunnel_midpoints->parent = this;

    yang_name = "frr-database"; yang_parent_name = "node";
}

MplsForwarding::Nodes::Node::FrrDatabase::~FrrDatabase()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_data() const
{
    return (frrdb_backup_interface_summaries !=  nullptr && frrdb_backup_interface_summaries->has_data())
	|| (frrdb_protected_interface_table_summaries !=  nullptr && frrdb_protected_interface_table_summaries->has_data())
	|| (frrdb_summary !=  nullptr && frrdb_summary->has_data())
	|| (frrdb_tunnel_head_summary !=  nullptr && frrdb_tunnel_head_summary->has_data())
	|| (frrdb_tunnel_heads !=  nullptr && frrdb_tunnel_heads->has_data())
	|| (frrdb_tunnel_midpoint_summary !=  nullptr && frrdb_tunnel_midpoint_summary->has_data())
	|| (frrdb_tunnel_midpoints !=  nullptr && frrdb_tunnel_midpoints->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_operation() const
{
    return is_set(yfilter)
	|| (frrdb_backup_interface_summaries !=  nullptr && frrdb_backup_interface_summaries->has_operation())
	|| (frrdb_protected_interface_table_summaries !=  nullptr && frrdb_protected_interface_table_summaries->has_operation())
	|| (frrdb_summary !=  nullptr && frrdb_summary->has_operation())
	|| (frrdb_tunnel_head_summary !=  nullptr && frrdb_tunnel_head_summary->has_operation())
	|| (frrdb_tunnel_heads !=  nullptr && frrdb_tunnel_heads->has_operation())
	|| (frrdb_tunnel_midpoint_summary !=  nullptr && frrdb_tunnel_midpoint_summary->has_operation())
	|| (frrdb_tunnel_midpoints !=  nullptr && frrdb_tunnel_midpoints->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-database";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrDatabase' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-backup-interface-summaries")
    {
        if(frrdb_backup_interface_summaries == nullptr)
        {
            frrdb_backup_interface_summaries = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries>();
        }
        return frrdb_backup_interface_summaries;
    }

    if(child_yang_name == "frrdb-protected-interface-table-summaries")
    {
        if(frrdb_protected_interface_table_summaries == nullptr)
        {
            frrdb_protected_interface_table_summaries = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries>();
        }
        return frrdb_protected_interface_table_summaries;
    }

    if(child_yang_name == "frrdb-summary")
    {
        if(frrdb_summary == nullptr)
        {
            frrdb_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary>();
        }
        return frrdb_summary;
    }

    if(child_yang_name == "frrdb-tunnel-head-summary")
    {
        if(frrdb_tunnel_head_summary == nullptr)
        {
            frrdb_tunnel_head_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary>();
        }
        return frrdb_tunnel_head_summary;
    }

    if(child_yang_name == "frrdb-tunnel-heads")
    {
        if(frrdb_tunnel_heads == nullptr)
        {
            frrdb_tunnel_heads = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads>();
        }
        return frrdb_tunnel_heads;
    }

    if(child_yang_name == "frrdb-tunnel-midpoint-summary")
    {
        if(frrdb_tunnel_midpoint_summary == nullptr)
        {
            frrdb_tunnel_midpoint_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary>();
        }
        return frrdb_tunnel_midpoint_summary;
    }

    if(child_yang_name == "frrdb-tunnel-midpoints")
    {
        if(frrdb_tunnel_midpoints == nullptr)
        {
            frrdb_tunnel_midpoints = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints>();
        }
        return frrdb_tunnel_midpoints;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frrdb_backup_interface_summaries != nullptr)
    {
        children["frrdb-backup-interface-summaries"] = frrdb_backup_interface_summaries;
    }

    if(frrdb_protected_interface_table_summaries != nullptr)
    {
        children["frrdb-protected-interface-table-summaries"] = frrdb_protected_interface_table_summaries;
    }

    if(frrdb_summary != nullptr)
    {
        children["frrdb-summary"] = frrdb_summary;
    }

    if(frrdb_tunnel_head_summary != nullptr)
    {
        children["frrdb-tunnel-head-summary"] = frrdb_tunnel_head_summary;
    }

    if(frrdb_tunnel_heads != nullptr)
    {
        children["frrdb-tunnel-heads"] = frrdb_tunnel_heads;
    }

    if(frrdb_tunnel_midpoint_summary != nullptr)
    {
        children["frrdb-tunnel-midpoint-summary"] = frrdb_tunnel_midpoint_summary;
    }

    if(frrdb_tunnel_midpoints != nullptr)
    {
        children["frrdb-tunnel-midpoints"] = frrdb_tunnel_midpoints;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-backup-interface-summaries" || name == "frrdb-protected-interface-table-summaries" || name == "frrdb-summary" || name == "frrdb-tunnel-head-summary" || name == "frrdb-tunnel-heads" || name == "frrdb-tunnel-midpoint-summary" || name == "frrdb-tunnel-midpoints")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::FrrdbSummary()
    :
    active{YType::uint32, "active"},
    other{YType::uint32, "other"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "frrdb-summary"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::~FrrdbSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_data() const
{
    return active.is_set
	|| other.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(other.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(ready.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-summary";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "other" || name == "partial" || name == "ready")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummaries()
{
    yang_name = "frrdb-protected-interface-table-summaries"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::~FrrdbProtectedInterfaceTableSummaries()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_data() const
{
    for (std::size_t index=0; index<frrdb_protected_interface_table_summary.size(); index++)
    {
        if(frrdb_protected_interface_table_summary[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_operation() const
{
    for (std::size_t index=0; index<frrdb_protected_interface_table_summary.size(); index++)
    {
        if(frrdb_protected_interface_table_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-protected-interface-table-summaries";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbProtectedInterfaceTableSummaries' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-protected-interface-table-summary")
    {
        for(auto const & c : frrdb_protected_interface_table_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary>();
        c->parent = this;
        frrdb_protected_interface_table_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrdb_protected_interface_table_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-protected-interface-table-summary")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::FrrdbProtectedInterfaceTableSummary()
    :
    interface_name{YType::str, "interface-name"},
    active{YType::uint32, "active"},
    other{YType::uint32, "other"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "frrdb-protected-interface-table-summary"; yang_parent_name = "frrdb-protected-interface-table-summaries";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::~FrrdbProtectedInterfaceTableSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_data() const
{
    return interface_name.is_set
	|| active.is_set
	|| other.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(other.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(ready.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-protected-interface-table-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbProtectedInterfaceTableSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "active" || name == "other" || name == "partial" || name == "ready")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::FrrdbTunnelMidpointSummary()
    :
    active{YType::uint32, "active"},
    other{YType::uint32, "other"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "frrdb-tunnel-midpoint-summary"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::~FrrdbTunnelMidpointSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_data() const
{
    return active.is_set
	|| other.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(other.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(ready.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoint-summary";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelMidpointSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "other" || name == "partial" || name == "ready")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoints()
{
    yang_name = "frrdb-tunnel-midpoints"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::~FrrdbTunnelMidpoints()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_data() const
{
    for (std::size_t index=0; index<frrdb_tunnel_midpoint.size(); index++)
    {
        if(frrdb_tunnel_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_operation() const
{
    for (std::size_t index=0; index<frrdb_tunnel_midpoint.size(); index++)
    {
        if(frrdb_tunnel_midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoints";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelMidpoints' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-tunnel-midpoint")
    {
        for(auto const & c : frrdb_tunnel_midpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint>();
        c->parent = this;
        frrdb_tunnel_midpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrdb_tunnel_midpoint)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-tunnel-midpoint")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrdbTunnelMidpoint()
    :
    local_label{YType::uint32, "local-label"},
    frr_lable_string{YType::str, "frr-lable-string"},
    outgoing_lable_string{YType::str, "outgoing-lable-string"}
    	,
    frr_db(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb>())
{
    frr_db->parent = this;

    yang_name = "frrdb-tunnel-midpoint"; yang_parent_name = "frrdb-tunnel-midpoints";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::~FrrdbTunnelMidpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_data() const
{
    return local_label.is_set
	|| frr_lable_string.is_set
	|| outgoing_lable_string.is_set
	|| (frr_db !=  nullptr && frr_db->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(frr_lable_string.yfilter)
	|| ydk::is_set(outgoing_lable_string.yfilter)
	|| (frr_db !=  nullptr && frr_db->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoint" <<"[local-label='" <<local_label <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelMidpoint' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (frr_lable_string.is_set || is_set(frr_lable_string.yfilter)) leaf_name_data.push_back(frr_lable_string.get_name_leafdata());
    if (outgoing_lable_string.is_set || is_set(outgoing_lable_string.yfilter)) leaf_name_data.push_back(outgoing_lable_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-db")
    {
        if(frr_db == nullptr)
        {
            frr_db = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb>();
        }
        return frr_db;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_db != nullptr)
    {
        children["frr-db"] = frr_db;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string = value;
        frr_lable_string.value_namespace = name_space;
        frr_lable_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string = value;
        outgoing_lable_string.value_namespace = name_space;
        outgoing_lable_string.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-db" || name == "local-label" || name == "frr-lable-string" || name == "outgoing-lable-string")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrDb()
    :
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    input_label{YType::uint32, "input-label"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    is_multicast_tunnel{YType::boolean, "is-multicast-tunnel"},
    multicast_tunnel_legs{YType::uint32, "multicast-tunnel-legs"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "frr-db"; yang_parent_name = "frrdb-tunnel-midpoint";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::~FrrDb()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_data() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_data())
            return true;
    }
    return entry_frr_state.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| input_label.is_set
	|| is_mldp_lsp.is_set
	|| is_multicast_tunnel.is_set
	|| multicast_tunnel_legs.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| tunnel_interface_name.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_operation() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| ydk::is_set(is_multicast_tunnel.yfilter)
	|| ydk::is_set(multicast_tunnel_legs.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-db";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrDb' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (is_multicast_tunnel.is_set || is_set(is_multicast_tunnel.yfilter)) leaf_name_data.push_back(is_multicast_tunnel.get_name_leafdata());
    if (multicast_tunnel_legs.is_set || is_set(multicast_tunnel_legs.yfilter)) leaf_name_data.push_back(multicast_tunnel_legs.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId>();
        }
        return frr_entry_id;
    }

    if(child_yang_name == "multicast-leg")
    {
        for(auto const & c : multicast_leg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg>();
        c->parent = this;
        multicast_leg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    for (auto const & c : multicast_leg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel = value;
        is_multicast_tunnel.value_namespace = name_space;
        is_multicast_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs = value;
        multicast_tunnel_legs.value_namespace = name_space;
        multicast_tunnel_legs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "multicast-leg" || name == "entry-frr-state" || name == "frr-interface-name" || name == "frr-label" || name == "frr-next-hop-ipv4-address" || name == "input-label" || name == "is-mldp-lsp" || name == "is-multicast-tunnel" || name == "multicast-tunnel-legs" || name == "outgoing-interface" || name == "outgoing-label" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint>())
{
    head->parent = this;

    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "frr-db";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrEntryId' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{
    yang_name = "head"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Head' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "midpoint"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Midpoint' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lspid" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::MulticastLeg()
    :
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    input_label{YType::uint32, "input-label"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "multicast-leg"; yang_parent_name = "frr-db";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::~MulticastLeg()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_data() const
{
    return entry_frr_state.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| input_label.is_set
	|| is_mldp_lsp.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| tunnel_interface_name.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-leg";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastLeg' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId>();
        }
        return frr_entry_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "entry-frr-state" || name == "frr-interface-name" || name == "frr-label" || name == "frr-next-hop-ipv4-address" || name == "input-label" || name == "is-mldp-lsp" || name == "outgoing-interface" || name == "outgoing-label" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint>())
{
    head->parent = this;

    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "multicast-leg";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrEntryId' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{
    yang_name = "head"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Head' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "midpoint"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Midpoint' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lspid" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHeads()
{
    yang_name = "frrdb-tunnel-heads"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::~FrrdbTunnelHeads()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_data() const
{
    for (std::size_t index=0; index<frrdb_tunnel_head.size(); index++)
    {
        if(frrdb_tunnel_head[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_operation() const
{
    for (std::size_t index=0; index<frrdb_tunnel_head.size(); index++)
    {
        if(frrdb_tunnel_head[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-heads";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelHeads' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-tunnel-head")
    {
        for(auto const & c : frrdb_tunnel_head)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead>();
        c->parent = this;
        frrdb_tunnel_head.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrdb_tunnel_head)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-tunnel-head")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrdbTunnelHead()
    :
    interface_name{YType::str, "interface-name"},
    frr_lable_string{YType::str, "frr-lable-string"},
    outgoing_lable_string{YType::str, "outgoing-lable-string"}
    	,
    frr_db(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb>())
{
    frr_db->parent = this;

    yang_name = "frrdb-tunnel-head"; yang_parent_name = "frrdb-tunnel-heads";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::~FrrdbTunnelHead()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_data() const
{
    return interface_name.is_set
	|| frr_lable_string.is_set
	|| outgoing_lable_string.is_set
	|| (frr_db !=  nullptr && frr_db->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(frr_lable_string.yfilter)
	|| ydk::is_set(outgoing_lable_string.yfilter)
	|| (frr_db !=  nullptr && frr_db->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-head" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelHead' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (frr_lable_string.is_set || is_set(frr_lable_string.yfilter)) leaf_name_data.push_back(frr_lable_string.get_name_leafdata());
    if (outgoing_lable_string.is_set || is_set(outgoing_lable_string.yfilter)) leaf_name_data.push_back(outgoing_lable_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-db")
    {
        if(frr_db == nullptr)
        {
            frr_db = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb>();
        }
        return frr_db;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_db != nullptr)
    {
        children["frr-db"] = frr_db;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string = value;
        frr_lable_string.value_namespace = name_space;
        frr_lable_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string = value;
        outgoing_lable_string.value_namespace = name_space;
        outgoing_lable_string.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-db" || name == "interface-name" || name == "frr-lable-string" || name == "outgoing-lable-string")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrDb()
    :
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    input_label{YType::uint32, "input-label"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    is_multicast_tunnel{YType::boolean, "is-multicast-tunnel"},
    multicast_tunnel_legs{YType::uint32, "multicast-tunnel-legs"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "frr-db"; yang_parent_name = "frrdb-tunnel-head";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::~FrrDb()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_data() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_data())
            return true;
    }
    return entry_frr_state.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| input_label.is_set
	|| is_mldp_lsp.is_set
	|| is_multicast_tunnel.is_set
	|| multicast_tunnel_legs.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| tunnel_interface_name.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_operation() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| ydk::is_set(is_multicast_tunnel.yfilter)
	|| ydk::is_set(multicast_tunnel_legs.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-db";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrDb' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (is_multicast_tunnel.is_set || is_set(is_multicast_tunnel.yfilter)) leaf_name_data.push_back(is_multicast_tunnel.get_name_leafdata());
    if (multicast_tunnel_legs.is_set || is_set(multicast_tunnel_legs.yfilter)) leaf_name_data.push_back(multicast_tunnel_legs.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId>();
        }
        return frr_entry_id;
    }

    if(child_yang_name == "multicast-leg")
    {
        for(auto const & c : multicast_leg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg>();
        c->parent = this;
        multicast_leg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    for (auto const & c : multicast_leg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel = value;
        is_multicast_tunnel.value_namespace = name_space;
        is_multicast_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs = value;
        multicast_tunnel_legs.value_namespace = name_space;
        multicast_tunnel_legs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "multicast-leg" || name == "entry-frr-state" || name == "frr-interface-name" || name == "frr-label" || name == "frr-next-hop-ipv4-address" || name == "input-label" || name == "is-mldp-lsp" || name == "is-multicast-tunnel" || name == "multicast-tunnel-legs" || name == "outgoing-interface" || name == "outgoing-label" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint>())
{
    head->parent = this;

    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "frr-db";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrEntryId' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{
    yang_name = "head"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Head' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "midpoint"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Midpoint' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lspid" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::MulticastLeg()
    :
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    input_label{YType::uint32, "input-label"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "multicast-leg"; yang_parent_name = "frr-db";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::~MulticastLeg()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_data() const
{
    return entry_frr_state.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| input_label.is_set
	|| is_mldp_lsp.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| tunnel_interface_name.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_frr_state.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_label.yfilter)
	|| ydk::is_set(frr_next_hop_ipv4_address.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(is_mldp_lsp.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-leg";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastLeg' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_frr_state.is_set || is_set(entry_frr_state.yfilter)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.yfilter)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.yfilter)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.yfilter)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId>();
        }
        return frr_entry_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
        entry_frr_state.value_namespace = name_space;
        entry_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
        frr_label.value_namespace = name_space;
        frr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
        frr_next_hop_ipv4_address.value_namespace = name_space;
        frr_next_hop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
        is_mldp_lsp.value_namespace = name_space;
        is_mldp_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-label")
    {
        frr_label.yfilter = yfilter;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-entry-id" || name == "entry-frr-state" || name == "frr-interface-name" || name == "frr-label" || name == "frr-next-hop-ipv4-address" || name == "input-label" || name == "is-mldp-lsp" || name == "outgoing-interface" || name == "outgoing-label" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint>())
{
    head->parent = this;

    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "multicast-leg";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrEntryId' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "midpoint" || name == "role")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{
    yang_name = "head"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_prefix_length.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Head' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.yfilter)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
        destination_prefix_length.value_namespace = name_space;
        destination_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "destination-prefix-length")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "midpoint"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Midpoint' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lspid" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::FrrdbTunnelHeadSummary()
    :
    active{YType::uint32, "active"},
    other{YType::uint32, "other"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "frrdb-tunnel-head-summary"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::~FrrdbTunnelHeadSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_data() const
{
    return active.is_set
	|| other.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(other.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(ready.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-head-summary";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelHeadSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "other" || name == "partial" || name == "ready")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummaries()
{
    yang_name = "frrdb-backup-interface-summaries"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::~FrrdbBackupInterfaceSummaries()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_data() const
{
    for (std::size_t index=0; index<frrdb_backup_interface_summary.size(); index++)
    {
        if(frrdb_backup_interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<frrdb_backup_interface_summary.size(); index++)
    {
        if(frrdb_backup_interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-backup-interface-summaries";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbBackupInterfaceSummaries' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-backup-interface-summary")
    {
        for(auto const & c : frrdb_backup_interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary>();
        c->parent = this;
        frrdb_backup_interface_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrdb_backup_interface_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrdb-backup-interface-summary")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::FrrdbBackupInterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    active{YType::uint32, "active"},
    other{YType::uint32, "other"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "frrdb-backup-interface-summary"; yang_parent_name = "frrdb-backup-interface-summaries";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::~FrrdbBackupInterfaceSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_data() const
{
    return interface_name.is_set
	|| active.is_set
	|| other.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(other.yfilter)
	|| ydk::is_set(partial.yfilter)
	|| ydk::is_set(ready.yfilter);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-backup-interface-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbBackupInterfaceSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());
    if (partial.is_set || is_set(partial.yfilter)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial")
    {
        partial = value;
        partial.value_namespace = name_space;
        partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
    if(value_path == "partial")
    {
        partial.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "active" || name == "other" || name == "partial" || name == "ready")
        return true;
    return false;
}


}
}

