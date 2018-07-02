
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_6.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_7.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

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

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::UnderlyingInterface()
    :
    interface_index{YType::uint32, "interface-index"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_index.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_index.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"},
    adjacency_count{YType::uint32, "adjacency-count"},
    lsp_pacing_interval{YType::uint32, "lsp-pacing-interval"},
    psnp_transmit_queue_size{YType::uint32, "psnp-transmit-queue-size"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_multiplier{YType::uint32, "hello-multiplier"}
        ,
    lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData>())
{
    lan_data->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| adjacency_count.is_set
	|| lsp_pacing_interval.is_set
	|| psnp_transmit_queue_size.is_set
	|| hello_interval.is_set
	|| hello_multiplier.is_set
	|| (lan_data !=  nullptr && lan_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(adjacency_count.yfilter)
	|| ydk::is_set(lsp_pacing_interval.yfilter)
	|| ydk::is_set(psnp_transmit_queue_size.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hello_multiplier.yfilter)
	|| (lan_data !=  nullptr && lan_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (adjacency_count.is_set || is_set(adjacency_count.yfilter)) leaf_name_data.push_back(adjacency_count.get_name_leafdata());
    if (lsp_pacing_interval.is_set || is_set(lsp_pacing_interval.yfilter)) leaf_name_data.push_back(lsp_pacing_interval.get_name_leafdata());
    if (psnp_transmit_queue_size.is_set || is_set(psnp_transmit_queue_size.yfilter)) leaf_name_data.push_back(psnp_transmit_queue_size.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lan-data")
    {
        if(lan_data == nullptr)
        {
            lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData>();
        }
        return lan_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lan_data != nullptr)
    {
        children["lan-data"] = lan_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-count")
    {
        adjacency_count = value;
        adjacency_count.value_namespace = name_space;
        adjacency_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval = value;
        lsp_pacing_interval.value_namespace = name_space;
        lsp_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnp-transmit-queue-size")
    {
        psnp_transmit_queue_size = value;
        psnp_transmit_queue_size.value_namespace = name_space;
        psnp_transmit_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "adjacency-count")
    {
        adjacency_count.yfilter = yfilter;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval.yfilter = yfilter;
    }
    if(value_path == "psnp-transmit-queue-size")
    {
        psnp_transmit_queue_size.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lan-data" || name == "level" || name == "adjacency-count" || name == "lsp-pacing-interval" || name == "psnp-transmit-queue-size" || name == "hello-interval" || name == "hello-multiplier")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::LanData()
    :
    circuit_lan_id{YType::str, "circuit-lan-id"},
    time_until_next_iih{YType::uint32, "time-until-next-iih"},
    interface_priority{YType::uint8, "interface-priority"},
    dispriority{YType::uint8, "dispriority"},
    are_we_dis{YType::boolean, "are-we-dis"}
{

    yang_name = "lan-data"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::~LanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_data() const
{
    if (is_presence_container) return true;
    return circuit_lan_id.is_set
	|| time_until_next_iih.is_set
	|| interface_priority.is_set
	|| dispriority.is_set
	|| are_we_dis.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(circuit_lan_id.yfilter)
	|| ydk::is_set(time_until_next_iih.yfilter)
	|| ydk::is_set(interface_priority.yfilter)
	|| ydk::is_set(dispriority.yfilter)
	|| ydk::is_set(are_we_dis.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_lan_id.is_set || is_set(circuit_lan_id.yfilter)) leaf_name_data.push_back(circuit_lan_id.get_name_leafdata());
    if (time_until_next_iih.is_set || is_set(time_until_next_iih.yfilter)) leaf_name_data.push_back(time_until_next_iih.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.yfilter)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (dispriority.is_set || is_set(dispriority.yfilter)) leaf_name_data.push_back(dispriority.get_name_leafdata());
    if (are_we_dis.is_set || is_set(are_we_dis.yfilter)) leaf_name_data.push_back(are_we_dis.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "circuit-lan-id")
    {
        circuit_lan_id = value;
        circuit_lan_id.value_namespace = name_space;
        circuit_lan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih = value;
        time_until_next_iih.value_namespace = name_space;
        time_until_next_iih.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
        interface_priority.value_namespace = name_space;
        interface_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispriority")
    {
        dispriority = value;
        dispriority.value_namespace = name_space;
        dispriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dis")
    {
        are_we_dis = value;
        are_we_dis.value_namespace = name_space;
        are_we_dis.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "circuit-lan-id")
    {
        circuit_lan_id.yfilter = yfilter;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih.yfilter = yfilter;
    }
    if(value_path == "interface-priority")
    {
        interface_priority.yfilter = yfilter;
    }
    if(value_path == "dispriority")
    {
        dispriority.yfilter = yfilter;
    }
    if(value_path == "are-we-dis")
    {
        are_we_dis.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-lan-id" || name == "time-until-next-iih" || name == "interface-priority" || name == "dispriority" || name == "are-we-dis")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::PerTopologyData()
    :
    topology_id(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId>())
    , status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status>())
{
    topology_id->parent = this;
    status->parent = this;

    yang_name = "per-topology-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::~PerTopologyData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_data() const
{
    if (is_presence_container) return true;
    return (topology_id !=  nullptr && topology_id->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_operation() const
{
    return is_set(yfilter)
	|| (topology_id !=  nullptr && topology_id->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-id")
    {
        if(topology_id == nullptr)
        {
            topology_id = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId>();
        }
        return topology_id;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topology_id != nullptr)
    {
        children["topology-id"] = topology_id;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-id" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::TopologyId()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "topology-id"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::~TopologyId()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Status()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled>())
    , enabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_>())
{
    disabled->parent = this;
    enabled->parent = this;

    yang_name = "status"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::~Status()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (enabled !=  nullptr && enabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (enabled !=  nullptr && enabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled>();
        }
        return disabled;
    }

    if(child_yang_name == "enabled")
    {
        if(enabled == nullptr)
        {
            enabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_>();
        }
        return enabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_children() const
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

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Enabled_()
    :
    level1_metric{YType::uint32, "level1-metric"},
    level2_metric{YType::uint32, "level2-metric"},
    level1_weight{YType::uint32, "level1-weight"},
    level2_weight{YType::uint32, "level2-weight"},
    max_label_supported{YType::uint8, "max-label-supported"},
    max_bkp_label_supported{YType::uint8, "max-bkp-label-supported"},
    max_srte_label_supported{YType::uint8, "max-srte-label-supported"},
    level1ldp_sync_enabled{YType::boolean, "level1ldp-sync-enabled"},
    level2ldp_sync_enabled{YType::boolean, "level2ldp-sync-enabled"},
    ldp_sync_status{YType::boolean, "ldp-sync-status"},
    ld_pv6_sync_status{YType::boolean, "ld-pv6-sync-status"},
    level1_offset_metric{YType::uint32, "level1-offset-metric"},
    level2_offset_metric{YType::uint32, "level2-offset-metric"},
    level1_lkgp_configured{YType::boolean, "level1-lkgp-configured"},
    level2_lkgp_configured{YType::boolean, "level2-lkgp-configured"},
    level1pp_metric{YType::uint32, "level1pp-metric"},
    level2pp_metric{YType::uint32, "level2pp-metric"},
    level1pp_configured{YType::boolean, "level1pp-configured"},
    level2pp_configured{YType::boolean, "level2pp-configured"}
        ,
    adjacency_form_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus>())
    , adv_prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus>())
    , level1_frr(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr>())
    , level2_frr(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr>())
    , manual_adj_sid(this, {})
{
    adjacency_form_status->parent = this;
    adv_prefix_status->parent = this;
    level1_frr->parent = this;
    level2_frr->parent = this;

    yang_name = "enabled"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::~Enabled_()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_data())
            return true;
    }
    return level1_metric.is_set
	|| level2_metric.is_set
	|| level1_weight.is_set
	|| level2_weight.is_set
	|| max_label_supported.is_set
	|| max_bkp_label_supported.is_set
	|| max_srte_label_supported.is_set
	|| level1ldp_sync_enabled.is_set
	|| level2ldp_sync_enabled.is_set
	|| ldp_sync_status.is_set
	|| ld_pv6_sync_status.is_set
	|| level1_offset_metric.is_set
	|| level2_offset_metric.is_set
	|| level1_lkgp_configured.is_set
	|| level2_lkgp_configured.is_set
	|| level1pp_metric.is_set
	|| level2pp_metric.is_set
	|| level1pp_configured.is_set
	|| level2pp_configured.is_set
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_data())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_data())
	|| (level1_frr !=  nullptr && level1_frr->has_data())
	|| (level2_frr !=  nullptr && level2_frr->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_operation() const
{
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level1_metric.yfilter)
	|| ydk::is_set(level2_metric.yfilter)
	|| ydk::is_set(level1_weight.yfilter)
	|| ydk::is_set(level2_weight.yfilter)
	|| ydk::is_set(max_label_supported.yfilter)
	|| ydk::is_set(max_bkp_label_supported.yfilter)
	|| ydk::is_set(max_srte_label_supported.yfilter)
	|| ydk::is_set(level1ldp_sync_enabled.yfilter)
	|| ydk::is_set(level2ldp_sync_enabled.yfilter)
	|| ydk::is_set(ldp_sync_status.yfilter)
	|| ydk::is_set(ld_pv6_sync_status.yfilter)
	|| ydk::is_set(level1_offset_metric.yfilter)
	|| ydk::is_set(level2_offset_metric.yfilter)
	|| ydk::is_set(level1_lkgp_configured.yfilter)
	|| ydk::is_set(level2_lkgp_configured.yfilter)
	|| ydk::is_set(level1pp_metric.yfilter)
	|| ydk::is_set(level2pp_metric.yfilter)
	|| ydk::is_set(level1pp_configured.yfilter)
	|| ydk::is_set(level2pp_configured.yfilter)
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_operation())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_operation())
	|| (level1_frr !=  nullptr && level1_frr->has_operation())
	|| (level2_frr !=  nullptr && level2_frr->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level1_metric.is_set || is_set(level1_metric.yfilter)) leaf_name_data.push_back(level1_metric.get_name_leafdata());
    if (level2_metric.is_set || is_set(level2_metric.yfilter)) leaf_name_data.push_back(level2_metric.get_name_leafdata());
    if (level1_weight.is_set || is_set(level1_weight.yfilter)) leaf_name_data.push_back(level1_weight.get_name_leafdata());
    if (level2_weight.is_set || is_set(level2_weight.yfilter)) leaf_name_data.push_back(level2_weight.get_name_leafdata());
    if (max_label_supported.is_set || is_set(max_label_supported.yfilter)) leaf_name_data.push_back(max_label_supported.get_name_leafdata());
    if (max_bkp_label_supported.is_set || is_set(max_bkp_label_supported.yfilter)) leaf_name_data.push_back(max_bkp_label_supported.get_name_leafdata());
    if (max_srte_label_supported.is_set || is_set(max_srte_label_supported.yfilter)) leaf_name_data.push_back(max_srte_label_supported.get_name_leafdata());
    if (level1ldp_sync_enabled.is_set || is_set(level1ldp_sync_enabled.yfilter)) leaf_name_data.push_back(level1ldp_sync_enabled.get_name_leafdata());
    if (level2ldp_sync_enabled.is_set || is_set(level2ldp_sync_enabled.yfilter)) leaf_name_data.push_back(level2ldp_sync_enabled.get_name_leafdata());
    if (ldp_sync_status.is_set || is_set(ldp_sync_status.yfilter)) leaf_name_data.push_back(ldp_sync_status.get_name_leafdata());
    if (ld_pv6_sync_status.is_set || is_set(ld_pv6_sync_status.yfilter)) leaf_name_data.push_back(ld_pv6_sync_status.get_name_leafdata());
    if (level1_offset_metric.is_set || is_set(level1_offset_metric.yfilter)) leaf_name_data.push_back(level1_offset_metric.get_name_leafdata());
    if (level2_offset_metric.is_set || is_set(level2_offset_metric.yfilter)) leaf_name_data.push_back(level2_offset_metric.get_name_leafdata());
    if (level1_lkgp_configured.is_set || is_set(level1_lkgp_configured.yfilter)) leaf_name_data.push_back(level1_lkgp_configured.get_name_leafdata());
    if (level2_lkgp_configured.is_set || is_set(level2_lkgp_configured.yfilter)) leaf_name_data.push_back(level2_lkgp_configured.get_name_leafdata());
    if (level1pp_metric.is_set || is_set(level1pp_metric.yfilter)) leaf_name_data.push_back(level1pp_metric.get_name_leafdata());
    if (level2pp_metric.is_set || is_set(level2pp_metric.yfilter)) leaf_name_data.push_back(level2pp_metric.get_name_leafdata());
    if (level1pp_configured.is_set || is_set(level1pp_configured.yfilter)) leaf_name_data.push_back(level1pp_configured.get_name_leafdata());
    if (level2pp_configured.is_set || is_set(level2pp_configured.yfilter)) leaf_name_data.push_back(level2pp_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-form-status")
    {
        if(adjacency_form_status == nullptr)
        {
            adjacency_form_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus>();
        }
        return adjacency_form_status;
    }

    if(child_yang_name == "adv-prefix-status")
    {
        if(adv_prefix_status == nullptr)
        {
            adv_prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus>();
        }
        return adv_prefix_status;
    }

    if(child_yang_name == "level1-frr")
    {
        if(level1_frr == nullptr)
        {
            level1_frr = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr>();
        }
        return level1_frr;
    }

    if(child_yang_name == "level2-frr")
    {
        if(level2_frr == nullptr)
        {
            level2_frr = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr>();
        }
        return level2_frr;
    }

    if(child_yang_name == "manual-adj-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid>();
        c->parent = this;
        manual_adj_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_children() const
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

    if(level1_frr != nullptr)
    {
        children["level1-frr"] = level1_frr;
    }

    if(level2_frr != nullptr)
    {
        children["level2-frr"] = level2_frr;
    }

    count = 0;
    for (auto c : manual_adj_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level1-metric")
    {
        level1_metric = value;
        level1_metric.value_namespace = name_space;
        level1_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-metric")
    {
        level2_metric = value;
        level2_metric.value_namespace = name_space;
        level2_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-weight")
    {
        level1_weight = value;
        level1_weight.value_namespace = name_space;
        level1_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-weight")
    {
        level2_weight = value;
        level2_weight.value_namespace = name_space;
        level2_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-label-supported")
    {
        max_label_supported = value;
        max_label_supported.value_namespace = name_space;
        max_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bkp-label-supported")
    {
        max_bkp_label_supported = value;
        max_bkp_label_supported.value_namespace = name_space;
        max_bkp_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-srte-label-supported")
    {
        max_srte_label_supported = value;
        max_srte_label_supported.value_namespace = name_space;
        max_srte_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1ldp-sync-enabled")
    {
        level1ldp_sync_enabled = value;
        level1ldp_sync_enabled.value_namespace = name_space;
        level1ldp_sync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2ldp-sync-enabled")
    {
        level2ldp_sync_enabled = value;
        level2ldp_sync_enabled.value_namespace = name_space;
        level2ldp_sync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync-status")
    {
        ldp_sync_status = value;
        ldp_sync_status.value_namespace = name_space;
        ldp_sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ld-pv6-sync-status")
    {
        ld_pv6_sync_status = value;
        ld_pv6_sync_status.value_namespace = name_space;
        ld_pv6_sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-offset-metric")
    {
        level1_offset_metric = value;
        level1_offset_metric.value_namespace = name_space;
        level1_offset_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-offset-metric")
    {
        level2_offset_metric = value;
        level2_offset_metric.value_namespace = name_space;
        level2_offset_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-lkgp-configured")
    {
        level1_lkgp_configured = value;
        level1_lkgp_configured.value_namespace = name_space;
        level1_lkgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-lkgp-configured")
    {
        level2_lkgp_configured = value;
        level2_lkgp_configured.value_namespace = name_space;
        level2_lkgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1pp-metric")
    {
        level1pp_metric = value;
        level1pp_metric.value_namespace = name_space;
        level1pp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2pp-metric")
    {
        level2pp_metric = value;
        level2pp_metric.value_namespace = name_space;
        level2pp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1pp-configured")
    {
        level1pp_configured = value;
        level1pp_configured.value_namespace = name_space;
        level1pp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2pp-configured")
    {
        level2pp_configured = value;
        level2pp_configured.value_namespace = name_space;
        level2pp_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level1-metric")
    {
        level1_metric.yfilter = yfilter;
    }
    if(value_path == "level2-metric")
    {
        level2_metric.yfilter = yfilter;
    }
    if(value_path == "level1-weight")
    {
        level1_weight.yfilter = yfilter;
    }
    if(value_path == "level2-weight")
    {
        level2_weight.yfilter = yfilter;
    }
    if(value_path == "max-label-supported")
    {
        max_label_supported.yfilter = yfilter;
    }
    if(value_path == "max-bkp-label-supported")
    {
        max_bkp_label_supported.yfilter = yfilter;
    }
    if(value_path == "max-srte-label-supported")
    {
        max_srte_label_supported.yfilter = yfilter;
    }
    if(value_path == "level1ldp-sync-enabled")
    {
        level1ldp_sync_enabled.yfilter = yfilter;
    }
    if(value_path == "level2ldp-sync-enabled")
    {
        level2ldp_sync_enabled.yfilter = yfilter;
    }
    if(value_path == "ldp-sync-status")
    {
        ldp_sync_status.yfilter = yfilter;
    }
    if(value_path == "ld-pv6-sync-status")
    {
        ld_pv6_sync_status.yfilter = yfilter;
    }
    if(value_path == "level1-offset-metric")
    {
        level1_offset_metric.yfilter = yfilter;
    }
    if(value_path == "level2-offset-metric")
    {
        level2_offset_metric.yfilter = yfilter;
    }
    if(value_path == "level1-lkgp-configured")
    {
        level1_lkgp_configured.yfilter = yfilter;
    }
    if(value_path == "level2-lkgp-configured")
    {
        level2_lkgp_configured.yfilter = yfilter;
    }
    if(value_path == "level1pp-metric")
    {
        level1pp_metric.yfilter = yfilter;
    }
    if(value_path == "level2pp-metric")
    {
        level2pp_metric.yfilter = yfilter;
    }
    if(value_path == "level1pp-configured")
    {
        level1pp_configured.yfilter = yfilter;
    }
    if(value_path == "level2pp-configured")
    {
        level2pp_configured.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-form-status" || name == "adv-prefix-status" || name == "level1-frr" || name == "level2-frr" || name == "manual-adj-sid" || name == "level1-metric" || name == "level2-metric" || name == "level1-weight" || name == "level2-weight" || name == "max-label-supported" || name == "max-bkp-label-supported" || name == "max-srte-label-supported" || name == "level1ldp-sync-enabled" || name == "level2ldp-sync-enabled" || name == "ldp-sync-status" || name == "ld-pv6-sync-status" || name == "level1-offset-metric" || name == "level2-offset-metric" || name == "level1-lkgp-configured" || name == "level2-lkgp-configured" || name == "level1pp-metric" || name == "level2pp-metric" || name == "level1pp-configured" || name == "level2pp-configured")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::AdjacencyFormStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adjacency-form-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::~AdjacencyFormStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-form-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adjacency-form-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::AdvPrefixStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adv-prefix-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::~AdvPrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-prefix-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adv-prefix-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::Level1Frr()
    :
    frr_type{YType::enumeration, "frr-type"},
    is_frr{YType::boolean, "is-frr"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_ti_lfa{YType::boolean, "is-ti-lfa"},
    ti_lfa_node_tie_breaker_index{YType::uint8, "ti-lfa-node-tie-breaker-index"},
    ti_lfa_srlg_tie_breaker{YType::uint8, "ti-lfa-srlg-tie-breaker"},
    is_tie_breakers_configured{YType::boolean, "is-tie-breakers-configured"}
        ,
    frr_tie_breaker(this, {})
{

    yang_name = "level1-frr"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::~Level1Frr()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_tie_breaker.len(); index++)
    {
        if(frr_tie_breaker[index]->has_data())
            return true;
    }
    return frr_type.is_set
	|| is_frr.is_set
	|| is_remote_lfa.is_set
	|| is_ti_lfa.is_set
	|| ti_lfa_node_tie_breaker_index.is_set
	|| ti_lfa_srlg_tie_breaker.is_set
	|| is_tie_breakers_configured.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::has_operation() const
{
    for (std::size_t index=0; index<frr_tie_breaker.len(); index++)
    {
        if(frr_tie_breaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(is_frr.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_ti_lfa.yfilter)
	|| ydk::is_set(ti_lfa_node_tie_breaker_index.yfilter)
	|| ydk::is_set(ti_lfa_srlg_tie_breaker.yfilter)
	|| ydk::is_set(is_tie_breakers_configured.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (is_frr.is_set || is_set(is_frr.yfilter)) leaf_name_data.push_back(is_frr.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_ti_lfa.is_set || is_set(is_ti_lfa.yfilter)) leaf_name_data.push_back(is_ti_lfa.get_name_leafdata());
    if (ti_lfa_node_tie_breaker_index.is_set || is_set(ti_lfa_node_tie_breaker_index.yfilter)) leaf_name_data.push_back(ti_lfa_node_tie_breaker_index.get_name_leafdata());
    if (ti_lfa_srlg_tie_breaker.is_set || is_set(ti_lfa_srlg_tie_breaker.yfilter)) leaf_name_data.push_back(ti_lfa_srlg_tie_breaker.get_name_leafdata());
    if (is_tie_breakers_configured.is_set || is_set(is_tie_breakers_configured.yfilter)) leaf_name_data.push_back(is_tie_breakers_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-tie-breaker")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker>();
        c->parent = this;
        frr_tie_breaker.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frr_tie_breaker.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr")
    {
        is_frr = value;
        is_frr.value_namespace = name_space;
        is_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa = value;
        is_ti_lfa.value_namespace = name_space;
        is_ti_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index = value;
        ti_lfa_node_tie_breaker_index.value_namespace = name_space;
        ti_lfa_node_tie_breaker_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker = value;
        ti_lfa_srlg_tie_breaker.value_namespace = name_space;
        ti_lfa_srlg_tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured = value;
        is_tie_breakers_configured.value_namespace = name_space;
        is_tie_breakers_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "is-frr")
    {
        is_frr.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker.yfilter = yfilter;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-tie-breaker" || name == "frr-type" || name == "is-frr" || name == "is-remote-lfa" || name == "is-ti-lfa" || name == "ti-lfa-node-tie-breaker-index" || name == "ti-lfa-srlg-tie-breaker" || name == "is-tie-breakers-configured")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::FrrTieBreaker()
    :
    tie_breaker{YType::enumeration, "tie-breaker"},
    index_{YType::uint8, "index"}
{

    yang_name = "frr-tie-breaker"; yang_parent_name = "level1-frr"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::~FrrTieBreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::has_data() const
{
    if (is_presence_container) return true;
    return tie_breaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tie_breaker.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tie-breaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tie_breaker.is_set || is_set(tie_breaker.yfilter)) leaf_name_data.push_back(tie_breaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tie-breaker")
    {
        tie_breaker = value;
        tie_breaker.value_namespace = name_space;
        tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tie-breaker")
    {
        tie_breaker.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tie-breaker" || name == "index")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::Level2Frr()
    :
    frr_type{YType::enumeration, "frr-type"},
    is_frr{YType::boolean, "is-frr"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_ti_lfa{YType::boolean, "is-ti-lfa"},
    ti_lfa_node_tie_breaker_index{YType::uint8, "ti-lfa-node-tie-breaker-index"},
    ti_lfa_srlg_tie_breaker{YType::uint8, "ti-lfa-srlg-tie-breaker"},
    is_tie_breakers_configured{YType::boolean, "is-tie-breakers-configured"}
        ,
    frr_tie_breaker(this, {})
{

    yang_name = "level2-frr"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::~Level2Frr()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_tie_breaker.len(); index++)
    {
        if(frr_tie_breaker[index]->has_data())
            return true;
    }
    return frr_type.is_set
	|| is_frr.is_set
	|| is_remote_lfa.is_set
	|| is_ti_lfa.is_set
	|| ti_lfa_node_tie_breaker_index.is_set
	|| ti_lfa_srlg_tie_breaker.is_set
	|| is_tie_breakers_configured.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::has_operation() const
{
    for (std::size_t index=0; index<frr_tie_breaker.len(); index++)
    {
        if(frr_tie_breaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(is_frr.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_ti_lfa.yfilter)
	|| ydk::is_set(ti_lfa_node_tie_breaker_index.yfilter)
	|| ydk::is_set(ti_lfa_srlg_tie_breaker.yfilter)
	|| ydk::is_set(is_tie_breakers_configured.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (is_frr.is_set || is_set(is_frr.yfilter)) leaf_name_data.push_back(is_frr.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_ti_lfa.is_set || is_set(is_ti_lfa.yfilter)) leaf_name_data.push_back(is_ti_lfa.get_name_leafdata());
    if (ti_lfa_node_tie_breaker_index.is_set || is_set(ti_lfa_node_tie_breaker_index.yfilter)) leaf_name_data.push_back(ti_lfa_node_tie_breaker_index.get_name_leafdata());
    if (ti_lfa_srlg_tie_breaker.is_set || is_set(ti_lfa_srlg_tie_breaker.yfilter)) leaf_name_data.push_back(ti_lfa_srlg_tie_breaker.get_name_leafdata());
    if (is_tie_breakers_configured.is_set || is_set(is_tie_breakers_configured.yfilter)) leaf_name_data.push_back(is_tie_breakers_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-tie-breaker")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker>();
        c->parent = this;
        frr_tie_breaker.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frr_tie_breaker.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr")
    {
        is_frr = value;
        is_frr.value_namespace = name_space;
        is_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa = value;
        is_ti_lfa.value_namespace = name_space;
        is_ti_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index = value;
        ti_lfa_node_tie_breaker_index.value_namespace = name_space;
        ti_lfa_node_tie_breaker_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker = value;
        ti_lfa_srlg_tie_breaker.value_namespace = name_space;
        ti_lfa_srlg_tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured = value;
        is_tie_breakers_configured.value_namespace = name_space;
        is_tie_breakers_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "is-frr")
    {
        is_frr.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker.yfilter = yfilter;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-tie-breaker" || name == "frr-type" || name == "is-frr" || name == "is-remote-lfa" || name == "is-ti-lfa" || name == "ti-lfa-node-tie-breaker-index" || name == "ti-lfa-srlg-tie-breaker" || name == "is-tie-breakers-configured")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::FrrTieBreaker()
    :
    tie_breaker{YType::enumeration, "tie-breaker"},
    index_{YType::uint8, "index"}
{

    yang_name = "frr-tie-breaker"; yang_parent_name = "level2-frr"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::~FrrTieBreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::has_data() const
{
    if (is_presence_container) return true;
    return tie_breaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tie_breaker.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tie-breaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tie_breaker.is_set || is_set(tie_breaker.yfilter)) leaf_name_data.push_back(tie_breaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tie-breaker")
    {
        tie_breaker = value;
        tie_breaker.value_namespace = name_space;
        tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tie-breaker")
    {
        tie_breaker.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tie-breaker" || name == "index")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::ManualAdjSid()
    :
    manual_adjacency_sid_label{YType::uint32, "manual-adjacency-sid-label"},
    manual_adjacency_sid_index{YType::uint32, "manual-adjacency-sid-index"},
    manual_adjacency_sid_type{YType::uint8, "manual-adjacency-sid-type"},
    sid_protected{YType::boolean, "sid-protected"},
    sid_active{YType::boolean, "sid-active"}
{

    yang_name = "manual-adj-sid"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::~ManualAdjSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::has_data() const
{
    if (is_presence_container) return true;
    return manual_adjacency_sid_label.is_set
	|| manual_adjacency_sid_index.is_set
	|| manual_adjacency_sid_type.is_set
	|| sid_protected.is_set
	|| sid_active.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(manual_adjacency_sid_label.yfilter)
	|| ydk::is_set(manual_adjacency_sid_index.yfilter)
	|| ydk::is_set(manual_adjacency_sid_type.yfilter)
	|| ydk::is_set(sid_protected.yfilter)
	|| ydk::is_set(sid_active.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (manual_adjacency_sid_label.is_set || is_set(manual_adjacency_sid_label.yfilter)) leaf_name_data.push_back(manual_adjacency_sid_label.get_name_leafdata());
    if (manual_adjacency_sid_index.is_set || is_set(manual_adjacency_sid_index.yfilter)) leaf_name_data.push_back(manual_adjacency_sid_index.get_name_leafdata());
    if (manual_adjacency_sid_type.is_set || is_set(manual_adjacency_sid_type.yfilter)) leaf_name_data.push_back(manual_adjacency_sid_type.get_name_leafdata());
    if (sid_protected.is_set || is_set(sid_protected.yfilter)) leaf_name_data.push_back(sid_protected.get_name_leafdata());
    if (sid_active.is_set || is_set(sid_active.yfilter)) leaf_name_data.push_back(sid_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "manual-adjacency-sid-label")
    {
        manual_adjacency_sid_label = value;
        manual_adjacency_sid_label.value_namespace = name_space;
        manual_adjacency_sid_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual-adjacency-sid-index")
    {
        manual_adjacency_sid_index = value;
        manual_adjacency_sid_index.value_namespace = name_space;
        manual_adjacency_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual-adjacency-sid-type")
    {
        manual_adjacency_sid_type = value;
        manual_adjacency_sid_type.value_namespace = name_space;
        manual_adjacency_sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-protected")
    {
        sid_protected = value;
        sid_protected.value_namespace = name_space;
        sid_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-active")
    {
        sid_active = value;
        sid_active.value_namespace = name_space;
        sid_active.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "manual-adjacency-sid-label")
    {
        manual_adjacency_sid_label.yfilter = yfilter;
    }
    if(value_path == "manual-adjacency-sid-index")
    {
        manual_adjacency_sid_index.yfilter = yfilter;
    }
    if(value_path == "manual-adjacency-sid-type")
    {
        manual_adjacency_sid_type.yfilter = yfilter;
    }
    if(value_path == "sid-protected")
    {
        sid_protected.yfilter = yfilter;
    }
    if(value_path == "sid-active")
    {
        sid_active.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-adjacency-sid-label" || name == "manual-adjacency-sid-index" || name == "manual-adjacency-sid-type" || name == "sid-protected" || name == "sid-active")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::PerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    af_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus>())
{
    af_status->parent = this;

    yang_name = "per-address-family-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::~PerAddressFamilyData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (af_status !=  nullptr && af_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (af_status !=  nullptr && af_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-address-family-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-status")
    {
        if(af_status == nullptr)
        {
            af_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus>();
        }
        return af_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(af_status != nullptr)
    {
        children["af-status"] = af_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-status" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled>())
    , af_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData>())
{
    disabled->parent = this;
    af_data->parent = this;

    yang_name = "af-status"; yang_parent_name = "per-address-family-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::~AfStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (af_data !=  nullptr && af_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (af_data !=  nullptr && af_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled>();
        }
        return disabled;
    }

    if(child_yang_name == "af-data")
    {
        if(af_data == nullptr)
        {
            af_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData>();
        }
        return af_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    if(af_data != nullptr)
    {
        children["af-data"] = af_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "af-data" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "af-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::AfData()
    :
    protocol_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus>())
    , forwarding_address_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus>())
    , prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus>())
{
    protocol_status->parent = this;
    forwarding_address_status->parent = this;
    prefix_status->parent = this;

    yang_name = "af-data"; yang_parent_name = "af-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::~AfData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_data() const
{
    if (is_presence_container) return true;
    return (protocol_status !=  nullptr && protocol_status->has_data())
	|| (forwarding_address_status !=  nullptr && forwarding_address_status->has_data())
	|| (prefix_status !=  nullptr && prefix_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_status !=  nullptr && protocol_status->has_operation())
	|| (forwarding_address_status !=  nullptr && forwarding_address_status->has_operation())
	|| (prefix_status !=  nullptr && prefix_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-status")
    {
        if(protocol_status == nullptr)
        {
            protocol_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus>();
        }
        return protocol_status;
    }

    if(child_yang_name == "forwarding-address-status")
    {
        if(forwarding_address_status == nullptr)
        {
            forwarding_address_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus>();
        }
        return forwarding_address_status;
    }

    if(child_yang_name == "prefix-status")
    {
        if(prefix_status == nullptr)
        {
            prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus>();
        }
        return prefix_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocol_status != nullptr)
    {
        children["protocol-status"] = protocol_status;
    }

    if(forwarding_address_status != nullptr)
    {
        children["forwarding-address-status"] = forwarding_address_status;
    }

    if(prefix_status != nullptr)
    {
        children["prefix-status"] = prefix_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-status" || name == "forwarding-address-status" || name == "prefix-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::ProtocolStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "protocol-status"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::~ProtocolStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "protocol-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressStatus()
    :
    status{YType::enumeration, "status"}
        ,
    unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown>())
    , forwarding_address_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData>())
{
    unknown->parent = this;
    forwarding_address_data->parent = this;

    yang_name = "forwarding-address-status"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::~ForwardingAddressStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (unknown !=  nullptr && unknown->has_data())
	|| (forwarding_address_data !=  nullptr && forwarding_address_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (unknown !=  nullptr && unknown->has_operation())
	|| (forwarding_address_data !=  nullptr && forwarding_address_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown>();
        }
        return unknown;
    }

    if(child_yang_name == "forwarding-address-data")
    {
        if(forwarding_address_data == nullptr)
        {
            forwarding_address_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData>();
        }
        return forwarding_address_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unknown != nullptr)
    {
        children["unknown"] = unknown;
    }

    if(forwarding_address_data != nullptr)
    {
        children["forwarding-address-data"] = forwarding_address_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown" || name == "forwarding-address-data" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "unknown"; yang_parent_name = "forwarding-address-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddressData()
    :
    unnumbered_interface_name{YType::str, "unnumbered-interface-name"}
        ,
    forwarding_address(this, {})
{

    yang_name = "forwarding-address-data"; yang_parent_name = "forwarding-address-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::~ForwardingAddressData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forwarding_address.len(); index++)
    {
        if(forwarding_address[index]->has_data())
            return true;
    }
    return unnumbered_interface_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_operation() const
{
    for (std::size_t index=0; index<forwarding_address.len(); index++)
    {
        if(forwarding_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unnumbered_interface_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered_interface_name.is_set || is_set(unnumbered_interface_name.yfilter)) leaf_name_data.push_back(unnumbered_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-address")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress>();
        c->parent = this;
        forwarding_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : forwarding_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name = value;
        unnumbered_interface_name.value_namespace = name_space;
        unnumbered_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-address" || name == "unnumbered-interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::ForwardingAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "forwarding-address"; yang_parent_name = "forwarding-address-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::~ForwardingAddress()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixStatus()
    :
    status{YType::enumeration, "status"}
        ,
    unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown>())
    , prefix_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData>())
{
    unknown->parent = this;
    prefix_data->parent = this;

    yang_name = "prefix-status"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::~PrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (unknown !=  nullptr && unknown->has_data())
	|| (prefix_data !=  nullptr && prefix_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (unknown !=  nullptr && unknown->has_operation())
	|| (prefix_data !=  nullptr && prefix_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown>();
        }
        return unknown;
    }

    if(child_yang_name == "prefix-data")
    {
        if(prefix_data == nullptr)
        {
            prefix_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData>();
        }
        return prefix_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unknown != nullptr)
    {
        children["unknown"] = unknown;
    }

    if(prefix_data != nullptr)
    {
        children["prefix-data"] = prefix_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown" || name == "prefix-data" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "unknown"; yang_parent_name = "prefix-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::PrefixData()
    :
    is_unnumbered{YType::boolean, "is-unnumbered"}
        ,
    prefix(this, {})
{

    yang_name = "prefix-data"; yang_parent_name = "prefix-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::~PrefixData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return is_unnumbered.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_operation() const
{
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_unnumbered.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix>();
        c->parent = this;
        prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "is-unnumbered")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    ipv4(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4>())
    , ipv6(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefix-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::~Prefix()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv6"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacencies()
    :
    checkpoint_adjacency(this, {})
{

    yang_name = "checkpoint-adjacencies"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointAdjacencies::~CheckpointAdjacencies()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<checkpoint_adjacency.len(); index++)
    {
        if(checkpoint_adjacency[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_adjacency.len(); index++)
    {
        if(checkpoint_adjacency[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacencies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointAdjacencies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-adjacency")
    {
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency>();
        c->parent = this;
        checkpoint_adjacency.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointAdjacencies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : checkpoint_adjacency.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointAdjacencies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-adjacency")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacency()
    :
    level{YType::enumeration, "level"},
    system_id{YType::str, "system-id"},
    interface_name{YType::str, "interface-name"},
    checkpoint_adjacency_object_id{YType::uint32, "checkpoint-adjacency-object-id"},
    checkpoint_adjacency_system_id{YType::str, "checkpoint-adjacency-system-id"},
    checkpoint_adjacency_snpa{YType::str, "checkpoint-adjacency-snpa"},
    checkpoint_adjacency_interface{YType::str, "checkpoint-adjacency-interface"},
    checkpoint_adjacency_level{YType::enumeration, "checkpoint-adjacency-level"},
    checkpoint_adjacency_holdtime{YType::uint16, "checkpoint-adjacency-holdtime"},
    checkpoint_adjacency_lan_priority{YType::uint8, "checkpoint-adjacency-lan-priority"},
    checkpoint_adjacency_circuit_number{YType::uint8, "checkpoint-adjacency-circuit-number"}
        ,
    checkpoint_adjacency_per_address_family_next_hop(this, {})
{

    yang_name = "checkpoint-adjacency"; yang_parent_name = "checkpoint-adjacencies"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::~CheckpointAdjacency()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<checkpoint_adjacency_per_address_family_next_hop.len(); index++)
    {
        if(checkpoint_adjacency_per_address_family_next_hop[index]->has_data())
            return true;
    }
    return level.is_set
	|| system_id.is_set
	|| interface_name.is_set
	|| checkpoint_adjacency_object_id.is_set
	|| checkpoint_adjacency_system_id.is_set
	|| checkpoint_adjacency_snpa.is_set
	|| checkpoint_adjacency_interface.is_set
	|| checkpoint_adjacency_level.is_set
	|| checkpoint_adjacency_holdtime.is_set
	|| checkpoint_adjacency_lan_priority.is_set
	|| checkpoint_adjacency_circuit_number.is_set;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_adjacency_per_address_family_next_hop.len(); index++)
    {
        if(checkpoint_adjacency_per_address_family_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(checkpoint_adjacency_object_id.yfilter)
	|| ydk::is_set(checkpoint_adjacency_system_id.yfilter)
	|| ydk::is_set(checkpoint_adjacency_snpa.yfilter)
	|| ydk::is_set(checkpoint_adjacency_interface.yfilter)
	|| ydk::is_set(checkpoint_adjacency_level.yfilter)
	|| ydk::is_set(checkpoint_adjacency_holdtime.yfilter)
	|| ydk::is_set(checkpoint_adjacency_lan_priority.yfilter)
	|| ydk::is_set(checkpoint_adjacency_circuit_number.yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checkpoint_adjacency_object_id.is_set || is_set(checkpoint_adjacency_object_id.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_object_id.get_name_leafdata());
    if (checkpoint_adjacency_system_id.is_set || is_set(checkpoint_adjacency_system_id.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_system_id.get_name_leafdata());
    if (checkpoint_adjacency_snpa.is_set || is_set(checkpoint_adjacency_snpa.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_snpa.get_name_leafdata());
    if (checkpoint_adjacency_interface.is_set || is_set(checkpoint_adjacency_interface.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_interface.get_name_leafdata());
    if (checkpoint_adjacency_level.is_set || is_set(checkpoint_adjacency_level.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_level.get_name_leafdata());
    if (checkpoint_adjacency_holdtime.is_set || is_set(checkpoint_adjacency_holdtime.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_holdtime.get_name_leafdata());
    if (checkpoint_adjacency_lan_priority.is_set || is_set(checkpoint_adjacency_lan_priority.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_lan_priority.get_name_leafdata());
    if (checkpoint_adjacency_circuit_number.is_set || is_set(checkpoint_adjacency_circuit_number.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_circuit_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-adjacency-per-address-family-next-hop")
    {
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop>();
        c->parent = this;
        checkpoint_adjacency_per_address_family_next_hop.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : checkpoint_adjacency_per_address_family_next_hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-object-id")
    {
        checkpoint_adjacency_object_id = value;
        checkpoint_adjacency_object_id.value_namespace = name_space;
        checkpoint_adjacency_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-system-id")
    {
        checkpoint_adjacency_system_id = value;
        checkpoint_adjacency_system_id.value_namespace = name_space;
        checkpoint_adjacency_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-snpa")
    {
        checkpoint_adjacency_snpa = value;
        checkpoint_adjacency_snpa.value_namespace = name_space;
        checkpoint_adjacency_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-interface")
    {
        checkpoint_adjacency_interface = value;
        checkpoint_adjacency_interface.value_namespace = name_space;
        checkpoint_adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-level")
    {
        checkpoint_adjacency_level = value;
        checkpoint_adjacency_level.value_namespace = name_space;
        checkpoint_adjacency_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-holdtime")
    {
        checkpoint_adjacency_holdtime = value;
        checkpoint_adjacency_holdtime.value_namespace = name_space;
        checkpoint_adjacency_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-lan-priority")
    {
        checkpoint_adjacency_lan_priority = value;
        checkpoint_adjacency_lan_priority.value_namespace = name_space;
        checkpoint_adjacency_lan_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-circuit-number")
    {
        checkpoint_adjacency_circuit_number = value;
        checkpoint_adjacency_circuit_number.value_namespace = name_space;
        checkpoint_adjacency_circuit_number.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-object-id")
    {
        checkpoint_adjacency_object_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-system-id")
    {
        checkpoint_adjacency_system_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-snpa")
    {
        checkpoint_adjacency_snpa.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-interface")
    {
        checkpoint_adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-level")
    {
        checkpoint_adjacency_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-holdtime")
    {
        checkpoint_adjacency_holdtime.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-lan-priority")
    {
        checkpoint_adjacency_lan_priority.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-circuit-number")
    {
        checkpoint_adjacency_circuit_number.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-adjacency-per-address-family-next-hop" || name == "level" || name == "system-id" || name == "interface-name" || name == "checkpoint-adjacency-object-id" || name == "checkpoint-adjacency-system-id" || name == "checkpoint-adjacency-snpa" || name == "checkpoint-adjacency-interface" || name == "checkpoint-adjacency-level" || name == "checkpoint-adjacency-holdtime" || name == "checkpoint-adjacency-lan-priority" || name == "checkpoint-adjacency-circuit-number")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::CheckpointAdjacencyPerAddressFamilyNextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "checkpoint-adjacency-per-address-family-next-hop"; yang_parent_name = "checkpoint-adjacency"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::~CheckpointAdjacencyPerAddressFamilyNextHop()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacency-per-address-family-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Srms()
    :
    policy(std::make_shared<Isis::Instances::Instance::Srms::Policy>())
{
    policy->parent = this;

    yang_name = "srms"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::~Srms()
{
}

bool Isis::Instances::Instance::Srms::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data());
}

bool Isis::Instances::Instance::Srms::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Isis::Instances::Instance::Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Isis::Instances::Instance::Srms::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    return children;
}

void Isis::Instances::Instance::Srms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4>())
    , policy_ipv6(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6>())
{
    policy_ipv4->parent = this;
    policy_ipv6->parent = this;

    yang_name = "policy"; yang_parent_name = "srms"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::~Policy()
{
}

bool Isis::Instances::Instance::Srms::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 == nullptr)
        {
            policy_ipv4 = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4>();
        }
        return policy_ipv4;
    }

    if(child_yang_name == "policy-ipv6")
    {
        if(policy_ipv6 == nullptr)
        {
            policy_ipv6 = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6>();
        }
        return policy_ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_ipv4 != nullptr)
    {
        children["policy-ipv4"] = policy_ipv4;
    }

    if(policy_ipv6 != nullptr)
    {
        children["policy-ipv6"] = policy_ipv6;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4" || name == "policy-ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_active(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
    , policy_ipv4_backup(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
{
    policy_ipv4_active->parent = this;
    policy_ipv4_backup->parent = this;

    yang_name = "policy-ipv4"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active == nullptr)
        {
            policy_ipv4_active = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
        }
        return policy_ipv4_active;
    }

    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup == nullptr)
        {
            policy_ipv4_backup = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
        }
        return policy_ipv4_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_ipv4_active != nullptr)
    {
        children["policy-ipv4-active"] = policy_ipv4_active;
    }

    if(policy_ipv4_backup != nullptr)
    {
        children["policy-ipv4-backup"] = policy_ipv4_backup;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4-active" || name == "policy-ipv4-backup")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        c->parent = this;
        policy_mi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policy_mi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
        ,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        c->parent = this;
        policy_mi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policy_mi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
        ,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6()
    :
    policy_ipv6_backup(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup>())
    , policy_ipv6_active(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active>())
{
    policy_ipv6_backup->parent = this;
    policy_ipv6_active->parent = this;

    yang_name = "policy-ipv6"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::~PolicyIpv6()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_data())
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_operation())
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv6-backup")
    {
        if(policy_ipv6_backup == nullptr)
        {
            policy_ipv6_backup = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup>();
        }
        return policy_ipv6_backup;
    }

    if(child_yang_name == "policy-ipv6-active")
    {
        if(policy_ipv6_active == nullptr)
        {
            policy_ipv6_active = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active>();
        }
        return policy_ipv6_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_ipv6_backup != nullptr)
    {
        children["policy-ipv6-backup"] = policy_ipv6_backup;
    }

    if(policy_ipv6_active != nullptr)
    {
        children["policy-ipv6-active"] = policy_ipv6_active;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv6-backup" || name == "policy-ipv6-active")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyIpv6Backup()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv6-backup"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::~PolicyIpv6Backup()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi>();
        c->parent = this;
        policy_mi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policy_mi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
        ,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyIpv6Active()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv6-active"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::~PolicyIpv6Active()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi>();
        c->parent = this;
        policy_mi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policy_mi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
        ,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::ErrorLog()
    :
    log_entry(this, {})
{

    yang_name = "error-log"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::ErrorLog::~ErrorLog()
{
}

bool Isis::Instances::Instance::ErrorLog::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_entry.len(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::ErrorLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.len(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::ErrorLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry>();
        c->parent = this;
        log_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::ErrorLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::ErrorLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::LogEntry()
    :
    error_log_level{YType::enumeration, "error-log-level"},
    error_code{YType::uint32, "error-code"},
    error_reason{YType::str, "error-reason"}
        ,
    generic_data(std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData>())
{
    generic_data->parent = this;

    yang_name = "log-entry"; yang_parent_name = "error-log"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::ErrorLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_data() const
{
    if (is_presence_container) return true;
    return error_log_level.is_set
	|| error_code.is_set
	|| error_reason.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_log_level.yfilter)
	|| ydk::is_set(error_code.yfilter)
	|| ydk::is_set(error_reason.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_log_level.is_set || is_set(error_log_level.yfilter)) leaf_name_data.push_back(error_log_level.get_name_leafdata());
    if (error_code.is_set || is_set(error_code.yfilter)) leaf_name_data.push_back(error_code.get_name_leafdata());
    if (error_reason.is_set || is_set(error_reason.yfilter)) leaf_name_data.push_back(error_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-log-level")
    {
        error_log_level = value;
        error_log_level.value_namespace = name_space;
        error_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-code")
    {
        error_code = value;
        error_code.value_namespace = name_space;
        error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-reason")
    {
        error_reason = value;
        error_reason.value_namespace = name_space;
        error_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::ErrorLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-log-level")
    {
        error_log_level.yfilter = yfilter;
    }
    if(value_path == "error-code")
    {
        error_code.yfilter = yfilter;
    }
    if(value_path == "error-reason")
    {
        error_reason.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "error-log-level" || name == "error-code" || name == "error-reason")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_data() const
{
    if (is_presence_container) return true;
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterfaces()
    :
    checkpoint_interface(this, {"interface_name"})
{

    yang_name = "checkpoint-interfaces"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointInterfaces::~CheckpointInterfaces()
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<checkpoint_interface.len(); index++)
    {
        if(checkpoint_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_interface.len(); index++)
    {
        if(checkpoint_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-interface")
    {
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface>();
        c->parent = this;
        checkpoint_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : checkpoint_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-interface")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::CheckpointInterface()
    :
    interface_name{YType::str, "interface-name"},
    checkpoint_object_id{YType::uint32, "checkpoint-object-id"},
    interface_name_xr{YType::str, "interface-name-xr"},
    checkpoint_interface_handle{YType::str, "checkpoint-interface-handle"},
    local_circuit_number{YType::uint8, "local-circuit-number"},
    dis_areas{YType::enumeration, "dis-areas"},
    has_adjacency{YType::boolean, "has-adjacency"},
    local_snpa{YType::str, "local-snpa"},
    has_joined_mcast_group{YType::boolean, "has-joined-mcast-group"},
    has_achieved_ldp_sync{YType::boolean, "has-achieved-ldp-sync"},
    has_achieved_ld_pv6_sync{YType::boolean, "has-achieved-ld-pv6-sync"}
{

    yang_name = "checkpoint-interface"; yang_parent_name = "checkpoint-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::~CheckpointInterface()
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| checkpoint_object_id.is_set
	|| interface_name_xr.is_set
	|| checkpoint_interface_handle.is_set
	|| local_circuit_number.is_set
	|| dis_areas.is_set
	|| has_adjacency.is_set
	|| local_snpa.is_set
	|| has_joined_mcast_group.is_set
	|| has_achieved_ldp_sync.is_set
	|| has_achieved_ld_pv6_sync.is_set;
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(checkpoint_object_id.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(checkpoint_interface_handle.yfilter)
	|| ydk::is_set(local_circuit_number.yfilter)
	|| ydk::is_set(dis_areas.yfilter)
	|| ydk::is_set(has_adjacency.yfilter)
	|| ydk::is_set(local_snpa.yfilter)
	|| ydk::is_set(has_joined_mcast_group.yfilter)
	|| ydk::is_set(has_achieved_ldp_sync.yfilter)
	|| ydk::is_set(has_achieved_ld_pv6_sync.yfilter);
}

std::string Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checkpoint_object_id.is_set || is_set(checkpoint_object_id.yfilter)) leaf_name_data.push_back(checkpoint_object_id.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (checkpoint_interface_handle.is_set || is_set(checkpoint_interface_handle.yfilter)) leaf_name_data.push_back(checkpoint_interface_handle.get_name_leafdata());
    if (local_circuit_number.is_set || is_set(local_circuit_number.yfilter)) leaf_name_data.push_back(local_circuit_number.get_name_leafdata());
    if (dis_areas.is_set || is_set(dis_areas.yfilter)) leaf_name_data.push_back(dis_areas.get_name_leafdata());
    if (has_adjacency.is_set || is_set(has_adjacency.yfilter)) leaf_name_data.push_back(has_adjacency.get_name_leafdata());
    if (local_snpa.is_set || is_set(local_snpa.yfilter)) leaf_name_data.push_back(local_snpa.get_name_leafdata());
    if (has_joined_mcast_group.is_set || is_set(has_joined_mcast_group.yfilter)) leaf_name_data.push_back(has_joined_mcast_group.get_name_leafdata());
    if (has_achieved_ldp_sync.is_set || is_set(has_achieved_ldp_sync.yfilter)) leaf_name_data.push_back(has_achieved_ldp_sync.get_name_leafdata());
    if (has_achieved_ld_pv6_sync.is_set || is_set(has_achieved_ld_pv6_sync.yfilter)) leaf_name_data.push_back(has_achieved_ld_pv6_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-object-id")
    {
        checkpoint_object_id = value;
        checkpoint_object_id.value_namespace = name_space;
        checkpoint_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-interface-handle")
    {
        checkpoint_interface_handle = value;
        checkpoint_interface_handle.value_namespace = name_space;
        checkpoint_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number = value;
        local_circuit_number.value_namespace = name_space;
        local_circuit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dis-areas")
    {
        dis_areas = value;
        dis_areas.value_namespace = name_space;
        dis_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-adjacency")
    {
        has_adjacency = value;
        has_adjacency.value_namespace = name_space;
        has_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-snpa")
    {
        local_snpa = value;
        local_snpa.value_namespace = name_space;
        local_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-joined-mcast-group")
    {
        has_joined_mcast_group = value;
        has_joined_mcast_group.value_namespace = name_space;
        has_joined_mcast_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-achieved-ldp-sync")
    {
        has_achieved_ldp_sync = value;
        has_achieved_ldp_sync.value_namespace = name_space;
        has_achieved_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-achieved-ld-pv6-sync")
    {
        has_achieved_ld_pv6_sync = value;
        has_achieved_ld_pv6_sync.value_namespace = name_space;
        has_achieved_ld_pv6_sync.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "checkpoint-object-id")
    {
        checkpoint_object_id.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "checkpoint-interface-handle")
    {
        checkpoint_interface_handle.yfilter = yfilter;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number.yfilter = yfilter;
    }
    if(value_path == "dis-areas")
    {
        dis_areas.yfilter = yfilter;
    }
    if(value_path == "has-adjacency")
    {
        has_adjacency.yfilter = yfilter;
    }
    if(value_path == "local-snpa")
    {
        local_snpa.yfilter = yfilter;
    }
    if(value_path == "has-joined-mcast-group")
    {
        has_joined_mcast_group.yfilter = yfilter;
    }
    if(value_path == "has-achieved-ldp-sync")
    {
        has_achieved_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "has-achieved-ld-pv6-sync")
    {
        has_achieved_ld_pv6_sync.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "checkpoint-object-id" || name == "interface-name-xr" || name == "checkpoint-interface-handle" || name == "local-circuit-number" || name == "dis-areas" || name == "has-adjacency" || name == "local-snpa" || name == "has-joined-mcast-group" || name == "has-achieved-ldp-sync" || name == "has-achieved-ld-pv6-sync")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistics()
    :
    interface_statistic(this, {"interface_name"})
{

    yang_name = "interface-statistics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_statistic.len(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.len(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        auto c = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-statistic")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    traffic_interface{YType::str, "traffic-interface"},
    interface_media_type{YType::enumeration, "interface-media-type"}
        ,
    p2p_statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics>())
    , per_area_data(this, {})
{
    p2p_statistics->parent = this;

    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| traffic_interface.is_set
	|| interface_media_type.is_set
	|| (p2p_statistics !=  nullptr && p2p_statistics->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(traffic_interface.yfilter)
	|| ydk::is_set(interface_media_type.yfilter)
	|| (p2p_statistics !=  nullptr && p2p_statistics->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (traffic_interface.is_set || is_set(traffic_interface.yfilter)) leaf_name_data.push_back(traffic_interface.get_name_leafdata());
    if (interface_media_type.is_set || is_set(interface_media_type.yfilter)) leaf_name_data.push_back(interface_media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-statistics")
    {
        if(p2p_statistics == nullptr)
        {
            p2p_statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics>();
        }
        return p2p_statistics;
    }

    if(child_yang_name == "per-area-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData>();
        c->parent = this;
        per_area_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(p2p_statistics != nullptr)
    {
        children["p2p-statistics"] = p2p_statistics;
    }

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

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-interface")
    {
        traffic_interface = value;
        traffic_interface.value_namespace = name_space;
        traffic_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type = value;
        interface_media_type.value_namespace = name_space;
        interface_media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "traffic-interface")
    {
        traffic_interface.yfilter = yfilter;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-statistics" || name == "per-area-data" || name == "interface-name" || name == "traffic-interface" || name == "interface-media-type")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::P2pStatistics()
    :
    memory_exhausted_iih_count{YType::uint32, "memory-exhausted-iih-count"},
    lsp_retransmit_count{YType::uint32, "lsp-retransmit-count"}
        ,
    iih_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount>())
{
    iih_count->parent = this;

    yang_name = "p2p-statistics"; yang_parent_name = "interface-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::~P2pStatistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::has_data() const
{
    if (is_presence_container) return true;
    return memory_exhausted_iih_count.is_set
	|| lsp_retransmit_count.is_set
	|| (iih_count !=  nullptr && iih_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_exhausted_iih_count.yfilter)
	|| ydk::is_set(lsp_retransmit_count.yfilter)
	|| (iih_count !=  nullptr && iih_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_exhausted_iih_count.is_set || is_set(memory_exhausted_iih_count.yfilter)) leaf_name_data.push_back(memory_exhausted_iih_count.get_name_leafdata());
    if (lsp_retransmit_count.is_set || is_set(lsp_retransmit_count.yfilter)) leaf_name_data.push_back(lsp_retransmit_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iih-count")
    {
        if(iih_count == nullptr)
        {
            iih_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount>();
        }
        return iih_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iih_count != nullptr)
    {
        children["iih-count"] = iih_count;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count = value;
        memory_exhausted_iih_count.value_namespace = name_space;
        memory_exhausted_iih_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-retransmit-count")
    {
        lsp_retransmit_count = value;
        lsp_retransmit_count.value_namespace = name_space;
        lsp_retransmit_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count.yfilter = yfilter;
    }
    if(value_path == "lsp-retransmit-count")
    {
        lsp_retransmit_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iih-count" || name == "memory-exhausted-iih-count" || name == "lsp-retransmit-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::IihCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "iih-count"; yang_parent_name = "p2p-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::~IihCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::has_data() const
{
    if (is_presence_container) return true;
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
        ,
    statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics>())
    , lan_data(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData>())
{
    statistics->parent = this;
    lan_data->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "interface-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| (statistics !=  nullptr && statistics->has_data())
	|| (lan_data !=  nullptr && lan_data->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (lan_data !=  nullptr && lan_data->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "lan-data")
    {
        if(lan_data == nullptr)
        {
            lan_data = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData>();
        }
        return lan_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(lan_data != nullptr)
    {
        children["lan-data"] = lan_data;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "lan-data" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::Statistics()
    :
    lsp_drop_count{YType::uint32, "lsp-drop-count"},
    lsp_flooding_dup_count{YType::uint32, "lsp-flooding-dup-count"}
        ,
    lsp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount>())
    , csnp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount>())
    , psnp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount>())
{
    lsp_count->parent = this;
    csnp_count->parent = this;
    psnp_count->parent = this;

    yang_name = "statistics"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return lsp_drop_count.is_set
	|| lsp_flooding_dup_count.is_set
	|| (lsp_count !=  nullptr && lsp_count->has_data())
	|| (csnp_count !=  nullptr && csnp_count->has_data())
	|| (psnp_count !=  nullptr && psnp_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_drop_count.yfilter)
	|| ydk::is_set(lsp_flooding_dup_count.yfilter)
	|| (lsp_count !=  nullptr && lsp_count->has_operation())
	|| (csnp_count !=  nullptr && csnp_count->has_operation())
	|| (psnp_count !=  nullptr && psnp_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_drop_count.is_set || is_set(lsp_drop_count.yfilter)) leaf_name_data.push_back(lsp_drop_count.get_name_leafdata());
    if (lsp_flooding_dup_count.is_set || is_set(lsp_flooding_dup_count.yfilter)) leaf_name_data.push_back(lsp_flooding_dup_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-count")
    {
        if(lsp_count == nullptr)
        {
            lsp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount>();
        }
        return lsp_count;
    }

    if(child_yang_name == "csnp-count")
    {
        if(csnp_count == nullptr)
        {
            csnp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount>();
        }
        return csnp_count;
    }

    if(child_yang_name == "psnp-count")
    {
        if(psnp_count == nullptr)
        {
            psnp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount>();
        }
        return psnp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsp_count != nullptr)
    {
        children["lsp-count"] = lsp_count;
    }

    if(csnp_count != nullptr)
    {
        children["csnp-count"] = csnp_count;
    }

    if(psnp_count != nullptr)
    {
        children["psnp-count"] = psnp_count;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-drop-count")
    {
        lsp_drop_count = value;
        lsp_drop_count.value_namespace = name_space;
        lsp_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-flooding-dup-count")
    {
        lsp_flooding_dup_count = value;
        lsp_flooding_dup_count.value_namespace = name_space;
        lsp_flooding_dup_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-drop-count")
    {
        lsp_drop_count.yfilter = yfilter;
    }
    if(value_path == "lsp-flooding-dup-count")
    {
        lsp_flooding_dup_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-count" || name == "csnp-count" || name == "psnp-count" || name == "lsp-drop-count" || name == "lsp-flooding-dup-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::LspCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "lsp-count"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::~LspCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_data() const
{
    if (is_presence_container) return true;
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::CsnpCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "csnp-count"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::~CsnpCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_data() const
{
    if (is_presence_container) return true;
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::PsnpCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "psnp-count"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::~PsnpCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_data() const
{
    if (is_presence_container) return true;
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psnp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}


}
}

