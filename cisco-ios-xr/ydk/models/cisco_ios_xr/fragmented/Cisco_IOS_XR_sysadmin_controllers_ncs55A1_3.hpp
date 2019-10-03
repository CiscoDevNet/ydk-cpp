#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_3_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_ncs55A1_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs55A1_1.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs55A1_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs55A1 {


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail
        class State; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State
        class Statistics; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics> statistics;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State : public ydk::Entity
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

        class Up; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up
        class Down; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down
        class Mismatch; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up> up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down> down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch> mismatch;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx


class Controller::Fabric::Oper::Sfe : public ydk::Entity
{
    public:
        Sfe();
        ~Sfe();

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

        class Rack; //type: Controller::Fabric::Oper::Sfe::Rack

        ydk::YList rack;
        
}; // Controller::Fabric::Oper::Sfe


class Controller::Fabric::Oper::Sfe::Rack : public ydk::Entity
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
        class AsicStages; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages

        ydk::YList asic_stages;
        
}; // Controller::Fabric::Oper::Sfe::Rack


class Controller::Fabric::Oper::Sfe::Rack::AsicStages : public ydk::Entity
{
    public:
        AsicStages();
        ~AsicStages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_stage_name; //type: string
        class Location; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location
        class AsicList; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList
        class Brief; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief
        class Detail; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail

        ydk::YList location;
        ydk::YList asic_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail> detail;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location : public ydk::Entity
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
        class AsicList; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList
        class Brief; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief
        class Detail; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail

        ydk::YList asic_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail> detail;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_idx; //type: int64
        ydk::YLeaf asic_loc_str; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf down_flags; //type: string
        ydk::YLeaf fab_group; //type: string
        class History; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief : public ydk::Entity
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

        class AsicList; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList

        ydk::YList asic_list;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_idx; //type: int64
        ydk::YLeaf asic_loc_str; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf down_flags; //type: string
        ydk::YLeaf fab_group; //type: string
        class History; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail : public ydk::Entity
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

        class AsicList; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList

        ydk::YList asic_list;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_idx; //type: int64
        ydk::YLeaf asic_loc_str; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf down_flags; //type: string
        ydk::YLeaf fab_group; //type: string
        class History; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_idx; //type: int64
        ydk::YLeaf asic_loc_str; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf down_flags; //type: string
        ydk::YLeaf fab_group; //type: string
        class History; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief : public ydk::Entity
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

        class AsicList; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList

        ydk::YList asic_list;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_idx; //type: int64
        ydk::YLeaf asic_loc_str; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf down_flags; //type: string
        ydk::YLeaf fab_group; //type: string
        class History; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail : public ydk::Entity
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

        class AsicList; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList

        ydk::YList asic_list;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_idx; //type: int64
        ydk::YLeaf asic_loc_str; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf down_flags; //type: string
        ydk::YLeaf fab_group; //type: string
        class History; //type: Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList


class Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History


class Controller::Fabric::Oper::FsdbPla : public ydk::Entity
{
    public:
        FsdbPla();
        ~FsdbPla();

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

        class Rack; //type: Controller::Fabric::Oper::FsdbPla::Rack

        ydk::YList rack;
        
}; // Controller::Fabric::Oper::FsdbPla


class Controller::Fabric::Oper::FsdbPla::Rack : public ydk::Entity
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
        class AsicStages; //type: Controller::Fabric::Oper::FsdbPla::Rack::AsicStages

        ydk::YList asic_stages;
        
}; // Controller::Fabric::Oper::FsdbPla::Rack


class Controller::Fabric::Oper::FsdbPla::Rack::AsicStages : public ydk::Entity
{
    public:
        AsicStages();
        ~AsicStages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_stage_idx; //type: string
        ydk::YLeaf asic_stage_name; //type: string
        ydk::YLeaf rack_number; //type: string
        ydk::YLeaf plane_number; //type: int32
        class Fabids; //type: Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids
        class DownFabids; //type: Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids
        class Destination; //type: Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination

        ydk::YList fabids;
        ydk::YList down_fabids;
        ydk::YList destination;
        
}; // Controller::Fabric::Oper::FsdbPla::Rack::AsicStages


class Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids : public ydk::Entity
{
    public:
        Fabids();
        ~Fabids();

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
        ydk::YLeaf fabid_address; //type: string
        ydk::YLeaf plane_num; //type: int32
        ydk::YLeaf plane_0_mask; //type: string
        ydk::YLeaf plane_1_mask; //type: string
        ydk::YLeaf plane_2_mask; //type: string
        ydk::YLeaf plane_3_mask; //type: string
        ydk::YLeaf plane_4_mask; //type: string
        ydk::YLeaf plane_5_mask; //type: string
        ydk::YLeaf min_links_per_asic; //type: int32
        ydk::YLeaf max_links_per_asic; //type: int32
        ydk::YLeaf total_links; //type: int32
        ydk::YLeaf min_up_links_per_asic; //type: int32
        ydk::YLeaf max_up_links_per_asic; //type: int32
        ydk::YLeaf total_up_links; //type: int32

}; // Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids


class Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids : public ydk::Entity
{
    public:
        DownFabids();
        ~DownFabids();

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
        ydk::YLeaf fabid_address; //type: string
        ydk::YLeaf fabid_status; //type: string

}; // Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids


class Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf amba_id; //type: string
        class Planes; //type: Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes

        ydk::YList planes;
        
}; // Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination


class Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes : public ydk::Entity
{
    public:
        Planes();
        ~Planes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plane_idx; //type: int32
        ydk::YLeaf plane_num; //type: int32
        ydk::YLeaf fabid_name; //type: string
        ydk::YLeaf show_fabid; //type: boolean
        ydk::YLeaf asic_stage; //type: string
        class Cards; //type: Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards

        ydk::YList cards;
        
}; // Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes


class Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards : public ydk::Entity
{
    public:
        Cards();
        ~Cards();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_idx; //type: int32
        class Asics; //type: Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics

        ydk::YList asics;
        
}; // Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards


class Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics : public ydk::Entity
{
    public:
        Asics();
        ~Asics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_idx; //type: int32
        ydk::YLeaf asic_rsa; //type: string
        ydk::YLeaf reachability_mask; //type: string
        ydk::YLeaf linkup_mask; //type: string
        ydk::YLeaf all_reach_mask; //type: string
        ydk::YLeaf total_links; //type: int32
        ydk::YLeaf total_up_links; //type: int32
        ydk::YLeaf total_all_reach_links; //type: int32
        ydk::YLeaf asic_stage_name; //type: string

}; // Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics


class Controller::Fabric::Oper::FsdbSrvr : public ydk::Entity
{
    public:
        FsdbSrvr();
        ~FsdbSrvr();

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

        class FsdbServer; //type: Controller::Fabric::Oper::FsdbSrvr::FsdbServer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbSrvr::FsdbServer> fsdb_server;
        
}; // Controller::Fabric::Oper::FsdbSrvr


class Controller::Fabric::Oper::FsdbSrvr::FsdbServer : public ydk::Entity
{
    public:
        FsdbServer();
        ~FsdbServer();

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

        class Trace; //type: Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace

        ydk::YList trace;
        
}; // Controller::Fabric::Oper::FsdbSrvr::FsdbServer


class Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace : public ydk::Entity
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
        class Location; //type: Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location

        ydk::YList location;
        
}; // Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace


class Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location


class Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions


class Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks


class Controller::SfeOper : public ydk::Entity
{
    public:
        SfeOper();
        ~SfeOper();

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

        class Sfe; //type: Controller::SfeOper::Sfe
        class SfeTrace; //type: Controller::SfeOper::SfeTrace

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe> sfe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::SfeTrace> sfe_trace;
        
}; // Controller::SfeOper


class Controller::SfeOper::Sfe : public ydk::Entity
{
    public:
        Sfe();
        ~Sfe();

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

        class Driver; //type: Controller::SfeOper::Sfe::Driver
        class Statistics; //type: Controller::SfeOper::Sfe::Statistics
        class LinkInfo; //type: Controller::SfeOper::Sfe::LinkInfo
        class Diagshell; //type: Controller::SfeOper::Sfe::Diagshell
        class Register; //type: Controller::SfeOper::Sfe::Register
        class DumpFile; //type: Controller::SfeOper::Sfe::DumpFile
        class Parse; //type: Controller::SfeOper::Sfe::Parse

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::Driver> driver;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo> link_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::Diagshell> diagshell;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::Register> register_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::DumpFile> dump_file;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::Parse> parse;
        
}; // Controller::SfeOper::Sfe


class Controller::SfeOper::Sfe::Driver : public ydk::Entity
{
    public:
        Driver();
        ~Driver();

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

        class Location; //type: Controller::SfeOper::Sfe::Driver::Location

        ydk::YList location;
        
}; // Controller::SfeOper::Sfe::Driver


class Controller::SfeOper::Sfe::Driver::Location : public ydk::Entity
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
        class DrvrInfo; //type: Controller::SfeOper::Sfe::Driver::Location::DrvrInfo

        ydk::YList drvr_info;
        
}; // Controller::SfeOper::Sfe::Driver::Location


class Controller::SfeOper::Sfe::Driver::Location::DrvrInfo : public ydk::Entity
{
    public:
        DrvrInfo();
        ~DrvrInfo();

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
        ydk::YLeaf drv_version; //type: uint32
        ydk::YLeaf coeff_major_rev; //type: uint32
        ydk::YLeaf coeff_minor_rev; //type: uint32
        ydk::YLeaf func_role; //type: string
        ydk::YLeaf issu_role; //type: string
        ydk::YLeaf rack_name; //type: string
        ydk::YLeaf rack_type; //type: string
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf card_avail_mask; //type: uint32
        ydk::YLeaf asic_avail_mask; //type: uint64
        ydk::YLeaf exp_asic_avail_mask; //type: uint64
        ydk::YLeaf ucmc_ratio; //type: uint32
        ydk::YLeaf pm_conn_active; //type: boolean
        ydk::YLeaf platform_local_conn_active; //type: boolean
        ydk::YLeaf fsdb_conn_active; //type: boolean
        ydk::YLeaf fgid_conn_active; //type: boolean
        ydk::YLeaf cm_conn_active; //type: boolean
        ydk::YLeaf ccc_conn_active; //type: boolean
        ydk::YLeaf issu_mgr_conn_active; //type: boolean
        ydk::YLeaf peer_sfe_conn_active; //type: boolean
        ydk::YLeaf cxp_conn_active; //type: boolean
        ydk::YLeaf pm_reg_active; //type: boolean
        ydk::YLeaf platform_local_reg_active; //type: boolean
        ydk::YLeaf fsdb_reg_active; //type: boolean
        ydk::YLeaf fgid_reg_active; //type: boolean
        ydk::YLeaf cm_reg_active; //type: boolean
        ydk::YLeaf issu_mgr_reg_active; //type: boolean
        ydk::YLeaf peer_sfe_reg_active; //type: boolean
        ydk::YLeaf cxp_reg_active; //type: boolean
        ydk::YLeaf num_pm_conn_reqs; //type: uint8
        ydk::YLeaf num_platform_local_conn_reqs; //type: uint8
        ydk::YLeaf num_fsdb_conn_reqs; //type: uint8
        ydk::YLeaf num_fgid_conn_reqs; //type: uint8
        ydk::YLeaf num_fstats_conn_reqs; //type: uint8
        ydk::YLeaf num_cm_conn_reqs; //type: uint8
        ydk::YLeaf num_ccc_conn_reqs; //type: uint8
        ydk::YLeaf num_issu_mgr_conn_reqs; //type: uint8
        ydk::YLeaf num_peer_sfe_conn_reqs; //type: uint8
        ydk::YLeaf num_cxp_conn_reqs; //type: uint8
        ydk::YLeaf is_gaspp_registered; //type: boolean
        ydk::YLeaf is_cih_registered; //type: boolean
        ydk::YLeaf startup_time; //type: string
        class AsicList; //type: Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList

        ydk::YList asic_list;
        
}; // Controller::SfeOper::Sfe::Driver::Location::DrvrInfo


class Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_idx; //type: uint32
        ydk::YLeaf asic_instance; //type: string
        ydk::YLeaf card_present; //type: string
        ydk::YLeaf card_powered; //type: string
        ydk::YLeaf hotplug_event; //type: uint32
        ydk::YLeaf asic_type; //type: string
        ydk::YLeaf asic_cardname; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf fab_plane; //type: string
        ydk::YLeaf fab_group; //type: string
        ydk::YLeaf fgid_download; //type: string
        ydk::YLeaf asic_state; //type: string
        ydk::YLeaf asic_disconnect_signal; //type: string
        ydk::YLeaf last_init_cause; //type: string
        ydk::YLeaf num_pon_resets; //type: uint32
        ydk::YLeaf num_hard_resets; //type: uint32

}; // Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList


class Controller::SfeOper::Sfe::Statistics : public ydk::Entity
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

        class Location; //type: Controller::SfeOper::Sfe::Statistics::Location

        ydk::YList location;
        
}; // Controller::SfeOper::Sfe::Statistics


class Controller::SfeOper::Sfe::Statistics::Location : public ydk::Entity
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
        class AsicTypes; //type: Controller::SfeOper::Sfe::Statistics::Location::AsicTypes

        ydk::YList asic_types;
        
}; // Controller::SfeOper::Sfe::Statistics::Location


class Controller::SfeOper::Sfe::Statistics::Location::AsicTypes : public ydk::Entity
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

        ydk::YLeaf asicname; //type: string
        class Block; //type: Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block

        ydk::YList block;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::AsicTypes


class Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block : public ydk::Entity
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
        class Instance; //type: Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance

        ydk::YList instance;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo> topo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap> flap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats> stats;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo> topo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap> flap;
        
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
        ydk::YLeaf fsm_state; //type: string
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
        ydk::YLeaf fsm_state; //type: string
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
        ydk::YLeaf fsm_state; //type: string
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
        ydk::YLeaf fsm_state; //type: string
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data> data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl> ctrl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All> all;
        
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
        ydk::YLeaf fsm_state; //type: string
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
        ydk::YLeaf fsm_state; //type: string
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
        ydk::YLeaf fsm_state; //type: string
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail> detail;
        ydk::YList instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats> stats;
        
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
        ydk::YLeaf fsm_state; //type: string
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
        ydk::YLeaf fsm_state; //type: string
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data> data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl> ctrl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All> all;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_3_ */

