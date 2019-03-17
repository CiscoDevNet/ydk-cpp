#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_4_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_ncs55A1_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs55A1_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs55A1 {


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper::SfeTrace::SfeDriver> sfe_driver;
        
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


class Controller::FabricAction : public ydk::Entity
{
    public:
        FabricAction();
        ~FabricAction();

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

        class Fabric; //type: Controller::FabricAction::Fabric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::FabricAction::Fabric> fabric;
        
}; // Controller::FabricAction


class Controller::FabricAction::Fabric : public ydk::Entity
{
    public:
        Fabric();
        ~Fabric();

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

        class Ppu; //type: Controller::FabricAction::Fabric::Ppu

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::FabricAction::Fabric::Ppu> ppu;
        
}; // Controller::FabricAction::Fabric


class Controller::FabricAction::Fabric::Ppu : public ydk::Entity
{
    public:
        Ppu();
        ~Ppu();

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


}; // Controller::FabricAction::Fabric::Ppu


class Controller::CardMgr : public ydk::Entity
{
    public:
        CardMgr();
        ~CardMgr();

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

        class Trace; //type: Controller::CardMgr::Trace
        class Inventory; //type: Controller::CardMgr::Inventory
        class EventHistory; //type: Controller::CardMgr::EventHistory
        class NotifHistory; //type: Controller::CardMgr::NotifHistory
        class OirHistory; //type: Controller::CardMgr::OirHistory
        class Iofpga; //type: Controller::CardMgr::Iofpga
        class Bootloader; //type: Controller::CardMgr::Bootloader

        ydk::YList trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Inventory> inventory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::EventHistory> event_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::NotifHistory> notif_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::OirHistory> oir_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Iofpga> iofpga;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Bootloader> bootloader;
        
}; // Controller::CardMgr


class Controller::CardMgr::Trace : public ydk::Entity
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
        class Location; //type: Controller::CardMgr::Trace::Location

        ydk::YList location;
        
}; // Controller::CardMgr::Trace


class Controller::CardMgr::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::CardMgr::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::CardMgr::Trace::Location


class Controller::CardMgr::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::CardMgr::Trace::Location::AllOptions


class Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks


class Controller::CardMgr::Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

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

        class Summary; //type: Controller::CardMgr::Inventory::Summary
        class Detail; //type: Controller::CardMgr::Inventory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Inventory::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Inventory::Detail> detail;
        
}; // Controller::CardMgr::Inventory


class Controller::CardMgr::Inventory::Summary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class CardMgrInvSummary; //type: Controller::CardMgr::Inventory::Summary::CardMgrInvSummary

        ydk::YList card_mgr_inv_summary;
        
}; // Controller::CardMgr::Inventory::Summary


class Controller::CardMgr::Inventory::Summary::CardMgrInvSummary : public ydk::Entity
{
    public:
        CardMgrInvSummary();
        ~CardMgrInvSummary();

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

        ydk::YLeaf location; //type: string
        ydk::YLeaf card_mgr_inv_pid_string; //type: string
        ydk::YLeaf card_mgr_inv_slot_number; //type: uint32
        ydk::YLeaf card_mgr_inv_serial_number; //type: string
        ydk::YLeaf card_mgr_inv_hw_version; //type: string
        ydk::YLeaf card_mgr_inv_card_state; //type: string

}; // Controller::CardMgr::Inventory::Summary::CardMgrInvSummary


class Controller::CardMgr::Inventory::Detail : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class CardMgrInvDetail; //type: Controller::CardMgr::Inventory::Detail::CardMgrInvDetail

        ydk::YList card_mgr_inv_detail;
        
}; // Controller::CardMgr::Inventory::Detail


class Controller::CardMgr::Inventory::Detail::CardMgrInvDetail : public ydk::Entity
{
    public:
        CardMgrInvDetail();
        ~CardMgrInvDetail();

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

        ydk::YLeaf location; //type: string
        class CardMgrInvDetailList; //type: Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList> card_mgr_inv_detail_list;
        
}; // Controller::CardMgr::Inventory::Detail::CardMgrInvDetail


class Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList : public ydk::Entity
{
    public:
        CardMgrInvDetailList();
        ~CardMgrInvDetailList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_mgr_inv_detail_values; //type: list of  string

}; // Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList


class Controller::CardMgr::EventHistory : public ydk::Entity
{
    public:
        EventHistory();
        ~EventHistory();

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

        class Brief; //type: Controller::CardMgr::EventHistory::Brief
        class Detail; //type: Controller::CardMgr::EventHistory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::EventHistory::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::EventHistory::Detail> detail;
        
}; // Controller::CardMgr::EventHistory


class Controller::CardMgr::EventHistory::Brief : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::CardMgr::EventHistory::Brief::Location

        ydk::YList location;
        
}; // Controller::CardMgr::EventHistory::Brief


class Controller::CardMgr::EventHistory::Brief::Location : public ydk::Entity
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

        ydk::YLeaf location; //type: string
        class CardEventHistBrief; //type: Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief> card_event_hist_brief;
        
}; // Controller::CardMgr::EventHistory::Brief::Location


class Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief : public ydk::Entity
{
    public:
        CardEventHistBrief();
        ~CardEventHistBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_event_hist_brief_values; //type: list of  string

}; // Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief


class Controller::CardMgr::EventHistory::Detail : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::CardMgr::EventHistory::Detail::Location

        ydk::YList location;
        
}; // Controller::CardMgr::EventHistory::Detail


class Controller::CardMgr::EventHistory::Detail::Location : public ydk::Entity
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

        ydk::YLeaf location; //type: string
        class CardEventHistDetail; //type: Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail> card_event_hist_detail;
        
}; // Controller::CardMgr::EventHistory::Detail::Location


class Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail : public ydk::Entity
{
    public:
        CardEventHistDetail();
        ~CardEventHistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_event_hist_detail_values; //type: list of  string

}; // Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail


class Controller::CardMgr::NotifHistory : public ydk::Entity
{
    public:
        NotifHistory();
        ~NotifHistory();

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

        class Brief; //type: Controller::CardMgr::NotifHistory::Brief
        class Detail; //type: Controller::CardMgr::NotifHistory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::NotifHistory::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::NotifHistory::Detail> detail;
        
}; // Controller::CardMgr::NotifHistory


class Controller::CardMgr::NotifHistory::Brief : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::CardMgr::NotifHistory::Brief::Location

        ydk::YList location;
        
}; // Controller::CardMgr::NotifHistory::Brief


class Controller::CardMgr::NotifHistory::Brief::Location : public ydk::Entity
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

        ydk::YLeaf location; //type: string
        class CardNotifHistBrief; //type: Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief> card_notif_hist_brief;
        
}; // Controller::CardMgr::NotifHistory::Brief::Location


class Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief : public ydk::Entity
{
    public:
        CardNotifHistBrief();
        ~CardNotifHistBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_notif_hist_brief_values; //type: list of  string

}; // Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief


class Controller::CardMgr::NotifHistory::Detail : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::CardMgr::NotifHistory::Detail::Location

        ydk::YList location;
        
}; // Controller::CardMgr::NotifHistory::Detail


class Controller::CardMgr::NotifHistory::Detail::Location : public ydk::Entity
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

        ydk::YLeaf location; //type: string
        class CardNotifHistDetail; //type: Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail> card_notif_hist_detail;
        
}; // Controller::CardMgr::NotifHistory::Detail::Location


class Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail : public ydk::Entity
{
    public:
        CardNotifHistDetail();
        ~CardNotifHistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_notif_hist_detail_values; //type: list of  string

}; // Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail


class Controller::CardMgr::OirHistory : public ydk::Entity
{
    public:
        OirHistory();
        ~OirHistory();

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

        class Rack; //type: Controller::CardMgr::OirHistory::Rack

        ydk::YList rack;
        
}; // Controller::CardMgr::OirHistory


class Controller::CardMgr::OirHistory::Rack : public ydk::Entity
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

        ydk::YLeaf rack; //type: string
        class CardOirHist; //type: Controller::CardMgr::OirHistory::Rack::CardOirHist

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::OirHistory::Rack::CardOirHist> card_oir_hist;
        
}; // Controller::CardMgr::OirHistory::Rack


class Controller::CardMgr::OirHistory::Rack::CardOirHist : public ydk::Entity
{
    public:
        CardOirHist();
        ~CardOirHist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_oir_events; //type: list of  string

}; // Controller::CardMgr::OirHistory::Rack::CardOirHist


class Controller::CardMgr::Iofpga : public ydk::Entity
{
    public:
        Iofpga();
        ~Iofpga();

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

        class Register; //type: Controller::CardMgr::Iofpga::Register
        class Flash; //type: Controller::CardMgr::Iofpga::Flash

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Iofpga::Register> register_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Iofpga::Flash> flash;
        
}; // Controller::CardMgr::Iofpga


class Controller::CardMgr::Iofpga::Register : public ydk::Entity
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

        class Cpu; //type: Controller::CardMgr::Iofpga::Register::Cpu
        class Mb; //type: Controller::CardMgr::Iofpga::Register::Mb
        class Dc; //type: Controller::CardMgr::Iofpga::Register::Dc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Iofpga::Register::Cpu> cpu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Iofpga::Register::Mb> mb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Iofpga::Register::Dc> dc;
        
}; // Controller::CardMgr::Iofpga::Register


class Controller::CardMgr::Iofpga::Register::Cpu : public ydk::Entity
{
    public:
        Cpu();
        ~Cpu();

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

        class RegisterLocation; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation

        ydk::YList register_location;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation : public ydk::Entity
{
    public:
        RegisterLocation();
        ~RegisterLocation();

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

        ydk::YLeaf register_location; //type: string
        class IofpgaBlockNumber; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber
        class IofpgaOffset; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset
        class IofpgaAddress; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress

        ydk::YList iofpga_block_number;
        ydk::YList iofpga_offset;
        ydk::YList iofpga_address;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber : public ydk::Entity
{
    public:
        IofpgaBlockNumber();
        ~IofpgaBlockNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_block_num; //type: uint32
        ydk::YLeaf block_location; //type: string
        ydk::YLeaf iofpga_block_nm; //type: string
        class IofpgaRegisterNumber; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber

        ydk::YList iofpga_register_number;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber : public ydk::Entity
{
    public:
        IofpgaRegisterNumber();
        ~IofpgaRegisterNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf iofpga_register_name; //type: string
        class IofpgaData; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData

        ydk::YList iofpga_data;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData : public ydk::Entity
{
    public:
        IofpgaData();
        ~IofpgaData();

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
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset : public ydk::Entity
{
    public:
        IofpgaOffset();
        ~IofpgaOffset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_offset; //type: string
        class IofpgaRegOffsetData; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData

        ydk::YList iofpga_reg_offset_data;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData : public ydk::Entity
{
    public:
        IofpgaRegOffsetData();
        ~IofpgaRegOffsetData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_off_addr; //type: uint32
        ydk::YLeaf reg_off_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress : public ydk::Entity
{
    public:
        IofpgaAddress();
        ~IofpgaAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_hex_addr; //type: string
        ydk::YLeaf end_hex_addr; //type: string
        class IofpgaRegRangeAddrList; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList

        ydk::YList iofpga_reg_range_addr_list;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList : public ydk::Entity
{
    public:
        IofpgaRegRangeAddrList();
        ~IofpgaRegRangeAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_range_addr; //type: uint32
        class IofpgaRegData; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData

        ydk::YList iofpga_reg_data;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData : public ydk::Entity
{
    public:
        IofpgaRegData();
        ~IofpgaRegData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_addr; //type: uint32
        ydk::YLeaf reg_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData


class Controller::CardMgr::Iofpga::Register::Mb : public ydk::Entity
{
    public:
        Mb();
        ~Mb();

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

        class RegisterLocation; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation

        ydk::YList register_location;
        
}; // Controller::CardMgr::Iofpga::Register::Mb


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation : public ydk::Entity
{
    public:
        RegisterLocation();
        ~RegisterLocation();

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

        ydk::YLeaf register_location; //type: string
        class IofpgaBlockNumber; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber
        class IofpgaOffset; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset
        class IofpgaAddress; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress

        ydk::YList iofpga_block_number;
        ydk::YList iofpga_offset;
        ydk::YList iofpga_address;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber : public ydk::Entity
{
    public:
        IofpgaBlockNumber();
        ~IofpgaBlockNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_block_num; //type: uint32
        ydk::YLeaf block_location; //type: string
        ydk::YLeaf iofpga_block_nm; //type: string
        class IofpgaRegisterNumber; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber

        ydk::YList iofpga_register_number;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber : public ydk::Entity
{
    public:
        IofpgaRegisterNumber();
        ~IofpgaRegisterNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf iofpga_register_name; //type: string
        class IofpgaData; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData

        ydk::YList iofpga_data;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData : public ydk::Entity
{
    public:
        IofpgaData();
        ~IofpgaData();

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
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset : public ydk::Entity
{
    public:
        IofpgaOffset();
        ~IofpgaOffset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_offset; //type: string
        class IofpgaRegOffsetData; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData

        ydk::YList iofpga_reg_offset_data;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData : public ydk::Entity
{
    public:
        IofpgaRegOffsetData();
        ~IofpgaRegOffsetData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_off_addr; //type: uint32
        ydk::YLeaf reg_off_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress : public ydk::Entity
{
    public:
        IofpgaAddress();
        ~IofpgaAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_hex_addr; //type: string
        ydk::YLeaf end_hex_addr; //type: string
        class IofpgaRegRangeAddrList; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList

        ydk::YList iofpga_reg_range_addr_list;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList : public ydk::Entity
{
    public:
        IofpgaRegRangeAddrList();
        ~IofpgaRegRangeAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_range_addr; //type: uint32
        class IofpgaRegData; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData

        ydk::YList iofpga_reg_data;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData : public ydk::Entity
{
    public:
        IofpgaRegData();
        ~IofpgaRegData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_addr; //type: uint32
        ydk::YLeaf reg_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData


class Controller::CardMgr::Iofpga::Register::Dc : public ydk::Entity
{
    public:
        Dc();
        ~Dc();

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

        class RegisterLocation; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation

        ydk::YList register_location;
        
}; // Controller::CardMgr::Iofpga::Register::Dc


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation : public ydk::Entity
{
    public:
        RegisterLocation();
        ~RegisterLocation();

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

        ydk::YLeaf register_location; //type: string
        class IofpgaBlockNumber; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber
        class IofpgaOffset; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset
        class IofpgaAddress; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress

        ydk::YList iofpga_block_number;
        ydk::YList iofpga_offset;
        ydk::YList iofpga_address;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber : public ydk::Entity
{
    public:
        IofpgaBlockNumber();
        ~IofpgaBlockNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_block_num; //type: uint32
        ydk::YLeaf block_location; //type: string
        ydk::YLeaf iofpga_block_nm; //type: string
        class IofpgaRegisterNumber; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber

        ydk::YList iofpga_register_number;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber : public ydk::Entity
{
    public:
        IofpgaRegisterNumber();
        ~IofpgaRegisterNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf iofpga_register_name; //type: string
        class IofpgaData; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData

        ydk::YList iofpga_data;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData : public ydk::Entity
{
    public:
        IofpgaData();
        ~IofpgaData();

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
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset : public ydk::Entity
{
    public:
        IofpgaOffset();
        ~IofpgaOffset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_offset; //type: string
        class IofpgaRegOffsetData; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData

        ydk::YList iofpga_reg_offset_data;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData : public ydk::Entity
{
    public:
        IofpgaRegOffsetData();
        ~IofpgaRegOffsetData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_off_addr; //type: uint32
        ydk::YLeaf reg_off_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress : public ydk::Entity
{
    public:
        IofpgaAddress();
        ~IofpgaAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_hex_addr; //type: string
        ydk::YLeaf end_hex_addr; //type: string
        class IofpgaRegRangeAddrList; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList

        ydk::YList iofpga_reg_range_addr_list;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList : public ydk::Entity
{
    public:
        IofpgaRegRangeAddrList();
        ~IofpgaRegRangeAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_range_addr; //type: uint32
        class IofpgaRegData; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData

        ydk::YList iofpga_reg_data;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData : public ydk::Entity
{
    public:
        IofpgaRegData();
        ~IofpgaRegData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_addr; //type: uint32
        ydk::YLeaf reg_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData


class Controller::CardMgr::Iofpga::Flash : public ydk::Entity
{
    public:
        Flash();
        ~Flash();

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

        class Info; //type: Controller::CardMgr::Iofpga::Flash::Info
        class Status; //type: Controller::CardMgr::Iofpga::Flash::Status

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Iofpga::Flash::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Iofpga::Flash::Status> status;
        
}; // Controller::CardMgr::Iofpga::Flash


class Controller::CardMgr::Iofpga::Flash::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

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

        class FlashLocation; //type: Controller::CardMgr::Iofpga::Flash::Info::FlashLocation

        ydk::YList flash_location;
        
}; // Controller::CardMgr::Iofpga::Flash::Info


class Controller::CardMgr::Iofpga::Flash::Info::FlashLocation : public ydk::Entity
{
    public:
        FlashLocation();
        ~FlashLocation();

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

        ydk::YLeaf flash_location; //type: string
        class IofpgaFlashInfo; //type: Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo> iofpga_flash_info;
        
}; // Controller::CardMgr::Iofpga::Flash::Info::FlashLocation


class Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo : public ydk::Entity
{
    public:
        IofpgaFlashInfo();
        ~IofpgaFlashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList iofpga_flash_info_values; //type: list of  string

}; // Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo


class Controller::CardMgr::Iofpga::Flash::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        class FlashLocation; //type: Controller::CardMgr::Iofpga::Flash::Status::FlashLocation

        ydk::YList flash_location;
        
}; // Controller::CardMgr::Iofpga::Flash::Status


class Controller::CardMgr::Iofpga::Flash::Status::FlashLocation : public ydk::Entity
{
    public:
        FlashLocation();
        ~FlashLocation();

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

        ydk::YLeaf flash_location; //type: string
        class IofpgaFlashStatus; //type: Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus> iofpga_flash_status;
        
}; // Controller::CardMgr::Iofpga::Flash::Status::FlashLocation


class Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus : public ydk::Entity
{
    public:
        IofpgaFlashStatus();
        ~IofpgaFlashStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList iofpga_flash_status_values; //type: list of  string

}; // Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus


class Controller::CardMgr::Bootloader : public ydk::Entity
{
    public:
        Bootloader();
        ~Bootloader();

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

        class Flash; //type: Controller::CardMgr::Bootloader::Flash

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Bootloader::Flash> flash;
        
}; // Controller::CardMgr::Bootloader


class Controller::CardMgr::Bootloader::Flash : public ydk::Entity
{
    public:
        Flash();
        ~Flash();

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

        class Info; //type: Controller::CardMgr::Bootloader::Flash::Info
        class Status; //type: Controller::CardMgr::Bootloader::Flash::Status

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Bootloader::Flash::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Bootloader::Flash::Status> status;
        
}; // Controller::CardMgr::Bootloader::Flash


class Controller::CardMgr::Bootloader::Flash::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

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

        class FlashLocation; //type: Controller::CardMgr::Bootloader::Flash::Info::FlashLocation

        ydk::YList flash_location;
        
}; // Controller::CardMgr::Bootloader::Flash::Info


class Controller::CardMgr::Bootloader::Flash::Info::FlashLocation : public ydk::Entity
{
    public:
        FlashLocation();
        ~FlashLocation();

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

        ydk::YLeaf flash_location; //type: string
        class BootldrFlashInfo; //type: Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo> bootldr_flash_info;
        
}; // Controller::CardMgr::Bootloader::Flash::Info::FlashLocation


class Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo : public ydk::Entity
{
    public:
        BootldrFlashInfo();
        ~BootldrFlashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList bootldr_flash_info_values; //type: list of  string

}; // Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo


class Controller::CardMgr::Bootloader::Flash::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        class FlashLocation; //type: Controller::CardMgr::Bootloader::Flash::Status::FlashLocation

        ydk::YList flash_location;
        
}; // Controller::CardMgr::Bootloader::Flash::Status


class Controller::CardMgr::Bootloader::Flash::Status::FlashLocation : public ydk::Entity
{
    public:
        FlashLocation();
        ~FlashLocation();

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

        ydk::YLeaf flash_location; //type: string
        class BootldrFlashStatus; //type: Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus> bootldr_flash_status;
        
}; // Controller::CardMgr::Bootloader::Flash::Status::FlashLocation


class Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus : public ydk::Entity
{
    public:
        BootldrFlashStatus();
        ~BootldrFlashStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList bootldr_flash_status_values; //type: list of  string

}; // Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_4_ */

