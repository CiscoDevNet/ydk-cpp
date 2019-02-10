
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv4_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rib_ipv4_oper {

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
    :
    ipv4_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "protocol-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-rib-edm-path")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath>();
        ent_->parent = this;
        ipv4_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-rib-edm-path")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
    :
    address{YType::str, "address"},
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
{

    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::~Labelstk()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::Information()
    :
    protocol_names{YType::str, "protocol-names"},
    instance{YType::str, "instance"},
    version{YType::uint32, "version"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    routes_counts{YType::uint32, "routes-counts"},
    active_routes_count{YType::uint32, "active-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    paths_count{YType::uint32, "paths-count"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    backup_routes_count{YType::uint32, "backup-routes-count"}
{

    yang_name = "information"; yang_parent_name = "smiap"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::~Information()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::has_data() const
{
    if (is_presence_container) return true;
    return protocol_names.is_set
	|| instance.is_set
	|| version.is_set
	|| redistribution_client_count.is_set
	|| protocol_clients_count.is_set
	|| routes_counts.is_set
	|| active_routes_count.is_set
	|| deleted_routes_count.is_set
	|| paths_count.is_set
	|| protocol_route_memory.is_set
	|| backup_routes_count.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_names.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(redistribution_client_count.yfilter)
	|| ydk::is_set(protocol_clients_count.yfilter)
	|| ydk::is_set(routes_counts.yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(deleted_routes_count.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(protocol_route_memory.yfilter)
	|| ydk::is_set(backup_routes_count.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_names.is_set || is_set(protocol_names.yfilter)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.yfilter)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.yfilter)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.yfilter)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.yfilter)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.yfilter)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.yfilter)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-names")
    {
        protocol_names = value;
        protocol_names.value_namespace = name_space;
        protocol_names.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
        redistribution_client_count.value_namespace = name_space;
        redistribution_client_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
        protocol_clients_count.value_namespace = name_space;
        protocol_clients_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
        routes_counts.value_namespace = name_space;
        routes_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
        deleted_routes_count.value_namespace = name_space;
        deleted_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
        protocol_route_memory.value_namespace = name_space;
        protocol_route_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
        backup_routes_count.value_namespace = name_space;
        backup_routes_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-names")
    {
        protocol_names.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count.yfilter = yfilter;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count.yfilter = yfilter;
    }
    if(value_path == "routes-counts")
    {
        routes_counts.yfilter = yfilter;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory.yfilter = yfilter;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-names" || name == "instance" || name == "version" || name == "redistribution-client-count" || name == "protocol-clients-count" || name == "routes-counts" || name == "active-routes-count" || name == "deleted-routes-count" || name == "paths-count" || name == "protocol-route-memory" || name == "backup-routes-count")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Lspv()
    :
    protocol_routes(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes>())
    , information(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information>())
{
    protocol_routes->parent = this;
    information->parent = this;

    yang_name = "lspv"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::~Lspv()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::has_data() const
{
    if (is_presence_container) return true;
    return (protocol_routes !=  nullptr && protocol_routes->has_data())
	|| (information !=  nullptr && information->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation())
	|| (information !=  nullptr && information->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol_routes != nullptr)
    {
        _children["protocol-routes"] = protocol_routes;
    }

    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-routes" || name == "information")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoutes()
    :
    protocol_route(this, {})
{

    yang_name = "protocol-routes"; yang_parent_name = "lspv"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_route.len(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.len(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute>();
        ent_->parent = this;
        protocol_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-route")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"}
        ,
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
    :
    ipv4_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "protocol-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-rib-edm-path")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath>();
        ent_->parent = this;
        ipv4_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-rib-edm-path")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
    :
    address{YType::str, "address"},
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
{

    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::~Labelstk()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::Information()
    :
    protocol_names{YType::str, "protocol-names"},
    instance{YType::str, "instance"},
    version{YType::uint32, "version"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    routes_counts{YType::uint32, "routes-counts"},
    active_routes_count{YType::uint32, "active-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    paths_count{YType::uint32, "paths-count"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    backup_routes_count{YType::uint32, "backup-routes-count"}
{

    yang_name = "information"; yang_parent_name = "lspv"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::~Information()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::has_data() const
{
    if (is_presence_container) return true;
    return protocol_names.is_set
	|| instance.is_set
	|| version.is_set
	|| redistribution_client_count.is_set
	|| protocol_clients_count.is_set
	|| routes_counts.is_set
	|| active_routes_count.is_set
	|| deleted_routes_count.is_set
	|| paths_count.is_set
	|| protocol_route_memory.is_set
	|| backup_routes_count.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_names.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(redistribution_client_count.yfilter)
	|| ydk::is_set(protocol_clients_count.yfilter)
	|| ydk::is_set(routes_counts.yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(deleted_routes_count.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(protocol_route_memory.yfilter)
	|| ydk::is_set(backup_routes_count.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_names.is_set || is_set(protocol_names.yfilter)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.yfilter)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.yfilter)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.yfilter)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.yfilter)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.yfilter)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.yfilter)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-names")
    {
        protocol_names = value;
        protocol_names.value_namespace = name_space;
        protocol_names.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
        redistribution_client_count.value_namespace = name_space;
        redistribution_client_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
        protocol_clients_count.value_namespace = name_space;
        protocol_clients_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
        routes_counts.value_namespace = name_space;
        routes_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
        deleted_routes_count.value_namespace = name_space;
        deleted_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
        protocol_route_memory.value_namespace = name_space;
        protocol_route_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
        backup_routes_count.value_namespace = name_space;
        backup_routes_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-names")
    {
        protocol_names.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count.yfilter = yfilter;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count.yfilter = yfilter;
    }
    if(value_path == "routes-counts")
    {
        routes_counts.yfilter = yfilter;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory.yfilter = yfilter;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-names" || name == "instance" || name == "version" || name == "redistribution-client-count" || name == "protocol-clients-count" || name == "routes-counts" || name == "active-routes-count" || name == "deleted-routes-count" || name == "paths-count" || name == "protocol-route-memory" || name == "backup-routes-count")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::NonAs()
    :
    protocol_routes(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes>())
    , information(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information>())
{
    protocol_routes->parent = this;
    information->parent = this;

    yang_name = "non-as"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::~NonAs()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::has_data() const
{
    if (is_presence_container) return true;
    return (protocol_routes !=  nullptr && protocol_routes->has_data())
	|| (information !=  nullptr && information->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation())
	|| (information !=  nullptr && information->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol_routes != nullptr)
    {
        _children["protocol-routes"] = protocol_routes;
    }

    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-routes" || name == "information")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoutes()
    :
    protocol_route(this, {})
{

    yang_name = "protocol-routes"; yang_parent_name = "non-as"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_route.len(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.len(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute>();
        ent_->parent = this;
        protocol_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-route")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"}
        ,
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
    :
    ipv4_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "protocol-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-rib-edm-path")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath>();
        ent_->parent = this;
        ipv4_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-rib-edm-path")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
    :
    address{YType::str, "address"},
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
{

    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::~Labelstk()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::Information()
    :
    protocol_names{YType::str, "protocol-names"},
    instance{YType::str, "instance"},
    version{YType::uint32, "version"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    routes_counts{YType::uint32, "routes-counts"},
    active_routes_count{YType::uint32, "active-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    paths_count{YType::uint32, "paths-count"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    backup_routes_count{YType::uint32, "backup-routes-count"}
{

    yang_name = "information"; yang_parent_name = "non-as"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::~Information()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::has_data() const
{
    if (is_presence_container) return true;
    return protocol_names.is_set
	|| instance.is_set
	|| version.is_set
	|| redistribution_client_count.is_set
	|| protocol_clients_count.is_set
	|| routes_counts.is_set
	|| active_routes_count.is_set
	|| deleted_routes_count.is_set
	|| paths_count.is_set
	|| protocol_route_memory.is_set
	|| backup_routes_count.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_names.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(redistribution_client_count.yfilter)
	|| ydk::is_set(protocol_clients_count.yfilter)
	|| ydk::is_set(routes_counts.yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(deleted_routes_count.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(protocol_route_memory.yfilter)
	|| ydk::is_set(backup_routes_count.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_names.is_set || is_set(protocol_names.yfilter)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.yfilter)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.yfilter)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.yfilter)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.yfilter)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.yfilter)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.yfilter)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-names")
    {
        protocol_names = value;
        protocol_names.value_namespace = name_space;
        protocol_names.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
        redistribution_client_count.value_namespace = name_space;
        redistribution_client_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
        protocol_clients_count.value_namespace = name_space;
        protocol_clients_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
        routes_counts.value_namespace = name_space;
        routes_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
        deleted_routes_count.value_namespace = name_space;
        deleted_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
        protocol_route_memory.value_namespace = name_space;
        protocol_route_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
        backup_routes_count.value_namespace = name_space;
        backup_routes_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-names")
    {
        protocol_names.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count.yfilter = yfilter;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count.yfilter = yfilter;
    }
    if(value_path == "routes-counts")
    {
        routes_counts.yfilter = yfilter;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory.yfilter = yfilter;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-names" || name == "instance" || name == "version" || name == "redistribution-client-count" || name == "protocol-clients-count" || name == "routes-counts" || name == "active-routes-count" || name == "deleted-routes-count" || name == "paths-count" || name == "protocol-route-memory" || name == "backup-routes-count")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::Bgp()
    :
    as(this, {"as"})
{

    yang_name = "bgp"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::~Bgp()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<as.len(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::has_operation() const
{
    for (std::size_t index=0; index<as.len(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As>();
        ent_->parent = this;
        as.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::As()
    :
    as{YType::str, "as"}
        ,
    protocol_routes(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes>())
    , information(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information>())
{
    protocol_routes->parent = this;
    information->parent = this;

    yang_name = "as"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::~As()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| (protocol_routes !=  nullptr && protocol_routes->has_data())
	|| (information !=  nullptr && information->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation())
	|| (information !=  nullptr && information->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    ADD_KEY_TOKEN(as, "as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol_routes != nullptr)
    {
        _children["protocol-routes"] = protocol_routes;
    }

    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-routes" || name == "information" || name == "as")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoutes()
    :
    protocol_route(this, {})
{

    yang_name = "protocol-routes"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_route.len(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.len(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute>();
        ent_->parent = this;
        protocol_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-route")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"}
        ,
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
    :
    ipv4_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "protocol-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-rib-edm-path")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath>();
        ent_->parent = this;
        ipv4_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-rib-edm-path")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
    :
    address{YType::str, "address"},
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
{

    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::~Labelstk()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::Information()
    :
    protocol_names{YType::str, "protocol-names"},
    instance{YType::str, "instance"},
    version{YType::uint32, "version"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    routes_counts{YType::uint32, "routes-counts"},
    active_routes_count{YType::uint32, "active-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    paths_count{YType::uint32, "paths-count"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    backup_routes_count{YType::uint32, "backup-routes-count"}
{

    yang_name = "information"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::~Information()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::has_data() const
{
    if (is_presence_container) return true;
    return protocol_names.is_set
	|| instance.is_set
	|| version.is_set
	|| redistribution_client_count.is_set
	|| protocol_clients_count.is_set
	|| routes_counts.is_set
	|| active_routes_count.is_set
	|| deleted_routes_count.is_set
	|| paths_count.is_set
	|| protocol_route_memory.is_set
	|| backup_routes_count.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_names.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(redistribution_client_count.yfilter)
	|| ydk::is_set(protocol_clients_count.yfilter)
	|| ydk::is_set(routes_counts.yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(deleted_routes_count.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(protocol_route_memory.yfilter)
	|| ydk::is_set(backup_routes_count.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_names.is_set || is_set(protocol_names.yfilter)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.yfilter)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.yfilter)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.yfilter)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.yfilter)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.yfilter)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.yfilter)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-names")
    {
        protocol_names = value;
        protocol_names.value_namespace = name_space;
        protocol_names.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
        redistribution_client_count.value_namespace = name_space;
        redistribution_client_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
        protocol_clients_count.value_namespace = name_space;
        protocol_clients_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
        routes_counts.value_namespace = name_space;
        routes_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
        deleted_routes_count.value_namespace = name_space;
        deleted_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
        protocol_route_memory.value_namespace = name_space;
        protocol_route_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
        backup_routes_count.value_namespace = name_space;
        backup_routes_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-names")
    {
        protocol_names.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count.yfilter = yfilter;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count.yfilter = yfilter;
    }
    if(value_path == "routes-counts")
    {
        routes_counts.yfilter = yfilter;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory.yfilter = yfilter;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-names" || name == "instance" || name == "version" || name == "redistribution-client-count" || name == "protocol-clients-count" || name == "routes-counts" || name == "active-routes-count" || name == "deleted-routes-count" || name == "paths-count" || name == "protocol-route-memory" || name == "backup-routes-count")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::Isis()
    :
    as(this, {"as"})
{

    yang_name = "isis"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::~Isis()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<as.len(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_operation() const
{
    for (std::size_t index=0; index<as.len(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As>();
        ent_->parent = this;
        as.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::As()
    :
    as{YType::str, "as"}
        ,
    protocol_routes(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>())
    , information(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information>())
{
    protocol_routes->parent = this;
    information->parent = this;

    yang_name = "as"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::~As()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| (protocol_routes !=  nullptr && protocol_routes->has_data())
	|| (information !=  nullptr && information->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| (protocol_routes !=  nullptr && protocol_routes->has_operation())
	|| (information !=  nullptr && information->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    ADD_KEY_TOKEN(as, "as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-routes")
    {
        if(protocol_routes == nullptr)
        {
            protocol_routes = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes>();
        }
        return protocol_routes;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol_routes != nullptr)
    {
        _children["protocol-routes"] = protocol_routes;
    }

    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-routes" || name == "information" || name == "as")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoutes()
    :
    protocol_route(this, {})
{

    yang_name = "protocol-routes"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::~ProtocolRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_route.len(); index++)
    {
        if(protocol_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_operation() const
{
    for (std::size_t index=0; index<protocol_route.len(); index++)
    {
        if(protocol_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-route")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute>();
        ent_->parent = this;
        protocol_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-route")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::ProtocolRoute()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"}
        ,
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "protocol-route"; yang_parent_name = "protocol-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::~ProtocolRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::RoutePath()
    :
    ipv4_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "protocol-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-rib-edm-path")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath>();
        ent_->parent = this;
        ipv4_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-rib-edm-path")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
    :
    address{YType::str, "address"},
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
{

    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::~Labelstk()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::Information()
    :
    protocol_names{YType::str, "protocol-names"},
    instance{YType::str, "instance"},
    version{YType::uint32, "version"},
    redistribution_client_count{YType::uint32, "redistribution-client-count"},
    protocol_clients_count{YType::uint32, "protocol-clients-count"},
    routes_counts{YType::uint32, "routes-counts"},
    active_routes_count{YType::uint32, "active-routes-count"},
    deleted_routes_count{YType::uint32, "deleted-routes-count"},
    paths_count{YType::uint32, "paths-count"},
    protocol_route_memory{YType::uint32, "protocol-route-memory"},
    backup_routes_count{YType::uint32, "backup-routes-count"}
{

    yang_name = "information"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::~Information()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_data() const
{
    if (is_presence_container) return true;
    return protocol_names.is_set
	|| instance.is_set
	|| version.is_set
	|| redistribution_client_count.is_set
	|| protocol_clients_count.is_set
	|| routes_counts.is_set
	|| active_routes_count.is_set
	|| deleted_routes_count.is_set
	|| paths_count.is_set
	|| protocol_route_memory.is_set
	|| backup_routes_count.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_names.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(redistribution_client_count.yfilter)
	|| ydk::is_set(protocol_clients_count.yfilter)
	|| ydk::is_set(routes_counts.yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(deleted_routes_count.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(protocol_route_memory.yfilter)
	|| ydk::is_set(backup_routes_count.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_names.is_set || is_set(protocol_names.yfilter)) leaf_name_data.push_back(protocol_names.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (redistribution_client_count.is_set || is_set(redistribution_client_count.yfilter)) leaf_name_data.push_back(redistribution_client_count.get_name_leafdata());
    if (protocol_clients_count.is_set || is_set(protocol_clients_count.yfilter)) leaf_name_data.push_back(protocol_clients_count.get_name_leafdata());
    if (routes_counts.is_set || is_set(routes_counts.yfilter)) leaf_name_data.push_back(routes_counts.get_name_leafdata());
    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (deleted_routes_count.is_set || is_set(deleted_routes_count.yfilter)) leaf_name_data.push_back(deleted_routes_count.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (protocol_route_memory.is_set || is_set(protocol_route_memory.yfilter)) leaf_name_data.push_back(protocol_route_memory.get_name_leafdata());
    if (backup_routes_count.is_set || is_set(backup_routes_count.yfilter)) leaf_name_data.push_back(backup_routes_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-names")
    {
        protocol_names = value;
        protocol_names.value_namespace = name_space;
        protocol_names.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count = value;
        redistribution_client_count.value_namespace = name_space;
        redistribution_client_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count = value;
        protocol_clients_count.value_namespace = name_space;
        protocol_clients_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-counts")
    {
        routes_counts = value;
        routes_counts.value_namespace = name_space;
        routes_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count = value;
        deleted_routes_count.value_namespace = name_space;
        deleted_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory = value;
        protocol_route_memory.value_namespace = name_space;
        protocol_route_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count = value;
        backup_routes_count.value_namespace = name_space;
        backup_routes_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-names")
    {
        protocol_names.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "redistribution-client-count")
    {
        redistribution_client_count.yfilter = yfilter;
    }
    if(value_path == "protocol-clients-count")
    {
        protocol_clients_count.yfilter = yfilter;
    }
    if(value_path == "routes-counts")
    {
        routes_counts.yfilter = yfilter;
    }
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "deleted-routes-count")
    {
        deleted_routes_count.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "protocol-route-memory")
    {
        protocol_route_memory.yfilter = yfilter;
    }
    if(value_path == "backup-routes-count")
    {
        backup_routes_count.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-names" || name == "instance" || name == "version" || name == "redistribution-client-count" || name == "protocol-clients-count" || name == "routes-counts" || name == "active-routes-count" || name == "deleted-routes-count" || name == "paths-count" || name == "protocol-route-memory" || name == "backup-routes-count")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoutes()
    :
    q_route(this, {})
{

    yang_name = "q-routes"; yang_parent_name = "ip-rib-route-table-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::~QRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<q_route.len(); index++)
    {
        if(q_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::has_operation() const
{
    for (std::size_t index=0; index<q_route.len(); index++)
    {
        if(q_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "q-route")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute>();
        ent_->parent = this;
        q_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : q_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "q-route")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::QRoute()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"}
        ,
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "q-route"; yang_parent_name = "q-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::~QRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q-route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::RoutePath()
    :
    ipv4_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "q-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-rib-edm-path")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath>();
        ent_->parent = this;
        ipv4_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-rib-edm-path")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
    :
    address{YType::str, "address"},
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
{

    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::~Labelstk()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoutes()
    :
    backup_route(this, {})
{

    yang_name = "backup-routes"; yang_parent_name = "ip-rib-route-table-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::~BackupRoutes()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_route.len(); index++)
    {
        if(backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<backup_route.len(); index++)
    {
        if(backup_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute>();
        ent_->parent = this;
        backup_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::BackupRoute()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    protoid{YType::uint32, "protoid"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"}
        ,
    route_path(std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "backup-route"; yang_parent_name = "backup-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::~BackupRoute()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| protoid.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protoid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protoid.is_set || is_set(protoid.yfilter)) leaf_name_data.push_back(protoid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoid")
    {
        protoid = value;
        protoid.value_namespace = name_space;
        protoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "protoid")
    {
        protoid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix-length" || name == "protoid" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::RoutePath()
    :
    ipv4_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::~RoutePath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-rib-edm-path")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath>();
        ent_->parent = this;
        ipv4_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-rib-edm-path")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
    :
    address{YType::str, "address"},
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
{

    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::~Labelstk()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Adverts()
    :
    advert(this, {})
{

    yang_name = "adverts"; yang_parent_name = "ip-rib-route-table-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::~Adverts()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<advert.len(); index++)
    {
        if(advert[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::has_operation() const
{
    for (std::size_t index=0; index<advert.len(); index++)
    {
        if(advert[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adverts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advert")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert>();
        ent_->parent = this;
        advert.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : advert.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advert")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Advert()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"}
        ,
    ipv4_rib_edm_advert(this, {})
{

    yang_name = "advert"; yang_parent_name = "adverts"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::~Advert()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_rib_edm_advert.len(); index++)
    {
        if(ipv4_rib_edm_advert[index]->has_data())
            return true;
    }
    return address.is_set
	|| prefix_length.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_advert.len(); index++)
    {
        if(ipv4_rib_edm_advert[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advert";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-rib-edm-advert")
    {
        auto ent_ = std::make_shared<Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert>();
        ent_->parent = this;
        ipv4_rib_edm_advert.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_rib_edm_advert.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-rib-edm-advert" || name == "address" || name == "prefix-length")
        return true;
    return false;
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::Ipv4RibEdmAdvert()
    :
    protocol_id{YType::uint32, "protocol-id"},
    client_id{YType::uint32, "client-id"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    extended_communities{YType::str, "extended-communities"},
    protocol_opaque_flags{YType::uint8, "protocol-opaque-flags"},
    protocol_opaque{YType::uint32, "protocol-opaque"},
    code{YType::int8, "code"},
    instance_name{YType::str, "instance-name"}
{

    yang_name = "ipv4-rib-edm-advert"; yang_parent_name = "advert"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::~Ipv4RibEdmAdvert()
{
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::has_data() const
{
    if (is_presence_container) return true;
    return protocol_id.is_set
	|| client_id.is_set
	|| number_of_extended_communities.is_set
	|| extended_communities.is_set
	|| protocol_opaque_flags.is_set
	|| protocol_opaque.is_set
	|| code.is_set
	|| instance_name.is_set;
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(extended_communities.yfilter)
	|| ydk::is_set(protocol_opaque_flags.yfilter)
	|| ydk::is_set(protocol_opaque.yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-advert";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (extended_communities.is_set || is_set(extended_communities.yfilter)) leaf_name_data.push_back(extended_communities.get_name_leafdata());
    if (protocol_opaque_flags.is_set || is_set(protocol_opaque_flags.yfilter)) leaf_name_data.push_back(protocol_opaque_flags.get_name_leafdata());
    if (protocol_opaque.is_set || is_set(protocol_opaque.yfilter)) leaf_name_data.push_back(protocol_opaque.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-communities")
    {
        extended_communities = value;
        extended_communities.value_namespace = name_space;
        extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-opaque-flags")
    {
        protocol_opaque_flags = value;
        protocol_opaque_flags.value_namespace = name_space;
        protocol_opaque_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-opaque")
    {
        protocol_opaque = value;
        protocol_opaque.value_namespace = name_space;
        protocol_opaque.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "extended-communities")
    {
        extended_communities.yfilter = yfilter;
    }
    if(value_path == "protocol-opaque-flags")
    {
        protocol_opaque_flags.yfilter = yfilter;
    }
    if(value_path == "protocol-opaque")
    {
        protocol_opaque.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-id" || name == "client-id" || name == "number-of-extended-communities" || name == "extended-communities" || name == "protocol-opaque-flags" || name == "protocol-opaque" || name == "code" || name == "instance-name")
        return true;
    return false;
}

Rib::RibTableIds::RibTableIds()
    :
    rib_table_id(this, {"tableid"})
{

    yang_name = "rib-table-ids"; yang_parent_name = "rib"; is_top_level_class = false; has_list_ancestor = false; 
}

Rib::RibTableIds::~RibTableIds()
{
}

bool Rib::RibTableIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rib_table_id.len(); index++)
    {
        if(rib_table_id[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::RibTableIds::has_operation() const
{
    for (std::size_t index=0; index<rib_table_id.len(); index++)
    {
        if(rib_table_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::RibTableIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-ipv4-oper:rib/" << get_segment_path();
    return path_buffer.str();
}

std::string Rib::RibTableIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-table-id")
    {
        auto ent_ = std::make_shared<Rib::RibTableIds::RibTableId>();
        ent_->parent = this;
        rib_table_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rib_table_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::RibTableIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::RibTableIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::RibTableIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-table-id")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::RibTableId()
    :
    tableid{YType::str, "tableid"}
        ,
    summary_protos(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos>())
    , rib_table_itf_hndls(std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls>())
    , information(std::make_shared<Rib::RibTableIds::RibTableId::Information>())
{
    summary_protos->parent = this;
    rib_table_itf_hndls->parent = this;
    information->parent = this;

    yang_name = "rib-table-id"; yang_parent_name = "rib-table-ids"; is_top_level_class = false; has_list_ancestor = false; 
}

Rib::RibTableIds::RibTableId::~RibTableId()
{
}

bool Rib::RibTableIds::RibTableId::has_data() const
{
    if (is_presence_container) return true;
    return tableid.is_set
	|| (summary_protos !=  nullptr && summary_protos->has_data())
	|| (rib_table_itf_hndls !=  nullptr && rib_table_itf_hndls->has_data())
	|| (information !=  nullptr && information->has_data());
}

bool Rib::RibTableIds::RibTableId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| (summary_protos !=  nullptr && summary_protos->has_operation())
	|| (rib_table_itf_hndls !=  nullptr && rib_table_itf_hndls->has_operation())
	|| (information !=  nullptr && information->has_operation());
}

std::string Rib::RibTableIds::RibTableId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-ipv4-oper:rib/rib-table-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string Rib::RibTableIds::RibTableId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-id";
    ADD_KEY_TOKEN(tableid, "tableid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-protos")
    {
        if(summary_protos == nullptr)
        {
            summary_protos = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos>();
        }
        return summary_protos;
    }

    if(child_yang_name == "rib-table-itf-hndls")
    {
        if(rib_table_itf_hndls == nullptr)
        {
            rib_table_itf_hndls = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls>();
        }
        return rib_table_itf_hndls;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Rib::RibTableIds::RibTableId::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary_protos != nullptr)
    {
        _children["summary-protos"] = summary_protos;
    }

    if(rib_table_itf_hndls != nullptr)
    {
        _children["rib-table-itf-hndls"] = rib_table_itf_hndls;
    }

    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Rib::RibTableIds::RibTableId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tableid")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tableid")
    {
        tableid.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-protos" || name == "rib-table-itf-hndls" || name == "information" || name == "tableid")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProtos()
    :
    summary_proto(this, {"protoid"})
{

    yang_name = "summary-protos"; yang_parent_name = "rib-table-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::~SummaryProtos()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_proto.len(); index++)
    {
        if(summary_proto[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::has_operation() const
{
    for (std::size_t index=0; index<summary_proto.len(); index++)
    {
        if(summary_proto[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-protos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-proto")
    {
        auto ent_ = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto>();
        ent_->parent = this;
        summary_proto.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_proto.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::RibTableIds::RibTableId::SummaryProtos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-proto")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::SummaryProto()
    :
    protoid{YType::uint32, "protoid"},
    name{YType::str, "name"},
    instance{YType::str, "instance"}
        ,
    proto_route_count(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount>())
    , rtype_none(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone>())
    , rtype_other(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther>())
    , rtype_ospf_intra(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra>())
    , rtype_ospf_inter(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter>())
    , rtype_ospf_extern1(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1>())
    , rtype_ospf_extern2(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2>())
    , rtype_isis_sum(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum>())
    , rtype_isis_l1(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1>())
    , rtype_isis_l2(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2>())
    , rtype_isis_l1_ia(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia>())
    , rtype_bgp_int(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt>())
    , rtype_bgp_ext(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt>())
    , rtype_bgp_loc(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc>())
    , rtype_ospf_nssa1(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1>())
    , rtype_ospf_nssa2(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2>())
    , rtype_igrp2_int(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int>())
    , rtype_igrp2_ext(std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext>())
{
    proto_route_count->parent = this;
    rtype_none->parent = this;
    rtype_other->parent = this;
    rtype_ospf_intra->parent = this;
    rtype_ospf_inter->parent = this;
    rtype_ospf_extern1->parent = this;
    rtype_ospf_extern2->parent = this;
    rtype_isis_sum->parent = this;
    rtype_isis_l1->parent = this;
    rtype_isis_l2->parent = this;
    rtype_isis_l1_ia->parent = this;
    rtype_bgp_int->parent = this;
    rtype_bgp_ext->parent = this;
    rtype_bgp_loc->parent = this;
    rtype_ospf_nssa1->parent = this;
    rtype_ospf_nssa2->parent = this;
    rtype_igrp2_int->parent = this;
    rtype_igrp2_ext->parent = this;

    yang_name = "summary-proto"; yang_parent_name = "summary-protos"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::~SummaryProto()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::has_data() const
{
    if (is_presence_container) return true;
    return protoid.is_set
	|| name.is_set
	|| instance.is_set
	|| (proto_route_count !=  nullptr && proto_route_count->has_data())
	|| (rtype_none !=  nullptr && rtype_none->has_data())
	|| (rtype_other !=  nullptr && rtype_other->has_data())
	|| (rtype_ospf_intra !=  nullptr && rtype_ospf_intra->has_data())
	|| (rtype_ospf_inter !=  nullptr && rtype_ospf_inter->has_data())
	|| (rtype_ospf_extern1 !=  nullptr && rtype_ospf_extern1->has_data())
	|| (rtype_ospf_extern2 !=  nullptr && rtype_ospf_extern2->has_data())
	|| (rtype_isis_sum !=  nullptr && rtype_isis_sum->has_data())
	|| (rtype_isis_l1 !=  nullptr && rtype_isis_l1->has_data())
	|| (rtype_isis_l2 !=  nullptr && rtype_isis_l2->has_data())
	|| (rtype_isis_l1_ia !=  nullptr && rtype_isis_l1_ia->has_data())
	|| (rtype_bgp_int !=  nullptr && rtype_bgp_int->has_data())
	|| (rtype_bgp_ext !=  nullptr && rtype_bgp_ext->has_data())
	|| (rtype_bgp_loc !=  nullptr && rtype_bgp_loc->has_data())
	|| (rtype_ospf_nssa1 !=  nullptr && rtype_ospf_nssa1->has_data())
	|| (rtype_ospf_nssa2 !=  nullptr && rtype_ospf_nssa2->has_data())
	|| (rtype_igrp2_int !=  nullptr && rtype_igrp2_int->has_data())
	|| (rtype_igrp2_ext !=  nullptr && rtype_igrp2_ext->has_data());
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protoid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (proto_route_count !=  nullptr && proto_route_count->has_operation())
	|| (rtype_none !=  nullptr && rtype_none->has_operation())
	|| (rtype_other !=  nullptr && rtype_other->has_operation())
	|| (rtype_ospf_intra !=  nullptr && rtype_ospf_intra->has_operation())
	|| (rtype_ospf_inter !=  nullptr && rtype_ospf_inter->has_operation())
	|| (rtype_ospf_extern1 !=  nullptr && rtype_ospf_extern1->has_operation())
	|| (rtype_ospf_extern2 !=  nullptr && rtype_ospf_extern2->has_operation())
	|| (rtype_isis_sum !=  nullptr && rtype_isis_sum->has_operation())
	|| (rtype_isis_l1 !=  nullptr && rtype_isis_l1->has_operation())
	|| (rtype_isis_l2 !=  nullptr && rtype_isis_l2->has_operation())
	|| (rtype_isis_l1_ia !=  nullptr && rtype_isis_l1_ia->has_operation())
	|| (rtype_bgp_int !=  nullptr && rtype_bgp_int->has_operation())
	|| (rtype_bgp_ext !=  nullptr && rtype_bgp_ext->has_operation())
	|| (rtype_bgp_loc !=  nullptr && rtype_bgp_loc->has_operation())
	|| (rtype_ospf_nssa1 !=  nullptr && rtype_ospf_nssa1->has_operation())
	|| (rtype_ospf_nssa2 !=  nullptr && rtype_ospf_nssa2->has_operation())
	|| (rtype_igrp2_int !=  nullptr && rtype_igrp2_int->has_operation())
	|| (rtype_igrp2_ext !=  nullptr && rtype_igrp2_ext->has_operation());
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-proto";
    ADD_KEY_TOKEN(protoid, "protoid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protoid.is_set || is_set(protoid.yfilter)) leaf_name_data.push_back(protoid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proto-route-count")
    {
        if(proto_route_count == nullptr)
        {
            proto_route_count = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount>();
        }
        return proto_route_count;
    }

    if(child_yang_name == "rtype-none")
    {
        if(rtype_none == nullptr)
        {
            rtype_none = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone>();
        }
        return rtype_none;
    }

    if(child_yang_name == "rtype-other")
    {
        if(rtype_other == nullptr)
        {
            rtype_other = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther>();
        }
        return rtype_other;
    }

    if(child_yang_name == "rtype-ospf-intra")
    {
        if(rtype_ospf_intra == nullptr)
        {
            rtype_ospf_intra = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra>();
        }
        return rtype_ospf_intra;
    }

    if(child_yang_name == "rtype-ospf-inter")
    {
        if(rtype_ospf_inter == nullptr)
        {
            rtype_ospf_inter = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter>();
        }
        return rtype_ospf_inter;
    }

    if(child_yang_name == "rtype-ospf-extern1")
    {
        if(rtype_ospf_extern1 == nullptr)
        {
            rtype_ospf_extern1 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1>();
        }
        return rtype_ospf_extern1;
    }

    if(child_yang_name == "rtype-ospf-extern2")
    {
        if(rtype_ospf_extern2 == nullptr)
        {
            rtype_ospf_extern2 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2>();
        }
        return rtype_ospf_extern2;
    }

    if(child_yang_name == "rtype-isis-sum")
    {
        if(rtype_isis_sum == nullptr)
        {
            rtype_isis_sum = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum>();
        }
        return rtype_isis_sum;
    }

    if(child_yang_name == "rtype-isis-l1")
    {
        if(rtype_isis_l1 == nullptr)
        {
            rtype_isis_l1 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1>();
        }
        return rtype_isis_l1;
    }

    if(child_yang_name == "rtype-isis-l2")
    {
        if(rtype_isis_l2 == nullptr)
        {
            rtype_isis_l2 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2>();
        }
        return rtype_isis_l2;
    }

    if(child_yang_name == "rtype-isis-l1-ia")
    {
        if(rtype_isis_l1_ia == nullptr)
        {
            rtype_isis_l1_ia = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia>();
        }
        return rtype_isis_l1_ia;
    }

    if(child_yang_name == "rtype-bgp-int")
    {
        if(rtype_bgp_int == nullptr)
        {
            rtype_bgp_int = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt>();
        }
        return rtype_bgp_int;
    }

    if(child_yang_name == "rtype-bgp-ext")
    {
        if(rtype_bgp_ext == nullptr)
        {
            rtype_bgp_ext = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt>();
        }
        return rtype_bgp_ext;
    }

    if(child_yang_name == "rtype-bgp-loc")
    {
        if(rtype_bgp_loc == nullptr)
        {
            rtype_bgp_loc = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc>();
        }
        return rtype_bgp_loc;
    }

    if(child_yang_name == "rtype-ospf-nssa1")
    {
        if(rtype_ospf_nssa1 == nullptr)
        {
            rtype_ospf_nssa1 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1>();
        }
        return rtype_ospf_nssa1;
    }

    if(child_yang_name == "rtype-ospf-nssa2")
    {
        if(rtype_ospf_nssa2 == nullptr)
        {
            rtype_ospf_nssa2 = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2>();
        }
        return rtype_ospf_nssa2;
    }

    if(child_yang_name == "rtype-igrp2-int")
    {
        if(rtype_igrp2_int == nullptr)
        {
            rtype_igrp2_int = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int>();
        }
        return rtype_igrp2_int;
    }

    if(child_yang_name == "rtype-igrp2-ext")
    {
        if(rtype_igrp2_ext == nullptr)
        {
            rtype_igrp2_ext = std::make_shared<Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext>();
        }
        return rtype_igrp2_ext;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(proto_route_count != nullptr)
    {
        _children["proto-route-count"] = proto_route_count;
    }

    if(rtype_none != nullptr)
    {
        _children["rtype-none"] = rtype_none;
    }

    if(rtype_other != nullptr)
    {
        _children["rtype-other"] = rtype_other;
    }

    if(rtype_ospf_intra != nullptr)
    {
        _children["rtype-ospf-intra"] = rtype_ospf_intra;
    }

    if(rtype_ospf_inter != nullptr)
    {
        _children["rtype-ospf-inter"] = rtype_ospf_inter;
    }

    if(rtype_ospf_extern1 != nullptr)
    {
        _children["rtype-ospf-extern1"] = rtype_ospf_extern1;
    }

    if(rtype_ospf_extern2 != nullptr)
    {
        _children["rtype-ospf-extern2"] = rtype_ospf_extern2;
    }

    if(rtype_isis_sum != nullptr)
    {
        _children["rtype-isis-sum"] = rtype_isis_sum;
    }

    if(rtype_isis_l1 != nullptr)
    {
        _children["rtype-isis-l1"] = rtype_isis_l1;
    }

    if(rtype_isis_l2 != nullptr)
    {
        _children["rtype-isis-l2"] = rtype_isis_l2;
    }

    if(rtype_isis_l1_ia != nullptr)
    {
        _children["rtype-isis-l1-ia"] = rtype_isis_l1_ia;
    }

    if(rtype_bgp_int != nullptr)
    {
        _children["rtype-bgp-int"] = rtype_bgp_int;
    }

    if(rtype_bgp_ext != nullptr)
    {
        _children["rtype-bgp-ext"] = rtype_bgp_ext;
    }

    if(rtype_bgp_loc != nullptr)
    {
        _children["rtype-bgp-loc"] = rtype_bgp_loc;
    }

    if(rtype_ospf_nssa1 != nullptr)
    {
        _children["rtype-ospf-nssa1"] = rtype_ospf_nssa1;
    }

    if(rtype_ospf_nssa2 != nullptr)
    {
        _children["rtype-ospf-nssa2"] = rtype_ospf_nssa2;
    }

    if(rtype_igrp2_int != nullptr)
    {
        _children["rtype-igrp2-int"] = rtype_igrp2_int;
    }

    if(rtype_igrp2_ext != nullptr)
    {
        _children["rtype-igrp2-ext"] = rtype_igrp2_ext;
    }

    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protoid")
    {
        protoid = value;
        protoid.value_namespace = name_space;
        protoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protoid")
    {
        protoid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto-route-count" || name == "rtype-none" || name == "rtype-other" || name == "rtype-ospf-intra" || name == "rtype-ospf-inter" || name == "rtype-ospf-extern1" || name == "rtype-ospf-extern2" || name == "rtype-isis-sum" || name == "rtype-isis-l1" || name == "rtype-isis-l2" || name == "rtype-isis-l1-ia" || name == "rtype-bgp-int" || name == "rtype-bgp-ext" || name == "rtype-bgp-loc" || name == "rtype-ospf-nssa1" || name == "rtype-ospf-nssa2" || name == "rtype-igrp2-int" || name == "rtype-igrp2-ext" || name == "protoid" || name == "name" || name == "instance")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::ProtoRouteCount()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "proto-route-count"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::~ProtoRouteCount()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto-route-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::RtypeNone()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-none"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::~RtypeNone()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-none";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::RtypeOther()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-other"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::~RtypeOther()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::RtypeOspfIntra()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-ospf-intra"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::~RtypeOspfIntra()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-intra";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::RtypeOspfInter()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-ospf-inter"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::~RtypeOspfInter()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-inter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::RtypeOspfExtern1()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-ospf-extern1"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::~RtypeOspfExtern1()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-extern1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::RtypeOspfExtern2()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-ospf-extern2"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::~RtypeOspfExtern2()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-extern2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::RtypeIsisSum()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-isis-sum"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::~RtypeIsisSum()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-sum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::RtypeIsisL1()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-isis-l1"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::~RtypeIsisL1()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-l1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::RtypeIsisL2()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-isis-l2"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::~RtypeIsisL2()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-l2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::RtypeIsisL1Ia()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-isis-l1-ia"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::~RtypeIsisL1Ia()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-isis-l1-ia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::RtypeBgpInt()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-bgp-int"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::~RtypeBgpInt()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-bgp-int";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::RtypeBgpExt()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-bgp-ext"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::~RtypeBgpExt()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-bgp-ext";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::RtypeBgpLoc()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-bgp-loc"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::~RtypeBgpLoc()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-bgp-loc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::RtypeOspfNssa1()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-ospf-nssa1"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::~RtypeOspfNssa1()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-nssa1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::RtypeOspfNssa2()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-ospf-nssa2"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::~RtypeOspfNssa2()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-ospf-nssa2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::RtypeIgrp2Int()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-igrp2-int"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::~RtypeIgrp2Int()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-igrp2-int";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::RtypeIgrp2Ext()
    :
    active_routes_count{YType::uint32, "active-routes-count"},
    num_backup_routes{YType::uint32, "num-backup-routes"},
    num_active_paths{YType::uint32, "num-active-paths"},
    num_backup_paths{YType::uint32, "num-backup-paths"}
{

    yang_name = "rtype-igrp2-ext"; yang_parent_name = "summary-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::~RtypeIgrp2Ext()
{
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::has_data() const
{
    if (is_presence_container) return true;
    return active_routes_count.is_set
	|| num_backup_routes.is_set
	|| num_active_paths.is_set
	|| num_backup_paths.is_set;
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_routes_count.yfilter)
	|| ydk::is_set(num_backup_routes.yfilter)
	|| ydk::is_set(num_active_paths.yfilter)
	|| ydk::is_set(num_backup_paths.yfilter);
}

std::string Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtype-igrp2-ext";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_routes_count.is_set || is_set(active_routes_count.yfilter)) leaf_name_data.push_back(active_routes_count.get_name_leafdata());
    if (num_backup_routes.is_set || is_set(num_backup_routes.yfilter)) leaf_name_data.push_back(num_backup_routes.get_name_leafdata());
    if (num_active_paths.is_set || is_set(num_active_paths.yfilter)) leaf_name_data.push_back(num_active_paths.get_name_leafdata());
    if (num_backup_paths.is_set || is_set(num_backup_paths.yfilter)) leaf_name_data.push_back(num_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count = value;
        active_routes_count.value_namespace = name_space;
        active_routes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes = value;
        num_backup_routes.value_namespace = name_space;
        num_backup_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths = value;
        num_active_paths.value_namespace = name_space;
        num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths = value;
        num_backup_paths.value_namespace = name_space;
        num_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-routes-count")
    {
        active_routes_count.yfilter = yfilter;
    }
    if(value_path == "num-backup-routes")
    {
        num_backup_routes.yfilter = yfilter;
    }
    if(value_path == "num-active-paths")
    {
        num_active_paths.yfilter = yfilter;
    }
    if(value_path == "num-backup-paths")
    {
        num_backup_paths.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-routes-count" || name == "num-backup-routes" || name == "num-active-paths" || name == "num-backup-paths")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndls()
    :
    rib_table_itf_hndl(this, {"handle"})
{

    yang_name = "rib-table-itf-hndls"; yang_parent_name = "rib-table-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::~RibTableItfHndls()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rib_table_itf_hndl.len(); index++)
    {
        if(rib_table_itf_hndl[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::has_operation() const
{
    for (std::size_t index=0; index<rib_table_itf_hndl.len(); index++)
    {
        if(rib_table_itf_hndl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-itf-hndls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::RibTableItfHndls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-table-itf-hndl")
    {
        auto ent_ = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl>();
        ent_->parent = this;
        rib_table_itf_hndl.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::RibTableItfHndls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rib_table_itf_hndl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-table-itf-hndl")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::RibTableItfHndl()
    :
    handle{YType::uint32, "handle"}
        ,
    itf_route(this, {"address"})
{

    yang_name = "rib-table-itf-hndl"; yang_parent_name = "rib-table-itf-hndls"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::~RibTableItfHndl()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<itf_route.len(); index++)
    {
        if(itf_route[index]->has_data())
            return true;
    }
    return handle.is_set;
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::has_operation() const
{
    for (std::size_t index=0; index<itf_route.len(); index++)
    {
        if(itf_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(handle.yfilter);
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-table-itf-hndl";
    ADD_KEY_TOKEN(handle, "handle");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "itf-route")
    {
        auto ent_ = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute>();
        ent_->parent = this;
        itf_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : itf_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itf-route" || name == "handle")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::ItfRoute()
    :
    address{YType::str, "address"},
    prefix{YType::str, "prefix"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    route_version{YType::uint32, "route-version"},
    protocol_id{YType::uint32, "protocol-id"},
    protocol_name{YType::str, "protocol-name"},
    instance{YType::str, "instance"},
    client_id{YType::uint32, "client-id"},
    route_type{YType::uint16, "route-type"},
    priority{YType::uint8, "priority"},
    svd_type{YType::uint8, "svd-type"},
    flags{YType::uint32, "flags"},
    extended_flags{YType::uint64, "extended-flags"},
    tag{YType::uint32, "tag"},
    distance{YType::uint32, "distance"},
    diversion_distance{YType::uint32, "diversion-distance"},
    metric{YType::uint32, "metric"},
    paths_count{YType::uint32, "paths-count"},
    attribute_identity{YType::uint32, "attribute-identity"},
    traffic_index{YType::uint8, "traffic-index"},
    route_precedence{YType::uint8, "route-precedence"},
    qos_group{YType::uint8, "qos-group"},
    flow_tag{YType::uint8, "flow-tag"},
    fwd_class{YType::uint8, "fwd-class"},
    pic_count{YType::uint8, "pic-count"},
    active{YType::boolean, "active"},
    diversion{YType::boolean, "diversion"},
    diversion_proto_name{YType::str, "diversion-proto-name"},
    route_age{YType::uint32, "route-age"},
    route_label{YType::uint32, "route-label"},
    version{YType::uint32, "version"},
    tbl_version{YType::uint64, "tbl-version"},
    route_modify_time{YType::uint64, "route-modify-time"}
        ,
    route_path(std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath>())
{
    route_path->parent = this;

    yang_name = "itf-route"; yang_parent_name = "rib-table-itf-hndl"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::~ItfRoute()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix.is_set
	|| prefix_length_xr.is_set
	|| route_version.is_set
	|| protocol_id.is_set
	|| protocol_name.is_set
	|| instance.is_set
	|| client_id.is_set
	|| route_type.is_set
	|| priority.is_set
	|| svd_type.is_set
	|| flags.is_set
	|| extended_flags.is_set
	|| tag.is_set
	|| distance.is_set
	|| diversion_distance.is_set
	|| metric.is_set
	|| paths_count.is_set
	|| attribute_identity.is_set
	|| traffic_index.is_set
	|| route_precedence.is_set
	|| qos_group.is_set
	|| flow_tag.is_set
	|| fwd_class.is_set
	|| pic_count.is_set
	|| active.is_set
	|| diversion.is_set
	|| diversion_proto_name.is_set
	|| route_age.is_set
	|| route_label.is_set
	|| version.is_set
	|| tbl_version.is_set
	|| route_modify_time.is_set
	|| (route_path !=  nullptr && route_path->has_data());
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| ydk::is_set(protocol_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(svd_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(extended_flags.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(diversion_distance.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(attribute_identity.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(route_precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(fwd_class.yfilter)
	|| ydk::is_set(pic_count.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(diversion.yfilter)
	|| ydk::is_set(diversion_proto_name.yfilter)
	|| ydk::is_set(route_age.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(tbl_version.yfilter)
	|| ydk::is_set(route_modify_time.yfilter)
	|| (route_path !=  nullptr && route_path->has_operation());
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itf-route";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (svd_type.is_set || is_set(svd_type.yfilter)) leaf_name_data.push_back(svd_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (extended_flags.is_set || is_set(extended_flags.yfilter)) leaf_name_data.push_back(extended_flags.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (diversion_distance.is_set || is_set(diversion_distance.yfilter)) leaf_name_data.push_back(diversion_distance.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (attribute_identity.is_set || is_set(attribute_identity.yfilter)) leaf_name_data.push_back(attribute_identity.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (route_precedence.is_set || is_set(route_precedence.yfilter)) leaf_name_data.push_back(route_precedence.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (fwd_class.is_set || is_set(fwd_class.yfilter)) leaf_name_data.push_back(fwd_class.get_name_leafdata());
    if (pic_count.is_set || is_set(pic_count.yfilter)) leaf_name_data.push_back(pic_count.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (diversion.is_set || is_set(diversion.yfilter)) leaf_name_data.push_back(diversion.get_name_leafdata());
    if (diversion_proto_name.is_set || is_set(diversion_proto_name.yfilter)) leaf_name_data.push_back(diversion_proto_name.get_name_leafdata());
    if (route_age.is_set || is_set(route_age.yfilter)) leaf_name_data.push_back(route_age.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (tbl_version.is_set || is_set(tbl_version.yfilter)) leaf_name_data.push_back(tbl_version.get_name_leafdata());
    if (route_modify_time.is_set || is_set(route_modify_time.yfilter)) leaf_name_data.push_back(route_modify_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-path")
    {
        if(route_path == nullptr)
        {
            route_path = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath>();
        }
        return route_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_path != nullptr)
    {
        _children["route-path"] = route_path;
    }

    return _children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svd-type")
    {
        svd_type = value;
        svd_type.value_namespace = name_space;
        svd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-flags")
    {
        extended_flags = value;
        extended_flags.value_namespace = name_space;
        extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance = value;
        diversion_distance.value_namespace = name_space;
        diversion_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity = value;
        attribute_identity.value_namespace = name_space;
        attribute_identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-precedence")
    {
        route_precedence = value;
        route_precedence.value_namespace = name_space;
        route_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-class")
    {
        fwd_class = value;
        fwd_class.value_namespace = name_space;
        fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic-count")
    {
        pic_count = value;
        pic_count.value_namespace = name_space;
        pic_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion")
    {
        diversion = value;
        diversion.value_namespace = name_space;
        diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name = value;
        diversion_proto_name.value_namespace = name_space;
        diversion_proto_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-age")
    {
        route_age = value;
        route_age.value_namespace = name_space;
        route_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-version")
    {
        tbl_version = value;
        tbl_version.value_namespace = name_space;
        tbl_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time = value;
        route_modify_time.value_namespace = name_space;
        route_modify_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "svd-type")
    {
        svd_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "extended-flags")
    {
        extended_flags.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "diversion-distance")
    {
        diversion_distance.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "attribute-identity")
    {
        attribute_identity.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "route-precedence")
    {
        route_precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "fwd-class")
    {
        fwd_class.yfilter = yfilter;
    }
    if(value_path == "pic-count")
    {
        pic_count.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "diversion")
    {
        diversion.yfilter = yfilter;
    }
    if(value_path == "diversion-proto-name")
    {
        diversion_proto_name.yfilter = yfilter;
    }
    if(value_path == "route-age")
    {
        route_age.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "tbl-version")
    {
        tbl_version.yfilter = yfilter;
    }
    if(value_path == "route-modify-time")
    {
        route_modify_time.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-path" || name == "address" || name == "prefix" || name == "prefix-length-xr" || name == "route-version" || name == "protocol-id" || name == "protocol-name" || name == "instance" || name == "client-id" || name == "route-type" || name == "priority" || name == "svd-type" || name == "flags" || name == "extended-flags" || name == "tag" || name == "distance" || name == "diversion-distance" || name == "metric" || name == "paths-count" || name == "attribute-identity" || name == "traffic-index" || name == "route-precedence" || name == "qos-group" || name == "flow-tag" || name == "fwd-class" || name == "pic-count" || name == "active" || name == "diversion" || name == "diversion-proto-name" || name == "route-age" || name == "route-label" || name == "version" || name == "tbl-version" || name == "route-modify-time")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::RoutePath()
    :
    ipv4_rib_edm_path(this, {})
{

    yang_name = "route-path"; yang_parent_name = "itf-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::~RoutePath()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_data())
            return true;
    }
    return false;
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::has_operation() const
{
    for (std::size_t index=0; index<ipv4_rib_edm_path.len(); index++)
    {
        if(ipv4_rib_edm_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-rib-edm-path")
    {
        auto ent_ = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath>();
        ent_->parent = this;
        ipv4_rib_edm_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_rib_edm_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-rib-edm-path")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Ipv4RibEdmPath()
    :
    address{YType::str, "address"},
    information_source{YType::str, "information-source"},
    v6_nexthop{YType::str, "v6-nexthop"},
    v6_information_source{YType::str, "v6-information-source"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    load_metric{YType::uint32, "load-metric"},
    flags64{YType::uint64, "flags64"},
    flags{YType::uint16, "flags"},
    private_flags{YType::uint16, "private-flags"},
    looped{YType::boolean, "looped"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    next_hop_vrf_name{YType::str, "next-hop-vrf-name"},
    next_hop_table_name{YType::str, "next-hop-table-name"},
    next_hop_afi{YType::uint32, "next-hop-afi"},
    next_hop_safi{YType::uint32, "next-hop-safi"},
    route_label{YType::uint32, "route-label"},
    tunnel_id{YType::uint32, "tunnel-id"},
    pathid{YType::uint32, "pathid"},
    backup_pathid{YType::uint32, "backup-pathid"},
    ref_cnt_of_backup{YType::uint32, "ref-cnt-of-backup"},
    number_of_extended_communities{YType::uint32, "number-of-extended-communities"},
    mvpn_present{YType::boolean, "mvpn-present"},
    path_rt_present{YType::boolean, "path-rt-present"},
    vrf_import_rt_present{YType::boolean, "vrf-import-rt-present"},
    source_asrt_present{YType::boolean, "source-asrt-present"},
    source_rd_present{YType::boolean, "source-rd-present"},
    segmented_nexthop_present{YType::boolean, "segmented-nexthop-present"},
    number_of_nnh{YType::uint32, "number-of-nnh"},
    next_hop_id{YType::uint32, "next-hop-id"},
    next_hop_id_refcount{YType::uint32, "next-hop-id-refcount"},
    ospf_area_id{YType::str, "ospf-area-id"},
    has_labelstk{YType::boolean, "has-labelstk"},
    num_labels{YType::uint8, "num-labels"},
    binding_label{YType::uint32, "binding-label"},
    nhid_feid{YType::uint64, "nhid-feid"},
    mpls_feid{YType::uint64, "mpls-feid"},
    has_vxlan_network_id{YType::boolean, "has-vxlan-network-id"},
    vxlan_network_id{YType::uint32, "vxlan-network-id"},
    has_xcid{YType::boolean, "has-xcid"},
    xcid{YType::uint32, "xcid"},
    has_span_diag_interface{YType::boolean, "has-span-diag-interface"},
    span_diag_interface{YType::str, "span-diag-interface"},
    has_subscriber_parent_interface{YType::boolean, "has-subscriber-parent-interface"},
    subscriber_parent_interface{YType::str, "subscriber-parent-interface"},
    interface_index_present{YType::boolean, "interface-index-present"},
    interface_index_attribute{YType::uint32, "interface-index-attribute"}
        ,
    remote_backup_addr(this, {})
    , labelstk(this, {})
    , next_next_hop(this, {})
{

    yang_name = "ipv4-rib-edm-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::~Ipv4RibEdmPath()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_data())
            return true;
    }
    return address.is_set
	|| information_source.is_set
	|| v6_nexthop.is_set
	|| v6_information_source.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| load_metric.is_set
	|| flags64.is_set
	|| flags.is_set
	|| private_flags.is_set
	|| looped.is_set
	|| next_hop_table_id.is_set
	|| next_hop_vrf_name.is_set
	|| next_hop_table_name.is_set
	|| next_hop_afi.is_set
	|| next_hop_safi.is_set
	|| route_label.is_set
	|| tunnel_id.is_set
	|| pathid.is_set
	|| backup_pathid.is_set
	|| ref_cnt_of_backup.is_set
	|| number_of_extended_communities.is_set
	|| mvpn_present.is_set
	|| path_rt_present.is_set
	|| vrf_import_rt_present.is_set
	|| source_asrt_present.is_set
	|| source_rd_present.is_set
	|| segmented_nexthop_present.is_set
	|| number_of_nnh.is_set
	|| next_hop_id.is_set
	|| next_hop_id_refcount.is_set
	|| ospf_area_id.is_set
	|| has_labelstk.is_set
	|| num_labels.is_set
	|| binding_label.is_set
	|| nhid_feid.is_set
	|| mpls_feid.is_set
	|| has_vxlan_network_id.is_set
	|| vxlan_network_id.is_set
	|| has_xcid.is_set
	|| xcid.is_set
	|| has_span_diag_interface.is_set
	|| span_diag_interface.is_set
	|| has_subscriber_parent_interface.is_set
	|| subscriber_parent_interface.is_set
	|| interface_index_present.is_set
	|| interface_index_attribute.is_set;
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::has_operation() const
{
    for (std::size_t index=0; index<remote_backup_addr.len(); index++)
    {
        if(remote_backup_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<labelstk.len(); index++)
    {
        if(labelstk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_next_hop.len(); index++)
    {
        if(next_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(information_source.yfilter)
	|| ydk::is_set(v6_nexthop.yfilter)
	|| ydk::is_set(v6_information_source.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(flags64.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(private_flags.yfilter)
	|| ydk::is_set(looped.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(next_hop_vrf_name.yfilter)
	|| ydk::is_set(next_hop_table_name.yfilter)
	|| ydk::is_set(next_hop_afi.yfilter)
	|| ydk::is_set(next_hop_safi.yfilter)
	|| ydk::is_set(route_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(backup_pathid.yfilter)
	|| ydk::is_set(ref_cnt_of_backup.yfilter)
	|| ydk::is_set(number_of_extended_communities.yfilter)
	|| ydk::is_set(mvpn_present.yfilter)
	|| ydk::is_set(path_rt_present.yfilter)
	|| ydk::is_set(vrf_import_rt_present.yfilter)
	|| ydk::is_set(source_asrt_present.yfilter)
	|| ydk::is_set(source_rd_present.yfilter)
	|| ydk::is_set(segmented_nexthop_present.yfilter)
	|| ydk::is_set(number_of_nnh.yfilter)
	|| ydk::is_set(next_hop_id.yfilter)
	|| ydk::is_set(next_hop_id_refcount.yfilter)
	|| ydk::is_set(ospf_area_id.yfilter)
	|| ydk::is_set(has_labelstk.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(nhid_feid.yfilter)
	|| ydk::is_set(mpls_feid.yfilter)
	|| ydk::is_set(has_vxlan_network_id.yfilter)
	|| ydk::is_set(vxlan_network_id.yfilter)
	|| ydk::is_set(has_xcid.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(has_span_diag_interface.yfilter)
	|| ydk::is_set(span_diag_interface.yfilter)
	|| ydk::is_set(has_subscriber_parent_interface.yfilter)
	|| ydk::is_set(subscriber_parent_interface.yfilter)
	|| ydk::is_set(interface_index_present.yfilter)
	|| ydk::is_set(interface_index_attribute.yfilter);
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-rib-edm-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (information_source.is_set || is_set(information_source.yfilter)) leaf_name_data.push_back(information_source.get_name_leafdata());
    if (v6_nexthop.is_set || is_set(v6_nexthop.yfilter)) leaf_name_data.push_back(v6_nexthop.get_name_leafdata());
    if (v6_information_source.is_set || is_set(v6_information_source.yfilter)) leaf_name_data.push_back(v6_information_source.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (flags64.is_set || is_set(flags64.yfilter)) leaf_name_data.push_back(flags64.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (private_flags.is_set || is_set(private_flags.yfilter)) leaf_name_data.push_back(private_flags.get_name_leafdata());
    if (looped.is_set || is_set(looped.yfilter)) leaf_name_data.push_back(looped.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (next_hop_vrf_name.is_set || is_set(next_hop_vrf_name.yfilter)) leaf_name_data.push_back(next_hop_vrf_name.get_name_leafdata());
    if (next_hop_table_name.is_set || is_set(next_hop_table_name.yfilter)) leaf_name_data.push_back(next_hop_table_name.get_name_leafdata());
    if (next_hop_afi.is_set || is_set(next_hop_afi.yfilter)) leaf_name_data.push_back(next_hop_afi.get_name_leafdata());
    if (next_hop_safi.is_set || is_set(next_hop_safi.yfilter)) leaf_name_data.push_back(next_hop_safi.get_name_leafdata());
    if (route_label.is_set || is_set(route_label.yfilter)) leaf_name_data.push_back(route_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (backup_pathid.is_set || is_set(backup_pathid.yfilter)) leaf_name_data.push_back(backup_pathid.get_name_leafdata());
    if (ref_cnt_of_backup.is_set || is_set(ref_cnt_of_backup.yfilter)) leaf_name_data.push_back(ref_cnt_of_backup.get_name_leafdata());
    if (number_of_extended_communities.is_set || is_set(number_of_extended_communities.yfilter)) leaf_name_data.push_back(number_of_extended_communities.get_name_leafdata());
    if (mvpn_present.is_set || is_set(mvpn_present.yfilter)) leaf_name_data.push_back(mvpn_present.get_name_leafdata());
    if (path_rt_present.is_set || is_set(path_rt_present.yfilter)) leaf_name_data.push_back(path_rt_present.get_name_leafdata());
    if (vrf_import_rt_present.is_set || is_set(vrf_import_rt_present.yfilter)) leaf_name_data.push_back(vrf_import_rt_present.get_name_leafdata());
    if (source_asrt_present.is_set || is_set(source_asrt_present.yfilter)) leaf_name_data.push_back(source_asrt_present.get_name_leafdata());
    if (source_rd_present.is_set || is_set(source_rd_present.yfilter)) leaf_name_data.push_back(source_rd_present.get_name_leafdata());
    if (segmented_nexthop_present.is_set || is_set(segmented_nexthop_present.yfilter)) leaf_name_data.push_back(segmented_nexthop_present.get_name_leafdata());
    if (number_of_nnh.is_set || is_set(number_of_nnh.yfilter)) leaf_name_data.push_back(number_of_nnh.get_name_leafdata());
    if (next_hop_id.is_set || is_set(next_hop_id.yfilter)) leaf_name_data.push_back(next_hop_id.get_name_leafdata());
    if (next_hop_id_refcount.is_set || is_set(next_hop_id_refcount.yfilter)) leaf_name_data.push_back(next_hop_id_refcount.get_name_leafdata());
    if (ospf_area_id.is_set || is_set(ospf_area_id.yfilter)) leaf_name_data.push_back(ospf_area_id.get_name_leafdata());
    if (has_labelstk.is_set || is_set(has_labelstk.yfilter)) leaf_name_data.push_back(has_labelstk.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (nhid_feid.is_set || is_set(nhid_feid.yfilter)) leaf_name_data.push_back(nhid_feid.get_name_leafdata());
    if (mpls_feid.is_set || is_set(mpls_feid.yfilter)) leaf_name_data.push_back(mpls_feid.get_name_leafdata());
    if (has_vxlan_network_id.is_set || is_set(has_vxlan_network_id.yfilter)) leaf_name_data.push_back(has_vxlan_network_id.get_name_leafdata());
    if (vxlan_network_id.is_set || is_set(vxlan_network_id.yfilter)) leaf_name_data.push_back(vxlan_network_id.get_name_leafdata());
    if (has_xcid.is_set || is_set(has_xcid.yfilter)) leaf_name_data.push_back(has_xcid.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (has_span_diag_interface.is_set || is_set(has_span_diag_interface.yfilter)) leaf_name_data.push_back(has_span_diag_interface.get_name_leafdata());
    if (span_diag_interface.is_set || is_set(span_diag_interface.yfilter)) leaf_name_data.push_back(span_diag_interface.get_name_leafdata());
    if (has_subscriber_parent_interface.is_set || is_set(has_subscriber_parent_interface.yfilter)) leaf_name_data.push_back(has_subscriber_parent_interface.get_name_leafdata());
    if (subscriber_parent_interface.is_set || is_set(subscriber_parent_interface.yfilter)) leaf_name_data.push_back(subscriber_parent_interface.get_name_leafdata());
    if (interface_index_present.is_set || is_set(interface_index_present.yfilter)) leaf_name_data.push_back(interface_index_present.get_name_leafdata());
    if (interface_index_attribute.is_set || is_set(interface_index_attribute.yfilter)) leaf_name_data.push_back(interface_index_attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-backup-addr")
    {
        auto ent_ = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr>();
        ent_->parent = this;
        remote_backup_addr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "labelstk")
    {
        auto ent_ = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk>();
        ent_->parent = this;
        labelstk.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-next-hop")
    {
        auto ent_ = std::make_shared<Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop>();
        ent_->parent = this;
        next_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_backup_addr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : labelstk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-source")
    {
        information_source = value;
        information_source.value_namespace = name_space;
        information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop = value;
        v6_nexthop.value_namespace = name_space;
        v6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source = value;
        v6_information_source.value_namespace = name_space;
        v6_information_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags64")
    {
        flags64 = value;
        flags64.value_namespace = name_space;
        flags64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flags")
    {
        private_flags = value;
        private_flags.value_namespace = name_space;
        private_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "looped")
    {
        looped = value;
        looped.value_namespace = name_space;
        looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name = value;
        next_hop_vrf_name.value_namespace = name_space;
        next_hop_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name = value;
        next_hop_table_name.value_namespace = name_space;
        next_hop_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi = value;
        next_hop_afi.value_namespace = name_space;
        next_hop_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi = value;
        next_hop_safi.value_namespace = name_space;
        next_hop_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-label")
    {
        route_label = value;
        route_label.value_namespace = name_space;
        route_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathid")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid = value;
        backup_pathid.value_namespace = name_space;
        backup_pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup = value;
        ref_cnt_of_backup.value_namespace = name_space;
        ref_cnt_of_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities = value;
        number_of_extended_communities.value_namespace = name_space;
        number_of_extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present = value;
        mvpn_present.value_namespace = name_space;
        mvpn_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present = value;
        path_rt_present.value_namespace = name_space;
        path_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present = value;
        vrf_import_rt_present.value_namespace = name_space;
        vrf_import_rt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present = value;
        source_asrt_present.value_namespace = name_space;
        source_asrt_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present = value;
        source_rd_present.value_namespace = name_space;
        source_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present = value;
        segmented_nexthop_present.value_namespace = name_space;
        segmented_nexthop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh = value;
        number_of_nnh.value_namespace = name_space;
        number_of_nnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id = value;
        next_hop_id.value_namespace = name_space;
        next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount = value;
        next_hop_id_refcount.value_namespace = name_space;
        next_hop_id_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id = value;
        ospf_area_id.value_namespace = name_space;
        ospf_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk = value;
        has_labelstk.value_namespace = name_space;
        has_labelstk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid = value;
        nhid_feid.value_namespace = name_space;
        nhid_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid = value;
        mpls_feid.value_namespace = name_space;
        mpls_feid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id = value;
        has_vxlan_network_id.value_namespace = name_space;
        has_vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id = value;
        vxlan_network_id.value_namespace = name_space;
        vxlan_network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xcid")
    {
        has_xcid = value;
        has_xcid.value_namespace = name_space;
        has_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface = value;
        has_span_diag_interface.value_namespace = name_space;
        has_span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface = value;
        span_diag_interface.value_namespace = name_space;
        span_diag_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface = value;
        has_subscriber_parent_interface.value_namespace = name_space;
        has_subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface = value;
        subscriber_parent_interface.value_namespace = name_space;
        subscriber_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present = value;
        interface_index_present.value_namespace = name_space;
        interface_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute = value;
        interface_index_attribute.value_namespace = name_space;
        interface_index_attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "information-source")
    {
        information_source.yfilter = yfilter;
    }
    if(value_path == "v6-nexthop")
    {
        v6_nexthop.yfilter = yfilter;
    }
    if(value_path == "v6-information-source")
    {
        v6_information_source.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "flags64")
    {
        flags64.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "private-flags")
    {
        private_flags.yfilter = yfilter;
    }
    if(value_path == "looped")
    {
        looped.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf-name")
    {
        next_hop_vrf_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-name")
    {
        next_hop_table_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-afi")
    {
        next_hop_afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-safi")
    {
        next_hop_safi.yfilter = yfilter;
    }
    if(value_path == "route-label")
    {
        route_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "pathid")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "backup-pathid")
    {
        backup_pathid.yfilter = yfilter;
    }
    if(value_path == "ref-cnt-of-backup")
    {
        ref_cnt_of_backup.yfilter = yfilter;
    }
    if(value_path == "number-of-extended-communities")
    {
        number_of_extended_communities.yfilter = yfilter;
    }
    if(value_path == "mvpn-present")
    {
        mvpn_present.yfilter = yfilter;
    }
    if(value_path == "path-rt-present")
    {
        path_rt_present.yfilter = yfilter;
    }
    if(value_path == "vrf-import-rt-present")
    {
        vrf_import_rt_present.yfilter = yfilter;
    }
    if(value_path == "source-asrt-present")
    {
        source_asrt_present.yfilter = yfilter;
    }
    if(value_path == "source-rd-present")
    {
        source_rd_present.yfilter = yfilter;
    }
    if(value_path == "segmented-nexthop-present")
    {
        segmented_nexthop_present.yfilter = yfilter;
    }
    if(value_path == "number-of-nnh")
    {
        number_of_nnh.yfilter = yfilter;
    }
    if(value_path == "next-hop-id")
    {
        next_hop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-id-refcount")
    {
        next_hop_id_refcount.yfilter = yfilter;
    }
    if(value_path == "ospf-area-id")
    {
        ospf_area_id.yfilter = yfilter;
    }
    if(value_path == "has-labelstk")
    {
        has_labelstk.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "nhid-feid")
    {
        nhid_feid.yfilter = yfilter;
    }
    if(value_path == "mpls-feid")
    {
        mpls_feid.yfilter = yfilter;
    }
    if(value_path == "has-vxlan-network-id")
    {
        has_vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "vxlan-network-id")
    {
        vxlan_network_id.yfilter = yfilter;
    }
    if(value_path == "has-xcid")
    {
        has_xcid.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "has-span-diag-interface")
    {
        has_span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "span-diag-interface")
    {
        span_diag_interface.yfilter = yfilter;
    }
    if(value_path == "has-subscriber-parent-interface")
    {
        has_subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-interface")
    {
        subscriber_parent_interface.yfilter = yfilter;
    }
    if(value_path == "interface-index-present")
    {
        interface_index_present.yfilter = yfilter;
    }
    if(value_path == "interface-index-attribute")
    {
        interface_index_attribute.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-backup-addr" || name == "labelstk" || name == "next-next-hop" || name == "address" || name == "information-source" || name == "v6-nexthop" || name == "v6-information-source" || name == "interface-name" || name == "metric" || name == "load-metric" || name == "flags64" || name == "flags" || name == "private-flags" || name == "looped" || name == "next-hop-table-id" || name == "next-hop-vrf-name" || name == "next-hop-table-name" || name == "next-hop-afi" || name == "next-hop-safi" || name == "route-label" || name == "tunnel-id" || name == "pathid" || name == "backup-pathid" || name == "ref-cnt-of-backup" || name == "number-of-extended-communities" || name == "mvpn-present" || name == "path-rt-present" || name == "vrf-import-rt-present" || name == "source-asrt-present" || name == "source-rd-present" || name == "segmented-nexthop-present" || name == "number-of-nnh" || name == "next-hop-id" || name == "next-hop-id-refcount" || name == "ospf-area-id" || name == "has-labelstk" || name == "num-labels" || name == "binding-label" || name == "nhid-feid" || name == "mpls-feid" || name == "has-vxlan-network-id" || name == "vxlan-network-id" || name == "has-xcid" || name == "xcid" || name == "has-span-diag-interface" || name == "span-diag-interface" || name == "has-subscriber-parent-interface" || name == "subscriber-parent-interface" || name == "interface-index-present" || name == "interface-index-attribute")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::RemoteBackupAddr()
    :
    entry{YType::str, "entry"}
{

    yang_name = "remote-backup-addr"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::~RemoteBackupAddr()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-backup-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::Labelstk()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "labelstk"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::~Labelstk()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labelstk";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::NextNextHop()
    :
    type{YType::enumeration, "type"},
    unknownval{YType::uint32, "unknownval"},
    address{YType::str, "address"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "next-next-hop"; yang_parent_name = "ipv4-rib-edm-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::~NextNextHop()
{
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unknownval.is_set
	|| address.is_set
	|| interface_index.is_set;
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unknownval.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unknownval.is_set || is_set(unknownval.yfilter)) leaf_name_data.push_back(unknownval.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownval")
    {
        unknownval = value;
        unknownval.value_namespace = name_space;
        unknownval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unknownval")
    {
        unknownval.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::NextNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unknownval" || name == "address" || name == "interface-index")
        return true;
    return false;
}

Rib::RibTableIds::RibTableId::Information::Information()
    :
    tableid{YType::uint32, "tableid"},
    afi{YType::uint32, "afi"},
    safi{YType::uint32, "safi"},
    vrf_name{YType::str, "vrf-name"},
    table_name{YType::str, "table-name"},
    version{YType::uint64, "version"},
    conf_prefix_limit{YType::uint32, "conf-prefix-limit"},
    current_prefix_count{YType::uint32, "current-prefix-count"},
    num_svdlcl_prefix{YType::uint32, "num-svdlcl-prefix"},
    num_svdrem_prefix{YType::uint32, "num-svdrem-prefix"},
    table_version{YType::uint64, "table-version"},
    prefix_limit_notified{YType::boolean, "prefix-limit-notified"},
    fwd_referenced{YType::boolean, "fwd-referenced"},
    deleted{YType::boolean, "deleted"},
    initial_converge{YType::boolean, "initial-converge"}
{

    yang_name = "information"; yang_parent_name = "rib-table-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Rib::RibTableIds::RibTableId::Information::~Information()
{
}

bool Rib::RibTableIds::RibTableId::Information::has_data() const
{
    if (is_presence_container) return true;
    return tableid.is_set
	|| afi.is_set
	|| safi.is_set
	|| vrf_name.is_set
	|| table_name.is_set
	|| version.is_set
	|| conf_prefix_limit.is_set
	|| current_prefix_count.is_set
	|| num_svdlcl_prefix.is_set
	|| num_svdrem_prefix.is_set
	|| table_version.is_set
	|| prefix_limit_notified.is_set
	|| fwd_referenced.is_set
	|| deleted.is_set
	|| initial_converge.is_set;
}

bool Rib::RibTableIds::RibTableId::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(conf_prefix_limit.yfilter)
	|| ydk::is_set(current_prefix_count.yfilter)
	|| ydk::is_set(num_svdlcl_prefix.yfilter)
	|| ydk::is_set(num_svdrem_prefix.yfilter)
	|| ydk::is_set(table_version.yfilter)
	|| ydk::is_set(prefix_limit_notified.yfilter)
	|| ydk::is_set(fwd_referenced.yfilter)
	|| ydk::is_set(deleted.yfilter)
	|| ydk::is_set(initial_converge.yfilter);
}

std::string Rib::RibTableIds::RibTableId::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::RibTableIds::RibTableId::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (conf_prefix_limit.is_set || is_set(conf_prefix_limit.yfilter)) leaf_name_data.push_back(conf_prefix_limit.get_name_leafdata());
    if (current_prefix_count.is_set || is_set(current_prefix_count.yfilter)) leaf_name_data.push_back(current_prefix_count.get_name_leafdata());
    if (num_svdlcl_prefix.is_set || is_set(num_svdlcl_prefix.yfilter)) leaf_name_data.push_back(num_svdlcl_prefix.get_name_leafdata());
    if (num_svdrem_prefix.is_set || is_set(num_svdrem_prefix.yfilter)) leaf_name_data.push_back(num_svdrem_prefix.get_name_leafdata());
    if (table_version.is_set || is_set(table_version.yfilter)) leaf_name_data.push_back(table_version.get_name_leafdata());
    if (prefix_limit_notified.is_set || is_set(prefix_limit_notified.yfilter)) leaf_name_data.push_back(prefix_limit_notified.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.yfilter)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (initial_converge.is_set || is_set(initial_converge.yfilter)) leaf_name_data.push_back(initial_converge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rib::RibTableIds::RibTableId::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rib::RibTableIds::RibTableId::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rib::RibTableIds::RibTableId::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tableid")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-prefix-limit")
    {
        conf_prefix_limit = value;
        conf_prefix_limit.value_namespace = name_space;
        conf_prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-prefix-count")
    {
        current_prefix_count = value;
        current_prefix_count.value_namespace = name_space;
        current_prefix_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-svdlcl-prefix")
    {
        num_svdlcl_prefix = value;
        num_svdlcl_prefix.value_namespace = name_space;
        num_svdlcl_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-svdrem-prefix")
    {
        num_svdrem_prefix = value;
        num_svdrem_prefix.value_namespace = name_space;
        num_svdrem_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-version")
    {
        table_version = value;
        table_version.value_namespace = name_space;
        table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-limit-notified")
    {
        prefix_limit_notified = value;
        prefix_limit_notified.value_namespace = name_space;
        prefix_limit_notified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
        fwd_referenced.value_namespace = name_space;
        fwd_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted")
    {
        deleted = value;
        deleted.value_namespace = name_space;
        deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-converge")
    {
        initial_converge = value;
        initial_converge.value_namespace = name_space;
        initial_converge.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::RibTableIds::RibTableId::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tableid")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "conf-prefix-limit")
    {
        conf_prefix_limit.yfilter = yfilter;
    }
    if(value_path == "current-prefix-count")
    {
        current_prefix_count.yfilter = yfilter;
    }
    if(value_path == "num-svdlcl-prefix")
    {
        num_svdlcl_prefix.yfilter = yfilter;
    }
    if(value_path == "num-svdrem-prefix")
    {
        num_svdrem_prefix.yfilter = yfilter;
    }
    if(value_path == "table-version")
    {
        table_version.yfilter = yfilter;
    }
    if(value_path == "prefix-limit-notified")
    {
        prefix_limit_notified.yfilter = yfilter;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced.yfilter = yfilter;
    }
    if(value_path == "deleted")
    {
        deleted.yfilter = yfilter;
    }
    if(value_path == "initial-converge")
    {
        initial_converge.yfilter = yfilter;
    }
}

bool Rib::RibTableIds::RibTableId::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tableid" || name == "afi" || name == "safi" || name == "vrf-name" || name == "table-name" || name == "version" || name == "conf-prefix-limit" || name == "current-prefix-count" || name == "num-svdlcl-prefix" || name == "num-svdrem-prefix" || name == "table-version" || name == "prefix-limit-notified" || name == "fwd-referenced" || name == "deleted" || name == "initial-converge")
        return true;
    return false;
}


}
}

