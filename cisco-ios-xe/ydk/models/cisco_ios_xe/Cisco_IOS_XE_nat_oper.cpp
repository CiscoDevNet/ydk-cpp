
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_nat_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_nat_oper {

NatData::NatData()
    :
    ip_nat_statistics(nullptr) // presence node
{

    yang_name = "nat-data"; yang_parent_name = "Cisco-IOS-XE-nat-oper"; is_top_level_class = true; has_list_ancestor = false;
}

NatData::~NatData()
{
}

bool NatData::has_data() const
{
    for (std::size_t index=0; index<ip_nat_translation.size(); index++)
    {
        if(ip_nat_translation[index]->has_data())
            return true;
    }
    return (ip_nat_statistics !=  nullptr && ip_nat_statistics->has_data());
}

bool NatData::has_operation() const
{
    for (std::size_t index=0; index<ip_nat_translation.size(); index++)
    {
        if(ip_nat_translation[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip_nat_statistics !=  nullptr && ip_nat_statistics->has_operation());
}

std::string NatData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat-oper:nat-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NatData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NatData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-nat-statistics")
    {
        if(ip_nat_statistics == nullptr)
        {
            ip_nat_statistics = std::make_shared<NatData::IpNatStatistics>();
        }
        return ip_nat_statistics;
    }

    if(child_yang_name == "ip-nat-translation")
    {
        auto c = std::make_shared<NatData::IpNatTranslation>();
        c->parent = this;
        ip_nat_translation.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NatData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip_nat_statistics != nullptr)
    {
        children["ip-nat-statistics"] = ip_nat_statistics;
    }

    count = 0;
    for (auto const & c : ip_nat_translation)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NatData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NatData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> NatData::clone_ptr() const
{
    return std::make_shared<NatData>();
}

std::string NatData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string NatData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function NatData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NatData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool NatData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-nat-statistics" || name == "ip-nat-translation")
        return true;
    return false;
}

NatData::IpNatStatistics::IpNatStatistics()
    :
    initialized{YType::boolean, "initialized"},
    entries{YType::uint64, "entries"},
    statics{YType::uint64, "statics"},
    statics_sorted{YType::uint64, "statics-sorted"},
    flows{YType::uint64, "flows"},
    insides{YType::uint64, "insides"},
    outsides{YType::uint64, "outsides"},
    entry_timeouts{YType::uint64, "entry-timeouts"},
    hits{YType::uint64, "hits"},
    misses{YType::uint64, "misses"},
    interrupt_switched{YType::uint64, "interrupt-switched"},
    packets_punted{YType::uint64, "packets-punted"},
    frag_pak_count{YType::uint64, "frag-pak-count"},
    pool_stats_drop{YType::uint64, "pool-stats-drop"},
    mapping_stats_drop{YType::uint64, "mapping-stats-drop"},
    portlist_req_fail{YType::uint64, "portlist-req-fail"},
    ipalias_add_fail{YType::uint64, "ipalias-add-fail"},
    limit_entry_add_fail{YType::uint64, "limit-entry-add-fail"},
    in2out_drops{YType::uint64, "in2out-drops"},
    out2in_drops{YType::uint64, "out2in-drops"},
    mib_addr_binds{YType::uint32, "mib-addr-binds"},
    mib_addport_binds{YType::uint32, "mib-addport-binds"}
{

    yang_name = "ip-nat-statistics"; yang_parent_name = "nat-data"; is_top_level_class = false; has_list_ancestor = false;
}

NatData::IpNatStatistics::~IpNatStatistics()
{
}

bool NatData::IpNatStatistics::has_data() const
{
    for (auto const & leaf : statics_sorted.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return initialized.is_set
	|| entries.is_set
	|| statics.is_set
	|| flows.is_set
	|| insides.is_set
	|| outsides.is_set
	|| entry_timeouts.is_set
	|| hits.is_set
	|| misses.is_set
	|| interrupt_switched.is_set
	|| packets_punted.is_set
	|| frag_pak_count.is_set
	|| pool_stats_drop.is_set
	|| mapping_stats_drop.is_set
	|| portlist_req_fail.is_set
	|| ipalias_add_fail.is_set
	|| limit_entry_add_fail.is_set
	|| in2out_drops.is_set
	|| out2in_drops.is_set
	|| mib_addr_binds.is_set
	|| mib_addport_binds.is_set;
}

bool NatData::IpNatStatistics::has_operation() const
{
    for (auto const & leaf : statics_sorted.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(initialized.yfilter)
	|| ydk::is_set(entries.yfilter)
	|| ydk::is_set(statics.yfilter)
	|| ydk::is_set(statics_sorted.yfilter)
	|| ydk::is_set(flows.yfilter)
	|| ydk::is_set(insides.yfilter)
	|| ydk::is_set(outsides.yfilter)
	|| ydk::is_set(entry_timeouts.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(misses.yfilter)
	|| ydk::is_set(interrupt_switched.yfilter)
	|| ydk::is_set(packets_punted.yfilter)
	|| ydk::is_set(frag_pak_count.yfilter)
	|| ydk::is_set(pool_stats_drop.yfilter)
	|| ydk::is_set(mapping_stats_drop.yfilter)
	|| ydk::is_set(portlist_req_fail.yfilter)
	|| ydk::is_set(ipalias_add_fail.yfilter)
	|| ydk::is_set(limit_entry_add_fail.yfilter)
	|| ydk::is_set(in2out_drops.yfilter)
	|| ydk::is_set(out2in_drops.yfilter)
	|| ydk::is_set(mib_addr_binds.yfilter)
	|| ydk::is_set(mib_addport_binds.yfilter);
}

std::string NatData::IpNatStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat-oper:nat-data/" << get_segment_path();
    return path_buffer.str();
}

std::string NatData::IpNatStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-nat-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NatData::IpNatStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized.is_set || is_set(initialized.yfilter)) leaf_name_data.push_back(initialized.get_name_leafdata());
    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (statics.is_set || is_set(statics.yfilter)) leaf_name_data.push_back(statics.get_name_leafdata());
    if (flows.is_set || is_set(flows.yfilter)) leaf_name_data.push_back(flows.get_name_leafdata());
    if (insides.is_set || is_set(insides.yfilter)) leaf_name_data.push_back(insides.get_name_leafdata());
    if (outsides.is_set || is_set(outsides.yfilter)) leaf_name_data.push_back(outsides.get_name_leafdata());
    if (entry_timeouts.is_set || is_set(entry_timeouts.yfilter)) leaf_name_data.push_back(entry_timeouts.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());
    if (interrupt_switched.is_set || is_set(interrupt_switched.yfilter)) leaf_name_data.push_back(interrupt_switched.get_name_leafdata());
    if (packets_punted.is_set || is_set(packets_punted.yfilter)) leaf_name_data.push_back(packets_punted.get_name_leafdata());
    if (frag_pak_count.is_set || is_set(frag_pak_count.yfilter)) leaf_name_data.push_back(frag_pak_count.get_name_leafdata());
    if (pool_stats_drop.is_set || is_set(pool_stats_drop.yfilter)) leaf_name_data.push_back(pool_stats_drop.get_name_leafdata());
    if (mapping_stats_drop.is_set || is_set(mapping_stats_drop.yfilter)) leaf_name_data.push_back(mapping_stats_drop.get_name_leafdata());
    if (portlist_req_fail.is_set || is_set(portlist_req_fail.yfilter)) leaf_name_data.push_back(portlist_req_fail.get_name_leafdata());
    if (ipalias_add_fail.is_set || is_set(ipalias_add_fail.yfilter)) leaf_name_data.push_back(ipalias_add_fail.get_name_leafdata());
    if (limit_entry_add_fail.is_set || is_set(limit_entry_add_fail.yfilter)) leaf_name_data.push_back(limit_entry_add_fail.get_name_leafdata());
    if (in2out_drops.is_set || is_set(in2out_drops.yfilter)) leaf_name_data.push_back(in2out_drops.get_name_leafdata());
    if (out2in_drops.is_set || is_set(out2in_drops.yfilter)) leaf_name_data.push_back(out2in_drops.get_name_leafdata());
    if (mib_addr_binds.is_set || is_set(mib_addr_binds.yfilter)) leaf_name_data.push_back(mib_addr_binds.get_name_leafdata());
    if (mib_addport_binds.is_set || is_set(mib_addport_binds.yfilter)) leaf_name_data.push_back(mib_addport_binds.get_name_leafdata());

    auto statics_sorted_name_datas = statics_sorted.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), statics_sorted_name_datas.begin(), statics_sorted_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NatData::IpNatStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NatData::IpNatStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NatData::IpNatStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized")
    {
        initialized = value;
        initialized.value_namespace = name_space;
        initialized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statics")
    {
        statics = value;
        statics.value_namespace = name_space;
        statics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statics-sorted")
    {
        statics_sorted.append(value);
    }
    if(value_path == "flows")
    {
        flows = value;
        flows.value_namespace = name_space;
        flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insides")
    {
        insides = value;
        insides.value_namespace = name_space;
        insides.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outsides")
    {
        outsides = value;
        outsides.value_namespace = name_space;
        outsides.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-timeouts")
    {
        entry_timeouts = value;
        entry_timeouts.value_namespace = name_space;
        entry_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interrupt-switched")
    {
        interrupt_switched = value;
        interrupt_switched.value_namespace = name_space;
        interrupt_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-punted")
    {
        packets_punted = value;
        packets_punted.value_namespace = name_space;
        packets_punted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frag-pak-count")
    {
        frag_pak_count = value;
        frag_pak_count.value_namespace = name_space;
        frag_pak_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-stats-drop")
    {
        pool_stats_drop = value;
        pool_stats_drop.value_namespace = name_space;
        pool_stats_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-stats-drop")
    {
        mapping_stats_drop = value;
        mapping_stats_drop.value_namespace = name_space;
        mapping_stats_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portlist-req-fail")
    {
        portlist_req_fail = value;
        portlist_req_fail.value_namespace = name_space;
        portlist_req_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipalias-add-fail")
    {
        ipalias_add_fail = value;
        ipalias_add_fail.value_namespace = name_space;
        ipalias_add_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-entry-add-fail")
    {
        limit_entry_add_fail = value;
        limit_entry_add_fail.value_namespace = name_space;
        limit_entry_add_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in2out-drops")
    {
        in2out_drops = value;
        in2out_drops.value_namespace = name_space;
        in2out_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out2in-drops")
    {
        out2in_drops = value;
        out2in_drops.value_namespace = name_space;
        out2in_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-addr-binds")
    {
        mib_addr_binds = value;
        mib_addr_binds.value_namespace = name_space;
        mib_addr_binds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-addport-binds")
    {
        mib_addport_binds = value;
        mib_addport_binds.value_namespace = name_space;
        mib_addport_binds.value_namespace_prefix = name_space_prefix;
    }
}

void NatData::IpNatStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized")
    {
        initialized.yfilter = yfilter;
    }
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
    if(value_path == "statics")
    {
        statics.yfilter = yfilter;
    }
    if(value_path == "statics-sorted")
    {
        statics_sorted.yfilter = yfilter;
    }
    if(value_path == "flows")
    {
        flows.yfilter = yfilter;
    }
    if(value_path == "insides")
    {
        insides.yfilter = yfilter;
    }
    if(value_path == "outsides")
    {
        outsides.yfilter = yfilter;
    }
    if(value_path == "entry-timeouts")
    {
        entry_timeouts.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
    if(value_path == "interrupt-switched")
    {
        interrupt_switched.yfilter = yfilter;
    }
    if(value_path == "packets-punted")
    {
        packets_punted.yfilter = yfilter;
    }
    if(value_path == "frag-pak-count")
    {
        frag_pak_count.yfilter = yfilter;
    }
    if(value_path == "pool-stats-drop")
    {
        pool_stats_drop.yfilter = yfilter;
    }
    if(value_path == "mapping-stats-drop")
    {
        mapping_stats_drop.yfilter = yfilter;
    }
    if(value_path == "portlist-req-fail")
    {
        portlist_req_fail.yfilter = yfilter;
    }
    if(value_path == "ipalias-add-fail")
    {
        ipalias_add_fail.yfilter = yfilter;
    }
    if(value_path == "limit-entry-add-fail")
    {
        limit_entry_add_fail.yfilter = yfilter;
    }
    if(value_path == "in2out-drops")
    {
        in2out_drops.yfilter = yfilter;
    }
    if(value_path == "out2in-drops")
    {
        out2in_drops.yfilter = yfilter;
    }
    if(value_path == "mib-addr-binds")
    {
        mib_addr_binds.yfilter = yfilter;
    }
    if(value_path == "mib-addport-binds")
    {
        mib_addport_binds.yfilter = yfilter;
    }
}

bool NatData::IpNatStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized" || name == "entries" || name == "statics" || name == "statics-sorted" || name == "flows" || name == "insides" || name == "outsides" || name == "entry-timeouts" || name == "hits" || name == "misses" || name == "interrupt-switched" || name == "packets-punted" || name == "frag-pak-count" || name == "pool-stats-drop" || name == "mapping-stats-drop" || name == "portlist-req-fail" || name == "ipalias-add-fail" || name == "limit-entry-add-fail" || name == "in2out-drops" || name == "out2in-drops" || name == "mib-addr-binds" || name == "mib-addport-binds")
        return true;
    return false;
}

NatData::IpNatTranslation::IpNatTranslation()
    :
    inside_local_addr{YType::str, "inside-local-addr"},
    outside_local_addr{YType::str, "outside-local-addr"},
    inside_local_port{YType::uint16, "inside-local-port"},
    outside_local_port{YType::uint16, "outside-local-port"},
    vrfid{YType::uint16, "vrfid"},
    protocol{YType::uint8, "protocol"},
    inside_global_addr{YType::str, "inside-global-addr"},
    outside_global_addr{YType::str, "outside-global-addr"},
    inside_global_port{YType::uint16, "inside-global-port"},
    outside_global_port{YType::uint16, "outside-global-port"},
    flags{YType::uint32, "flags"},
    application_type{YType::uint8, "application-type"}
{

    yang_name = "ip-nat-translation"; yang_parent_name = "nat-data"; is_top_level_class = false; has_list_ancestor = false;
}

NatData::IpNatTranslation::~IpNatTranslation()
{
}

bool NatData::IpNatTranslation::has_data() const
{
    return inside_local_addr.is_set
	|| outside_local_addr.is_set
	|| inside_local_port.is_set
	|| outside_local_port.is_set
	|| vrfid.is_set
	|| protocol.is_set
	|| inside_global_addr.is_set
	|| outside_global_addr.is_set
	|| inside_global_port.is_set
	|| outside_global_port.is_set
	|| flags.is_set
	|| application_type.is_set;
}

bool NatData::IpNatTranslation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inside_local_addr.yfilter)
	|| ydk::is_set(outside_local_addr.yfilter)
	|| ydk::is_set(inside_local_port.yfilter)
	|| ydk::is_set(outside_local_port.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(inside_global_addr.yfilter)
	|| ydk::is_set(outside_global_addr.yfilter)
	|| ydk::is_set(inside_global_port.yfilter)
	|| ydk::is_set(outside_global_port.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(application_type.yfilter);
}

std::string NatData::IpNatTranslation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat-oper:nat-data/" << get_segment_path();
    return path_buffer.str();
}

std::string NatData::IpNatTranslation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-nat-translation" <<"[inside-local-addr='" <<inside_local_addr <<"']" <<"[outside-local-addr='" <<outside_local_addr <<"']" <<"[inside-local-port='" <<inside_local_port <<"']" <<"[outside-local-port='" <<outside_local_port <<"']" <<"[vrfid='" <<vrfid <<"']" <<"[protocol='" <<protocol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NatData::IpNatTranslation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inside_local_addr.is_set || is_set(inside_local_addr.yfilter)) leaf_name_data.push_back(inside_local_addr.get_name_leafdata());
    if (outside_local_addr.is_set || is_set(outside_local_addr.yfilter)) leaf_name_data.push_back(outside_local_addr.get_name_leafdata());
    if (inside_local_port.is_set || is_set(inside_local_port.yfilter)) leaf_name_data.push_back(inside_local_port.get_name_leafdata());
    if (outside_local_port.is_set || is_set(outside_local_port.yfilter)) leaf_name_data.push_back(outside_local_port.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (inside_global_addr.is_set || is_set(inside_global_addr.yfilter)) leaf_name_data.push_back(inside_global_addr.get_name_leafdata());
    if (outside_global_addr.is_set || is_set(outside_global_addr.yfilter)) leaf_name_data.push_back(outside_global_addr.get_name_leafdata());
    if (inside_global_port.is_set || is_set(inside_global_port.yfilter)) leaf_name_data.push_back(inside_global_port.get_name_leafdata());
    if (outside_global_port.is_set || is_set(outside_global_port.yfilter)) leaf_name_data.push_back(outside_global_port.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NatData::IpNatTranslation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NatData::IpNatTranslation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NatData::IpNatTranslation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inside-local-addr")
    {
        inside_local_addr = value;
        inside_local_addr.value_namespace = name_space;
        inside_local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outside-local-addr")
    {
        outside_local_addr = value;
        outside_local_addr.value_namespace = name_space;
        outside_local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inside-local-port")
    {
        inside_local_port = value;
        inside_local_port.value_namespace = name_space;
        inside_local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outside-local-port")
    {
        outside_local_port = value;
        outside_local_port.value_namespace = name_space;
        outside_local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inside-global-addr")
    {
        inside_global_addr = value;
        inside_global_addr.value_namespace = name_space;
        inside_global_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outside-global-addr")
    {
        outside_global_addr = value;
        outside_global_addr.value_namespace = name_space;
        outside_global_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inside-global-port")
    {
        inside_global_port = value;
        inside_global_port.value_namespace = name_space;
        inside_global_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outside-global-port")
    {
        outside_global_port = value;
        outside_global_port.value_namespace = name_space;
        outside_global_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
}

void NatData::IpNatTranslation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inside-local-addr")
    {
        inside_local_addr.yfilter = yfilter;
    }
    if(value_path == "outside-local-addr")
    {
        outside_local_addr.yfilter = yfilter;
    }
    if(value_path == "inside-local-port")
    {
        inside_local_port.yfilter = yfilter;
    }
    if(value_path == "outside-local-port")
    {
        outside_local_port.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "inside-global-addr")
    {
        inside_global_addr.yfilter = yfilter;
    }
    if(value_path == "outside-global-addr")
    {
        outside_global_addr.yfilter = yfilter;
    }
    if(value_path == "inside-global-port")
    {
        inside_global_port.yfilter = yfilter;
    }
    if(value_path == "outside-global-port")
    {
        outside_global_port.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
}

bool NatData::IpNatTranslation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inside-local-addr" || name == "outside-local-addr" || name == "inside-local-port" || name == "outside-local-port" || name == "vrfid" || name == "protocol" || name == "inside-global-addr" || name == "outside-global-addr" || name == "inside-global-port" || name == "outside-global-port" || name == "flags" || name == "application-type")
        return true;
    return false;
}


}
}

