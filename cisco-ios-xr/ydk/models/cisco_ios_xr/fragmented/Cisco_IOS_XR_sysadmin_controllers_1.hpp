#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_1_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        class BportStatsAllRacks; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks> > bport_stats_all_racks;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks : public ydk::Entity
{
    public:
        BportStatsAllRacks();
        ~BportStatsAllRacks();

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

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf total_racks; //type: uint32
        class BportStatsRack; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack> > bport_stats_rack;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack : public ydk::Entity
{
    public:
        BportStatsRack();
        ~BportStatsRack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf rack_num_str; //type: string
        class BportStats; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats> > bport_stats;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats : public ydk::Entity
{
    public:
        BportStats();
        ~BportStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int64
        ydk::YLeaf bport_id; //type: string
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf last_clear_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf loc_str; //type: string
        class BportAllList; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList
        class Statistics; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList> > bport_all_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics> statistics;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList : public ydk::Entity
{
    public:
        BportAllList();
        ~BportAllList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int64
        ydk::YLeaf bport_id; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf down_flags; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BportStatsAllRacks; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks> > bport_stats_all_racks;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks : public ydk::Entity
{
    public:
        BportStatsAllRacks();
        ~BportStatsAllRacks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf total_racks; //type: uint32
        class BportStatsRack; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack> > bport_stats_rack;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack : public ydk::Entity
{
    public:
        BportStatsRack();
        ~BportStatsRack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf rack_num_str; //type: string
        class BportStats; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats> > bport_stats;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats : public ydk::Entity
{
    public:
        BportStats();
        ~BportStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int64
        ydk::YLeaf bport_id; //type: string
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf last_clear_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf loc_str; //type: string
        class BundleAllList; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList> > bundle_all_list;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Location


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList : public ydk::Entity
{
    public:
        BundleAllList();
        ~BundleAllList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int64
        ydk::YLeaf bundle_id; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf plane_id; //type: uint32
        ydk::YLeaf total_links; //type: uint32
        ydk::YLeaf down_links; //type: uint32
        ydk::YLeaf bport1; //type: string
        ydk::YLeaf bport2; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList


class Controller::Fabric::Oper::FsdbaggActive::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        class Plane; //type: Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane> > plane;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Statistics


class Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane : public ydk::Entity
{
    public:
        Plane();
        ~Plane();

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

        ydk::YLeaf planeid; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf ucast_oper_state; //type: string
        ydk::YLeaf mcast_oper_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf ucast_cnt_up; //type: int32
        ydk::YLeaf ucast_cnt_some_up; //type: int32
        ydk::YLeaf ucast_cnt_dn; //type: int32
        ydk::YLeaf mcast_cnt_up; //type: int32
        ydk::YLeaf mcast_cnt_some_up; //type: int32
        ydk::YLeaf mcast_cnt_dn; //type: int32
        ydk::YLeaf total_bundles; //type: int32
        ydk::YLeaf down_bundles; //type: int32
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf ucast_lost_cells; //type: uint32
        ydk::YLeaf mcast_lost_cells; //type: uint32
        ydk::YLeaf last_clear_ts; //type: string
        ydk::YLeaf last_clear_reason; //type: string
        ydk::YLeaf last_clear_req_ts; //type: string
        ydk::YLeaf last_clear_status; //type: string
        ydk::YLeaf is_asic_internal_error; //type: boolean
        ydk::YLeaf asic_internal_drops; //type: uint64
        ydk::YLeaf asic_location_drops; //type: string
        ydk::YLeaf ppu_state; //type: string
        class AsicInternalError; //type: Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError> > asic_internal_error;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane


class Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError : public ydk::Entity
{
    public:
        AsicInternalError();
        ~AsicInternalError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_number; //type: int64
        ydk::YLeaf asic_location; //type: string
        ydk::YLeaf link_crc_error; //type: boolean
        ydk::YLeaf link_size_error; //type: boolean
        ydk::YLeaf link_mis_align_error; //type: boolean
        ydk::YLeaf link_code_group_error; //type: boolean
        ydk::YLeaf link_no_sig_lock_error; //type: boolean
        ydk::YLeaf link_no_sign_accept_error; //type: boolean
        ydk::YLeaf link_token_error; //type: boolean
        ydk::YLeaf error_token_count; //type: boolean
        ydk::YLeaf last_asic_internal_error_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError


class Controller::Fabric::Oper::FsdbaggLink : public ydk::Entity
{
    public:
        FsdbaggLink();
        ~FsdbaggLink();

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

        class Port; //type: Controller::Fabric::Oper::FsdbaggLink::Port

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggLink::Port> > port;
        
}; // Controller::Fabric::Oper::FsdbaggLink


class Controller::Fabric::Oper::FsdbaggLink::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

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

        ydk::YLeaf portname; //type: string
        ydk::YLeaf description; //type: string

}; // Controller::Fabric::Oper::FsdbaggLink::Port


class Controller::Fabric::Oper::FsdbaggSfeAsicType : public ydk::Entity
{
    public:
        FsdbaggSfeAsicType();
        ~FsdbaggSfeAsicType();

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

        class AsicTypes; //type: Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes> > asic_types;
        
}; // Controller::Fabric::Oper::FsdbaggSfeAsicType


class Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes : public ydk::Entity
{
    public:
        AsicTypes();
        ~AsicTypes();

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

        ydk::YLeaf asicname; //type: string
        ydk::YLeaf description; //type: string
        class Block; //type: Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block> > block;
        
}; // Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes


class Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blockname; //type: string

}; // Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block


class Controller::Fabric::Oper::FsdbaggStandby : public ydk::Entity
{
    public:
        FsdbaggStandby();
        ~FsdbaggStandby();

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

        class Plane; //type: Controller::Fabric::Oper::FsdbaggStandby::Plane
        class Statistics; //type: Controller::Fabric::Oper::FsdbaggStandby::Statistics

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggStandby::Plane> > plane;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggStandby::Statistics> statistics;
        
}; // Controller::Fabric::Oper::FsdbaggStandby


class Controller::Fabric::Oper::FsdbaggStandby::Plane : public ydk::Entity
{
    public:
        Plane();
        ~Plane();

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

        ydk::YLeaf planeid; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf ucast_oper_state; //type: string
        ydk::YLeaf mcast_oper_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf ucast_cnt_up; //type: int32
        ydk::YLeaf ucast_cnt_some_up; //type: int32
        ydk::YLeaf ucast_cnt_dn; //type: int32
        ydk::YLeaf mcast_cnt_up; //type: int32
        ydk::YLeaf mcast_cnt_some_up; //type: int32
        ydk::YLeaf mcast_cnt_dn; //type: int32
        ydk::YLeaf total_bundles; //type: int32
        ydk::YLeaf down_bundles; //type: int32
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf ucast_lost_cells; //type: uint32
        ydk::YLeaf mcast_lost_cells; //type: uint32
        ydk::YLeaf last_clear_ts; //type: string
        ydk::YLeaf last_clear_reason; //type: string
        ydk::YLeaf last_clear_req_ts; //type: string
        ydk::YLeaf last_clear_status; //type: string
        ydk::YLeaf is_asic_internal_error; //type: boolean
        ydk::YLeaf asic_internal_drops; //type: uint64
        ydk::YLeaf asic_location_drops; //type: string
        ydk::YLeaf ppu_state; //type: string
        class AsicInternalError; //type: Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError> > asic_internal_error;
        
}; // Controller::Fabric::Oper::FsdbaggStandby::Plane


class Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError : public ydk::Entity
{
    public:
        AsicInternalError();
        ~AsicInternalError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_number; //type: int64
        ydk::YLeaf asic_location; //type: string
        ydk::YLeaf link_crc_error; //type: boolean
        ydk::YLeaf link_size_error; //type: boolean
        ydk::YLeaf link_mis_align_error; //type: boolean
        ydk::YLeaf link_code_group_error; //type: boolean
        ydk::YLeaf link_no_sig_lock_error; //type: boolean
        ydk::YLeaf link_no_sign_accept_error; //type: boolean
        ydk::YLeaf link_token_error; //type: boolean
        ydk::YLeaf error_token_count; //type: boolean
        ydk::YLeaf last_asic_internal_error_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError


class Controller::Fabric::Oper::FsdbaggStandby::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        class Plane; //type: Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane> > plane;
        
}; // Controller::Fabric::Oper::FsdbaggStandby::Statistics


class Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane : public ydk::Entity
{
    public:
        Plane();
        ~Plane();

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

        ydk::YLeaf planeid; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf ucast_oper_state; //type: string
        ydk::YLeaf mcast_oper_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf ucast_cnt_up; //type: int32
        ydk::YLeaf ucast_cnt_some_up; //type: int32
        ydk::YLeaf ucast_cnt_dn; //type: int32
        ydk::YLeaf mcast_cnt_up; //type: int32
        ydk::YLeaf mcast_cnt_some_up; //type: int32
        ydk::YLeaf mcast_cnt_dn; //type: int32
        ydk::YLeaf total_bundles; //type: int32
        ydk::YLeaf down_bundles; //type: int32
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf ucast_lost_cells; //type: uint32
        ydk::YLeaf mcast_lost_cells; //type: uint32
        ydk::YLeaf last_clear_ts; //type: string
        ydk::YLeaf last_clear_reason; //type: string
        ydk::YLeaf last_clear_req_ts; //type: string
        ydk::YLeaf last_clear_status; //type: string
        ydk::YLeaf is_asic_internal_error; //type: boolean
        ydk::YLeaf asic_internal_drops; //type: uint64
        ydk::YLeaf asic_location_drops; //type: string
        ydk::YLeaf ppu_state; //type: string
        class AsicInternalError; //type: Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError> > asic_internal_error;
        
}; // Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane


class Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError : public ydk::Entity
{
    public:
        AsicInternalError();
        ~AsicInternalError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_number; //type: int64
        ydk::YLeaf asic_location; //type: string
        ydk::YLeaf link_crc_error; //type: boolean
        ydk::YLeaf link_size_error; //type: boolean
        ydk::YLeaf link_mis_align_error; //type: boolean
        ydk::YLeaf link_code_group_error; //type: boolean
        ydk::YLeaf link_no_sig_lock_error; //type: boolean
        ydk::YLeaf link_no_sign_accept_error; //type: boolean
        ydk::YLeaf link_token_error; //type: boolean
        ydk::YLeaf error_token_count; //type: boolean
        ydk::YLeaf last_asic_internal_error_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError


class Controller::Fabric::Oper::FabHealth : public ydk::Entity
{
    public:
        FabHealth();
        ~FabHealth();

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

        class SysInfoList; //type: Controller::Fabric::Oper::FabHealth::SysInfoList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FabHealth::SysInfoList> > sys_info_list;
        
}; // Controller::Fabric::Oper::FabHealth


class Controller::Fabric::Oper::FabHealth::SysInfoList : public ydk::Entity
{
    public:
        SysInfoList();
        ~SysInfoList();

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

        ydk::YLeaf index_key; //type: int32
        ydk::YLeaf aggr_status; //type: boolean
        ydk::YLeaf available_rack_ids; //type: string
        ydk::YLeaf rack_id_separator; //type: string
        ydk::YLeaf available_fm_loc; //type: string
        ydk::YLeaf fm_loc_separator; //type: string
        ydk::YLeaf rack_total; //type: uint32
        ydk::YLeaf rack_lcc; //type: uint32
        ydk::YLeaf rack_fcc; //type: uint32
        ydk::YLeaf plane_up; //type: uint32
        ydk::YLeaf plane_dn; //type: uint32
        ydk::YLeaf plane_mcast_dn; //type: uint32
        ydk::YLeaf plane_admin_dn; //type: uint32
        ydk::YLeaf show_sys_plane_detail; //type: boolean
        ydk::YLeaf sfe_asics_total; //type: uint32
        ydk::YLeaf sfe_asics_up; //type: uint32
        ydk::YLeaf sfe_asics_dn; //type: uint32
        ydk::YLeaf fia_asics_total; //type: uint32
        ydk::YLeaf fia_asics_up; //type: uint32
        ydk::YLeaf fia_asics_dn; //type: uint32
        class SysPlaneInfoList; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList
        class RackInfoList; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList
        class FsdbStatus; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus
        class SfeStatus; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus
        class SfeDrvrLoc; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc
        class SfeFmSep; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList> > sys_plane_info_list;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList> > rack_info_list;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus> > fsdb_status;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus> > sfe_status;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc> > sfe_drvr_loc;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep> > sfe_fm_sep;
        
}; // Controller::Fabric::Oper::FabHealth::SysInfoList


class Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList : public ydk::Entity
{
    public:
        SysPlaneInfoList();
        ~SysPlaneInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plane_id; //type: int32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf plane_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf racks_w_plane_fault; //type: int32
        ydk::YLeaf is_data_drop; //type: boolean

}; // Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList


class Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList : public ydk::Entity
{
    public:
        RackInfoList();
        ~RackInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_id; //type: int32
        ydk::YLeaf rack_name; //type: string
        ydk::YLeaf rack_type; //type: string
        ydk::YLeaf sfe_asics_total; //type: int32
        ydk::YLeaf sfe_asics_up; //type: int32
        ydk::YLeaf sfe_asics_dn; //type: int32
        ydk::YLeaf fia_asics_total; //type: int32
        ydk::YLeaf fia_asics_up; //type: int32
        ydk::YLeaf fia_asics_dn; //type: int32
        ydk::YLeaf plane_up; //type: uint32
        ydk::YLeaf plane_dn; //type: uint32
        ydk::YLeaf plane_mcast_dn; //type: uint32
        ydk::YLeaf plane_admin_dn; //type: uint32
        ydk::YLeaf show_rack_plane_detail; //type: boolean
        ydk::YLeaf amba_valid; //type: int32
        class RackPlaneInfoList; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList> > rack_plane_info_list;
        
}; // Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList


class Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList : public ydk::Entity
{
    public:
        RackPlaneInfoList();
        ~RackPlaneInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plane_id; //type: int32
        ydk::YLeaf plane_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf asics_total; //type: int32
        ydk::YLeaf asics_up; //type: int32
        ydk::YLeaf asics_dn; //type: int32
        class ReachableAmba; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba> > reachable_amba;
        
}; // Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList


class Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba : public ydk::Entity
{
    public:
        ReachableAmba();
        ~ReachableAmba();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf num_reachable; //type: int32

}; // Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba


class Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus : public ydk::Entity
{
    public:
        FsdbStatus();
        ~FsdbStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_id; //type: int32
        ydk::YLeaf status; //type: boolean

}; // Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus


class Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus : public ydk::Entity
{
    public:
        SfeStatus();
        ~SfeStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_id; //type: int32
        ydk::YLeaf status; //type: boolean

}; // Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus


class Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc : public ydk::Entity
{
    public:
        SfeDrvrLoc();
        ~SfeDrvrLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loc_str; //type: string

}; // Controller::Fabric::Oper::FabHealth::SysInfoList::SfeDrvrLoc


class Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep : public ydk::Entity
{
    public:
        SfeFmSep();
        ~SfeFmSep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loc_str; //type: string

}; // Controller::Fabric::Oper::FabHealth::SysInfoList::SfeFmSep


class Controller::Fabric::Oper::FsdbAggregator : public ydk::Entity
{
    public:
        FsdbAggregator();
        ~FsdbAggregator();

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

        class Fsdbagg; //type: Controller::Fabric::Oper::FsdbAggregator::Fsdbagg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbAggregator::Fsdbagg> fsdbagg;
        
}; // Controller::Fabric::Oper::FsdbAggregator


class Controller::Fabric::Oper::FsdbAggregator::Fsdbagg : public ydk::Entity
{
    public:
        Fsdbagg();
        ~Fsdbagg();

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

        class Trace; //type: Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace> > trace;
        
}; // Controller::Fabric::Oper::FsdbAggregator::Fsdbagg


class Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

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

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location> > location;
        
}; // Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace


class Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions> > all_options;
        
}; // Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location


class Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks> > trace_blocks;
        
}; // Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions


class Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks


class Controller::Fabric::Oper::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

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

        class Rack; //type: Controller::Fabric::Oper::Link::Rack
        class NodeLocation; //type: Controller::Fabric::Oper::Link::NodeLocation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack> > rack;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::NodeLocation> > node_location;
        
}; // Controller::Fabric::Oper::Link


class Controller::Fabric::Oper::Link::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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

        ydk::YLeaf rack_number; //type: int32
        class Port; //type: Controller::Fabric::Oper::Link::Rack::Port

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port> > port;
        
}; // Controller::Fabric::Oper::Link::Rack


class Controller::Fabric::Oper::Link::Rack::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf portname; //type: string
        ydk::YLeaf description; //type: string
        class Location; //type: Controller::Fabric::Oper::Link::Rack::Port::Location
        class Rx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx
        class Tx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location> > location;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Tx> tx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port


class Controller::Fabric::Oper::Link::Rack::Port::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loc_str; //type: string
        class Rx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx
        class Tx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx> tx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail
        class State; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State
        class Statistics; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics> statistics;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Up; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up
        class Down; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down
        class Er; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er
        class Mismatch; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up> up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down> down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er> er;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch> mismatch;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up : public ydk::Entity
{
    public:
        Up();
        ~Up();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down : public ydk::Entity
{
    public:
        Down();
        ~Down();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er : public ydk::Entity
{
    public:
        Er();
        ~Er();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Er::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch : public ydk::Entity
{
    public:
        Mismatch();
        ~Mismatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail
        class State; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State
        class Statistics; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics> statistics;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Up; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up
        class Down; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down
        class Er; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er
        class Mismatch; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up> up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down> down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er> er;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch> mismatch;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up : public ydk::Entity
{
    public:
        Up();
        ~Up();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down : public ydk::Entity
{
    public:
        Down();
        ~Down();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er : public ydk::Entity
{
    public:
        Er();
        ~Er();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Er::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch : public ydk::Entity
{
    public:
        Mismatch();
        ~Mismatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History> > history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx> > data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx> > data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_1_ */

