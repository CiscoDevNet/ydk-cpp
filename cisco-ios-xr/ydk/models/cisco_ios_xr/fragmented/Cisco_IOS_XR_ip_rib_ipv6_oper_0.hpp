#ifndef _CISCO_IOS_XR_IP_RIB_IPV6_OPER_0_
#define _CISCO_IOS_XR_IP_RIB_IPV6_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rib_ipv6_oper {

class Ipv6Rib : public ydk::Entity
{
    public:
        Ipv6Rib();
        ~Ipv6Rib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class RibTableIds; //type: Ipv6Rib::RibTableIds
        class Vrfs; //type: Ipv6Rib::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds> rib_table_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs> vrfs;
        
}; // Ipv6Rib


class Ipv6Rib::RibTableIds : public ydk::Entity
{
    public:
        RibTableIds();
        ~RibTableIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RibTableId; //type: Ipv6Rib::RibTableIds::RibTableId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId> > rib_table_id;
        
}; // Ipv6Rib::RibTableIds


class Ipv6Rib::RibTableIds::RibTableId : public ydk::Entity
{
    public:
        RibTableId();
        ~RibTableId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tableid; //type: string
        class Information; //type: Ipv6Rib::RibTableIds::RibTableId::Information
        class SummaryProtos; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos
        class RibTableItfHndls; //type: Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos> summary_protos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls> rib_table_itf_hndls;
        
}; // Ipv6Rib::RibTableIds::RibTableId


class Ipv6Rib::RibTableIds::RibTableId::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tableid; //type: uint32
        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf safi; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf version; //type: uint64
        ydk::YLeaf conf_prefix_limit; //type: uint32
        ydk::YLeaf current_prefix_count; //type: uint32
        ydk::YLeaf num_svdlcl_prefix; //type: uint32
        ydk::YLeaf num_svdrem_prefix; //type: uint32
        ydk::YLeaf table_version; //type: uint64
        ydk::YLeaf prefix_limit_notified; //type: boolean
        ydk::YLeaf fwd_referenced; //type: boolean
        ydk::YLeaf deleted; //type: boolean
        ydk::YLeaf initial_converge; //type: boolean

}; // Ipv6Rib::RibTableIds::RibTableId::Information


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos : public ydk::Entity
{
    public:
        SummaryProtos();
        ~SummaryProtos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryProto; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto> > summary_proto;
        
}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto : public ydk::Entity
{
    public:
        SummaryProto();
        ~SummaryProto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protoid; //type: int32
        ydk::YLeaf name; //type: string
        ydk::YLeaf instance; //type: string
        class ProtoRouteCount; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount
        class RtypeNone; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone
        class RtypeOther; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther
        class RtypeOspfIntra; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra
        class RtypeOspfInter; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter
        class RtypeOspfExtern1; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1
        class RtypeOspfExtern2; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2
        class RtypeIsisSum; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum
        class RtypeIsisL1; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1
        class RtypeIsisL2; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2
        class RtypeIsisL1Ia; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia
        class RtypeBgpInt; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt
        class RtypeBgpExt; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt
        class RtypeBgpLoc; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc
        class RtypeOspfNssa1; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1
        class RtypeOspfNssa2; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2
        class RtypeIgrp2Int; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int
        class RtypeIgrp2Ext; //type: Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount> proto_route_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone> rtype_none;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther> rtype_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra> rtype_ospf_intra;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter> rtype_ospf_inter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1> rtype_ospf_extern1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2> rtype_ospf_extern2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum> rtype_isis_sum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1> rtype_isis_l1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2> rtype_isis_l2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia> rtype_isis_l1_ia;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt> rtype_bgp_int;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt> rtype_bgp_ext;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc> rtype_bgp_loc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1> rtype_ospf_nssa1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2> rtype_ospf_nssa2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int> rtype_igrp2_int;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext> rtype_igrp2_ext;
        
}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount : public ydk::Entity
{
    public:
        ProtoRouteCount();
        ~ProtoRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone : public ydk::Entity
{
    public:
        RtypeNone();
        ~RtypeNone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther : public ydk::Entity
{
    public:
        RtypeOther();
        ~RtypeOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra : public ydk::Entity
{
    public:
        RtypeOspfIntra();
        ~RtypeOspfIntra();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter : public ydk::Entity
{
    public:
        RtypeOspfInter();
        ~RtypeOspfInter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1 : public ydk::Entity
{
    public:
        RtypeOspfExtern1();
        ~RtypeOspfExtern1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2 : public ydk::Entity
{
    public:
        RtypeOspfExtern2();
        ~RtypeOspfExtern2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum : public ydk::Entity
{
    public:
        RtypeIsisSum();
        ~RtypeIsisSum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1 : public ydk::Entity
{
    public:
        RtypeIsisL1();
        ~RtypeIsisL1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2 : public ydk::Entity
{
    public:
        RtypeIsisL2();
        ~RtypeIsisL2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia : public ydk::Entity
{
    public:
        RtypeIsisL1Ia();
        ~RtypeIsisL1Ia();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt : public ydk::Entity
{
    public:
        RtypeBgpInt();
        ~RtypeBgpInt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt : public ydk::Entity
{
    public:
        RtypeBgpExt();
        ~RtypeBgpExt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc : public ydk::Entity
{
    public:
        RtypeBgpLoc();
        ~RtypeBgpLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1 : public ydk::Entity
{
    public:
        RtypeOspfNssa1();
        ~RtypeOspfNssa1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2 : public ydk::Entity
{
    public:
        RtypeOspfNssa2();
        ~RtypeOspfNssa2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int : public ydk::Entity
{
    public:
        RtypeIgrp2Int();
        ~RtypeIgrp2Int();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int


class Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext : public ydk::Entity
{
    public:
        RtypeIgrp2Ext();
        ~RtypeIgrp2Ext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf num_backup_routes; //type: uint32
        ydk::YLeaf num_active_paths; //type: uint32
        ydk::YLeaf num_backup_paths; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext


class Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls : public ydk::Entity
{
    public:
        RibTableItfHndls();
        ~RibTableItfHndls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RibTableItfHndl; //type: Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl> > rib_table_itf_hndl;
        
}; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls


class Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl : public ydk::Entity
{
    public:
        RibTableItfHndl();
        ~RibTableItfHndl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf handle; //type: int32
        class ItfRoute; //type: Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute> > itf_route;
        
}; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl


class Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute : public ydk::Entity
{
    public:
        ItfRoute();
        ~ItfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath> route_path;
        
}; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute


class Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath


class Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vrf; //type: Ipv6Rib::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf> > vrf;
        
}; // Ipv6Rib::Vrfs


class Ipv6Rib::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class Afs; //type: Ipv6Rib::Vrfs::Vrf::Afs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs> afs;
        
}; // Ipv6Rib::Vrfs::Vrf


class Ipv6Rib::Vrfs::Vrf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af> > af;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs


class Ipv6Rib::Vrfs::Vrf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: string
        class Safs; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs> safs;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs : public ydk::Entity
{
    public:
        Safs();
        ~Safs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Saf; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf> > saf;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf : public ydk::Entity
{
    public:
        Saf();
        ~Saf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf saf_name; //type: string
        class IpRibRouteTableNames; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames> ip_rib_route_table_names;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames : public ydk::Entity
{
    public:
        IpRibRouteTableNames();
        ~IpRibRouteTableNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpRibRouteTableName; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName> > ip_rib_route_table_name;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName : public ydk::Entity
{
    public:
        IpRibRouteTableName();
        ~IpRibRouteTableName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_table_name; //type: string
        class DestinationKw; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw
        class Adverts; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts
        class DeletedRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes
        class Protocol; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol
        class Routes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes
        class QRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes
        class BackupRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw> destination_kw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts> adverts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes> deleted_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol> protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes> routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes> q_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes> backup_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw : public ydk::Entity
{
    public:
        DestinationKw();
        ~DestinationKw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestQRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes
        class DestBackupRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes
        class DestBestRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes
        class DestNextHopRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes> dest_q_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes> dest_backup_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes> dest_best_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes> dest_next_hop_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes : public ydk::Entity
{
    public:
        DestQRoutes();
        ~DestQRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestQRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute> > dest_q_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute : public ydk::Entity
{
    public:
        DestQRoute();
        ~DestQRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes : public ydk::Entity
{
    public:
        DestBackupRoutes();
        ~DestBackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestBackupRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute> > dest_backup_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute : public ydk::Entity
{
    public:
        DestBackupRoute();
        ~DestBackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes : public ydk::Entity
{
    public:
        DestBestRoutes();
        ~DestBestRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestBestRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute> > dest_best_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute : public ydk::Entity
{
    public:
        DestBestRoute();
        ~DestBestRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes : public ydk::Entity
{
    public:
        DestNextHopRoutes();
        ~DestNextHopRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestNextHopRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute> > dest_next_hop_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute : public ydk::Entity
{
    public:
        DestNextHopRoute();
        ~DestNextHopRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts : public ydk::Entity
{
    public:
        Adverts();
        ~Adverts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Advert; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert> > advert;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert : public ydk::Entity
{
    public:
        Advert();
        ~Advert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        class Ipv6RibEdmAdvert; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert> > ipv6_rib_edm_advert;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert : public ydk::Entity
{
    public:
        Ipv6RibEdmAdvert();
        ~Ipv6RibEdmAdvert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf extended_communities; //type: string
        ydk::YLeaf protocol_opaque_flags; //type: uint8
        ydk::YLeaf protocol_opaque; //type: uint32
        ydk::YLeaf code; //type: int8
        ydk::YLeaf instance_name; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes : public ydk::Entity
{
    public:
        DeletedRoutes();
        ~DeletedRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DeletedRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute> > deleted_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute : public ydk::Entity
{
    public:
        DeletedRoute();
        ~DeletedRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Local; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local
        class Bgp; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp
        class Mobile; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile
        class Eigrp; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp
        class Rpl; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl
        class Static_; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_
        class TeClient; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient
        class Subscriber; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber
        class Ospf; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf
        class Connected; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected
        class Isis; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile> mobile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl> rpl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_> static_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient> te_client;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber> subscriber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected> connected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis> isis;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lspv; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv
        class NonAs; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv> lspv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs> non_as;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv : public ydk::Entity
{
    public:
        Lspv();
        ~Lspv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information
        class ProtocolRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes> protocol_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information
        class ProtocolRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As> > as;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class Information; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information
        class ProtocolRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes> protocol_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonAs; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs> non_as;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information
        class ProtocolRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As> > as;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class Information; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information
        class ProtocolRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes> protocol_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl : public ydk::Entity
{
    public:
        Rpl();
        ~Rpl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As> > as;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class Information; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information
        class ProtocolRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes> protocol_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonAs; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs> non_as;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information
        class ProtocolRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient : public ydk::Entity
{
    public:
        TeClient();
        ~TeClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonAs; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs> non_as;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information
        class ProtocolRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk> > labelstk;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::RemoteBackupAddr


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath::Labelstk


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonAs; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs> non_as;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information
        class ProtocolRoutes; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute


}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV6_OPER_0_ */

