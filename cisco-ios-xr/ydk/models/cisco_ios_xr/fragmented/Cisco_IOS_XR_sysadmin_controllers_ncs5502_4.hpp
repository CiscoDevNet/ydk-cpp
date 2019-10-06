#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5502_4_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5502_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_ncs5502_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5502_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs5502 {


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::SfeOper::SfeTrace::SfeDriver> sfe_driver;
        
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


class Controller::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

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

        class Oper; //type: Controller::Switch::Oper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper> oper;
        
}; // Controller::Switch


class Controller::Switch::Oper : public ydk::Entity
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

        class Reachable; //type: Controller::Switch::Oper::Reachable
        class Summary; //type: Controller::Switch::Oper::Summary
        class Statistics; //type: Controller::Switch::Oper::Statistics
        class Mac; //type: Controller::Switch::Oper::Mac
        class Bridge; //type: Controller::Switch::Oper::Bridge
        class Fdb; //type: Controller::Switch::Oper::Fdb
        class Vlan; //type: Controller::Switch::Oper::Vlan
        class Trace; //type: Controller::Switch::Oper::Trace
        class MgmtAgent; //type: Controller::Switch::Oper::MgmtAgent
        class PortState; //type: Controller::Switch::Oper::PortState
        class Trunk; //type: Controller::Switch::Oper::Trunk

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Reachable> reachable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Mac> mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Bridge> bridge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb> fdb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Trace> trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::MgmtAgent> mgmt_agent;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::PortState> port_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Trunk> trunk;
        
}; // Controller::Switch::Oper


class Controller::Switch::Oper::Reachable : public ydk::Entity
{
    public:
        Reachable();
        ~Reachable();

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

        class Location; //type: Controller::Switch::Oper::Reachable::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Reachable


class Controller::Switch::Oper::Reachable::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum

}; // Controller::Switch::Oper::Reachable::Location


class Controller::Switch::Oper::Summary : public ydk::Entity
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

        class Location; //type: Controller::Switch::Oper::Summary::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Summary


class Controller::Switch::Oper::Summary::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class PortIter; //type: Controller::Switch::Oper::Summary::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Summary::Location


class Controller::Switch::Oper::Summary::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf admin_state; //type: EsdmaSwitchPortState
        ydk::YLeaf port_speed; //type: string
        ydk::YLeaf protocol_state; //type: MlapStateEnum
        ydk::YLeaf forwarding; //type: SwitchForwardingState
        ydk::YLeaf connects_to; //type: string

}; // Controller::Switch::Oper::Summary::Location::PortIter


class Controller::Switch::Oper::Statistics : public ydk::Entity
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

        class SummaryStatistics; //type: Controller::Switch::Oper::Statistics::SummaryStatistics
        class Detail; //type: Controller::Switch::Oper::Statistics::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Statistics::SummaryStatistics> summary_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Statistics::Detail> detail;
        
}; // Controller::Switch::Oper::Statistics


class Controller::Switch::Oper::Statistics::SummaryStatistics : public ydk::Entity
{
    public:
        SummaryStatistics();
        ~SummaryStatistics();

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

        class Location; //type: Controller::Switch::Oper::Statistics::SummaryStatistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Statistics::SummaryStatistics


class Controller::Switch::Oper::Statistics::SummaryStatistics::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class PortIter; //type: Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Statistics::SummaryStatistics::Location


class Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf state_changes; //type: uint32
        ydk::YLeaf sw_sum_tx_packets; //type: uint64
        ydk::YLeaf sw_sum_rx_packets; //type: uint64
        ydk::YLeaf sw_sum_tx_drops_errors; //type: uint64
        ydk::YLeaf sw_sum_rx_drops_errors; //type: uint64
        ydk::YLeaf connects_to; //type: string

}; // Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter


class Controller::Switch::Oper::Statistics::Detail : public ydk::Entity
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

        class Location; //type: Controller::Switch::Oper::Statistics::Detail::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Statistics::Detail


class Controller::Switch::Oper::Statistics::Detail::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Statistics::Detail::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Statistics::Detail::Location


class Controller::Switch::Oper::Statistics::Detail::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf port_speed; //type: string
        ydk::YLeaf connects_to; //type: string
        class Counters; //type: Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters> counters;
        
}; // Controller::Switch::Oper::Statistics::Detail::Location::PortIter


class Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sw_det_rx_ucast_packets; //type: uint64
        ydk::YLeaf sw_det_rx_mcast_packets; //type: uint64
        ydk::YLeaf sw_det_rx_bcast_packets; //type: uint64
        ydk::YLeaf sw_det_rx_flow_control; //type: uint64
        ydk::YLeaf sw_det_rx_good_octets; //type: uint64
        ydk::YLeaf sw_det_rx_bad_octets; //type: uint64
        ydk::YLeaf sw_det_rx_fifo_overrun; //type: uint64
        ydk::YLeaf sw_det_rx_undersize; //type: uint64
        ydk::YLeaf sw_det_rx_fragments; //type: uint64
        ydk::YLeaf sw_det_rx_oversize; //type: uint64
        ydk::YLeaf sw_det_rx_jabber; //type: uint64
        ydk::YLeaf sw_det_rx_errors; //type: uint64
        ydk::YLeaf sw_det_rx_bad_crc; //type: uint64
        ydk::YLeaf sw_det_rx_collisions; //type: uint64
        ydk::YLeaf sw_det_rx_policing_drops; //type: uint64
        ydk::YLeaf sw_det_tx_ucast_packets; //type: uint64
        ydk::YLeaf sw_det_tx_mcast_packets; //type: uint64
        ydk::YLeaf sw_det_tx_bcast_packets; //type: uint64
        ydk::YLeaf sw_det_tx_flow_control; //type: uint64
        ydk::YLeaf sw_det_tx_good_octets; //type: uint64
        ydk::YLeaf sw_det_tx_deferred; //type: uint64
        ydk::YLeaf sw_det_tx_fifo_unrun; //type: uint64
        ydk::YLeaf sw_det_tx_mult_collision; //type: uint64
        ydk::YLeaf sw_det_tx_excess_collision; //type: uint64
        ydk::YLeaf sw_det_tx_late_collisions; //type: uint64
        ydk::YLeaf sw_det_tx_policing_drops; //type: uint64
        ydk::YLeaf sw_det_txq_drops; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_64; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_65_127; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_128_255; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_256_511; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_512_1023; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_1024_max; //type: uint64

}; // Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters


class Controller::Switch::Oper::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        class MacStatistics; //type: Controller::Switch::Oper::Mac::MacStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Mac::MacStatistics> mac_statistics;
        
}; // Controller::Switch::Oper::Mac


class Controller::Switch::Oper::Mac::MacStatistics : public ydk::Entity
{
    public:
        MacStatistics();
        ~MacStatistics();

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

        class Location; //type: Controller::Switch::Oper::Mac::MacStatistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Mac::MacStatistics


class Controller::Switch::Oper::Mac::MacStatistics::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Mac::MacStatistics::Location


class Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class MacEntry; //type: Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry

        ydk::YList mac_entry;
        
}; // Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter


class Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry : public ydk::Entity
{
    public:
        MacEntry();
        ~MacEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf base_reg; //type: string
        ydk::YLeaf desc; //type: string
        ydk::YLeaf value_; //type: string

}; // Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry


class Controller::Switch::Oper::Bridge : public ydk::Entity
{
    public:
        Bridge();
        ~Bridge();

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

        class Statistics; //type: Controller::Switch::Oper::Bridge::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Bridge::Statistics> statistics;
        
}; // Controller::Switch::Oper::Bridge


class Controller::Switch::Oper::Bridge::Statistics : public ydk::Entity
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

        class Location; //type: Controller::Switch::Oper::Bridge::Statistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Bridge::Statistics


class Controller::Switch::Oper::Bridge::Statistics::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class IngressSetId; //type: Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId
        class EgressSetId; //type: Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId

        ydk::YList ingress_set_id;
        ydk::YList egress_set_id;
        
}; // Controller::Switch::Oper::Bridge::Statistics::Location


class Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId : public ydk::Entity
{
    public:
        IngressSetId();
        ~IngressSetId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ingress_set; //type: uint32
        ydk::YLeaf ingress_set_name; //type: string
        ydk::YLeaf ingress_frames; //type: uint64
        ydk::YLeaf ingress_vlan_discards; //type: uint64
        ydk::YLeaf ingress_security_discards; //type: uint64
        ydk::YLeaf ingress_other_discards; //type: uint64

}; // Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId


class Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId : public ydk::Entity
{
    public:
        EgressSetId();
        ~EgressSetId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf egress_set; //type: uint32
        ydk::YLeaf egress_set_name; //type: string
        ydk::YLeaf egress_ucast_frames; //type: uint64
        ydk::YLeaf egress_mcast_frames; //type: uint64
        ydk::YLeaf egress_bcast_frames; //type: uint64
        ydk::YLeaf egress_discarded_frames; //type: uint64
        ydk::YLeaf egress_txq_congestion; //type: uint64
        ydk::YLeaf egress_ctrl_packets; //type: uint64
        ydk::YLeaf egress_other_drops; //type: uint64

}; // Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId


class Controller::Switch::Oper::Fdb : public ydk::Entity
{
    public:
        Fdb();
        ~Fdb();

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

        class Vlan; //type: Controller::Switch::Oper::Fdb::Vlan
        class Mac; //type: Controller::Switch::Oper::Fdb::Mac
        class Port; //type: Controller::Switch::Oper::Fdb::Port
        class Statistics; //type: Controller::Switch::Oper::Fdb::Statistics
        class SwitchFdbCommon; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Mac> mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::SwitchFdbCommon> switch_fdb_common;
        
}; // Controller::Switch::Oper::Fdb


class Controller::Switch::Oper::Fdb::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        class VlanIter; //type: Controller::Switch::Oper::Fdb::Vlan::VlanIter

        ydk::YList vlan_iter;
        
}; // Controller::Switch::Oper::Fdb::Vlan


class Controller::Switch::Oper::Fdb::Vlan::VlanIter : public ydk::Entity
{
    public:
        VlanIter();
        ~VlanIter();

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

        ydk::YLeaf vlan; //type: uint16
        class SwitchFdbCommon; //type: Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon> switch_fdb_common;
        
}; // Controller::Switch::Oper::Fdb::Vlan::VlanIter


class Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon : public ydk::Entity
{
    public:
        SwitchFdbCommon();
        ~SwitchFdbCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon


class Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf num_entries; //type: uint32
        ydk::YLeaf has_trunk_entry; //type: uint8
        ydk::YLeaf trunk_entry_message; //type: string
        class FdbBlock; //type: Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock> fdb_block;
        
}; // Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location


class Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock : public ydk::Entity
{
    public:
        FdbBlock();
        ~FdbBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FdbEntry; //type: Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry

        ydk::YList fdb_entry;
        
}; // Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock


class Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry : public ydk::Entity
{
    public:
        FdbEntry();
        ~FdbEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_index; //type: uint32
        ydk::YLeaf fdb_mac_addr; //type: string
        ydk::YLeaf fdb_vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::fdb_vlan)
        ydk::YLeaf fdb_vlan_hex;
        ydk::YLeaf fdb_port; //type: int32
        ydk::YLeaf fdb_trap_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_static_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeafList fdb_synced_cores; //type: list of  uint8

}; // Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry


class Controller::Switch::Oper::Fdb::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        class MacIter; //type: Controller::Switch::Oper::Fdb::Mac::MacIter

        ydk::YList mac_iter;
        
}; // Controller::Switch::Oper::Fdb::Mac


class Controller::Switch::Oper::Fdb::Mac::MacIter : public ydk::Entity
{
    public:
        MacIter();
        ~MacIter();

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

        ydk::YLeaf mac; //type: string
        class SwitchFdbCommon; //type: Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon> switch_fdb_common;
        
}; // Controller::Switch::Oper::Fdb::Mac::MacIter


class Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon : public ydk::Entity
{
    public:
        SwitchFdbCommon();
        ~SwitchFdbCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon


class Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf num_entries; //type: uint32
        ydk::YLeaf has_trunk_entry; //type: uint8
        ydk::YLeaf trunk_entry_message; //type: string
        class FdbBlock; //type: Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock> fdb_block;
        
}; // Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location


class Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock : public ydk::Entity
{
    public:
        FdbBlock();
        ~FdbBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FdbEntry; //type: Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry

        ydk::YList fdb_entry;
        
}; // Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock


class Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry : public ydk::Entity
{
    public:
        FdbEntry();
        ~FdbEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_index; //type: uint32
        ydk::YLeaf fdb_mac_addr; //type: string
        ydk::YLeaf fdb_vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::fdb_vlan)
        ydk::YLeaf fdb_vlan_hex;
        ydk::YLeaf fdb_port; //type: int32
        ydk::YLeaf fdb_trap_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_static_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeafList fdb_synced_cores; //type: list of  uint8

}; // Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry


class Controller::Switch::Oper::Fdb::Port : public ydk::Entity
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

        class PortIter; //type: Controller::Switch::Oper::Fdb::Port::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Fdb::Port


class Controller::Switch::Oper::Fdb::Port::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

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

        ydk::YLeaf port; //type: int32
        class SwitchFdbCommon; //type: Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon> switch_fdb_common;
        
}; // Controller::Switch::Oper::Fdb::Port::PortIter


class Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon : public ydk::Entity
{
    public:
        SwitchFdbCommon();
        ~SwitchFdbCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon


class Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf num_entries; //type: uint32
        ydk::YLeaf has_trunk_entry; //type: uint8
        ydk::YLeaf trunk_entry_message; //type: string
        class FdbBlock; //type: Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock> fdb_block;
        
}; // Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location


class Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock : public ydk::Entity
{
    public:
        FdbBlock();
        ~FdbBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FdbEntry; //type: Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry

        ydk::YList fdb_entry;
        
}; // Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock


class Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry : public ydk::Entity
{
    public:
        FdbEntry();
        ~FdbEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_index; //type: uint32
        ydk::YLeaf fdb_mac_addr; //type: string
        ydk::YLeaf fdb_vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::fdb_vlan)
        ydk::YLeaf fdb_vlan_hex;
        ydk::YLeaf fdb_port; //type: int32
        ydk::YLeaf fdb_trap_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_static_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeafList fdb_synced_cores; //type: list of  uint8

}; // Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry


class Controller::Switch::Oper::Fdb::Statistics : public ydk::Entity
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

        class Location; //type: Controller::Switch::Oper::Fdb::Statistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::Statistics


class Controller::Switch::Oper::Fdb::Statistics::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class CounterInfo; //type: Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo
        class CoreId; //type: Controller::Switch::Oper::Fdb::Statistics::Location::CoreId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo> counter_info;
        ydk::YList core_id;
        
}; // Controller::Switch::Oper::Fdb::Statistics::Location


class Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo : public ydk::Entity
{
    public:
        CounterInfo();
        ~CounterInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_shadow_entries; //type: uint32
        ydk::YLeaf fdb_max_shadow_entries; //type: uint32
        ydk::YLeaf fdb_max_hash_chain; //type: uint32
        ydk::YLeaf fdb_entries_added; //type: uint32
        ydk::YLeaf fdb_entries_deleted; //type: uint32
        ydk::YLeaf fdb_entries_updated; //type: uint32
        ydk::YLeaf fdb_flushes; //type: uint32
        ydk::YLeaf fdb_address_updates; //type: uint32
        ydk::YLeaf fdb_new_addresses; //type: uint32
        ydk::YLeaf fdb_aged_updates; //type: uint32
        ydk::YLeaf fdb_transplant_updates; //type: uint32
        ydk::YLeaf fdb_forwarding_updates; //type: uint32
        ydk::YLeaf fdb_address_insert_errors; //type: uint32
        ydk::YLeaf fdb_address_update_errors; //type: uint32
        ydk::YLeaf fdb_memory_errors; //type: uint32
        ydk::YLeaf fdb_allocation_errors; //type: uint32
        ydk::YLeaf fdb_address_updates_queued; //type: uint32
        ydk::YLeaf fdb_address_queue_full; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_forwarding_updates_queued; //type: uint32
        ydk::YLeaf fdb_forwarding_queue_full; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo


class Controller::Switch::Oper::Fdb::Statistics::Location::CoreId : public ydk::Entity
{
    public:
        CoreId();
        ~CoreId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf core; //type: int32
        ydk::YLeaf core_entries; //type: uint32
        ydk::YLeaf core_static_entries; //type: uint32

}; // Controller::Switch::Oper::Fdb::Statistics::Location::CoreId


class Controller::Switch::Oper::Fdb::SwitchFdbCommon : public ydk::Entity
{
    public:
        SwitchFdbCommon();
        ~SwitchFdbCommon();

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

        class Location; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon


class Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf num_entries; //type: uint32
        ydk::YLeaf has_trunk_entry; //type: uint8
        ydk::YLeaf trunk_entry_message; //type: string
        class FdbBlock; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock> fdb_block;
        
}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location


class Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock : public ydk::Entity
{
    public:
        FdbBlock();
        ~FdbBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FdbEntry; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry

        ydk::YList fdb_entry;
        
}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock


class Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry : public ydk::Entity
{
    public:
        FdbEntry();
        ~FdbEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_index; //type: uint32
        ydk::YLeaf fdb_mac_addr; //type: string
        ydk::YLeaf fdb_vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::fdb_vlan)
        ydk::YLeaf fdb_vlan_hex;
        ydk::YLeaf fdb_port; //type: int32
        ydk::YLeaf fdb_trap_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_static_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeafList fdb_synced_cores; //type: list of  uint8

}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry


class Controller::Switch::Oper::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        class Information; //type: Controller::Switch::Oper::Vlan::Information
        class Membership; //type: Controller::Switch::Oper::Vlan::Membership

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Vlan::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Vlan::Membership> membership;
        
}; // Controller::Switch::Oper::Vlan


class Controller::Switch::Oper::Vlan::Information : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Vlan::Information::Location
        class Summary; //type: Controller::Switch::Oper::Vlan::Information::Summary

        ydk::YList location;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Vlan::Information::Summary> summary;
        
}; // Controller::Switch::Oper::Vlan::Information


class Controller::Switch::Oper::Vlan::Information::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class SdrId; //type: Controller::Switch::Oper::Vlan::Information::Location::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Location


class Controller::Switch::Oper::Vlan::Information::Location::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        class VlanId; //type: Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Location::SdrId


class Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::vlan)
        ydk::YLeaf vlan_hex;
        ydk::YLeaf vlan_use; //type: string

}; // Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId


class Controller::Switch::Oper::Vlan::Information::Summary : public ydk::Entity
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

        class SdrId; //type: Controller::Switch::Oper::Vlan::Information::Summary::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Summary


class Controller::Switch::Oper::Vlan::Information::Summary::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

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

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        class VlanId; //type: Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Summary::SdrId


class Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::vlan)
        ydk::YLeaf vlan_hex;
        ydk::YLeaf vlan_use; //type: string

}; // Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId


class Controller::Switch::Oper::Vlan::Membership : public ydk::Entity
{
    public:
        Membership();
        ~Membership();

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

        class Location; //type: Controller::Switch::Oper::Vlan::Membership::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Vlan::Membership


class Controller::Switch::Oper::Vlan::Membership::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class VlanId; //type: Controller::Switch::Oper::Vlan::Membership::Location::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Membership::Location


class Controller::Switch::Oper::Vlan::Membership::Location::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Vlan::Membership::Location::VlanId::vlan)
        ydk::YLeaf vlan_hex;
        ydk::YLeafList port; //type: list of  uint8

}; // Controller::Switch::Oper::Vlan::Membership::Location::VlanId


class Controller::Switch::Oper::Trace : public ydk::Entity
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

        class Location; //type: Controller::Switch::Oper::Trace::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Trace


class Controller::Switch::Oper::Trace::Location : public ydk::Entity
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

        ydk::YLeaf location_str; //type: string
        class Esd; //type: Controller::Switch::Oper::Trace::Location::Esd
        class EsdEPCSW; //type: Controller::Switch::Oper::Trace::Location::EsdEPCSW
        class EsdEOBCSW; //type: Controller::Switch::Oper::Trace::Location::EsdEOBCSW

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Trace::Location::Esd> esd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Trace::Location::EsdEPCSW> esd_epc_sw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::Trace::Location::EsdEOBCSW> esd_eobc_sw;
        
}; // Controller::Switch::Oper::Trace::Location


class Controller::Switch::Oper::Trace::Location::Esd : public ydk::Entity
{
    public:
        Esd();
        ~Esd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trace_; //type: Controller::Switch::Oper::Trace::Location::Esd::Trace_

        ydk::YList trace;
        
}; // Controller::Switch::Oper::Trace::Location::Esd


class Controller::Switch::Oper::Trace::Location::Esd::Trace_ : public ydk::Entity
{
    public:
        Trace_();
        ~Trace_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buffer; //type: string
        class AllOptions; //type: Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions

        ydk::YList all_options;
        
}; // Controller::Switch::Oper::Trace::Location::Esd::Trace_


class Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions


class Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks


class Controller::Switch::Oper::Trace::Location::EsdEPCSW : public ydk::Entity
{
    public:
        EsdEPCSW();
        ~EsdEPCSW();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trace_; //type: Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_

        ydk::YList trace;
        
}; // Controller::Switch::Oper::Trace::Location::EsdEPCSW


class Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_ : public ydk::Entity
{
    public:
        Trace_();
        ~Trace_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buffer; //type: string
        class AllOptions; //type: Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions

        ydk::YList all_options;
        
}; // Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_


class Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions


class Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks


class Controller::Switch::Oper::Trace::Location::EsdEOBCSW : public ydk::Entity
{
    public:
        EsdEOBCSW();
        ~EsdEOBCSW();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trace_; //type: Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_

        ydk::YList trace;
        
}; // Controller::Switch::Oper::Trace::Location::EsdEOBCSW


class Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_ : public ydk::Entity
{
    public:
        Trace_();
        ~Trace_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buffer; //type: string
        class AllOptions; //type: Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions

        ydk::YList all_options;
        
}; // Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_


class Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions


class Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks


class Controller::Switch::Oper::MgmtAgent : public ydk::Entity
{
    public:
        MgmtAgent();
        ~MgmtAgent();

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

        class Esdma; //type: Controller::Switch::Oper::MgmtAgent::Esdma
        class Connections; //type: Controller::Switch::Oper::MgmtAgent::Connections

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::MgmtAgent::Esdma> esdma;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::MgmtAgent::Connections> connections;
        
}; // Controller::Switch::Oper::MgmtAgent


class Controller::Switch::Oper::MgmtAgent::Esdma : public ydk::Entity
{
    public:
        Esdma();
        ~Esdma();

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

        class Trace; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace

        ydk::YList trace;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace : public ydk::Entity
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
        class Location; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks


class Controller::Switch::Oper::MgmtAgent::Connections : public ydk::Entity
{
    public:
        Connections();
        ~Connections();

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

        ydk::YLeaf sdr_nm_num_clients; //type: uint32
        ydk::YLeaf esd_client_num_clients; //type: uint32
        ydk::YLeaf mlap_client_num_clients; //type: uint32
        class EsdmaInfo; //type: Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo
        class SdrNmClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId
        class EsdClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId
        class MlapClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo> esdma_info;
        ydk::YList sdr_nm_client_id;
        ydk::YList esd_client_id;
        ydk::YList mlap_client_id;
        
}; // Controller::Switch::Oper::MgmtAgent::Connections


class Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo : public ydk::Entity
{
    public:
        EsdmaInfo();
        ~EsdmaInfo();

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

        ydk::YLeaf active_esdma_address; //type: string

}; // Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo


class Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId : public ydk::Entity
{
    public:
        SdrNmClientId();
        ~SdrNmClientId();

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

        ydk::YLeaf sdr_nm_ip_address; //type: string
        ydk::YLeaf sdr_nm_port_num; //type: uint16

}; // Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId


class Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId : public ydk::Entity
{
    public:
        EsdClientId();
        ~EsdClientId();

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

        ydk::YLeaf esd_client_ip_address; //type: string
        ydk::YLeaf esd_client_port_num; //type: uint16
        ydk::YLeaf esd_client_location; //type: string
        ydk::YLeaf esd_client_switch_info_cached; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf esd_client_sdr_info_cached; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId


class Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId : public ydk::Entity
{
    public:
        MlapClientId();
        ~MlapClientId();

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

        ydk::YLeaf mlap_client_ip_address; //type: string
        ydk::YLeaf mlap_client_port_num; //type: uint16
        ydk::YLeaf mlap_client_location; //type: string
        ydk::YLeaf mlap_client_switch_info_cached; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId


class Controller::Switch::Oper::PortState : public ydk::Entity
{
    public:
        PortState();
        ~PortState();

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

        class Location; //type: Controller::Switch::Oper::PortState::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::PortState


class Controller::Switch::Oper::PortState::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::PortState::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::PortState::Location


class Controller::Switch::Oper::PortState::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32

}; // Controller::Switch::Oper::PortState::Location::PortIter


class Controller::Switch::Oper::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

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

        class Location; //type: Controller::Switch::Oper::Trunk::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Trunk


class Controller::Switch::Oper::Trunk::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf trunk_member_count; //type: uint32
        ydk::YLeaf trunk_name; //type: string
        class TrunkMemberPortIter; //type: Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter

        ydk::YList trunk_member_port_iter;
        
}; // Controller::Switch::Oper::Trunk::Location


class Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter : public ydk::Entity
{
    public:
        TrunkMemberPortIter();
        ~TrunkMemberPortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trunk_member_port; //type: uint32
        ydk::YLeaf trunk_member_status; //type: EsdmaTrunkMemberStatus

}; // Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::FabricAction::Fabric> fabric;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::FabricAction::Fabric::Ppu> ppu;
        
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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::Inventory> inventory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::EventHistory> event_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::NotifHistory> notif_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::OirHistory> oir_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::Iofpga> iofpga;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::Bootloader> bootloader;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::Inventory::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::Inventory::Detail> detail;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList> card_mgr_inv_detail_list;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::EventHistory::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::EventHistory::Detail> detail;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief> card_event_hist_brief;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5502::Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail> card_event_hist_detail;
        
}; // Controller::CardMgr::EventHistory::Detail::Location


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5502_4_ */

