#ifndef _CISCO_IOS_XR_IP_RIB_IPV4_OPER_3_
#define _CISCO_IOS_XR_IP_RIB_IPV4_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rib_ipv4_oper_1.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv4_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rib_ipv4_oper {


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1 : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2 : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1 : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2 : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1 : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2 : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext


class Rib::RibTableIds::RibTableId::RibTableItfHndls : public ydk::Entity
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

        class RibTableItfHndl; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl> > rib_table_itf_hndl;
        
}; // Rib::RibTableIds::RibTableId::RibTableItfHndls


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl : public ydk::Entity
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
        class ItfRoute; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute> > itf_route;
        
}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute : public ydk::Entity
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
        class RoutePath; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath> route_path;
        
}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath : public ydk::Entity
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

        class Ipv4RibEdmPath; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf has_vxlan_network_id; //type: boolean
        ydk::YLeaf vxlan_network_id; //type: uint32
        ydk::YLeaf has_xcid; //type: boolean
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf has_span_diag_interface; //type: boolean
        ydk::YLeaf span_diag_interface; //type: string
        ydk::YLeaf has_subscriber_parent_interface; //type: boolean
        ydk::YLeaf subscriber_parent_interface; //type: string
        class RemoteBackupAddr; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        
}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class Rib::RibTableIds::RibTableId::Information : public ydk::Entity
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

}; // Rib::RibTableIds::RibTableId::Information


}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV4_OPER_3_ */

