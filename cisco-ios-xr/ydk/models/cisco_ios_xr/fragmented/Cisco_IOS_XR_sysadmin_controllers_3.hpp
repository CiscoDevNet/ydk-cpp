#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_3_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {


class Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf stats_output; //type: string

}; // Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance


class Controller::SfeOper::Sfe::LinkInfo : public ydk::Entity
{
    public:
        LinkInfo();
        ~LinkInfo();

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

        class Location; //type: Controller::SfeOper::Sfe::LinkInfo::Location

        ydk::YList location;
        
}; // Controller::SfeOper::Sfe::LinkInfo


class Controller::SfeOper::Sfe::LinkInfo::Location : public ydk::Entity
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
        ydk::YLeaf description; //type: string
        class Rx; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx
        class Tx; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx

        ydk::YList rx;
        ydk::YList tx;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx : public ydk::Entity
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

        ydk::YLeaf start; //type: int32
        ydk::YLeaf end; //type: int32
        class Detail; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail
        class Topo; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo
        class Flap; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap
        class Stats; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo> topo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap> flap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats> stats;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail : public ydk::Entity
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

        class Topo; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo
        class Flap; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo> topo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap> flap;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo : public ydk::Entity
{
    public:
        Topo();
        ~Topo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap : public ydk::Entity
{
    public:
        Flap();
        ~Flap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo : public ydk::Entity
{
    public:
        Topo();
        ~Topo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap : public ydk::Entity
{
    public:
        Flap();
        ~Flap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data
        class Ctrl; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl
        class All; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data> data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl> ctrl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All> all;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl : public ydk::Entity
{
    public:
        Ctrl();
        ~Ctrl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx : public ydk::Entity
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

        ydk::YLeaf start; //type: int32
        ydk::YLeaf end; //type: int32
        class Detail; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail
        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance
        class Stats; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail> detail;
        ydk::YList instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats> stats;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail : public ydk::Entity
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

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data
        class Ctrl; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl
        class All; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data> data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl> ctrl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All> all;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl : public ydk::Entity
{
    public:
        Ctrl();
        ~Ctrl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf phy_link; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History

        ydk::YList history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History : public ydk::Entity
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
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::Diagshell : public ydk::Entity
{
    public:
        Diagshell();
        ~Diagshell();

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

        class Location; //type: Controller::SfeOper::Sfe::Diagshell::Location

        ydk::YList location;
        
}; // Controller::SfeOper::Sfe::Diagshell


class Controller::SfeOper::Sfe::Diagshell::Location : public ydk::Entity
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
        ydk::YLeaf description; //type: string
        class Instance; //type: Controller::SfeOper::Sfe::Diagshell::Location::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::Diagshell::Location


class Controller::SfeOper::Sfe::Diagshell::Location::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_num; //type: int32
        class DiagCmd; //type: Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd

        ydk::YList diag_cmd;
        
}; // Controller::SfeOper::Sfe::Diagshell::Location::Instance


class Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd : public ydk::Entity
{
    public:
        DiagCmd();
        ~DiagCmd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmd_str; //type: string
        class Bytes; //type: Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes

        ydk::YList bytes;
        
}; // Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd


class Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf byte_idx; //type: int64
        ydk::YLeaf data; //type: string

}; // Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes


class Controller::SfeOper::Sfe::Register : public ydk::Entity
{
    public:
        Register();
        ~Register();

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

        class Location; //type: Controller::SfeOper::Sfe::Register::Location

        ydk::YList location;
        
}; // Controller::SfeOper::Sfe::Register


class Controller::SfeOper::Sfe::Register::Location : public ydk::Entity
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
        ydk::YLeaf description; //type: string
        class Instance; //type: Controller::SfeOper::Sfe::Register::Location::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::Register::Location


class Controller::SfeOper::Sfe::Register::Location::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_num; //type: int32
        class Bytes; //type: Controller::SfeOper::Sfe::Register::Location::Instance::Bytes

        ydk::YList bytes;
        
}; // Controller::SfeOper::Sfe::Register::Location::Instance


class Controller::SfeOper::Sfe::Register::Location::Instance::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf byte_idx; //type: int64
        ydk::YLeaf data; //type: string

}; // Controller::SfeOper::Sfe::Register::Location::Instance::Bytes


class Controller::SfeOper::Sfe::DumpFile : public ydk::Entity
{
    public:
        DumpFile();
        ~DumpFile();

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

        class Location; //type: Controller::SfeOper::Sfe::DumpFile::Location

        ydk::YList location;
        
}; // Controller::SfeOper::Sfe::DumpFile


class Controller::SfeOper::Sfe::DumpFile::Location : public ydk::Entity
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
        ydk::YLeaf description; //type: string
        class File; //type: Controller::SfeOper::Sfe::DumpFile::Location::File

        ydk::YList file;
        
}; // Controller::SfeOper::Sfe::DumpFile::Location


class Controller::SfeOper::Sfe::DumpFile::Location::File : public ydk::Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file_name; //type: string
        class Bytes; //type: Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes

        ydk::YList bytes;
        
}; // Controller::SfeOper::Sfe::DumpFile::Location::File


class Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf byte_idx; //type: int64
        ydk::YLeaf data; //type: string

}; // Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes


class Controller::SfeOper::Sfe::Parse : public ydk::Entity
{
    public:
        Parse();
        ~Parse();

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

        class Location; //type: Controller::SfeOper::Sfe::Parse::Location

        ydk::YList location;
        
}; // Controller::SfeOper::Sfe::Parse


class Controller::SfeOper::Sfe::Parse::Location : public ydk::Entity
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
        ydk::YLeaf description; //type: string
        class Link; //type: Controller::SfeOper::Sfe::Parse::Location::Link

        ydk::YList link;
        
}; // Controller::SfeOper::Sfe::Parse::Location


class Controller::SfeOper::Sfe::Parse::Location::Link : public ydk::Entity
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

        ydk::YLeaf start; //type: int32
        ydk::YLeaf end; //type: int32
        class Instance; //type: Controller::SfeOper::Sfe::Parse::Location::Link::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::Parse::Location::Link


class Controller::SfeOper::Sfe::Parse::Location::Link::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList

        ydk::YList link_idx_list;
        
}; // Controller::SfeOper::Sfe::Parse::Location::Link::Instance


class Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf rack_id_str; //type: string
        ydk::YLeaf slot_id_str; //type: string
        ydk::YLeaf asic_inst_id; //type: uint32
        ydk::YLeaf link_num_id; //type: uint32
        ydk::YLeaf log_slot; //type: uint32
        ydk::YLeaf phy_slot; //type: uint32
        ydk::YLeaf fap_id; //type: uint32
        ydk::YLeaf unit; //type: uint32
        ydk::YLeaf sfi_id; //type: uint32
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf driver_run; //type: string

}; // Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList


class Controller::SfeOper::SfeTrace : public ydk::Entity
{
    public:
        SfeTrace();
        ~SfeTrace();

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

        class SfeDriver; //type: Controller::SfeOper::SfeTrace::SfeDriver

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::SfeTrace::SfeDriver> sfe_driver;
        
}; // Controller::SfeOper::SfeTrace


class Controller::SfeOper::SfeTrace::SfeDriver : public ydk::Entity
{
    public:
        SfeDriver();
        ~SfeDriver();

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

        class Trace; //type: Controller::SfeOper::SfeTrace::SfeDriver::Trace

        ydk::YList trace;
        
}; // Controller::SfeOper::SfeTrace::SfeDriver


class Controller::SfeOper::SfeTrace::SfeDriver::Trace : public ydk::Entity
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
        class Location; //type: Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location

        ydk::YList location;
        
}; // Controller::SfeOper::SfeTrace::SfeDriver::Trace


class Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location


class Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions


class Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks


class Controller::Asic : public ydk::Entity
{
    public:
        Asic();
        ~Asic();

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

        ydk::YLeaf asic_name; //type: string
        class Instance; //type: Controller::Asic::Instance

        ydk::YList instance;
        
}; // Controller::Asic


class Controller::Asic::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf instance_name; //type: string
        class Address; //type: Controller::Asic::Instance::Address
        class BlockName; //type: Controller::Asic::Instance::BlockName
        class BlockNumber; //type: Controller::Asic::Instance::BlockNumber

        ydk::YList address;
        ydk::YList block_name;
        ydk::YList block_number;
        
}; // Controller::Asic::Instance


class Controller::Asic::Instance::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf entries; //type: uint32
        ydk::YLeaf width; //type: uint32
        class Location; //type: Controller::Asic::Instance::Address::Location

        ydk::YList location;
        
}; // Controller::Asic::Instance::Address


class Controller::Asic::Instance::Address::Location : public ydk::Entity
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
        class DirectData; //type: Controller::Asic::Instance::Address::Location::DirectData

        ydk::YList direct_data;
        
}; // Controller::Asic::Instance::Address::Location


class Controller::Asic::Instance::Address::Location::DirectData : public ydk::Entity
{
    public:
        DirectData();
        ~DirectData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf size; //type: uint32

}; // Controller::Asic::Instance::Address::Location::DirectData


class Controller::Asic::Instance::BlockName : public ydk::Entity
{
    public:
        BlockName();
        ~BlockName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_nm; //type: string
        ydk::YLeaf block_num; //type: uint32
        class RegisterName; //type: Controller::Asic::Instance::BlockName::RegisterName

        ydk::YList register_name;
        
}; // Controller::Asic::Instance::BlockName


class Controller::Asic::Instance::BlockName::RegisterName : public ydk::Entity
{
    public:
        RegisterName();
        ~RegisterName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf register_; //type: uint32
        class Data; //type: Controller::Asic::Instance::BlockName::RegisterName::Data

        ydk::YList data;
        
}; // Controller::Asic::Instance::BlockName::RegisterName


class Controller::Asic::Instance::BlockName::RegisterName::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf size; //type: uint32

}; // Controller::Asic::Instance::BlockName::RegisterName::Data


class Controller::Asic::Instance::BlockNumber : public ydk::Entity
{
    public:
        BlockNumber();
        ~BlockNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_num; //type: uint32
        ydk::YLeaf block_nm; //type: string
        class RegisterNumber; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber

        ydk::YList register_number;
        
}; // Controller::Asic::Instance::BlockNumber


class Controller::Asic::Instance::BlockNumber::RegisterNumber : public ydk::Entity
{
    public:
        RegisterNumber();
        ~RegisterNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf register_; //type: uint32
        ydk::YLeaf register_name; //type: string
        class RegisterOffsets; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets
        class Location; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber::Location

        ydk::YList register_offsets;
        ydk::YList location;
        
}; // Controller::Asic::Instance::BlockNumber::RegisterNumber


class Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets : public ydk::Entity
{
    public:
        RegisterOffsets();
        ~RegisterOffsets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reg_start; //type: uint32
        ydk::YLeaf num_entries; //type: uint32
        class Location; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location

        ydk::YList location;
        
}; // Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets


class Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location : public ydk::Entity
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
        class Data; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data

        ydk::YList data;
        
}; // Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location


class Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf size; //type: uint32

}; // Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data


class Controller::Asic::Instance::BlockNumber::RegisterNumber::Location : public ydk::Entity
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
        class Data; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber::Location::Data

        ydk::YList data;
        
}; // Controller::Asic::Instance::BlockNumber::RegisterNumber::Location


class Controller::Asic::Instance::BlockNumber::RegisterNumber::Location::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf size; //type: uint32

}; // Controller::Asic::Instance::BlockNumber::RegisterNumber::Location::Data


class Controller::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

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

        class SliceControl; //type: Controller::Oper::SliceControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl> slice_control;
        
}; // Controller::Oper


class Controller::Oper::SliceControl : public ydk::Entity
{
    public:
        SliceControl();
        ~SliceControl();

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

        class LocationList; //type: Controller::Oper::SliceControl::LocationList

        ydk::YList location_list;
        
}; // Controller::Oper::SliceControl


class Controller::Oper::SliceControl::LocationList : public ydk::Entity
{
    public:
        LocationList();
        ~LocationList();

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
        ydk::YLeaf description; //type: string
        class ManagerContextInfo; //type: Controller::Oper::SliceControl::LocationList::ManagerContextInfo
        class FPGA; //type: Controller::Oper::SliceControl::LocationList::FPGA

        ydk::YList manager_context_info;
        ydk::YList fpga;
        
}; // Controller::Oper::SliceControl::LocationList


class Controller::Oper::SliceControl::LocationList::ManagerContextInfo : public ydk::Entity
{
    public:
        ManagerContextInfo();
        ~ManagerContextInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf num_controllers; //type: uint8
        ydk::YLeaf levm; //type: string
        ydk::YLeaf ccc_hdl; //type: string
        ydk::YLeaf trace; //type: string
        ydk::YLeaf xm_hdl; //type: string
        ydk::YLeaf fm_hdl; //type: string
        ydk::YLeaf sim; //type: boolean
        ydk::YLeaf debug; //type: boolean
        ydk::YLeaf card_type; //type: uint32
        ydk::YLeaf slot_num; //type: uint32

}; // Controller::Oper::SliceControl::LocationList::ManagerContextInfo


class Controller::Oper::SliceControl::LocationList::FPGA : public ydk::Entity
{
    public:
        FPGA();
        ~FPGA();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_controller_id; //type: string
        class SliceContextInfo; //type: Controller::Oper::SliceControl::LocationList::FPGA::SliceContextInfo
        class ClockingDevices; //type: Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices
        class Slice; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice

        ydk::YList slice_context_info;
        ydk::YList clocking_devices;
        ydk::YList slice;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA


class Controller::Oper::SliceControl::LocationList::FPGA::SliceContextInfo : public ydk::Entity
{
    public:
        SliceContextInfo();
        ~SliceContextInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf slice_controller_id; //type: string
        ydk::YLeaf slices; //type: uint8
        ydk::YLeaf oper_state; //type: int32
        ydk::YLeaf pci_status; //type: int32
        ydk::YLeaf bao_desc; //type: string
        ydk::YLeaf handle; //type: string
        ydk::YLeaf irq; //type: string
        ydk::YLeaf msi; //type: int32
        ydk::YLeaf regs; //type: string
        ydk::YLeaf num_pll; //type: uint8
        ydk::YLeaf c_hd; //type: string
        ydk::YLeaf d_hd; //type: string
        ydk::YLeaf i_hd; //type: string
        ydk::YLeaf fm_hdl; //type: string
        ydk::YLeaf trace; //type: string
        ydk::YLeaf levm; //type: string
        ydk::YLeaf hw_ver; //type: string
        ydk::YLeaf pca_ver; //type: string
        ydk::YLeaf tcam_vendor; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::SliceContextInfo


class Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices : public ydk::Entity
{
    public:
        ClockingDevices();
        ~ClockingDevices();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pll_device_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        class Pll; //type: Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices::Pll

        ydk::YList pll;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices


class Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices::Pll : public ydk::Entity
{
    public:
        Pll();
        ~Pll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pll_id; //type: string
        ydk::YLeaf clocking_bus; //type: string
        ydk::YLeaf clocking_mode; //type: string
        ydk::YLeaf clocking_dev_addr; //type: string
        ydk::YLeaf clocking_i2c_regs; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices::Pll


class Controller::Oper::SliceControl::LocationList::FPGA::Slice : public ydk::Entity
{
    public:
        Slice();
        ~Slice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_id; //type: string
        class Summary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary
        class CurrSensor; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::CurrSensor
        class Eeprom; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Eeprom
        class OpticsSummary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::OpticsSummary
        class Optics; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics
        class Phy; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Phy
        class TempSensor; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::TempSensor
        class VoltSensor; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::VoltSensor
        class GearboxSummary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::GearboxSummary
        class Gearbox2Summary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2Summary
        class DualGearboxSummary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearboxSummary
        class Gearbox; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox
        class Gearbox2; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2
        class DualGearbox; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox
        class Cpak; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Cpak
        class ModenaSummary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::ModenaSummary
        class Modena; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary> summary;
        ydk::YList curr_sensor;
        ydk::YList eeprom;
        ydk::YList optics_summary;
        ydk::YList optics;
        ydk::YList phy;
        ydk::YList temp_sensor;
        ydk::YList volt_sensor;
        ydk::YList gearbox_summary;
        ydk::YList gearbox2_summary;
        ydk::YList dual_gearbox_summary;
        ydk::YList gearbox;
        ydk::YList gearbox2;
        ydk::YList dual_gearbox;
        ydk::YList cpak;
        ydk::YList modena_summary;
        ydk::YList modena;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SliceSummary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary::SliceSummary

        ydk::YList slice_summary;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary::SliceSummary : public ydk::Entity
{
    public:
        SliceSummary();
        ~SliceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_summ_id; //type: string
        ydk::YLeaf slice_id; //type: string
        ydk::YLeaf num_phy; //type: uint8
        ydk::YLeaf num_optics; //type: uint8
        ydk::YLeaf num_eeprom; //type: uint8
        ydk::YLeaf num_temp_sensors; //type: uint8
        ydk::YLeaf num_volt_sensors; //type: uint8
        ydk::YLeaf num_curr_sensors; //type: uint8
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary::SliceSummary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::CurrSensor : public ydk::Entity
{
    public:
        CurrSensor();
        ~CurrSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf curr_sensor_id; //type: string
        ydk::YLeaf curr_dev_addr; //type: uint32
        ydk::YLeaf curr_poll_intvl; //type: uint32
        ydk::YLeaf curr_delta; //type: uint32
        ydk::YLeaf curr_raw_data; //type: uint32
        ydk::YLeaf curr_sensor_value; //type: int32
        ydk::YLeaf curr_unit; //type: int32
        ydk::YLeaf curr_last_value; //type: uint32
        ydk::YLeaf curr_send_update; //type: boolean
        ydk::YLeaf curr_num_1sec_intervals; //type: int32
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::CurrSensor


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eeprom_id; //type: string
        ydk::YLeaf eeprom_type; //type: string
        ydk::YLeaf eeprom_bus; //type: string
        ydk::YLeaf eeprom_i2c_regs; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Eeprom


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::OpticsSummary : public ydk::Entity
{
    public:
        OpticsSummary();
        ~OpticsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_id; //type: string
        ydk::YLeaf optics_type; //type: string
        ydk::YLeaf optics_bus; //type: string
        ydk::YLeaf optics_i2c_regs; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::OpticsSummary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics : public ydk::Entity
{
    public:
        Optics();
        ~Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_id; //type: string
        class Cxp; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::Cxp
        class TxInfo; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxInfo
        class RxInfo; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxInfo
        class TxCoefficients; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxCoefficients
        class RxCoefficients; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxCoefficients

        ydk::YList cxp;
        ydk::YList tx_info;
        ydk::YList rx_info;
        ydk::YList tx_coefficients;
        ydk::YList rx_coefficients;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::Cxp : public ydk::Entity
{
    public:
        Cxp();
        ~Cxp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cxp_id; //type: string
        ydk::YLeaf signature; //type: string
        ydk::YLeaf cxp_port_ready; //type: boolean
        ydk::YLeaf opaque; //type: string
        ydk::YLeaf nodeid; //type: string
        ydk::YLeaf slice; //type: uint32
        ydk::YLeaf capabilities; //type: string
        ydk::YLeaf vendor_name; //type: string
        ydk::YLeaf vendor_part_num; //type: string
        ydk::YLeaf vendor_rev_num; //type: string
        ydk::YLeaf vendor_serial_num; //type: string
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::Cxp


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxInfo : public ydk::Entity
{
    public:
        TxInfo();
        ~TxInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_channel_id; //type: string
        ydk::YLeaf tx_status_flag; //type: string
        ydk::YLeaf tx_error_flag; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxInfo


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxInfo : public ydk::Entity
{
    public:
        RxInfo();
        ~RxInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_channel_id; //type: string
        ydk::YLeaf rx_status_flag; //type: string
        ydk::YLeaf rx_error_flag; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxInfo


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxCoefficients : public ydk::Entity
{
    public:
        TxCoefficients();
        ~TxCoefficients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_channel_id; //type: string
        ydk::YLeaf equalization; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxCoefficients


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxCoefficients : public ydk::Entity
{
    public:
        RxCoefficients();
        ~RxCoefficients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_channel_id; //type: string
        ydk::YLeaf amplitude; //type: string
        ydk::YLeaf de_emphasis; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxCoefficients


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Phy : public ydk::Entity
{
    public:
        Phy();
        ~Phy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf phy_id; //type: string
        ydk::YLeaf phy_type; //type: string
        ydk::YLeaf phy_bus; //type: string
        ydk::YLeaf phy_i2c_regs; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Phy


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::TempSensor : public ydk::Entity
{
    public:
        TempSensor();
        ~TempSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf temp_sensor_id; //type: string
        ydk::YLeaf temp_dev_addr; //type: uint32
        ydk::YLeaf temp_poll_intvl; //type: uint32
        ydk::YLeaf temp_delta; //type: uint32
        ydk::YLeaf temp_raw_data; //type: uint32
        ydk::YLeaf temp_sensor_value; //type: int32
        ydk::YLeaf temp_unit; //type: int32
        ydk::YLeaf temp_last_value; //type: uint32
        ydk::YLeaf temp_send_update; //type: boolean
        ydk::YLeaf temp_num_1sec_intervals; //type: int32
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::TempSensor


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::VoltSensor : public ydk::Entity
{
    public:
        VoltSensor();
        ~VoltSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf volt_sensor_id; //type: string
        ydk::YLeaf volt_dev_addr; //type: uint32
        ydk::YLeaf volt_poll_intvl; //type: uint32
        ydk::YLeaf volt_delta; //type: uint32
        ydk::YLeaf volt_raw_data; //type: uint32
        ydk::YLeaf volt_sensor_value; //type: int32
        ydk::YLeaf volt_unit; //type: int32
        ydk::YLeaf volt_last_value; //type: uint32
        ydk::YLeaf volt_send_update; //type: boolean
        ydk::YLeaf volt_num_1sec_intervals; //type: int32
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::VoltSensor


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::GearboxSummary : public ydk::Entity
{
    public:
        GearboxSummary();
        ~GearboxSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf inited; //type: boolean
        ydk::YLeaf gopaque; //type: string
        ydk::YLeaf gnodeid; //type: string
        ydk::YLeaf gslice; //type: uint32
        ydk::YLeaf gport; //type: uint32
        ydk::YLeaf gdev_addr; //type: uint8
        ydk::YLeaf gdev_type; //type: uint8
        ydk::YLeaf gctrace_err_hdl; //type: string
        ydk::YLeaf gctrace_evt_hdl; //type: string
        ydk::YLeaf gctrace_intr_hdl; //type: string
        ydk::YLeaf gnext; //type: string
        ydk::YLeaf gparent; //type: string
        ydk::YLeaf syslanelosmask; //type: string
        ydk::YLeaf linelanelosmask; //type: string
        ydk::YLeaf syslaneenablemask; //type: string
        ydk::YLeaf linelaneenablemask; //type: string
        ydk::YLeaf line_lane_cnt; //type: string
        ydk::YLeaf sys_lane_cnt; //type: string
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf dwnld_done; //type: boolean
        ydk::YLeaf chip_version; //type: string
        ydk::YLeaf reversion; //type: string
        ydk::YLeaf firmware_version; //type: string
        ydk::YLeaf ucode_checksum; //type: string
        ydk::YLeaf chip_modesel; //type: string
        ydk::YLeaf chip_ref_clocksel; //type: string
        ydk::YLeaf line_side_tx_pll; //type: string
        ydk::YLeaf line_tx_vco; //type: string
        ydk::YLeaf line_tx_vco_state; //type: string
        ydk::YLeaf line_side_rx_pll; //type: string
        ydk::YLeaf line_rx_vco; //type: string
        ydk::YLeaf line_rx_vco_state; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::GearboxSummary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2Summary : public ydk::Entity
{
    public:
        Gearbox2Summary();
        ~Gearbox2Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox2_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf inited; //type: boolean
        ydk::YLeaf gopaque; //type: string
        ydk::YLeaf gnodeid; //type: string
        ydk::YLeaf gslice; //type: uint32
        ydk::YLeaf gport; //type: uint32
        ydk::YLeaf gdev_addr; //type: uint8
        ydk::YLeaf gdev_type; //type: uint8
        ydk::YLeaf gctrace_err_hdl; //type: string
        ydk::YLeaf gctrace_evt_hdl; //type: string
        ydk::YLeaf gctrace_intr_hdl; //type: string
        ydk::YLeaf gparent; //type: string
        ydk::YLeaf line_lane_cnt; //type: string
        ydk::YLeaf sys_lane_cnt; //type: string
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf dwnld_done; //type: boolean
        ydk::YLeaf chip_version; //type: string
        ydk::YLeaf reversion; //type: string
        ydk::YLeaf firmware_version; //type: string
        ydk::YLeaf ucode_checksum; //type: string
        ydk::YLeaf chip_modesel; //type: string
        ydk::YLeaf chip_ref_clocksel; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2Summary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearboxSummary : public ydk::Entity
{
    public:
        DualGearboxSummary();
        ~DualGearboxSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dual_gearbox_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf inited; //type: boolean
        ydk::YLeaf gopaque; //type: string
        ydk::YLeaf gnodeid; //type: string
        ydk::YLeaf gslice; //type: uint32
        ydk::YLeaf gport; //type: uint32
        ydk::YLeaf gdev_addr; //type: uint8
        ydk::YLeaf gdev_type; //type: uint8
        ydk::YLeaf gctrace_err_hdl; //type: string
        ydk::YLeaf gctrace_evt_hdl; //type: string
        ydk::YLeaf gctrace_intr_hdl; //type: string
        ydk::YLeaf gnext; //type: string
        ydk::YLeaf gparent; //type: string
        ydk::YLeaf syslanelosmask; //type: string
        ydk::YLeaf linelanelosmask; //type: string
        ydk::YLeaf syslaneenablemask; //type: string
        ydk::YLeaf linelaneenablemask; //type: string
        ydk::YLeaf line_lane_cnt; //type: string
        ydk::YLeaf sys_lane_cnt; //type: string
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf dwnld_done; //type: boolean
        ydk::YLeaf chip_version; //type: string
        ydk::YLeaf reversion; //type: string
        ydk::YLeaf firmware_version; //type: string
        ydk::YLeaf ucode_checksum; //type: string
        ydk::YLeaf chip_modesel; //type: string
        ydk::YLeaf chip_ref_clocksel; //type: string
        ydk::YLeaf line_side_tx_pll; //type: string
        ydk::YLeaf line_tx_vco; //type: string
        ydk::YLeaf line_tx_vco_state; //type: string
        ydk::YLeaf line_side_rx_pll; //type: string
        ydk::YLeaf line_rx_vco; //type: string
        ydk::YLeaf line_rx_vco_state; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearboxSummary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox : public ydk::Entity
{
    public:
        Gearbox();
        ~Gearbox();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox_id; //type: string
        class GearboxLane; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox::GearboxLane

        ydk::YList gearbox_lane;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox::GearboxLane : public ydk::Entity
{
    public:
        GearboxLane();
        ~GearboxLane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox_lane_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf system_side_lanes; //type: string
        ydk::YLeaf cdr_lock_status_caui; //type: string
        ydk::YLeaf line_side_lanes; //type: string
        ydk::YLeaf lane_status_cdr; //type: string
        ydk::YLeaf lane_status_sig; //type: string
        ydk::YLeaf los_status; //type: string
        ydk::YLeaf system_side_loopback; //type: string
        ydk::YLeaf lane_side_loopback; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox::GearboxLane


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2 : public ydk::Entity
{
    public:
        Gearbox2();
        ~Gearbox2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox2_id; //type: string
        class Gearbox2Lane; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2::Gearbox2Lane

        ydk::YList gearbox2_lane;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2::Gearbox2Lane : public ydk::Entity
{
    public:
        Gearbox2Lane();
        ~Gearbox2Lane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox2_lane_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf system_side_lanes; //type: string
        ydk::YLeaf cdr_lock_status_caui; //type: string
        ydk::YLeaf line_side_lanes; //type: string
        ydk::YLeaf lane_status_cdr; //type: string
        ydk::YLeaf lane_status_sig; //type: string
        ydk::YLeaf los_status; //type: string
        ydk::YLeaf system_side_loopback; //type: string
        ydk::YLeaf lane_side_loopback; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2::Gearbox2Lane


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox : public ydk::Entity
{
    public:
        DualGearbox();
        ~DualGearbox();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dual_gearbox_id; //type: string
        class DualGearboxLane; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox::DualGearboxLane

        ydk::YList dual_gearbox_lane;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox::DualGearboxLane : public ydk::Entity
{
    public:
        DualGearboxLane();
        ~DualGearboxLane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dual_gearbox_lane_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf system_side_lanes; //type: string
        ydk::YLeaf cdr_lock_status_caui; //type: string
        ydk::YLeaf line_side_lanes; //type: string
        ydk::YLeaf lane_status_cdr; //type: string
        ydk::YLeaf lane_status_sig; //type: string
        ydk::YLeaf los_status; //type: string
        ydk::YLeaf system_side_loopback; //type: string
        ydk::YLeaf lane_side_loopback; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox::DualGearboxLane


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Cpak : public ydk::Entity
{
    public:
        Cpak();
        ~Cpak();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpak_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf csignature; //type: string
        ydk::YLeaf cready; //type: boolean
        ydk::YLeaf cpassive; //type: boolean
        ydk::YLeaf chw_ver_major; //type: uint8
        ydk::YLeaf chw_ver_minor; //type: uint8
        ydk::YLeaf copaque; //type: string
        ydk::YLeaf cnodeid; //type: string
        ydk::YLeaf cslice; //type: uint32
        ydk::YLeaf cport; //type: uint32
        ydk::YLeaf cprt_addr; //type: uint8
        ydk::YLeaf cdev_addr; //type: uint8
        ydk::YLeaf cdev_sel; //type: uint8
        ydk::YLeaf cupgrade_inprogress; //type: uint8
        ydk::YLeaf coptics_type; //type: string
        ydk::YLeaf cctrace_err_hdl; //type: string
        ydk::YLeaf cctrace_evt_hdl; //type: string
        ydk::YLeaf cnext; //type: string
        ydk::YLeaf cparent; //type: string
        ydk::YLeaf crunning_image; //type: string
        ydk::YLeaf ccommitted_image; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Cpak


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::ModenaSummary : public ydk::Entity
{
    public:
        ModenaSummary();
        ~ModenaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modena_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf mready; //type: boolean
        ydk::YLeaf mport_ctx_p; //type: string
        ydk::YLeaf mlevm; //type: string
        ydk::YLeaf mctrace_err_hdl; //type: string
        ydk::YLeaf mctrace_evt_hdl; //type: string
        ydk::YLeaf msignature; //type: string
        ydk::YLeaf mlpc_ready; //type: boolean
        ydk::YLeaf mopaque; //type: string
        ydk::YLeaf mnodeid; //type: string
        ydk::YLeaf mslice; //type: uint32
        ydk::YLeaf mport; //type: uint32
        ydk::YLeaf mdev_addr; //type: uint8
        ydk::YLeaf mrd_func; //type: string
        ydk::YLeaf mwr_func; //type: string
        ydk::YLeaf mnext; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::ModenaSummary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena : public ydk::Entity
{
    public:
        Modena();
        ~Modena();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modena_id; //type: string
        class ModenaLane; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena::ModenaLane

        ydk::YList modena_lane;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena::ModenaLane : public ydk::Entity
{
    public:
        ModenaLane();
        ~ModenaLane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modena_lane_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf oper_mode; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena::ModenaLane


class Controller::Zen : public ydk::Entity
{
    public:
        Zen();
        ~Zen();

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

        class ZenOper; //type: Controller::Zen::ZenOper
        class Trace; //type: Controller::Zen::Trace

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper> zen_oper;
        ydk::YList trace;
        
}; // Controller::Zen


class Controller::Zen::ZenOper : public ydk::Entity
{
    public:
        ZenOper();
        ~ZenOper();

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

        class ZenLocation; //type: Controller::Zen::ZenOper::ZenLocation

        ydk::YList zen_location;
        
}; // Controller::Zen::ZenOper


class Controller::Zen::ZenOper::ZenLocation : public ydk::Entity
{
    public:
        ZenLocation();
        ~ZenLocation();

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

        ydk::YLeaf zen_location; //type: string
        ydk::YLeaf zen_pci_base_address; //type: string
        ydk::YLeaf zen_pci_dev_vendor_id; //type: string
        ydk::YLeaf zen_pci_dev_device_id; //type: string
        ydk::YLeaf zen_hp_desc; //type: string
        ydk::YLeaf zen_handle; //type: string
        ydk::YLeaf zen_msi; //type: uint32
        ydk::YLeaf zen_irq; //type: string
        ydk::YLeaf zen_regs; //type: string
        ydk::YLeaf zen_trace; //type: string
        ydk::YLeaf zen_levm; //type: string
        ydk::YLeaf zen_sensor_poll_timer_tree; //type: string
        ydk::YLeaf zen_sensor_poll_timer; //type: string
        ydk::YLeaf zen_sensor_data; //type: string
        ydk::YLeaf zen_sim; //type: boolean
        ydk::YLeaf zen_debug; //type: boolean
        ydk::YLeaf zen_card_type; //type: uint32
        ydk::YLeaf zen_slot_num; //type: uint32
        ydk::YLeaf zen_pm_hdl; //type: string
        ydk::YLeaf zen_hdl; //type: string
        ydk::YLeaf zen_ccc_hdl; //type: string
        ydk::YLeaf zen_platform_local_hdl; //type: string
        ydk::YLeaf zen_cdui_srvr_hdl; //type: string
        class ZenTempSensorDefault; //type: Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault
        class ZenVoltSensorDefault; //type: Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault
        class ZenCurrSensorDefault; //type: Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault> zen_temp_sensor_default;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault> zen_volt_sensor_default;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault> zen_curr_sensor_default;
        
}; // Controller::Zen::ZenOper::ZenLocation


class Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault : public ydk::Entity
{
    public:
        ZenTempSensorDefault();
        ~ZenTempSensorDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenTempSensorData; //type: Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData> zen_temp_sensor_data;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault


class Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData : public ydk::Entity
{
    public:
        ZenTempSensorData();
        ~ZenTempSensorData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenTempSensor; //type: Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData::ZenTempSensor

        ydk::YList zen_temp_sensor;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData


class Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData::ZenTempSensor : public ydk::Entity
{
    public:
        ZenTempSensor();
        ~ZenTempSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf zen_temp_sensor; //type: string
        ydk::YLeaf zen_temp_sensor_id; //type: string
        ydk::YLeaf zen_temp_dev_addr; //type: uint32
        ydk::YLeaf zen_temp_poll_intvl; //type: uint32
        ydk::YLeaf zen_temp_delta; //type: uint32
        ydk::YLeaf zen_temp_raw_data; //type: uint32
        ydk::YLeaf zen_temp_sensor_value; //type: int32
        ydk::YLeaf zen_temp_unit; //type: int32
        ydk::YLeaf zen_temp_last_value; //type: uint32
        ydk::YLeaf zen_temp_send_update; //type: boolean
        ydk::YLeaf zen_temp_num_1sec_intervals; //type: int32

}; // Controller::Zen::ZenOper::ZenLocation::ZenTempSensorDefault::ZenTempSensorData::ZenTempSensor


class Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault : public ydk::Entity
{
    public:
        ZenVoltSensorDefault();
        ~ZenVoltSensorDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenVoltSensorData; //type: Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData> zen_volt_sensor_data;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault


class Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData : public ydk::Entity
{
    public:
        ZenVoltSensorData();
        ~ZenVoltSensorData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenVoltSensor; //type: Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData::ZenVoltSensor

        ydk::YList zen_volt_sensor;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData


class Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData::ZenVoltSensor : public ydk::Entity
{
    public:
        ZenVoltSensor();
        ~ZenVoltSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf zen_volt_sensor; //type: int32
        ydk::YLeaf zen_volt_sensor_id; //type: string
        ydk::YLeaf zen_volt_dev_addr; //type: uint32
        ydk::YLeaf zen_volt_poll_intvl; //type: uint32
        ydk::YLeaf zen_volt_delta; //type: uint32
        ydk::YLeaf zen_volt_raw_data; //type: uint32
        ydk::YLeaf zen_volt_sensor_value; //type: int32
        ydk::YLeaf zen_volt_unit; //type: int32
        ydk::YLeaf zen_volt_last_value; //type: uint32
        ydk::YLeaf zen_volt_send_update; //type: boolean
        ydk::YLeaf zen_volt_num_1sec_intervals; //type: int32

}; // Controller::Zen::ZenOper::ZenLocation::ZenVoltSensorDefault::ZenVoltSensorData::ZenVoltSensor


class Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault : public ydk::Entity
{
    public:
        ZenCurrSensorDefault();
        ~ZenCurrSensorDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenCurrSensorData; //type: Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData> zen_curr_sensor_data;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault


class Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData : public ydk::Entity
{
    public:
        ZenCurrSensorData();
        ~ZenCurrSensorData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ZenCurrSensor; //type: Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData::ZenCurrSensor

        ydk::YList zen_curr_sensor;
        
}; // Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData


class Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData::ZenCurrSensor : public ydk::Entity
{
    public:
        ZenCurrSensor();
        ~ZenCurrSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf zen_curr_sensor; //type: string
        ydk::YLeaf zen_curr_sensor_id; //type: string
        ydk::YLeaf zen_curr_dev_addr; //type: uint32
        ydk::YLeaf zen_curr_poll_intvl; //type: uint32
        ydk::YLeaf zen_curr_delta; //type: uint32
        ydk::YLeaf zen_curr_raw_data; //type: uint32
        ydk::YLeaf zen_curr_sensor_value; //type: int32
        ydk::YLeaf zen_curr_unit; //type: int32
        ydk::YLeaf zen_curr_last_value; //type: uint32
        ydk::YLeaf zen_curr_send_update; //type: boolean
        ydk::YLeaf zen_curr_num_1sec_intervals; //type: int32

}; // Controller::Zen::ZenOper::ZenLocation::ZenCurrSensorDefault::ZenCurrSensorData::ZenCurrSensor


class Controller::Zen::Trace : public ydk::Entity
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
        class Location; //type: Controller::Zen::Trace::Location

        ydk::YList location;
        
}; // Controller::Zen::Trace


class Controller::Zen::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::Zen::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Zen::Trace::Location


class Controller::Zen::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::Zen::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Zen::Trace::Location::AllOptions


class Controller::Zen::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::Zen::Trace::Location::AllOptions::TraceBlocks


class Controller::CccDriver : public ydk::Entity
{
    public:
        CccDriver();
        ~CccDriver();

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

        class Trace; //type: Controller::CccDriver::Trace
        class Bootflash; //type: Controller::CccDriver::Bootflash
        class Inventory; //type: Controller::CccDriver::Inventory
        class Power; //type: Controller::CccDriver::Power
        class ResetHistory; //type: Controller::CccDriver::ResetHistory
        class Register; //type: Controller::CccDriver::Register
        class Ejector; //type: Controller::CccDriver::Ejector
        class I2cDev; //type: Controller::CccDriver::I2cDev
        class Ethernet; //type: Controller::CccDriver::Ethernet
        class EventHistory; //type: Controller::CccDriver::EventHistory
        class OirHistory; //type: Controller::CccDriver::OirHistory
        class NotifHistory; //type: Controller::CccDriver::NotifHistory
        class Slave; //type: Controller::CccDriver::Slave
        class Action; //type: Controller::CccDriver::Action

        ydk::YList trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Bootflash> bootflash;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Inventory> inventory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Power> power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::ResetHistory> reset_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Register> register_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ejector> ejector;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::I2cDev> i2c_dev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::EventHistory> event_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::OirHistory> oir_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::NotifHistory> notif_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Slave> slave;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::CccDriver::Action> action;
        
}; // Controller::CccDriver


class Controller::CccDriver::Trace : public ydk::Entity
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
        class Location; //type: Controller::CccDriver::Trace::Location

        ydk::YList location;
        
}; // Controller::CccDriver::Trace


class Controller::CccDriver::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::CccDriver::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::CccDriver::Trace::Location


class Controller::CccDriver::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::CccDriver::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::CccDriver::Trace::Location::AllOptions


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_3_ */

