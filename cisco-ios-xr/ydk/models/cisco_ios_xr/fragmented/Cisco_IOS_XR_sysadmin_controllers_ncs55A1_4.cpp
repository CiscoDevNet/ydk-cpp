
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs55A1_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs55A1 {

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Data()
    :
    instance(this, {"instance_id"})
{

    yang_name = "data"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::~Data()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_idx_list.len(); index++)
    {
        if(link_idx_list[index]->has_data())
            return true;
    }
    return instance_id.is_set
	|| nodeid_str.is_set
	|| is_show.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::has_operation() const
{
    for (std::size_t index=0; index<link_idx_list.len(); index++)
    {
        if(link_idx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(nodeid_str.yfilter)
	|| ydk::is_set(is_show.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_idx_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeid_str")
    {
        nodeid_str = value;
        nodeid_str.value_namespace = name_space;
        nodeid_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_show")
    {
        is_show = value;
        is_show.value_namespace = name_space;
        is_show.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "nodeid_str")
    {
        nodeid_str.yfilter = yfilter;
    }
    if(value_path == "is_show")
    {
        is_show.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::LinkIdxList()
    :
    link_idx{YType::int64, "link_idx"},
    link_id_str{YType::str, "link_id_str"},
    phy_link{YType::str, "phy_link"},
    speed{YType::str, "speed"},
    stage{YType::str, "stage"},
    fab_plane{YType::uint32, "fab_plane"},
    fab_group{YType::uint32, "fab_group"},
    flap_cnt{YType::uint32, "flap_cnt"},
    num_admin_shuts{YType::uint32, "num_admin_shuts"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    flags{YType::str, "flags"},
    far_end_link_fsdb{YType::str, "far_end_link_fsdb"},
    far_end_link_hw{YType::str, "far_end_link_hw"},
    coeff1{YType::uint32, "coeff1"},
    coeff2{YType::uint32, "coeff2"},
    fsm_state{YType::str, "fsm_state"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    tx_bec_retransmit{YType::uint64, "TX_BEC_retransmit"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_bec_retransmit{YType::uint64, "RX_BEC_retransmit"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "link_idx_list"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return link_idx.is_set
	|| link_id_str.is_set
	|| phy_link.is_set
	|| speed.is_set
	|| stage.is_set
	|| fab_plane.is_set
	|| fab_group.is_set
	|| flap_cnt.is_set
	|| num_admin_shuts.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| flags.is_set
	|| far_end_link_fsdb.is_set
	|| far_end_link_hw.is_set
	|| coeff1.is_set
	|| coeff2.is_set
	|| fsm_state.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| tx_bec_retransmit.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_bec_retransmit.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_dropped_retransmitted_control.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_idx.yfilter)
	|| ydk::is_set(link_id_str.yfilter)
	|| ydk::is_set(phy_link.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(fab_plane.yfilter)
	|| ydk::is_set(fab_group.yfilter)
	|| ydk::is_set(flap_cnt.yfilter)
	|| ydk::is_set(num_admin_shuts.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(far_end_link_fsdb.yfilter)
	|| ydk::is_set(far_end_link_hw.yfilter)
	|| ydk::is_set(coeff1.yfilter)
	|| ydk::is_set(coeff2.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(tx_bec_retransmit.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_bec_retransmit.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_idx.is_set || is_set(link_idx.yfilter)) leaf_name_data.push_back(link_idx.get_name_leafdata());
    if (link_id_str.is_set || is_set(link_id_str.yfilter)) leaf_name_data.push_back(link_id_str.get_name_leafdata());
    if (phy_link.is_set || is_set(phy_link.yfilter)) leaf_name_data.push_back(phy_link.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (fab_plane.is_set || is_set(fab_plane.yfilter)) leaf_name_data.push_back(fab_plane.get_name_leafdata());
    if (fab_group.is_set || is_set(fab_group.yfilter)) leaf_name_data.push_back(fab_group.get_name_leafdata());
    if (flap_cnt.is_set || is_set(flap_cnt.yfilter)) leaf_name_data.push_back(flap_cnt.get_name_leafdata());
    if (num_admin_shuts.is_set || is_set(num_admin_shuts.yfilter)) leaf_name_data.push_back(num_admin_shuts.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (far_end_link_fsdb.is_set || is_set(far_end_link_fsdb.yfilter)) leaf_name_data.push_back(far_end_link_fsdb.get_name_leafdata());
    if (far_end_link_hw.is_set || is_set(far_end_link_hw.yfilter)) leaf_name_data.push_back(far_end_link_hw.get_name_leafdata());
    if (coeff1.is_set || is_set(coeff1.yfilter)) leaf_name_data.push_back(coeff1.get_name_leafdata());
    if (coeff2.is_set || is_set(coeff2.yfilter)) leaf_name_data.push_back(coeff2.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (tx_bec_retransmit.is_set || is_set(tx_bec_retransmit.yfilter)) leaf_name_data.push_back(tx_bec_retransmit.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_bec_retransmit.is_set || is_set(rx_bec_retransmit.yfilter)) leaf_name_data.push_back(rx_bec_retransmit.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link_idx")
    {
        link_idx = value;
        link_idx.value_namespace = name_space;
        link_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_id_str")
    {
        link_id_str = value;
        link_id_str.value_namespace = name_space;
        link_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy_link")
    {
        phy_link = value;
        phy_link.value_namespace = name_space;
        phy_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_plane")
    {
        fab_plane = value;
        fab_plane.value_namespace = name_space;
        fab_plane.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_group")
    {
        fab_group = value;
        fab_group.value_namespace = name_space;
        fab_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flap_cnt")
    {
        flap_cnt = value;
        flap_cnt.value_namespace = name_space;
        flap_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_admin_shuts")
    {
        num_admin_shuts = value;
        num_admin_shuts.value_namespace = name_space;
        num_admin_shuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_link_fsdb")
    {
        far_end_link_fsdb = value;
        far_end_link_fsdb.value_namespace = name_space;
        far_end_link_fsdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_link_hw")
    {
        far_end_link_hw = value;
        far_end_link_hw.value_namespace = name_space;
        far_end_link_hw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff1")
    {
        coeff1 = value;
        coeff1.value_namespace = name_space;
        coeff1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff2")
    {
        coeff2 = value;
        coeff2.value_namespace = name_space;
        coeff2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm_state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_BEC_retransmit")
    {
        tx_bec_retransmit = value;
        tx_bec_retransmit.value_namespace = name_space;
        tx_bec_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_BEC_retransmit")
    {
        rx_bec_retransmit = value;
        rx_bec_retransmit.value_namespace = name_space;
        rx_bec_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link_idx")
    {
        link_idx.yfilter = yfilter;
    }
    if(value_path == "link_id_str")
    {
        link_id_str.yfilter = yfilter;
    }
    if(value_path == "phy_link")
    {
        phy_link.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "fab_plane")
    {
        fab_plane.yfilter = yfilter;
    }
    if(value_path == "fab_group")
    {
        fab_group.yfilter = yfilter;
    }
    if(value_path == "flap_cnt")
    {
        flap_cnt.yfilter = yfilter;
    }
    if(value_path == "num_admin_shuts")
    {
        num_admin_shuts.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "far_end_link_fsdb")
    {
        far_end_link_fsdb.yfilter = yfilter;
    }
    if(value_path == "far_end_link_hw")
    {
        far_end_link_hw.yfilter = yfilter;
    }
    if(value_path == "coeff1")
    {
        coeff1.yfilter = yfilter;
    }
    if(value_path == "coeff2")
    {
        coeff2.yfilter = yfilter;
    }
    if(value_path == "fsm_state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "TX_BEC_retransmit")
    {
        tx_bec_retransmit.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_BEC_retransmit")
    {
        rx_bec_retransmit.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"},
    down_reasons{YType::str, "down_reasons"}
{

    yang_name = "history"; yang_parent_name = "link_idx_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (down_reasons.is_set || is_set(down_reasons.yfilter)) leaf_name_data.push_back(down_reasons.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_reasons")
    {
        down_reasons = value;
        down_reasons.value_namespace = name_space;
        down_reasons.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
    if(value_path == "down_reasons")
    {
        down_reasons.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Ctrl()
    :
    instance(this, {"instance_id"})
{

    yang_name = "ctrl"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::~Ctrl()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "ctrl"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_idx_list.len(); index++)
    {
        if(link_idx_list[index]->has_data())
            return true;
    }
    return instance_id.is_set
	|| nodeid_str.is_set
	|| is_show.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::has_operation() const
{
    for (std::size_t index=0; index<link_idx_list.len(); index++)
    {
        if(link_idx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(nodeid_str.yfilter)
	|| ydk::is_set(is_show.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_idx_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeid_str")
    {
        nodeid_str = value;
        nodeid_str.value_namespace = name_space;
        nodeid_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_show")
    {
        is_show = value;
        is_show.value_namespace = name_space;
        is_show.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "nodeid_str")
    {
        nodeid_str.yfilter = yfilter;
    }
    if(value_path == "is_show")
    {
        is_show.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::LinkIdxList()
    :
    link_idx{YType::int64, "link_idx"},
    link_id_str{YType::str, "link_id_str"},
    phy_link{YType::str, "phy_link"},
    speed{YType::str, "speed"},
    stage{YType::str, "stage"},
    fab_plane{YType::uint32, "fab_plane"},
    fab_group{YType::uint32, "fab_group"},
    flap_cnt{YType::uint32, "flap_cnt"},
    num_admin_shuts{YType::uint32, "num_admin_shuts"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    flags{YType::str, "flags"},
    far_end_link_fsdb{YType::str, "far_end_link_fsdb"},
    far_end_link_hw{YType::str, "far_end_link_hw"},
    coeff1{YType::uint32, "coeff1"},
    coeff2{YType::uint32, "coeff2"},
    fsm_state{YType::str, "fsm_state"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    tx_bec_retransmit{YType::uint64, "TX_BEC_retransmit"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_bec_retransmit{YType::uint64, "RX_BEC_retransmit"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "link_idx_list"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return link_idx.is_set
	|| link_id_str.is_set
	|| phy_link.is_set
	|| speed.is_set
	|| stage.is_set
	|| fab_plane.is_set
	|| fab_group.is_set
	|| flap_cnt.is_set
	|| num_admin_shuts.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| flags.is_set
	|| far_end_link_fsdb.is_set
	|| far_end_link_hw.is_set
	|| coeff1.is_set
	|| coeff2.is_set
	|| fsm_state.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| tx_bec_retransmit.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_bec_retransmit.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_dropped_retransmitted_control.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_idx.yfilter)
	|| ydk::is_set(link_id_str.yfilter)
	|| ydk::is_set(phy_link.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(fab_plane.yfilter)
	|| ydk::is_set(fab_group.yfilter)
	|| ydk::is_set(flap_cnt.yfilter)
	|| ydk::is_set(num_admin_shuts.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(far_end_link_fsdb.yfilter)
	|| ydk::is_set(far_end_link_hw.yfilter)
	|| ydk::is_set(coeff1.yfilter)
	|| ydk::is_set(coeff2.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(tx_bec_retransmit.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_bec_retransmit.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_idx.is_set || is_set(link_idx.yfilter)) leaf_name_data.push_back(link_idx.get_name_leafdata());
    if (link_id_str.is_set || is_set(link_id_str.yfilter)) leaf_name_data.push_back(link_id_str.get_name_leafdata());
    if (phy_link.is_set || is_set(phy_link.yfilter)) leaf_name_data.push_back(phy_link.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (fab_plane.is_set || is_set(fab_plane.yfilter)) leaf_name_data.push_back(fab_plane.get_name_leafdata());
    if (fab_group.is_set || is_set(fab_group.yfilter)) leaf_name_data.push_back(fab_group.get_name_leafdata());
    if (flap_cnt.is_set || is_set(flap_cnt.yfilter)) leaf_name_data.push_back(flap_cnt.get_name_leafdata());
    if (num_admin_shuts.is_set || is_set(num_admin_shuts.yfilter)) leaf_name_data.push_back(num_admin_shuts.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (far_end_link_fsdb.is_set || is_set(far_end_link_fsdb.yfilter)) leaf_name_data.push_back(far_end_link_fsdb.get_name_leafdata());
    if (far_end_link_hw.is_set || is_set(far_end_link_hw.yfilter)) leaf_name_data.push_back(far_end_link_hw.get_name_leafdata());
    if (coeff1.is_set || is_set(coeff1.yfilter)) leaf_name_data.push_back(coeff1.get_name_leafdata());
    if (coeff2.is_set || is_set(coeff2.yfilter)) leaf_name_data.push_back(coeff2.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (tx_bec_retransmit.is_set || is_set(tx_bec_retransmit.yfilter)) leaf_name_data.push_back(tx_bec_retransmit.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_bec_retransmit.is_set || is_set(rx_bec_retransmit.yfilter)) leaf_name_data.push_back(rx_bec_retransmit.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link_idx")
    {
        link_idx = value;
        link_idx.value_namespace = name_space;
        link_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_id_str")
    {
        link_id_str = value;
        link_id_str.value_namespace = name_space;
        link_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy_link")
    {
        phy_link = value;
        phy_link.value_namespace = name_space;
        phy_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_plane")
    {
        fab_plane = value;
        fab_plane.value_namespace = name_space;
        fab_plane.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_group")
    {
        fab_group = value;
        fab_group.value_namespace = name_space;
        fab_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flap_cnt")
    {
        flap_cnt = value;
        flap_cnt.value_namespace = name_space;
        flap_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_admin_shuts")
    {
        num_admin_shuts = value;
        num_admin_shuts.value_namespace = name_space;
        num_admin_shuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_link_fsdb")
    {
        far_end_link_fsdb = value;
        far_end_link_fsdb.value_namespace = name_space;
        far_end_link_fsdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_link_hw")
    {
        far_end_link_hw = value;
        far_end_link_hw.value_namespace = name_space;
        far_end_link_hw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff1")
    {
        coeff1 = value;
        coeff1.value_namespace = name_space;
        coeff1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff2")
    {
        coeff2 = value;
        coeff2.value_namespace = name_space;
        coeff2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm_state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_BEC_retransmit")
    {
        tx_bec_retransmit = value;
        tx_bec_retransmit.value_namespace = name_space;
        tx_bec_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_BEC_retransmit")
    {
        rx_bec_retransmit = value;
        rx_bec_retransmit.value_namespace = name_space;
        rx_bec_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link_idx")
    {
        link_idx.yfilter = yfilter;
    }
    if(value_path == "link_id_str")
    {
        link_id_str.yfilter = yfilter;
    }
    if(value_path == "phy_link")
    {
        phy_link.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "fab_plane")
    {
        fab_plane.yfilter = yfilter;
    }
    if(value_path == "fab_group")
    {
        fab_group.yfilter = yfilter;
    }
    if(value_path == "flap_cnt")
    {
        flap_cnt.yfilter = yfilter;
    }
    if(value_path == "num_admin_shuts")
    {
        num_admin_shuts.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "far_end_link_fsdb")
    {
        far_end_link_fsdb.yfilter = yfilter;
    }
    if(value_path == "far_end_link_hw")
    {
        far_end_link_hw.yfilter = yfilter;
    }
    if(value_path == "coeff1")
    {
        coeff1.yfilter = yfilter;
    }
    if(value_path == "coeff2")
    {
        coeff2.yfilter = yfilter;
    }
    if(value_path == "fsm_state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "TX_BEC_retransmit")
    {
        tx_bec_retransmit.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_BEC_retransmit")
    {
        rx_bec_retransmit.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"},
    down_reasons{YType::str, "down_reasons"}
{

    yang_name = "history"; yang_parent_name = "link_idx_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (down_reasons.is_set || is_set(down_reasons.yfilter)) leaf_name_data.push_back(down_reasons.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_reasons")
    {
        down_reasons = value;
        down_reasons.value_namespace = name_space;
        down_reasons.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
    if(value_path == "down_reasons")
    {
        down_reasons.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::All()
    :
    instance(this, {"instance_id"})
{

    yang_name = "all"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::~All()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_idx_list.len(); index++)
    {
        if(link_idx_list[index]->has_data())
            return true;
    }
    return instance_id.is_set
	|| nodeid_str.is_set
	|| is_show.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::has_operation() const
{
    for (std::size_t index=0; index<link_idx_list.len(); index++)
    {
        if(link_idx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(nodeid_str.yfilter)
	|| ydk::is_set(is_show.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_idx_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeid_str")
    {
        nodeid_str = value;
        nodeid_str.value_namespace = name_space;
        nodeid_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_show")
    {
        is_show = value;
        is_show.value_namespace = name_space;
        is_show.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "nodeid_str")
    {
        nodeid_str.yfilter = yfilter;
    }
    if(value_path == "is_show")
    {
        is_show.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::LinkIdxList()
    :
    link_idx{YType::int64, "link_idx"},
    link_id_str{YType::str, "link_id_str"},
    phy_link{YType::str, "phy_link"},
    speed{YType::str, "speed"},
    stage{YType::str, "stage"},
    fab_plane{YType::uint32, "fab_plane"},
    fab_group{YType::uint32, "fab_group"},
    flap_cnt{YType::uint32, "flap_cnt"},
    num_admin_shuts{YType::uint32, "num_admin_shuts"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    flags{YType::str, "flags"},
    far_end_link_fsdb{YType::str, "far_end_link_fsdb"},
    far_end_link_hw{YType::str, "far_end_link_hw"},
    coeff1{YType::uint32, "coeff1"},
    coeff2{YType::uint32, "coeff2"},
    fsm_state{YType::str, "fsm_state"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    tx_bec_retransmit{YType::uint64, "TX_BEC_retransmit"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_bec_retransmit{YType::uint64, "RX_BEC_retransmit"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "link_idx_list"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return link_idx.is_set
	|| link_id_str.is_set
	|| phy_link.is_set
	|| speed.is_set
	|| stage.is_set
	|| fab_plane.is_set
	|| fab_group.is_set
	|| flap_cnt.is_set
	|| num_admin_shuts.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| flags.is_set
	|| far_end_link_fsdb.is_set
	|| far_end_link_hw.is_set
	|| coeff1.is_set
	|| coeff2.is_set
	|| fsm_state.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| tx_bec_retransmit.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_bec_retransmit.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_dropped_retransmitted_control.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_idx.yfilter)
	|| ydk::is_set(link_id_str.yfilter)
	|| ydk::is_set(phy_link.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(fab_plane.yfilter)
	|| ydk::is_set(fab_group.yfilter)
	|| ydk::is_set(flap_cnt.yfilter)
	|| ydk::is_set(num_admin_shuts.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(far_end_link_fsdb.yfilter)
	|| ydk::is_set(far_end_link_hw.yfilter)
	|| ydk::is_set(coeff1.yfilter)
	|| ydk::is_set(coeff2.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(tx_bec_retransmit.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_bec_retransmit.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_idx.is_set || is_set(link_idx.yfilter)) leaf_name_data.push_back(link_idx.get_name_leafdata());
    if (link_id_str.is_set || is_set(link_id_str.yfilter)) leaf_name_data.push_back(link_id_str.get_name_leafdata());
    if (phy_link.is_set || is_set(phy_link.yfilter)) leaf_name_data.push_back(phy_link.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (fab_plane.is_set || is_set(fab_plane.yfilter)) leaf_name_data.push_back(fab_plane.get_name_leafdata());
    if (fab_group.is_set || is_set(fab_group.yfilter)) leaf_name_data.push_back(fab_group.get_name_leafdata());
    if (flap_cnt.is_set || is_set(flap_cnt.yfilter)) leaf_name_data.push_back(flap_cnt.get_name_leafdata());
    if (num_admin_shuts.is_set || is_set(num_admin_shuts.yfilter)) leaf_name_data.push_back(num_admin_shuts.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (far_end_link_fsdb.is_set || is_set(far_end_link_fsdb.yfilter)) leaf_name_data.push_back(far_end_link_fsdb.get_name_leafdata());
    if (far_end_link_hw.is_set || is_set(far_end_link_hw.yfilter)) leaf_name_data.push_back(far_end_link_hw.get_name_leafdata());
    if (coeff1.is_set || is_set(coeff1.yfilter)) leaf_name_data.push_back(coeff1.get_name_leafdata());
    if (coeff2.is_set || is_set(coeff2.yfilter)) leaf_name_data.push_back(coeff2.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (tx_bec_retransmit.is_set || is_set(tx_bec_retransmit.yfilter)) leaf_name_data.push_back(tx_bec_retransmit.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_bec_retransmit.is_set || is_set(rx_bec_retransmit.yfilter)) leaf_name_data.push_back(rx_bec_retransmit.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link_idx")
    {
        link_idx = value;
        link_idx.value_namespace = name_space;
        link_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_id_str")
    {
        link_id_str = value;
        link_id_str.value_namespace = name_space;
        link_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy_link")
    {
        phy_link = value;
        phy_link.value_namespace = name_space;
        phy_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_plane")
    {
        fab_plane = value;
        fab_plane.value_namespace = name_space;
        fab_plane.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_group")
    {
        fab_group = value;
        fab_group.value_namespace = name_space;
        fab_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flap_cnt")
    {
        flap_cnt = value;
        flap_cnt.value_namespace = name_space;
        flap_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_admin_shuts")
    {
        num_admin_shuts = value;
        num_admin_shuts.value_namespace = name_space;
        num_admin_shuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_link_fsdb")
    {
        far_end_link_fsdb = value;
        far_end_link_fsdb.value_namespace = name_space;
        far_end_link_fsdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_link_hw")
    {
        far_end_link_hw = value;
        far_end_link_hw.value_namespace = name_space;
        far_end_link_hw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff1")
    {
        coeff1 = value;
        coeff1.value_namespace = name_space;
        coeff1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff2")
    {
        coeff2 = value;
        coeff2.value_namespace = name_space;
        coeff2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm_state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_BEC_retransmit")
    {
        tx_bec_retransmit = value;
        tx_bec_retransmit.value_namespace = name_space;
        tx_bec_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_BEC_retransmit")
    {
        rx_bec_retransmit = value;
        rx_bec_retransmit.value_namespace = name_space;
        rx_bec_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link_idx")
    {
        link_idx.yfilter = yfilter;
    }
    if(value_path == "link_id_str")
    {
        link_id_str.yfilter = yfilter;
    }
    if(value_path == "phy_link")
    {
        phy_link.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "fab_plane")
    {
        fab_plane.yfilter = yfilter;
    }
    if(value_path == "fab_group")
    {
        fab_group.yfilter = yfilter;
    }
    if(value_path == "flap_cnt")
    {
        flap_cnt.yfilter = yfilter;
    }
    if(value_path == "num_admin_shuts")
    {
        num_admin_shuts.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "far_end_link_fsdb")
    {
        far_end_link_fsdb.yfilter = yfilter;
    }
    if(value_path == "far_end_link_hw")
    {
        far_end_link_hw.yfilter = yfilter;
    }
    if(value_path == "coeff1")
    {
        coeff1.yfilter = yfilter;
    }
    if(value_path == "coeff2")
    {
        coeff2.yfilter = yfilter;
    }
    if(value_path == "fsm_state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "TX_Control_cells_counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_cell_counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "TX_Data_byte_counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "TX_BEC_retransmit")
    {
        tx_bec_retransmit.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Control_cells_counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_cell_counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "RX_Data_byte_counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "RX_BEC_retransmit")
    {
        rx_bec_retransmit.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"},
    down_reasons{YType::str, "down_reasons"}
{

    yang_name = "history"; yang_parent_name = "link_idx_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (down_reasons.is_set || is_set(down_reasons.yfilter)) leaf_name_data.push_back(down_reasons.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_idx")
    {
        history_idx = value;
        history_idx.value_namespace = name_space;
        history_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time_stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_reasons")
    {
        down_reasons = value;
        down_reasons.value_namespace = name_space;
        down_reasons.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_idx")
    {
        history_idx.yfilter = yfilter;
    }
    if(value_path == "time_stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error_state")
    {
        error_state.yfilter = yfilter;
    }
    if(value_path == "down_reasons")
    {
        down_reasons.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Diagshell::Diagshell()
    :
    location(this, {"loc_str"})
{

    yang_name = "diagshell"; yang_parent_name = "sfe"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::Diagshell::~Diagshell()
{
}

bool Controller::SfeOper::Sfe::Diagshell::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::Diagshell::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::Diagshell::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::Diagshell::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diagshell";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Diagshell::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Diagshell::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Diagshell::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Diagshell::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Diagshell::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::Diagshell::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::Diagshell::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Diagshell::Location::Location()
    :
    loc_str{YType::str, "loc_str"},
    description{YType::str, "description"}
        ,
    instance(this, {"instance_num"})
{

    yang_name = "location"; yang_parent_name = "diagshell"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::Diagshell::Location::~Location()
{
}

bool Controller::SfeOper::Sfe::Diagshell::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| description.is_set;
}

bool Controller::SfeOper::Sfe::Diagshell::Location::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::SfeOper::Sfe::Diagshell::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/diagshell/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::Diagshell::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Diagshell::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Diagshell::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Diagshell::Location::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Diagshell::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Diagshell::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Diagshell::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Diagshell::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "loc_str" || name == "description")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Diagshell::Location::Instance::Instance()
    :
    instance_num{YType::int32, "instance_num"}
        ,
    diag_cmd(this, {"cmd_str"})
{

    yang_name = "instance"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Diagshell::Location::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::Diagshell::Location::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diag_cmd.len(); index++)
    {
        if(diag_cmd[index]->has_data())
            return true;
    }
    return instance_num.is_set;
}

bool Controller::SfeOper::Sfe::Diagshell::Location::Instance::has_operation() const
{
    for (std::size_t index=0; index<diag_cmd.len(); index++)
    {
        if(diag_cmd[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_num.yfilter);
}

std::string Controller::SfeOper::Sfe::Diagshell::Location::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_num, "instance_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Diagshell::Location::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_num.is_set || is_set(instance_num.yfilter)) leaf_name_data.push_back(instance_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Diagshell::Location::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diag_cmd")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd>();
        ent_->parent = this;
        diag_cmd.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Diagshell::Location::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diag_cmd.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Diagshell::Location::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance_num")
    {
        instance_num = value;
        instance_num.value_namespace = name_space;
        instance_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Diagshell::Location::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance_num")
    {
        instance_num.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Diagshell::Location::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diag_cmd" || name == "instance_num")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::DiagCmd()
    :
    cmd_str{YType::str, "cmd_str"}
        ,
    bytes(this, {"byte_idx"})
{

    yang_name = "diag_cmd"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::~DiagCmd()
{
}

bool Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bytes.len(); index++)
    {
        if(bytes[index]->has_data())
            return true;
    }
    return cmd_str.is_set;
}

bool Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::has_operation() const
{
    for (std::size_t index=0; index<bytes.len(); index++)
    {
        if(bytes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cmd_str.yfilter);
}

std::string Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diag_cmd";
    ADD_KEY_TOKEN(cmd_str, "cmd_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmd_str.is_set || is_set(cmd_str.yfilter)) leaf_name_data.push_back(cmd_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes>();
        ent_->parent = this;
        bytes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bytes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmd_str")
    {
        cmd_str = value;
        cmd_str.value_namespace = name_space;
        cmd_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmd_str")
    {
        cmd_str.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "cmd_str")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::Bytes()
    :
    byte_idx{YType::int64, "byte_idx"},
    data{YType::str, "data"}
{

    yang_name = "bytes"; yang_parent_name = "diag_cmd"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::~Bytes()
{
}

bool Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return byte_idx.is_set
	|| data.is_set;
}

bool Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_idx.yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    ADD_KEY_TOKEN(byte_idx, "byte_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_idx.is_set || is_set(byte_idx.yfilter)) leaf_name_data.push_back(byte_idx.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte_idx")
    {
        byte_idx = value;
        byte_idx.value_namespace = name_space;
        byte_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte_idx")
    {
        byte_idx.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte_idx" || name == "data")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Register::Register()
    :
    location(this, {"loc_str"})
{

    yang_name = "register"; yang_parent_name = "sfe"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::Register::~Register()
{
}

bool Controller::SfeOper::Sfe::Register::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::Register::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::Register::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::Register::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Register::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Register::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Register::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Register::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Register::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::Register::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::Register::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Register::Location::Location()
    :
    loc_str{YType::str, "loc_str"},
    description{YType::str, "description"}
        ,
    instance(this, {"instance_num"})
{

    yang_name = "location"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::Register::Location::~Location()
{
}

bool Controller::SfeOper::Sfe::Register::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| description.is_set;
}

bool Controller::SfeOper::Sfe::Register::Location::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::SfeOper::Sfe::Register::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::Register::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Register::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Register::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Register::Location::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Register::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Register::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Register::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Register::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "loc_str" || name == "description")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Register::Location::Instance::Instance()
    :
    instance_num{YType::int32, "instance_num"}
        ,
    bytes(this, {"byte_idx"})
{

    yang_name = "instance"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Register::Location::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::Register::Location::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bytes.len(); index++)
    {
        if(bytes[index]->has_data())
            return true;
    }
    return instance_num.is_set;
}

bool Controller::SfeOper::Sfe::Register::Location::Instance::has_operation() const
{
    for (std::size_t index=0; index<bytes.len(); index++)
    {
        if(bytes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_num.yfilter);
}

std::string Controller::SfeOper::Sfe::Register::Location::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_num, "instance_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Register::Location::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_num.is_set || is_set(instance_num.yfilter)) leaf_name_data.push_back(instance_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Register::Location::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Register::Location::Instance::Bytes>();
        ent_->parent = this;
        bytes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Register::Location::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bytes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Register::Location::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance_num")
    {
        instance_num = value;
        instance_num.value_namespace = name_space;
        instance_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Register::Location::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance_num")
    {
        instance_num.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Register::Location::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "instance_num")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::Bytes()
    :
    byte_idx{YType::int64, "byte_idx"},
    data{YType::str, "data"}
{

    yang_name = "bytes"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::~Bytes()
{
}

bool Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return byte_idx.is_set
	|| data.is_set;
}

bool Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_idx.yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    ADD_KEY_TOKEN(byte_idx, "byte_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_idx.is_set || is_set(byte_idx.yfilter)) leaf_name_data.push_back(byte_idx.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte_idx")
    {
        byte_idx = value;
        byte_idx.value_namespace = name_space;
        byte_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte_idx")
    {
        byte_idx.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Register::Location::Instance::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte_idx" || name == "data")
        return true;
    return false;
}

Controller::SfeOper::Sfe::DumpFile::DumpFile()
    :
    location(this, {"loc_str"})
{

    yang_name = "dump-file"; yang_parent_name = "sfe"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::DumpFile::~DumpFile()
{
}

bool Controller::SfeOper::Sfe::DumpFile::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::DumpFile::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::DumpFile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::DumpFile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dump-file";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::DumpFile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::DumpFile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::DumpFile::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::DumpFile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::DumpFile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::DumpFile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::DumpFile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::SfeOper::Sfe::DumpFile::Location::Location()
    :
    loc_str{YType::str, "loc_str"},
    description{YType::str, "description"}
        ,
    file(this, {"file_name"})
{

    yang_name = "location"; yang_parent_name = "dump-file"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::DumpFile::Location::~Location()
{
}

bool Controller::SfeOper::Sfe::DumpFile::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<file.len(); index++)
    {
        if(file[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| description.is_set;
}

bool Controller::SfeOper::Sfe::DumpFile::Location::has_operation() const
{
    for (std::size_t index=0; index<file.len(); index++)
    {
        if(file[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::SfeOper::Sfe::DumpFile::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/dump-file/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::DumpFile::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::DumpFile::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::DumpFile::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::DumpFile::Location::File>();
        ent_->parent = this;
        file.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::DumpFile::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : file.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::DumpFile::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::DumpFile::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::DumpFile::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "loc_str" || name == "description")
        return true;
    return false;
}

Controller::SfeOper::Sfe::DumpFile::Location::File::File()
    :
    file_name{YType::str, "file_name"}
        ,
    bytes(this, {"byte_idx"})
{

    yang_name = "file"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::DumpFile::Location::File::~File()
{
}

bool Controller::SfeOper::Sfe::DumpFile::Location::File::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bytes.len(); index++)
    {
        if(bytes[index]->has_data())
            return true;
    }
    return file_name.is_set;
}

bool Controller::SfeOper::Sfe::DumpFile::Location::File::has_operation() const
{
    for (std::size_t index=0; index<bytes.len(); index++)
    {
        if(bytes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(file_name.yfilter);
}

std::string Controller::SfeOper::Sfe::DumpFile::Location::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";
    ADD_KEY_TOKEN(file_name, "file_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::DumpFile::Location::File::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::DumpFile::Location::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes>();
        ent_->parent = this;
        bytes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::DumpFile::Location::File::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bytes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::DumpFile::Location::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file_name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::DumpFile::Location::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file_name")
    {
        file_name.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::DumpFile::Location::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "file_name")
        return true;
    return false;
}

Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::Bytes()
    :
    byte_idx{YType::int64, "byte_idx"},
    data{YType::str, "data"}
{

    yang_name = "bytes"; yang_parent_name = "file"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::~Bytes()
{
}

bool Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return byte_idx.is_set
	|| data.is_set;
}

bool Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_idx.yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    ADD_KEY_TOKEN(byte_idx, "byte_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_idx.is_set || is_set(byte_idx.yfilter)) leaf_name_data.push_back(byte_idx.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte_idx")
    {
        byte_idx = value;
        byte_idx.value_namespace = name_space;
        byte_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte_idx")
    {
        byte_idx.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte_idx" || name == "data")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Parse::Parse()
    :
    location(this, {"loc_str"})
{

    yang_name = "parse"; yang_parent_name = "sfe"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::Parse::~Parse()
{
}

bool Controller::SfeOper::Sfe::Parse::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::Parse::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::Parse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::Parse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Parse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Parse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Parse::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Parse::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Parse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::Parse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::Parse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Parse::Location::Location()
    :
    loc_str{YType::str, "loc_str"},
    description{YType::str, "description"}
        ,
    link(this, {"start", "end"})
{

    yang_name = "location"; yang_parent_name = "parse"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::Parse::Location::~Location()
{
}

bool Controller::SfeOper::Sfe::Parse::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link.len(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| description.is_set;
}

bool Controller::SfeOper::Sfe::Parse::Location::has_operation() const
{
    for (std::size_t index=0; index<link.len(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::SfeOper::Sfe::Parse::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/parse/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::Parse::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Parse::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Parse::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Parse::Location::Link>();
        ent_->parent = this;
        link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Parse::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Parse::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Parse::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Parse::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "loc_str" || name == "description")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Parse::Location::Link::Link()
    :
    start{YType::int32, "start"},
    end{YType::int32, "end"}
        ,
    instance(this, {"instance_id"})
{

    yang_name = "link"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Parse::Location::Link::~Link()
{
}

bool Controller::SfeOper::Sfe::Parse::Location::Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return start.is_set
	|| end.is_set;
}

bool Controller::SfeOper::Sfe::Parse::Location::Link::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter);
}

std::string Controller::SfeOper::Sfe::Parse::Location::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    ADD_KEY_TOKEN(start, "start");
    ADD_KEY_TOKEN(end, "end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Parse::Location::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Parse::Location::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Parse::Location::Link::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Parse::Location::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Parse::Location::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Parse::Location::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Parse::Location::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "start" || name == "end")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Parse::Location::Link::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Parse::Location::Link::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::Parse::Location::Link::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_idx_list.len(); index++)
    {
        if(link_idx_list[index]->has_data())
            return true;
    }
    return instance_id.is_set
	|| is_show.is_set;
}

bool Controller::SfeOper::Sfe::Parse::Location::Link::Instance::has_operation() const
{
    for (std::size_t index=0; index<link_idx_list.len(); index++)
    {
        if(link_idx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(is_show.yfilter);
}

std::string Controller::SfeOper::Sfe::Parse::Location::Link::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Parse::Location::Link::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Parse::Location::Link::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Parse::Location::Link::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_idx_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Parse::Location::Link::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_show")
    {
        is_show = value;
        is_show.value_namespace = name_space;
        is_show.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Parse::Location::Link::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "is_show")
    {
        is_show.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Parse::Location::Link::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::LinkIdxList()
    :
    link_idx{YType::int64, "link_idx"},
    rack_id_str{YType::str, "rack_id_str"},
    slot_id_str{YType::str, "slot_id_str"},
    asic_inst_id{YType::uint32, "asic_inst_id"},
    link_num_id{YType::uint32, "link_num_id"},
    log_slot{YType::uint32, "log_slot"},
    phy_slot{YType::uint32, "phy_slot"},
    fap_id{YType::uint32, "fap_id"},
    unit{YType::uint32, "unit"},
    sfi_id{YType::uint32, "sfi_id"},
    ip_addr{YType::str, "ip_addr"},
    driver_run{YType::str, "driver_run"}
{

    yang_name = "link_idx_list"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::has_data() const
{
    if (is_presence_container) return true;
    return link_idx.is_set
	|| rack_id_str.is_set
	|| slot_id_str.is_set
	|| asic_inst_id.is_set
	|| link_num_id.is_set
	|| log_slot.is_set
	|| phy_slot.is_set
	|| fap_id.is_set
	|| unit.is_set
	|| sfi_id.is_set
	|| ip_addr.is_set
	|| driver_run.is_set;
}

bool Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_idx.yfilter)
	|| ydk::is_set(rack_id_str.yfilter)
	|| ydk::is_set(slot_id_str.yfilter)
	|| ydk::is_set(asic_inst_id.yfilter)
	|| ydk::is_set(link_num_id.yfilter)
	|| ydk::is_set(log_slot.yfilter)
	|| ydk::is_set(phy_slot.yfilter)
	|| ydk::is_set(fap_id.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(sfi_id.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(driver_run.yfilter);
}

std::string Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_idx.is_set || is_set(link_idx.yfilter)) leaf_name_data.push_back(link_idx.get_name_leafdata());
    if (rack_id_str.is_set || is_set(rack_id_str.yfilter)) leaf_name_data.push_back(rack_id_str.get_name_leafdata());
    if (slot_id_str.is_set || is_set(slot_id_str.yfilter)) leaf_name_data.push_back(slot_id_str.get_name_leafdata());
    if (asic_inst_id.is_set || is_set(asic_inst_id.yfilter)) leaf_name_data.push_back(asic_inst_id.get_name_leafdata());
    if (link_num_id.is_set || is_set(link_num_id.yfilter)) leaf_name_data.push_back(link_num_id.get_name_leafdata());
    if (log_slot.is_set || is_set(log_slot.yfilter)) leaf_name_data.push_back(log_slot.get_name_leafdata());
    if (phy_slot.is_set || is_set(phy_slot.yfilter)) leaf_name_data.push_back(phy_slot.get_name_leafdata());
    if (fap_id.is_set || is_set(fap_id.yfilter)) leaf_name_data.push_back(fap_id.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (sfi_id.is_set || is_set(sfi_id.yfilter)) leaf_name_data.push_back(sfi_id.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (driver_run.is_set || is_set(driver_run.yfilter)) leaf_name_data.push_back(driver_run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link_idx")
    {
        link_idx = value;
        link_idx.value_namespace = name_space;
        link_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_id_str")
    {
        rack_id_str = value;
        rack_id_str.value_namespace = name_space;
        rack_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot_id_str")
    {
        slot_id_str = value;
        slot_id_str.value_namespace = name_space;
        slot_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_inst_id")
    {
        asic_inst_id = value;
        asic_inst_id.value_namespace = name_space;
        asic_inst_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_num_id")
    {
        link_num_id = value;
        link_num_id.value_namespace = name_space;
        link_num_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log_slot")
    {
        log_slot = value;
        log_slot.value_namespace = name_space;
        log_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy_slot")
    {
        phy_slot = value;
        phy_slot.value_namespace = name_space;
        phy_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fap_id")
    {
        fap_id = value;
        fap_id.value_namespace = name_space;
        fap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfi_id")
    {
        sfi_id = value;
        sfi_id.value_namespace = name_space;
        sfi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip_addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "driver_run")
    {
        driver_run = value;
        driver_run.value_namespace = name_space;
        driver_run.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link_idx")
    {
        link_idx.yfilter = yfilter;
    }
    if(value_path == "rack_id_str")
    {
        rack_id_str.yfilter = yfilter;
    }
    if(value_path == "slot_id_str")
    {
        slot_id_str.yfilter = yfilter;
    }
    if(value_path == "asic_inst_id")
    {
        asic_inst_id.yfilter = yfilter;
    }
    if(value_path == "link_num_id")
    {
        link_num_id.yfilter = yfilter;
    }
    if(value_path == "log_slot")
    {
        log_slot.yfilter = yfilter;
    }
    if(value_path == "phy_slot")
    {
        phy_slot.yfilter = yfilter;
    }
    if(value_path == "fap_id")
    {
        fap_id.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "sfi_id")
    {
        sfi_id.yfilter = yfilter;
    }
    if(value_path == "ip_addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "driver_run")
    {
        driver_run.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx" || name == "rack_id_str" || name == "slot_id_str" || name == "asic_inst_id" || name == "link_num_id" || name == "log_slot" || name == "phy_slot" || name == "fap_id" || name == "unit" || name == "sfi_id" || name == "ip_addr" || name == "driver_run")
        return true;
    return false;
}

Controller::SfeOper::SfeTrace::SfeTrace()
    :
    sfe_driver(std::make_shared<Controller::SfeOper::SfeTrace::SfeDriver>())
{
    sfe_driver->parent = this;

    yang_name = "sfe_trace"; yang_parent_name = "sfe_oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::SfeTrace::~SfeTrace()
{
}

bool Controller::SfeOper::SfeTrace::has_data() const
{
    if (is_presence_container) return true;
    return (sfe_driver !=  nullptr && sfe_driver->has_data());
}

bool Controller::SfeOper::SfeTrace::has_operation() const
{
    return is_set(yfilter)
	|| (sfe_driver !=  nullptr && sfe_driver->has_operation());
}

std::string Controller::SfeOper::SfeTrace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::SfeTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfe_trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::SfeTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::SfeTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfe_driver")
    {
        if(sfe_driver == nullptr)
        {
            sfe_driver = std::make_shared<Controller::SfeOper::SfeTrace::SfeDriver>();
        }
        return sfe_driver;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::SfeTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sfe_driver != nullptr)
    {
        _children["sfe_driver"] = sfe_driver;
    }

    return _children;
}

void Controller::SfeOper::SfeTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::SfeTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::SfeTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfe_driver")
        return true;
    return false;
}

Controller::SfeOper::SfeTrace::SfeDriver::SfeDriver()
    :
    trace(this, {"buffer"})
{

    yang_name = "sfe_driver"; yang_parent_name = "sfe_trace"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::SfeTrace::SfeDriver::~SfeDriver()
{
}

bool Controller::SfeOper::SfeTrace::SfeDriver::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::SfeTrace::SfeDriver::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::SfeTrace::SfeDriver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe_trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::SfeTrace::SfeDriver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfe_driver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::SfeTrace::SfeDriver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::SfeTrace::SfeDriver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::SfeTrace::SfeDriver::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::SfeTrace::SfeDriver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::SfeTrace::SfeDriver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::SfeTrace::SfeDriver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::SfeTrace::SfeDriver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::SfeOper::SfeTrace::SfeDriver::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "sfe_driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::SfeTrace::SfeDriver::Trace::~Trace()
{
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::SfeOper::SfeTrace::SfeDriver::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe_trace/sfe_driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::SfeTrace::SfeDriver::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::SfeTrace::SfeDriver::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::SfeTrace::SfeDriver::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::SfeTrace::SfeDriver::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::SfeTrace::SfeDriver::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::SfeTrace::SfeDriver::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::~Location()
{
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::FabricAction::FabricAction()
    :
    fabric(std::make_shared<Controller::FabricAction::Fabric>())
{
    fabric->parent = this;

    yang_name = "fabric_action"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::FabricAction::~FabricAction()
{
}

bool Controller::FabricAction::has_data() const
{
    if (is_presence_container) return true;
    return (fabric !=  nullptr && fabric->has_data());
}

bool Controller::FabricAction::has_operation() const
{
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation());
}

std::string Controller::FabricAction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::FabricAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric_action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::FabricAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::FabricAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Controller::FabricAction::Fabric>();
        }
        return fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::FabricAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fabric != nullptr)
    {
        _children["fabric"] = fabric;
    }

    return _children;
}

void Controller::FabricAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::FabricAction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::FabricAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric")
        return true;
    return false;
}

Controller::FabricAction::Fabric::Fabric()
    :
    ppu(std::make_shared<Controller::FabricAction::Fabric::Ppu>())
{
    ppu->parent = this;

    yang_name = "fabric"; yang_parent_name = "fabric_action"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::FabricAction::Fabric::~Fabric()
{
}

bool Controller::FabricAction::Fabric::has_data() const
{
    if (is_presence_container) return true;
    return (ppu !=  nullptr && ppu->has_data());
}

bool Controller::FabricAction::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (ppu !=  nullptr && ppu->has_operation());
}

std::string Controller::FabricAction::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/fabric_action/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::FabricAction::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::FabricAction::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::FabricAction::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ppu")
    {
        if(ppu == nullptr)
        {
            ppu = std::make_shared<Controller::FabricAction::Fabric::Ppu>();
        }
        return ppu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::FabricAction::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ppu != nullptr)
    {
        _children["ppu"] = ppu;
    }

    return _children;
}

void Controller::FabricAction::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::FabricAction::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::FabricAction::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppu")
        return true;
    return false;
}

Controller::FabricAction::Fabric::Ppu::Ppu()
{

    yang_name = "ppu"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::FabricAction::Fabric::Ppu::~Ppu()
{
}

bool Controller::FabricAction::Fabric::Ppu::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Controller::FabricAction::Fabric::Ppu::has_operation() const
{
    return is_set(yfilter);
}

std::string Controller::FabricAction::Fabric::Ppu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/fabric_action/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::FabricAction::Fabric::Ppu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::FabricAction::Fabric::Ppu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::FabricAction::Fabric::Ppu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::FabricAction::Fabric::Ppu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::FabricAction::Fabric::Ppu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::FabricAction::Fabric::Ppu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::FabricAction::Fabric::Ppu::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Controller::CardMgr::CardMgr()
    :
    trace(this, {"buffer"})
    , inventory(std::make_shared<Controller::CardMgr::Inventory>())
    , event_history(std::make_shared<Controller::CardMgr::EventHistory>())
    , notif_history(std::make_shared<Controller::CardMgr::NotifHistory>())
    , oir_history(std::make_shared<Controller::CardMgr::OirHistory>())
    , iofpga(std::make_shared<Controller::CardMgr::Iofpga>())
    , bootloader(std::make_shared<Controller::CardMgr::Bootloader>())
{
    inventory->parent = this;
    event_history->parent = this;
    notif_history->parent = this;
    oir_history->parent = this;
    iofpga->parent = this;
    bootloader->parent = this;

    yang_name = "card_mgr"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::~CardMgr()
{
}

bool Controller::CardMgr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return (inventory !=  nullptr && inventory->has_data())
	|| (event_history !=  nullptr && event_history->has_data())
	|| (notif_history !=  nullptr && notif_history->has_data())
	|| (oir_history !=  nullptr && oir_history->has_data())
	|| (iofpga !=  nullptr && iofpga->has_data())
	|| (bootloader !=  nullptr && bootloader->has_data());
}

bool Controller::CardMgr::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (inventory !=  nullptr && inventory->has_operation())
	|| (event_history !=  nullptr && event_history->has_operation())
	|| (notif_history !=  nullptr && notif_history->has_operation())
	|| (oir_history !=  nullptr && oir_history->has_operation())
	|| (iofpga !=  nullptr && iofpga->has_operation())
	|| (bootloader !=  nullptr && bootloader->has_operation());
}

std::string Controller::CardMgr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_mgr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    if(child_yang_name == "inventory")
    {
        if(inventory == nullptr)
        {
            inventory = std::make_shared<Controller::CardMgr::Inventory>();
        }
        return inventory;
    }

    if(child_yang_name == "event-history")
    {
        if(event_history == nullptr)
        {
            event_history = std::make_shared<Controller::CardMgr::EventHistory>();
        }
        return event_history;
    }

    if(child_yang_name == "notif-history")
    {
        if(notif_history == nullptr)
        {
            notif_history = std::make_shared<Controller::CardMgr::NotifHistory>();
        }
        return notif_history;
    }

    if(child_yang_name == "oir-history")
    {
        if(oir_history == nullptr)
        {
            oir_history = std::make_shared<Controller::CardMgr::OirHistory>();
        }
        return oir_history;
    }

    if(child_yang_name == "iofpga")
    {
        if(iofpga == nullptr)
        {
            iofpga = std::make_shared<Controller::CardMgr::Iofpga>();
        }
        return iofpga;
    }

    if(child_yang_name == "bootloader")
    {
        if(bootloader == nullptr)
        {
            bootloader = std::make_shared<Controller::CardMgr::Bootloader>();
        }
        return bootloader;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(inventory != nullptr)
    {
        _children["inventory"] = inventory;
    }

    if(event_history != nullptr)
    {
        _children["event-history"] = event_history;
    }

    if(notif_history != nullptr)
    {
        _children["notif-history"] = notif_history;
    }

    if(oir_history != nullptr)
    {
        _children["oir-history"] = oir_history;
    }

    if(iofpga != nullptr)
    {
        _children["iofpga"] = iofpga;
    }

    if(bootloader != nullptr)
    {
        _children["bootloader"] = bootloader;
    }

    return _children;
}

void Controller::CardMgr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace" || name == "inventory" || name == "event-history" || name == "notif-history" || name == "oir-history" || name == "iofpga" || name == "bootloader")
        return true;
    return false;
}

Controller::CardMgr::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Trace::~Trace()
{
}

bool Controller::CardMgr::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::CardMgr::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::CardMgr::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::CardMgr::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Trace::Location::~Location()
{
}

bool Controller::CardMgr::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::CardMgr::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::CardMgr::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::CardMgr::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::CardMgr::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::CardMgr::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::CardMgr::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Inventory()
    :
    summary(std::make_shared<Controller::CardMgr::Inventory::Summary>())
    , detail(std::make_shared<Controller::CardMgr::Inventory::Detail>())
{
    summary->parent = this;
    detail->parent = this;

    yang_name = "inventory"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Inventory::~Inventory()
{
}

bool Controller::CardMgr::Inventory::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CardMgr::Inventory::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CardMgr::Inventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::CardMgr::Inventory::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CardMgr::Inventory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Controller::CardMgr::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "detail")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Summary::Summary()
    :
    card_mgr_inv_summary(this, {"location"})
{

    yang_name = "summary"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Inventory::Summary::~Summary()
{
}

bool Controller::CardMgr::Inventory::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card_mgr_inv_summary.len(); index++)
    {
        if(card_mgr_inv_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Inventory::Summary::has_operation() const
{
    for (std::size_t index=0; index<card_mgr_inv_summary.len(); index++)
    {
        if(card_mgr_inv_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Inventory::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Inventory::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_mgr_inv_summary")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Inventory::Summary::CardMgrInvSummary>();
        ent_->parent = this;
        card_mgr_inv_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : card_mgr_inv_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Inventory::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Inventory::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Inventory::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_mgr_inv_summary")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::CardMgrInvSummary()
    :
    location{YType::str, "location"},
    card_mgr_inv_pid_string{YType::str, "card_mgr_inv_PID_string"},
    card_mgr_inv_slot_number{YType::uint32, "card_mgr_inv_slot_number"},
    card_mgr_inv_serial_number{YType::str, "card_mgr_inv_serial_number"},
    card_mgr_inv_hw_version{YType::str, "card_mgr_inv_hw_version"},
    card_mgr_inv_card_state{YType::str, "card_mgr_inv_card_state"}
{

    yang_name = "card_mgr_inv_summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::~CardMgrInvSummary()
{
}

bool Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| card_mgr_inv_pid_string.is_set
	|| card_mgr_inv_slot_number.is_set
	|| card_mgr_inv_serial_number.is_set
	|| card_mgr_inv_hw_version.is_set
	|| card_mgr_inv_card_state.is_set;
}

bool Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(card_mgr_inv_pid_string.yfilter)
	|| ydk::is_set(card_mgr_inv_slot_number.yfilter)
	|| ydk::is_set(card_mgr_inv_serial_number.yfilter)
	|| ydk::is_set(card_mgr_inv_hw_version.yfilter)
	|| ydk::is_set(card_mgr_inv_card_state.yfilter);
}

std::string Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/inventory/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_mgr_inv_summary";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (card_mgr_inv_pid_string.is_set || is_set(card_mgr_inv_pid_string.yfilter)) leaf_name_data.push_back(card_mgr_inv_pid_string.get_name_leafdata());
    if (card_mgr_inv_slot_number.is_set || is_set(card_mgr_inv_slot_number.yfilter)) leaf_name_data.push_back(card_mgr_inv_slot_number.get_name_leafdata());
    if (card_mgr_inv_serial_number.is_set || is_set(card_mgr_inv_serial_number.yfilter)) leaf_name_data.push_back(card_mgr_inv_serial_number.get_name_leafdata());
    if (card_mgr_inv_hw_version.is_set || is_set(card_mgr_inv_hw_version.yfilter)) leaf_name_data.push_back(card_mgr_inv_hw_version.get_name_leafdata());
    if (card_mgr_inv_card_state.is_set || is_set(card_mgr_inv_card_state.yfilter)) leaf_name_data.push_back(card_mgr_inv_card_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_mgr_inv_PID_string")
    {
        card_mgr_inv_pid_string = value;
        card_mgr_inv_pid_string.value_namespace = name_space;
        card_mgr_inv_pid_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_mgr_inv_slot_number")
    {
        card_mgr_inv_slot_number = value;
        card_mgr_inv_slot_number.value_namespace = name_space;
        card_mgr_inv_slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_mgr_inv_serial_number")
    {
        card_mgr_inv_serial_number = value;
        card_mgr_inv_serial_number.value_namespace = name_space;
        card_mgr_inv_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_mgr_inv_hw_version")
    {
        card_mgr_inv_hw_version = value;
        card_mgr_inv_hw_version.value_namespace = name_space;
        card_mgr_inv_hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_mgr_inv_card_state")
    {
        card_mgr_inv_card_state = value;
        card_mgr_inv_card_state.value_namespace = name_space;
        card_mgr_inv_card_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "card_mgr_inv_PID_string")
    {
        card_mgr_inv_pid_string.yfilter = yfilter;
    }
    if(value_path == "card_mgr_inv_slot_number")
    {
        card_mgr_inv_slot_number.yfilter = yfilter;
    }
    if(value_path == "card_mgr_inv_serial_number")
    {
        card_mgr_inv_serial_number.yfilter = yfilter;
    }
    if(value_path == "card_mgr_inv_hw_version")
    {
        card_mgr_inv_hw_version.yfilter = yfilter;
    }
    if(value_path == "card_mgr_inv_card_state")
    {
        card_mgr_inv_card_state.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "card_mgr_inv_PID_string" || name == "card_mgr_inv_slot_number" || name == "card_mgr_inv_serial_number" || name == "card_mgr_inv_hw_version" || name == "card_mgr_inv_card_state")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Detail::Detail()
    :
    card_mgr_inv_detail(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Inventory::Detail::~Detail()
{
}

bool Controller::CardMgr::Inventory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card_mgr_inv_detail.len(); index++)
    {
        if(card_mgr_inv_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Inventory::Detail::has_operation() const
{
    for (std::size_t index=0; index<card_mgr_inv_detail.len(); index++)
    {
        if(card_mgr_inv_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Inventory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Inventory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_mgr_inv_detail")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Inventory::Detail::CardMgrInvDetail>();
        ent_->parent = this;
        card_mgr_inv_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : card_mgr_inv_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Inventory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Inventory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Inventory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_mgr_inv_detail")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetail()
    :
    location{YType::str, "location"}
        ,
    card_mgr_inv_detail_list(std::make_shared<Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList>())
{
    card_mgr_inv_detail_list->parent = this;

    yang_name = "card_mgr_inv_detail"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::~CardMgrInvDetail()
{
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_mgr_inv_detail_list !=  nullptr && card_mgr_inv_detail_list->has_data());
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_mgr_inv_detail_list !=  nullptr && card_mgr_inv_detail_list->has_operation());
}

std::string Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/inventory/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_mgr_inv_detail";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_mgr_inv_detail_list")
    {
        if(card_mgr_inv_detail_list == nullptr)
        {
            card_mgr_inv_detail_list = std::make_shared<Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList>();
        }
        return card_mgr_inv_detail_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_mgr_inv_detail_list != nullptr)
    {
        _children["card_mgr_inv_detail_list"] = card_mgr_inv_detail_list;
    }

    return _children;
}

void Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_mgr_inv_detail_list" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::CardMgrInvDetailList()
    :
    card_mgr_inv_detail_values{YType::str, "card_mgr_inv_detail_values"}
{

    yang_name = "card_mgr_inv_detail_list"; yang_parent_name = "card_mgr_inv_detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::~CardMgrInvDetailList()
{
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_mgr_inv_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::has_operation() const
{
    for (auto const & leaf : card_mgr_inv_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_mgr_inv_detail_values.yfilter);
}

std::string Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_mgr_inv_detail_list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_mgr_inv_detail_values_name_datas = card_mgr_inv_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_mgr_inv_detail_values_name_datas.begin(), card_mgr_inv_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_mgr_inv_detail_values")
    {
        card_mgr_inv_detail_values.append(value);
    }
}

void Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_mgr_inv_detail_values")
    {
        card_mgr_inv_detail_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_mgr_inv_detail_values")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::EventHistory()
    :
    brief(std::make_shared<Controller::CardMgr::EventHistory::Brief>())
    , detail(std::make_shared<Controller::CardMgr::EventHistory::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "event-history"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::~EventHistory()
{
}

bool Controller::CardMgr::EventHistory::has_data() const
{
    if (is_presence_container) return true;
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CardMgr::EventHistory::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CardMgr::EventHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::CardMgr::EventHistory::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CardMgr::EventHistory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief != nullptr)
    {
        _children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Brief::Brief()
    :
    location(this, {"location"})
{

    yang_name = "brief"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::Brief::~Brief()
{
}

bool Controller::CardMgr::EventHistory::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::EventHistory::Brief::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::EventHistory::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/event-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::EventHistory::Brief::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::EventHistory::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::EventHistory::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Brief::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_event_hist_brief(std::make_shared<Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief>())
{
    card_event_hist_brief->parent = this;

    yang_name = "location"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::Brief::Location::~Location()
{
}

bool Controller::CardMgr::EventHistory::Brief::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_event_hist_brief !=  nullptr && card_event_hist_brief->has_data());
}

bool Controller::CardMgr::EventHistory::Brief::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_event_hist_brief !=  nullptr && card_event_hist_brief->has_operation());
}

std::string Controller::CardMgr::EventHistory::Brief::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/event-history/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::Brief::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Brief::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Brief::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_event_hist_brief")
    {
        if(card_event_hist_brief == nullptr)
        {
            card_event_hist_brief = std::make_shared<Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief>();
        }
        return card_event_hist_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Brief::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_event_hist_brief != nullptr)
    {
        _children["card_event_hist_brief"] = card_event_hist_brief;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::Brief::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::EventHistory::Brief::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::EventHistory::Brief::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_brief" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::CardEventHistBrief()
    :
    card_event_hist_brief_values{YType::str, "card_event_hist_brief_values"}
{

    yang_name = "card_event_hist_brief"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::~CardEventHistBrief()
{
}

bool Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_event_hist_brief_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::has_operation() const
{
    for (auto const & leaf : card_event_hist_brief_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_event_hist_brief_values.yfilter);
}

std::string Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_event_hist_brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_event_hist_brief_values_name_datas = card_event_hist_brief_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_event_hist_brief_values_name_datas.begin(), card_event_hist_brief_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_event_hist_brief_values")
    {
        card_event_hist_brief_values.append(value);
    }
}

void Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_event_hist_brief_values")
    {
        card_event_hist_brief_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_brief_values")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::Detail::~Detail()
{
}

bool Controller::CardMgr::EventHistory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::EventHistory::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::EventHistory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/event-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::EventHistory::Detail::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::EventHistory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::EventHistory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_event_hist_detail(std::make_shared<Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail>())
{
    card_event_hist_detail->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::Detail::Location::~Location()
{
}

bool Controller::CardMgr::EventHistory::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_event_hist_detail !=  nullptr && card_event_hist_detail->has_data());
}

bool Controller::CardMgr::EventHistory::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_event_hist_detail !=  nullptr && card_event_hist_detail->has_operation());
}

std::string Controller::CardMgr::EventHistory::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/event-history/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_event_hist_detail")
    {
        if(card_event_hist_detail == nullptr)
        {
            card_event_hist_detail = std::make_shared<Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail>();
        }
        return card_event_hist_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_event_hist_detail != nullptr)
    {
        _children["card_event_hist_detail"] = card_event_hist_detail;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::EventHistory::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::EventHistory::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_detail" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::CardEventHistDetail()
    :
    card_event_hist_detail_values{YType::str, "card_event_hist_detail_values"}
{

    yang_name = "card_event_hist_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::~CardEventHistDetail()
{
}

bool Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_event_hist_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::has_operation() const
{
    for (auto const & leaf : card_event_hist_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_event_hist_detail_values.yfilter);
}

std::string Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_event_hist_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_event_hist_detail_values_name_datas = card_event_hist_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_event_hist_detail_values_name_datas.begin(), card_event_hist_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_event_hist_detail_values")
    {
        card_event_hist_detail_values.append(value);
    }
}

void Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_event_hist_detail_values")
    {
        card_event_hist_detail_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_detail_values")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::NotifHistory()
    :
    brief(std::make_shared<Controller::CardMgr::NotifHistory::Brief>())
    , detail(std::make_shared<Controller::CardMgr::NotifHistory::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "notif-history"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::~NotifHistory()
{
}

bool Controller::CardMgr::NotifHistory::has_data() const
{
    if (is_presence_container) return true;
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CardMgr::NotifHistory::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CardMgr::NotifHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notif-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::CardMgr::NotifHistory::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CardMgr::NotifHistory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief != nullptr)
    {
        _children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::NotifHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::NotifHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Brief::Brief()
    :
    location(this, {"location"})
{

    yang_name = "brief"; yang_parent_name = "notif-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Brief::~Brief()
{
}

bool Controller::CardMgr::NotifHistory::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Brief::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::NotifHistory::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/notif-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::NotifHistory::Brief::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::NotifHistory::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::NotifHistory::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Brief::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_notif_hist_brief(std::make_shared<Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief>())
{
    card_notif_hist_brief->parent = this;

    yang_name = "location"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Brief::Location::~Location()
{
}

bool Controller::CardMgr::NotifHistory::Brief::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_notif_hist_brief !=  nullptr && card_notif_hist_brief->has_data());
}

bool Controller::CardMgr::NotifHistory::Brief::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_notif_hist_brief !=  nullptr && card_notif_hist_brief->has_operation());
}

std::string Controller::CardMgr::NotifHistory::Brief::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/notif-history/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Brief::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Brief::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Brief::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_notif_hist_brief")
    {
        if(card_notif_hist_brief == nullptr)
        {
            card_notif_hist_brief = std::make_shared<Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief>();
        }
        return card_notif_hist_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Brief::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_notif_hist_brief != nullptr)
    {
        _children["card_notif_hist_brief"] = card_notif_hist_brief;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Brief::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::NotifHistory::Brief::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Brief::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_brief" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::CardNotifHistBrief()
    :
    card_notif_hist_brief_values{YType::str, "card_notif_hist_brief_values"}
{

    yang_name = "card_notif_hist_brief"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::~CardNotifHistBrief()
{
}

bool Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_notif_hist_brief_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::has_operation() const
{
    for (auto const & leaf : card_notif_hist_brief_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_notif_hist_brief_values.yfilter);
}

std::string Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_notif_hist_brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_notif_hist_brief_values_name_datas = card_notif_hist_brief_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_notif_hist_brief_values_name_datas.begin(), card_notif_hist_brief_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_notif_hist_brief_values")
    {
        card_notif_hist_brief_values.append(value);
    }
}

void Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_notif_hist_brief_values")
    {
        card_notif_hist_brief_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_brief_values")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "notif-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Detail::~Detail()
{
}

bool Controller::CardMgr::NotifHistory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::NotifHistory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/notif-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::NotifHistory::Detail::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::NotifHistory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::NotifHistory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_notif_hist_detail(std::make_shared<Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail>())
{
    card_notif_hist_detail->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Detail::Location::~Location()
{
}

bool Controller::CardMgr::NotifHistory::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_notif_hist_detail !=  nullptr && card_notif_hist_detail->has_data());
}

bool Controller::CardMgr::NotifHistory::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_notif_hist_detail !=  nullptr && card_notif_hist_detail->has_operation());
}

std::string Controller::CardMgr::NotifHistory::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/notif-history/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_notif_hist_detail")
    {
        if(card_notif_hist_detail == nullptr)
        {
            card_notif_hist_detail = std::make_shared<Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail>();
        }
        return card_notif_hist_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_notif_hist_detail != nullptr)
    {
        _children["card_notif_hist_detail"] = card_notif_hist_detail;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::NotifHistory::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_detail" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::CardNotifHistDetail()
    :
    card_notif_hist_detail_values{YType::str, "card_notif_hist_detail_values"}
{

    yang_name = "card_notif_hist_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::~CardNotifHistDetail()
{
}

bool Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_notif_hist_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::has_operation() const
{
    for (auto const & leaf : card_notif_hist_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_notif_hist_detail_values.yfilter);
}

std::string Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_notif_hist_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_notif_hist_detail_values_name_datas = card_notif_hist_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_notif_hist_detail_values_name_datas.begin(), card_notif_hist_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_notif_hist_detail_values")
    {
        card_notif_hist_detail_values.append(value);
    }
}

void Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_notif_hist_detail_values")
    {
        card_notif_hist_detail_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_detail_values")
        return true;
    return false;
}

Controller::CardMgr::OirHistory::OirHistory()
    :
    rack(this, {"rack"})
{

    yang_name = "oir-history"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::OirHistory::~OirHistory()
{
}

bool Controller::CardMgr::OirHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::OirHistory::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::OirHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::OirHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::OirHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::OirHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::OirHistory::Rack>();
        ent_->parent = this;
        rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::OirHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::OirHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::OirHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::OirHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Controller::CardMgr::OirHistory::Rack::Rack()
    :
    rack{YType::str, "rack"}
        ,
    card_oir_hist(std::make_shared<Controller::CardMgr::OirHistory::Rack::CardOirHist>())
{
    card_oir_hist->parent = this;

    yang_name = "rack"; yang_parent_name = "oir-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::OirHistory::Rack::~Rack()
{
}

bool Controller::CardMgr::OirHistory::Rack::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| (card_oir_hist !=  nullptr && card_oir_hist->has_data());
}

bool Controller::CardMgr::OirHistory::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| (card_oir_hist !=  nullptr && card_oir_hist->has_operation());
}

std::string Controller::CardMgr::OirHistory::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/oir-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::OirHistory::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack, "rack");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::OirHistory::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::OirHistory::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_oir_hist")
    {
        if(card_oir_hist == nullptr)
        {
            card_oir_hist = std::make_shared<Controller::CardMgr::OirHistory::Rack::CardOirHist>();
        }
        return card_oir_hist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::OirHistory::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_oir_hist != nullptr)
    {
        _children["card_oir_hist"] = card_oir_hist;
    }

    return _children;
}

void Controller::CardMgr::OirHistory::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::OirHistory::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool Controller::CardMgr::OirHistory::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_oir_hist" || name == "rack")
        return true;
    return false;
}

Controller::CardMgr::OirHistory::Rack::CardOirHist::CardOirHist()
    :
    card_oir_events{YType::str, "card_oir_events"}
{

    yang_name = "card_oir_hist"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::OirHistory::Rack::CardOirHist::~CardOirHist()
{
}

bool Controller::CardMgr::OirHistory::Rack::CardOirHist::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_oir_events.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::OirHistory::Rack::CardOirHist::has_operation() const
{
    for (auto const & leaf : card_oir_events.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_oir_events.yfilter);
}

std::string Controller::CardMgr::OirHistory::Rack::CardOirHist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_oir_hist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::OirHistory::Rack::CardOirHist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_oir_events_name_datas = card_oir_events.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_oir_events_name_datas.begin(), card_oir_events_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::OirHistory::Rack::CardOirHist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::OirHistory::Rack::CardOirHist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::OirHistory::Rack::CardOirHist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_oir_events")
    {
        card_oir_events.append(value);
    }
}

void Controller::CardMgr::OirHistory::Rack::CardOirHist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_oir_events")
    {
        card_oir_events.yfilter = yfilter;
    }
}

bool Controller::CardMgr::OirHistory::Rack::CardOirHist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_oir_events")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Iofpga()
    :
    register_(std::make_shared<Controller::CardMgr::Iofpga::Register>())
    , flash(std::make_shared<Controller::CardMgr::Iofpga::Flash>())
{
    register_->parent = this;
    flash->parent = this;

    yang_name = "iofpga"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::~Iofpga()
{
}

bool Controller::CardMgr::Iofpga::has_data() const
{
    if (is_presence_container) return true;
    return (register_ !=  nullptr && register_->has_data())
	|| (flash !=  nullptr && flash->has_data());
}

bool Controller::CardMgr::Iofpga::has_operation() const
{
    return is_set(yfilter)
	|| (register_ !=  nullptr && register_->has_operation())
	|| (flash !=  nullptr && flash->has_operation());
}

std::string Controller::CardMgr::Iofpga::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register")
    {
        if(register_ == nullptr)
        {
            register_ = std::make_shared<Controller::CardMgr::Iofpga::Register>();
        }
        return register_;
    }

    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Controller::CardMgr::Iofpga::Flash>();
        }
        return flash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(register_ != nullptr)
    {
        _children["register"] = register_;
    }

    if(flash != nullptr)
    {
        _children["flash"] = flash;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register" || name == "flash")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Register()
    :
    cpu(std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu>())
    , mb(std::make_shared<Controller::CardMgr::Iofpga::Register::Mb>())
    , dc(std::make_shared<Controller::CardMgr::Iofpga::Register::Dc>())
{
    cpu->parent = this;
    mb->parent = this;
    dc->parent = this;

    yang_name = "register"; yang_parent_name = "iofpga"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::~Register()
{
}

bool Controller::CardMgr::Iofpga::Register::has_data() const
{
    if (is_presence_container) return true;
    return (cpu !=  nullptr && cpu->has_data())
	|| (mb !=  nullptr && mb->has_data())
	|| (dc !=  nullptr && dc->has_data());
}

bool Controller::CardMgr::Iofpga::Register::has_operation() const
{
    return is_set(yfilter)
	|| (cpu !=  nullptr && cpu->has_operation())
	|| (mb !=  nullptr && mb->has_operation())
	|| (dc !=  nullptr && dc->has_operation());
}

std::string Controller::CardMgr::Iofpga::Register::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu>();
        }
        return cpu;
    }

    if(child_yang_name == "mb")
    {
        if(mb == nullptr)
        {
            mb = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb>();
        }
        return mb;
    }

    if(child_yang_name == "dc")
    {
        if(dc == nullptr)
        {
            dc = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc>();
        }
        return dc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cpu != nullptr)
    {
        _children["cpu"] = cpu;
    }

    if(mb != nullptr)
    {
        _children["mb"] = mb;
    }

    if(dc != nullptr)
    {
        _children["dc"] = dc;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu" || name == "mb" || name == "dc")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::Cpu()
    :
    register_location(this, {"register_location"})
{

    yang_name = "cpu"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Cpu::~Cpu()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::has_operation() const
{
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation>();
        ent_->parent = this;
        register_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : register_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::RegisterLocation()
    :
    register_location{YType::str, "register_location"}
        ,
    iofpga_block_number(this, {"iofpga_block_num"})
    , iofpga_offset(this, {"hex_offset"})
    , iofpga_address(this, {"start_hex_addr", "end_hex_addr"})
{

    yang_name = "register_location"; yang_parent_name = "cpu"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::~RegisterLocation()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_data())
            return true;
    }
    return register_location.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::has_operation() const
{
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_location.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/register/cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register_location";
    ADD_KEY_TOKEN(register_location, "register_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_location.is_set || is_set(register_location.yfilter)) leaf_name_data.push_back(register_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_block_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber>();
        ent_->parent = this;
        iofpga_block_number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_offset")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset>();
        ent_->parent = this;
        iofpga_offset.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_address")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress>();
        ent_->parent = this;
        iofpga_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_block_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_offset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register_location")
    {
        register_location = value;
        register_location.value_namespace = name_space;
        register_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register_location")
    {
        register_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_block_number" || name == "iofpga_offset" || name == "iofpga_address" || name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaBlockNumber()
    :
    iofpga_block_num{YType::uint32, "iofpga_block_num"},
    block_location{YType::str, "block_location"},
    iofpga_block_nm{YType::str, "iofpga_block_nm"}
        ,
    iofpga_register_number(this, {"index_"})
{

    yang_name = "iofpga_block_number"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::~IofpgaBlockNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_data())
            return true;
    }
    return iofpga_block_num.is_set
	|| block_location.is_set
	|| iofpga_block_nm.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_block_num.yfilter)
	|| ydk::is_set(block_location.yfilter)
	|| ydk::is_set(iofpga_block_nm.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_block_number";
    ADD_KEY_TOKEN(iofpga_block_num, "iofpga_block_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_block_num.is_set || is_set(iofpga_block_num.yfilter)) leaf_name_data.push_back(iofpga_block_num.get_name_leafdata());
    if (block_location.is_set || is_set(block_location.yfilter)) leaf_name_data.push_back(block_location.get_name_leafdata());
    if (iofpga_block_nm.is_set || is_set(iofpga_block_nm.yfilter)) leaf_name_data.push_back(iofpga_block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_register_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber>();
        ent_->parent = this;
        iofpga_register_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_register_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num = value;
        iofpga_block_num.value_namespace = name_space;
        iofpga_block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_location")
    {
        block_location = value;
        block_location.value_namespace = name_space;
        block_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm = value;
        iofpga_block_nm.value_namespace = name_space;
        iofpga_block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num.yfilter = yfilter;
    }
    if(value_path == "block_location")
    {
        block_location.yfilter = yfilter;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_register_number" || name == "iofpga_block_num" || name == "block_location" || name == "iofpga_block_nm")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaRegisterNumber()
    :
    index_{YType::uint32, "index"},
    iofpga_register_name{YType::str, "iofpga_register_name"}
        ,
    iofpga_data(this, {})
{

    yang_name = "iofpga_register_number"; yang_parent_name = "iofpga_block_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::~IofpgaRegisterNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_data())
            return true;
    }
    return index_.is_set
	|| iofpga_register_name.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(iofpga_register_name.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_register_number";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (iofpga_register_name.is_set || is_set(iofpga_register_name.yfilter)) leaf_name_data.push_back(iofpga_register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData>();
        ent_->parent = this;
        iofpga_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name = value;
        iofpga_register_name.value_namespace = name_space;
        iofpga_register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_data" || name == "index" || name == "iofpga_register_name")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::IofpgaData()
    :
    name{YType::str, "name"},
    offset{YType::uint32, "offset"},
    value_{YType::uint32, "value"}
{

    yang_name = "iofpga_data"; yang_parent_name = "iofpga_register_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::~IofpgaData()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offset.is_set
	|| value_.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offset" || name == "value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaOffset()
    :
    hex_offset{YType::str, "hex_offset"}
        ,
    iofpga_reg_offset_data(this, {})
{

    yang_name = "iofpga_offset"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::~IofpgaOffset()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_data())
            return true;
    }
    return hex_offset.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hex_offset.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_offset";
    ADD_KEY_TOKEN(hex_offset, "hex_offset");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_offset.is_set || is_set(hex_offset.yfilter)) leaf_name_data.push_back(hex_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_offset_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData>();
        ent_->parent = this;
        iofpga_reg_offset_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_offset_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex_offset")
    {
        hex_offset = value;
        hex_offset.value_namespace = name_space;
        hex_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex_offset")
    {
        hex_offset.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_offset_data" || name == "hex_offset")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::IofpgaRegOffsetData()
    :
    iofpga_reg_off_addr{YType::uint32, "iofpga_reg_off_addr"},
    reg_off_value{YType::str, "reg_off_value"}
{

    yang_name = "iofpga_reg_offset_data"; yang_parent_name = "iofpga_offset"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::~IofpgaRegOffsetData()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_off_addr.is_set
	|| reg_off_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_off_addr.yfilter)
	|| ydk::is_set(reg_off_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_offset_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_off_addr.is_set || is_set(iofpga_reg_off_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_off_addr.get_name_leafdata());
    if (reg_off_value.is_set || is_set(reg_off_value.yfilter)) leaf_name_data.push_back(reg_off_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr = value;
        iofpga_reg_off_addr.value_namespace = name_space;
        iofpga_reg_off_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value = value;
        reg_off_value.value_namespace = name_space;
        reg_off_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr.yfilter = yfilter;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_off_addr" || name == "reg_off_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaAddress()
    :
    start_hex_addr{YType::str, "start_hex_addr"},
    end_hex_addr{YType::str, "end_hex_addr"}
        ,
    iofpga_reg_range_addr_list(this, {"iofpga_reg_range_addr"})
{

    yang_name = "iofpga_address"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::~IofpgaAddress()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_data())
            return true;
    }
    return start_hex_addr.is_set
	|| end_hex_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_hex_addr.yfilter)
	|| ydk::is_set(end_hex_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_address";
    ADD_KEY_TOKEN(start_hex_addr, "start_hex_addr");
    ADD_KEY_TOKEN(end_hex_addr, "end_hex_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hex_addr.is_set || is_set(start_hex_addr.yfilter)) leaf_name_data.push_back(start_hex_addr.get_name_leafdata());
    if (end_hex_addr.is_set || is_set(end_hex_addr.yfilter)) leaf_name_data.push_back(end_hex_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_range_addr_list")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList>();
        ent_->parent = this;
        iofpga_reg_range_addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_range_addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr = value;
        start_hex_addr.value_namespace = name_space;
        start_hex_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr = value;
        end_hex_addr.value_namespace = name_space;
        end_hex_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr.yfilter = yfilter;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_range_addr_list" || name == "start_hex_addr" || name == "end_hex_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegRangeAddrList()
    :
    iofpga_reg_range_addr{YType::uint32, "iofpga_reg_range_addr"}
        ,
    iofpga_reg_data(this, {})
{

    yang_name = "iofpga_reg_range_addr_list"; yang_parent_name = "iofpga_address"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::~IofpgaRegRangeAddrList()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_data())
            return true;
    }
    return iofpga_reg_range_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_range_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_range_addr_list";
    ADD_KEY_TOKEN(iofpga_reg_range_addr, "iofpga_reg_range_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_range_addr.is_set || is_set(iofpga_reg_range_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_range_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData>();
        ent_->parent = this;
        iofpga_reg_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr = value;
        iofpga_reg_range_addr.value_namespace = name_space;
        iofpga_reg_range_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_data" || name == "iofpga_reg_range_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::IofpgaRegData()
    :
    iofpga_reg_addr{YType::uint32, "iofpga_reg_addr"},
    reg_value{YType::str, "reg_value"}
{

    yang_name = "iofpga_reg_data"; yang_parent_name = "iofpga_reg_range_addr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::~IofpgaRegData()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_addr.is_set
	|| reg_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_addr.yfilter)
	|| ydk::is_set(reg_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_addr.is_set || is_set(iofpga_reg_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_addr.get_name_leafdata());
    if (reg_value.is_set || is_set(reg_value.yfilter)) leaf_name_data.push_back(reg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr = value;
        iofpga_reg_addr.value_namespace = name_space;
        iofpga_reg_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_value")
    {
        reg_value = value;
        reg_value.value_namespace = name_space;
        reg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr.yfilter = yfilter;
    }
    if(value_path == "reg_value")
    {
        reg_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_addr" || name == "reg_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::Mb()
    :
    register_location(this, {"register_location"})
{

    yang_name = "mb"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Mb::~Mb()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Register::Mb::has_operation() const
{
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Mb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation>();
        ent_->parent = this;
        register_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : register_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::Mb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::RegisterLocation()
    :
    register_location{YType::str, "register_location"}
        ,
    iofpga_block_number(this, {"iofpga_block_num"})
    , iofpga_offset(this, {"hex_offset"})
    , iofpga_address(this, {"start_hex_addr", "end_hex_addr"})
{

    yang_name = "register_location"; yang_parent_name = "mb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::~RegisterLocation()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_data())
            return true;
    }
    return register_location.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::has_operation() const
{
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_location.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/register/mb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register_location";
    ADD_KEY_TOKEN(register_location, "register_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_location.is_set || is_set(register_location.yfilter)) leaf_name_data.push_back(register_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_block_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber>();
        ent_->parent = this;
        iofpga_block_number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_offset")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset>();
        ent_->parent = this;
        iofpga_offset.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_address")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress>();
        ent_->parent = this;
        iofpga_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_block_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_offset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register_location")
    {
        register_location = value;
        register_location.value_namespace = name_space;
        register_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register_location")
    {
        register_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_block_number" || name == "iofpga_offset" || name == "iofpga_address" || name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaBlockNumber()
    :
    iofpga_block_num{YType::uint32, "iofpga_block_num"},
    block_location{YType::str, "block_location"},
    iofpga_block_nm{YType::str, "iofpga_block_nm"}
        ,
    iofpga_register_number(this, {"index_"})
{

    yang_name = "iofpga_block_number"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::~IofpgaBlockNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_data())
            return true;
    }
    return iofpga_block_num.is_set
	|| block_location.is_set
	|| iofpga_block_nm.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_block_num.yfilter)
	|| ydk::is_set(block_location.yfilter)
	|| ydk::is_set(iofpga_block_nm.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_block_number";
    ADD_KEY_TOKEN(iofpga_block_num, "iofpga_block_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_block_num.is_set || is_set(iofpga_block_num.yfilter)) leaf_name_data.push_back(iofpga_block_num.get_name_leafdata());
    if (block_location.is_set || is_set(block_location.yfilter)) leaf_name_data.push_back(block_location.get_name_leafdata());
    if (iofpga_block_nm.is_set || is_set(iofpga_block_nm.yfilter)) leaf_name_data.push_back(iofpga_block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_register_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber>();
        ent_->parent = this;
        iofpga_register_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_register_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num = value;
        iofpga_block_num.value_namespace = name_space;
        iofpga_block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_location")
    {
        block_location = value;
        block_location.value_namespace = name_space;
        block_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm = value;
        iofpga_block_nm.value_namespace = name_space;
        iofpga_block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num.yfilter = yfilter;
    }
    if(value_path == "block_location")
    {
        block_location.yfilter = yfilter;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_register_number" || name == "iofpga_block_num" || name == "block_location" || name == "iofpga_block_nm")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaRegisterNumber()
    :
    index_{YType::uint32, "index"},
    iofpga_register_name{YType::str, "iofpga_register_name"}
        ,
    iofpga_data(this, {})
{

    yang_name = "iofpga_register_number"; yang_parent_name = "iofpga_block_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::~IofpgaRegisterNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_data())
            return true;
    }
    return index_.is_set
	|| iofpga_register_name.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(iofpga_register_name.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_register_number";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (iofpga_register_name.is_set || is_set(iofpga_register_name.yfilter)) leaf_name_data.push_back(iofpga_register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData>();
        ent_->parent = this;
        iofpga_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name = value;
        iofpga_register_name.value_namespace = name_space;
        iofpga_register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_data" || name == "index" || name == "iofpga_register_name")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::IofpgaData()
    :
    name{YType::str, "name"},
    offset{YType::uint32, "offset"},
    value_{YType::uint32, "value"}
{

    yang_name = "iofpga_data"; yang_parent_name = "iofpga_register_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::~IofpgaData()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offset.is_set
	|| value_.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offset" || name == "value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaOffset()
    :
    hex_offset{YType::str, "hex_offset"}
        ,
    iofpga_reg_offset_data(this, {})
{

    yang_name = "iofpga_offset"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::~IofpgaOffset()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_data())
            return true;
    }
    return hex_offset.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hex_offset.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_offset";
    ADD_KEY_TOKEN(hex_offset, "hex_offset");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_offset.is_set || is_set(hex_offset.yfilter)) leaf_name_data.push_back(hex_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_offset_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData>();
        ent_->parent = this;
        iofpga_reg_offset_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_offset_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex_offset")
    {
        hex_offset = value;
        hex_offset.value_namespace = name_space;
        hex_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex_offset")
    {
        hex_offset.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_offset_data" || name == "hex_offset")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::IofpgaRegOffsetData()
    :
    iofpga_reg_off_addr{YType::uint32, "iofpga_reg_off_addr"},
    reg_off_value{YType::str, "reg_off_value"}
{

    yang_name = "iofpga_reg_offset_data"; yang_parent_name = "iofpga_offset"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::~IofpgaRegOffsetData()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_off_addr.is_set
	|| reg_off_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_off_addr.yfilter)
	|| ydk::is_set(reg_off_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_offset_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_off_addr.is_set || is_set(iofpga_reg_off_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_off_addr.get_name_leafdata());
    if (reg_off_value.is_set || is_set(reg_off_value.yfilter)) leaf_name_data.push_back(reg_off_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr = value;
        iofpga_reg_off_addr.value_namespace = name_space;
        iofpga_reg_off_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value = value;
        reg_off_value.value_namespace = name_space;
        reg_off_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr.yfilter = yfilter;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_off_addr" || name == "reg_off_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaAddress()
    :
    start_hex_addr{YType::str, "start_hex_addr"},
    end_hex_addr{YType::str, "end_hex_addr"}
        ,
    iofpga_reg_range_addr_list(this, {"iofpga_reg_range_addr"})
{

    yang_name = "iofpga_address"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::~IofpgaAddress()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_data())
            return true;
    }
    return start_hex_addr.is_set
	|| end_hex_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_hex_addr.yfilter)
	|| ydk::is_set(end_hex_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_address";
    ADD_KEY_TOKEN(start_hex_addr, "start_hex_addr");
    ADD_KEY_TOKEN(end_hex_addr, "end_hex_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hex_addr.is_set || is_set(start_hex_addr.yfilter)) leaf_name_data.push_back(start_hex_addr.get_name_leafdata());
    if (end_hex_addr.is_set || is_set(end_hex_addr.yfilter)) leaf_name_data.push_back(end_hex_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_range_addr_list")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList>();
        ent_->parent = this;
        iofpga_reg_range_addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_range_addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr = value;
        start_hex_addr.value_namespace = name_space;
        start_hex_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr = value;
        end_hex_addr.value_namespace = name_space;
        end_hex_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr.yfilter = yfilter;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_range_addr_list" || name == "start_hex_addr" || name == "end_hex_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegRangeAddrList()
    :
    iofpga_reg_range_addr{YType::uint32, "iofpga_reg_range_addr"}
        ,
    iofpga_reg_data(this, {})
{

    yang_name = "iofpga_reg_range_addr_list"; yang_parent_name = "iofpga_address"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::~IofpgaRegRangeAddrList()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_data())
            return true;
    }
    return iofpga_reg_range_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_range_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_range_addr_list";
    ADD_KEY_TOKEN(iofpga_reg_range_addr, "iofpga_reg_range_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_range_addr.is_set || is_set(iofpga_reg_range_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_range_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData>();
        ent_->parent = this;
        iofpga_reg_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr = value;
        iofpga_reg_range_addr.value_namespace = name_space;
        iofpga_reg_range_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_data" || name == "iofpga_reg_range_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::IofpgaRegData()
    :
    iofpga_reg_addr{YType::uint32, "iofpga_reg_addr"},
    reg_value{YType::str, "reg_value"}
{

    yang_name = "iofpga_reg_data"; yang_parent_name = "iofpga_reg_range_addr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::~IofpgaRegData()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_addr.is_set
	|| reg_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_addr.yfilter)
	|| ydk::is_set(reg_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_addr.is_set || is_set(iofpga_reg_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_addr.get_name_leafdata());
    if (reg_value.is_set || is_set(reg_value.yfilter)) leaf_name_data.push_back(reg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr = value;
        iofpga_reg_addr.value_namespace = name_space;
        iofpga_reg_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_value")
    {
        reg_value = value;
        reg_value.value_namespace = name_space;
        reg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr.yfilter = yfilter;
    }
    if(value_path == "reg_value")
    {
        reg_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_addr" || name == "reg_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::Dc()
    :
    register_location(this, {"register_location"})
{

    yang_name = "dc"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Dc::~Dc()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Register::Dc::has_operation() const
{
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Dc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation>();
        ent_->parent = this;
        register_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : register_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::Dc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::RegisterLocation()
    :
    register_location{YType::str, "register_location"}
        ,
    iofpga_block_number(this, {"iofpga_block_num"})
    , iofpga_offset(this, {"hex_offset"})
    , iofpga_address(this, {"start_hex_addr", "end_hex_addr"})
{

    yang_name = "register_location"; yang_parent_name = "dc"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::~RegisterLocation()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_data())
            return true;
    }
    return register_location.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::has_operation() const
{
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_location.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/register/dc/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register_location";
    ADD_KEY_TOKEN(register_location, "register_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_location.is_set || is_set(register_location.yfilter)) leaf_name_data.push_back(register_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_block_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber>();
        ent_->parent = this;
        iofpga_block_number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_offset")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset>();
        ent_->parent = this;
        iofpga_offset.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_address")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress>();
        ent_->parent = this;
        iofpga_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_block_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_offset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register_location")
    {
        register_location = value;
        register_location.value_namespace = name_space;
        register_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register_location")
    {
        register_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_block_number" || name == "iofpga_offset" || name == "iofpga_address" || name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaBlockNumber()
    :
    iofpga_block_num{YType::uint32, "iofpga_block_num"},
    block_location{YType::str, "block_location"},
    iofpga_block_nm{YType::str, "iofpga_block_nm"}
        ,
    iofpga_register_number(this, {"index_"})
{

    yang_name = "iofpga_block_number"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::~IofpgaBlockNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_data())
            return true;
    }
    return iofpga_block_num.is_set
	|| block_location.is_set
	|| iofpga_block_nm.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_block_num.yfilter)
	|| ydk::is_set(block_location.yfilter)
	|| ydk::is_set(iofpga_block_nm.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_block_number";
    ADD_KEY_TOKEN(iofpga_block_num, "iofpga_block_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_block_num.is_set || is_set(iofpga_block_num.yfilter)) leaf_name_data.push_back(iofpga_block_num.get_name_leafdata());
    if (block_location.is_set || is_set(block_location.yfilter)) leaf_name_data.push_back(block_location.get_name_leafdata());
    if (iofpga_block_nm.is_set || is_set(iofpga_block_nm.yfilter)) leaf_name_data.push_back(iofpga_block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_register_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber>();
        ent_->parent = this;
        iofpga_register_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_register_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num = value;
        iofpga_block_num.value_namespace = name_space;
        iofpga_block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_location")
    {
        block_location = value;
        block_location.value_namespace = name_space;
        block_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm = value;
        iofpga_block_nm.value_namespace = name_space;
        iofpga_block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num.yfilter = yfilter;
    }
    if(value_path == "block_location")
    {
        block_location.yfilter = yfilter;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_register_number" || name == "iofpga_block_num" || name == "block_location" || name == "iofpga_block_nm")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaRegisterNumber()
    :
    index_{YType::uint32, "index"},
    iofpga_register_name{YType::str, "iofpga_register_name"}
        ,
    iofpga_data(this, {})
{

    yang_name = "iofpga_register_number"; yang_parent_name = "iofpga_block_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::~IofpgaRegisterNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_data())
            return true;
    }
    return index_.is_set
	|| iofpga_register_name.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(iofpga_register_name.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_register_number";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (iofpga_register_name.is_set || is_set(iofpga_register_name.yfilter)) leaf_name_data.push_back(iofpga_register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData>();
        ent_->parent = this;
        iofpga_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name = value;
        iofpga_register_name.value_namespace = name_space;
        iofpga_register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_data" || name == "index" || name == "iofpga_register_name")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::IofpgaData()
    :
    name{YType::str, "name"},
    offset{YType::uint32, "offset"},
    value_{YType::uint32, "value"}
{

    yang_name = "iofpga_data"; yang_parent_name = "iofpga_register_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::~IofpgaData()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offset.is_set
	|| value_.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offset" || name == "value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaOffset()
    :
    hex_offset{YType::str, "hex_offset"}
        ,
    iofpga_reg_offset_data(this, {})
{

    yang_name = "iofpga_offset"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::~IofpgaOffset()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_data())
            return true;
    }
    return hex_offset.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hex_offset.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_offset";
    ADD_KEY_TOKEN(hex_offset, "hex_offset");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_offset.is_set || is_set(hex_offset.yfilter)) leaf_name_data.push_back(hex_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_offset_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData>();
        ent_->parent = this;
        iofpga_reg_offset_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_offset_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex_offset")
    {
        hex_offset = value;
        hex_offset.value_namespace = name_space;
        hex_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex_offset")
    {
        hex_offset.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_offset_data" || name == "hex_offset")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::IofpgaRegOffsetData()
    :
    iofpga_reg_off_addr{YType::uint32, "iofpga_reg_off_addr"},
    reg_off_value{YType::str, "reg_off_value"}
{

    yang_name = "iofpga_reg_offset_data"; yang_parent_name = "iofpga_offset"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::~IofpgaRegOffsetData()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_off_addr.is_set
	|| reg_off_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_off_addr.yfilter)
	|| ydk::is_set(reg_off_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_offset_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_off_addr.is_set || is_set(iofpga_reg_off_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_off_addr.get_name_leafdata());
    if (reg_off_value.is_set || is_set(reg_off_value.yfilter)) leaf_name_data.push_back(reg_off_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr = value;
        iofpga_reg_off_addr.value_namespace = name_space;
        iofpga_reg_off_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value = value;
        reg_off_value.value_namespace = name_space;
        reg_off_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr.yfilter = yfilter;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_off_addr" || name == "reg_off_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaAddress()
    :
    start_hex_addr{YType::str, "start_hex_addr"},
    end_hex_addr{YType::str, "end_hex_addr"}
        ,
    iofpga_reg_range_addr_list(this, {"iofpga_reg_range_addr"})
{

    yang_name = "iofpga_address"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::~IofpgaAddress()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_data())
            return true;
    }
    return start_hex_addr.is_set
	|| end_hex_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_hex_addr.yfilter)
	|| ydk::is_set(end_hex_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_address";
    ADD_KEY_TOKEN(start_hex_addr, "start_hex_addr");
    ADD_KEY_TOKEN(end_hex_addr, "end_hex_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hex_addr.is_set || is_set(start_hex_addr.yfilter)) leaf_name_data.push_back(start_hex_addr.get_name_leafdata());
    if (end_hex_addr.is_set || is_set(end_hex_addr.yfilter)) leaf_name_data.push_back(end_hex_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_range_addr_list")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList>();
        ent_->parent = this;
        iofpga_reg_range_addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_range_addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr = value;
        start_hex_addr.value_namespace = name_space;
        start_hex_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr = value;
        end_hex_addr.value_namespace = name_space;
        end_hex_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr.yfilter = yfilter;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_range_addr_list" || name == "start_hex_addr" || name == "end_hex_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegRangeAddrList()
    :
    iofpga_reg_range_addr{YType::uint32, "iofpga_reg_range_addr"}
        ,
    iofpga_reg_data(this, {})
{

    yang_name = "iofpga_reg_range_addr_list"; yang_parent_name = "iofpga_address"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::~IofpgaRegRangeAddrList()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_data())
            return true;
    }
    return iofpga_reg_range_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_range_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_range_addr_list";
    ADD_KEY_TOKEN(iofpga_reg_range_addr, "iofpga_reg_range_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_range_addr.is_set || is_set(iofpga_reg_range_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_range_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData>();
        ent_->parent = this;
        iofpga_reg_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr = value;
        iofpga_reg_range_addr.value_namespace = name_space;
        iofpga_reg_range_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_data" || name == "iofpga_reg_range_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::IofpgaRegData()
    :
    iofpga_reg_addr{YType::uint32, "iofpga_reg_addr"},
    reg_value{YType::str, "reg_value"}
{

    yang_name = "iofpga_reg_data"; yang_parent_name = "iofpga_reg_range_addr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::~IofpgaRegData()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_addr.is_set
	|| reg_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_addr.yfilter)
	|| ydk::is_set(reg_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_addr.is_set || is_set(iofpga_reg_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_addr.get_name_leafdata());
    if (reg_value.is_set || is_set(reg_value.yfilter)) leaf_name_data.push_back(reg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr = value;
        iofpga_reg_addr.value_namespace = name_space;
        iofpga_reg_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_value")
    {
        reg_value = value;
        reg_value.value_namespace = name_space;
        reg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr.yfilter = yfilter;
    }
    if(value_path == "reg_value")
    {
        reg_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_addr" || name == "reg_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Flash()
    :
    info(std::make_shared<Controller::CardMgr::Iofpga::Flash::Info>())
    , status(std::make_shared<Controller::CardMgr::Iofpga::Flash::Status>())
{
    info->parent = this;
    status->parent = this;

    yang_name = "flash"; yang_parent_name = "iofpga"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::~Flash()
{
}

bool Controller::CardMgr::Iofpga::Flash::has_data() const
{
    if (is_presence_container) return true;
    return (info !=  nullptr && info->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Controller::CardMgr::Iofpga::Flash::has_operation() const
{
    return is_set(yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Controller::CardMgr::Iofpga::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Controller::CardMgr::Iofpga::Flash::Info>();
        }
        return info;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Controller::CardMgr::Iofpga::Flash::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(info != nullptr)
    {
        _children["info"] = info;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "status")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Info::Info()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "info"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Info::~Info()
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Info::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Info::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Flash::Info::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Flash::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    iofpga_flash_info(std::make_shared<Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo>())
{
    iofpga_flash_info->parent = this;

    yang_name = "flash_location"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (iofpga_flash_info !=  nullptr && iofpga_flash_info->has_data());
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (iofpga_flash_info !=  nullptr && iofpga_flash_info->has_operation());
}

std::string Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/flash/info/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_flash_info")
    {
        if(iofpga_flash_info == nullptr)
        {
            iofpga_flash_info = std::make_shared<Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo>();
        }
        return iofpga_flash_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iofpga_flash_info != nullptr)
    {
        _children["iofpga_flash_info"] = iofpga_flash_info;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_info" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::IofpgaFlashInfo()
    :
    iofpga_flash_info_values{YType::str, "iofpga_flash_info_values"}
{

    yang_name = "iofpga_flash_info"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::~IofpgaFlashInfo()
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : iofpga_flash_info_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::has_operation() const
{
    for (auto const & leaf : iofpga_flash_info_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_flash_info_values.yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_flash_info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto iofpga_flash_info_values_name_datas = iofpga_flash_info_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), iofpga_flash_info_values_name_datas.begin(), iofpga_flash_info_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_flash_info_values")
    {
        iofpga_flash_info_values.append(value);
    }
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_flash_info_values")
    {
        iofpga_flash_info_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_info_values")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Status::Status()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "status"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Status::~Status()
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Status::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Flash::Status::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Flash::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    iofpga_flash_status(std::make_shared<Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus>())
{
    iofpga_flash_status->parent = this;

    yang_name = "flash_location"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (iofpga_flash_status !=  nullptr && iofpga_flash_status->has_data());
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (iofpga_flash_status !=  nullptr && iofpga_flash_status->has_operation());
}

std::string Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/iofpga/flash/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_flash_status")
    {
        if(iofpga_flash_status == nullptr)
        {
            iofpga_flash_status = std::make_shared<Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus>();
        }
        return iofpga_flash_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iofpga_flash_status != nullptr)
    {
        _children["iofpga_flash_status"] = iofpga_flash_status;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_status" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::IofpgaFlashStatus()
    :
    iofpga_flash_status_values{YType::str, "iofpga_flash_status_values"}
{

    yang_name = "iofpga_flash_status"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::~IofpgaFlashStatus()
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : iofpga_flash_status_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::has_operation() const
{
    for (auto const & leaf : iofpga_flash_status_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_flash_status_values.yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_flash_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto iofpga_flash_status_values_name_datas = iofpga_flash_status_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), iofpga_flash_status_values_name_datas.begin(), iofpga_flash_status_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_flash_status_values")
    {
        iofpga_flash_status_values.append(value);
    }
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_flash_status_values")
    {
        iofpga_flash_status_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_status_values")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Bootloader()
    :
    flash(std::make_shared<Controller::CardMgr::Bootloader::Flash>())
{
    flash->parent = this;

    yang_name = "bootloader"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::~Bootloader()
{
}

bool Controller::CardMgr::Bootloader::has_data() const
{
    if (is_presence_container) return true;
    return (flash !=  nullptr && flash->has_data());
}

bool Controller::CardMgr::Bootloader::has_operation() const
{
    return is_set(yfilter)
	|| (flash !=  nullptr && flash->has_operation());
}

std::string Controller::CardMgr::Bootloader::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootloader";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Controller::CardMgr::Bootloader::Flash>();
        }
        return flash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flash != nullptr)
    {
        _children["flash"] = flash;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Flash()
    :
    info(std::make_shared<Controller::CardMgr::Bootloader::Flash::Info>())
    , status(std::make_shared<Controller::CardMgr::Bootloader::Flash::Status>())
{
    info->parent = this;
    status->parent = this;

    yang_name = "flash"; yang_parent_name = "bootloader"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::~Flash()
{
}

bool Controller::CardMgr::Bootloader::Flash::has_data() const
{
    if (is_presence_container) return true;
    return (info !=  nullptr && info->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Controller::CardMgr::Bootloader::Flash::has_operation() const
{
    return is_set(yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Controller::CardMgr::Bootloader::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/bootloader/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Controller::CardMgr::Bootloader::Flash::Info>();
        }
        return info;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Controller::CardMgr::Bootloader::Flash::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(info != nullptr)
    {
        _children["info"] = info;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "status")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Info::Info()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "info"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Info::~Info()
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Info::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Info::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/bootloader/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Bootloader::Flash::Info::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::Flash::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    bootldr_flash_info(std::make_shared<Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo>())
{
    bootldr_flash_info->parent = this;

    yang_name = "flash_location"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (bootldr_flash_info !=  nullptr && bootldr_flash_info->has_data());
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (bootldr_flash_info !=  nullptr && bootldr_flash_info->has_operation());
}

std::string Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/bootloader/flash/info/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootldr_flash_info")
    {
        if(bootldr_flash_info == nullptr)
        {
            bootldr_flash_info = std::make_shared<Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo>();
        }
        return bootldr_flash_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bootldr_flash_info != nullptr)
    {
        _children["bootldr_flash_info"] = bootldr_flash_info;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_info" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::BootldrFlashInfo()
    :
    bootldr_flash_info_values{YType::str, "bootldr_flash_info_values"}
{

    yang_name = "bootldr_flash_info"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::~BootldrFlashInfo()
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : bootldr_flash_info_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::has_operation() const
{
    for (auto const & leaf : bootldr_flash_info_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bootldr_flash_info_values.yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootldr_flash_info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bootldr_flash_info_values_name_datas = bootldr_flash_info_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bootldr_flash_info_values_name_datas.begin(), bootldr_flash_info_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bootldr_flash_info_values")
    {
        bootldr_flash_info_values.append(value);
    }
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bootldr_flash_info_values")
    {
        bootldr_flash_info_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_info_values")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Status::Status()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "status"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Status::~Status()
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Status::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/bootloader/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Bootloader::Flash::Status::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::Flash::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    bootldr_flash_status(std::make_shared<Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus>())
{
    bootldr_flash_status->parent = this;

    yang_name = "flash_location"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (bootldr_flash_status !=  nullptr && bootldr_flash_status->has_data());
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (bootldr_flash_status !=  nullptr && bootldr_flash_status->has_operation());
}

std::string Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/card_mgr/bootloader/flash/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootldr_flash_status")
    {
        if(bootldr_flash_status == nullptr)
        {
            bootldr_flash_status = std::make_shared<Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus>();
        }
        return bootldr_flash_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bootldr_flash_status != nullptr)
    {
        _children["bootldr_flash_status"] = bootldr_flash_status;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_status" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::BootldrFlashStatus()
    :
    bootldr_flash_status_values{YType::str, "bootldr_flash_status_values"}
{

    yang_name = "bootldr_flash_status"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::~BootldrFlashStatus()
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : bootldr_flash_status_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::has_operation() const
{
    for (auto const & leaf : bootldr_flash_status_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bootldr_flash_status_values.yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootldr_flash_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bootldr_flash_status_values_name_datas = bootldr_flash_status_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bootldr_flash_status_values_name_datas.begin(), bootldr_flash_status_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bootldr_flash_status_values")
    {
        bootldr_flash_status_values.append(value);
    }
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bootldr_flash_status_values")
    {
        bootldr_flash_status_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_status_values")
        return true;
    return false;
}


}
}

