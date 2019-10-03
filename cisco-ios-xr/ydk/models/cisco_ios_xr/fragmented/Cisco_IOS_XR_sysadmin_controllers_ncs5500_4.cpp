
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5500_4.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5500_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs5500 {

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::History()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Stats()
    :
    data(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data>())
    , ctrl(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl>())
    , all(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All>())
{
    data->parent = this;
    ctrl->parent = this;
    all->parent = this;

    yang_name = "stats"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::~Stats()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::has_data() const
{
    if (is_presence_container) return true;
    return (data !=  nullptr && data->has_data())
	|| (ctrl !=  nullptr && ctrl->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::has_operation() const
{
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation())
	|| (ctrl !=  nullptr && ctrl->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data>();
        }
        return data;
    }

    if(child_yang_name == "ctrl")
    {
        if(ctrl == nullptr)
        {
            ctrl = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl>();
        }
        return ctrl;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    if(ctrl != nullptr)
    {
        _children["ctrl"] = ctrl;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "ctrl" || name == "all")
        return true;
    return false;
}

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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/sfe/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/sfe/diagshell/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/sfe/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/sfe/register/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/sfe/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/sfe/dump-file/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/sfe/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/sfe/parse/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/sfe_trace/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/sfe_oper/sfe_trace/sfe_driver/" << get_segment_path();
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

Controller::Switch::Switch()
    :
    oper(std::make_shared<Controller::Switch::Oper>())
{
    oper->parent = this;

    yang_name = "switch"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::~Switch()
{
}

bool Controller::Switch::has_data() const
{
    if (is_presence_container) return true;
    return (oper !=  nullptr && oper->has_data());
}

bool Controller::Switch::has_operation() const
{
    return is_set(yfilter)
	|| (oper !=  nullptr && oper->has_operation());
}

std::string Controller::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<Controller::Switch::Oper>();
        }
        return oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oper != nullptr)
    {
        _children["oper"] = oper;
    }

    return _children;
}

void Controller::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oper")
        return true;
    return false;
}

Controller::Switch::Oper::Oper()
    :
    reachable(std::make_shared<Controller::Switch::Oper::Reachable>())
    , summary(std::make_shared<Controller::Switch::Oper::Summary>())
    , statistics(std::make_shared<Controller::Switch::Oper::Statistics>())
    , mac(std::make_shared<Controller::Switch::Oper::Mac>())
    , bridge(std::make_shared<Controller::Switch::Oper::Bridge>())
    , fdb(std::make_shared<Controller::Switch::Oper::Fdb>())
    , vlan(std::make_shared<Controller::Switch::Oper::Vlan>())
    , trace(std::make_shared<Controller::Switch::Oper::Trace>())
    , mgmt_agent(std::make_shared<Controller::Switch::Oper::MgmtAgent>())
    , port_state(std::make_shared<Controller::Switch::Oper::PortState>())
    , trunk(std::make_shared<Controller::Switch::Oper::Trunk>())
{
    reachable->parent = this;
    summary->parent = this;
    statistics->parent = this;
    mac->parent = this;
    bridge->parent = this;
    fdb->parent = this;
    vlan->parent = this;
    trace->parent = this;
    mgmt_agent->parent = this;
    port_state->parent = this;
    trunk->parent = this;

    yang_name = "oper"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::~Oper()
{
}

bool Controller::Switch::Oper::has_data() const
{
    if (is_presence_container) return true;
    return (reachable !=  nullptr && reachable->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (bridge !=  nullptr && bridge->has_data())
	|| (fdb !=  nullptr && fdb->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (trace !=  nullptr && trace->has_data())
	|| (mgmt_agent !=  nullptr && mgmt_agent->has_data())
	|| (port_state !=  nullptr && port_state->has_data())
	|| (trunk !=  nullptr && trunk->has_data());
}

bool Controller::Switch::Oper::has_operation() const
{
    return is_set(yfilter)
	|| (reachable !=  nullptr && reachable->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (fdb !=  nullptr && fdb->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (trace !=  nullptr && trace->has_operation())
	|| (mgmt_agent !=  nullptr && mgmt_agent->has_operation())
	|| (port_state !=  nullptr && port_state->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation());
}

std::string Controller::Switch::Oper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable")
    {
        if(reachable == nullptr)
        {
            reachable = std::make_shared<Controller::Switch::Oper::Reachable>();
        }
        return reachable;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::Switch::Oper::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Switch::Oper::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Controller::Switch::Oper::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Controller::Switch::Oper::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "fdb")
    {
        if(fdb == nullptr)
        {
            fdb = std::make_shared<Controller::Switch::Oper::Fdb>();
        }
        return fdb;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Controller::Switch::Oper::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Controller::Switch::Oper::Trace>();
        }
        return trace;
    }

    if(child_yang_name == "mgmt-agent")
    {
        if(mgmt_agent == nullptr)
        {
            mgmt_agent = std::make_shared<Controller::Switch::Oper::MgmtAgent>();
        }
        return mgmt_agent;
    }

    if(child_yang_name == "port-state")
    {
        if(port_state == nullptr)
        {
            port_state = std::make_shared<Controller::Switch::Oper::PortState>();
        }
        return port_state;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Controller::Switch::Oper::Trunk>();
        }
        return trunk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reachable != nullptr)
    {
        _children["reachable"] = reachable;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(bridge != nullptr)
    {
        _children["bridge"] = bridge;
    }

    if(fdb != nullptr)
    {
        _children["fdb"] = fdb;
    }

    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    if(trace != nullptr)
    {
        _children["trace"] = trace;
    }

    if(mgmt_agent != nullptr)
    {
        _children["mgmt-agent"] = mgmt_agent;
    }

    if(port_state != nullptr)
    {
        _children["port-state"] = port_state;
    }

    if(trunk != nullptr)
    {
        _children["trunk"] = trunk;
    }

    return _children;
}

void Controller::Switch::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable" || name == "summary" || name == "statistics" || name == "mac" || name == "bridge" || name == "fdb" || name == "vlan" || name == "trace" || name == "mgmt-agent" || name == "port-state" || name == "trunk")
        return true;
    return false;
}

Controller::Switch::Oper::Reachable::Reachable()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "reachable"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Reachable::~Reachable()
{
}

bool Controller::Switch::Oper::Reachable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Reachable::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Reachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Reachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Reachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Reachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Reachable::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Reachable::get_children() const
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

void Controller::Switch::Oper::Reachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Reachable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Reachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Reachable::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "reachable"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Reachable::Location::~Location()
{
}

bool Controller::Switch::Oper::Reachable::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Reachable::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Reachable::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/reachable/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Reachable::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Reachable::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Reachable::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Reachable::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Reachable::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Reachable::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Reachable::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Summary::Summary()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "summary"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Summary::~Summary()
{
}

bool Controller::Switch::Oper::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Summary::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Summary::get_children() const
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

void Controller::Switch::Oper::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Summary::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Summary::Location::~Location()
{
}

bool Controller::Switch::Oper::Summary::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Summary::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Summary::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Summary::Location::PortIter>();
        ent_->parent = this;
        port_iter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_iter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Summary::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    phys_state{YType::enumeration, "phys-state"},
    admin_state{YType::enumeration, "admin-state"},
    port_speed{YType::str, "port-speed"},
    protocol_state{YType::enumeration, "protocol-state"},
    forwarding{YType::enumeration, "forwarding"},
    connects_to{YType::str, "connects-to"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Summary::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Summary::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| phys_state.is_set
	|| admin_state.is_set
	|| port_speed.is_set
	|| protocol_state.is_set
	|| forwarding.is_set
	|| connects_to.is_set;
}

bool Controller::Switch::Oper::Summary::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(protocol_state.yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(connects_to.yfilter);
}

std::string Controller::Switch::Oper::Summary::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Summary::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (protocol_state.is_set || is_set(protocol_state.yfilter)) leaf_name_data.push_back(protocol_state.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Summary::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Summary::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Summary::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-state")
    {
        protocol_state = value;
        protocol_state.value_namespace = name_space;
        protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Summary::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "protocol-state")
    {
        protocol_state.yfilter = yfilter;
    }
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Summary::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "phys-state" || name == "admin-state" || name == "port-speed" || name == "protocol-state" || name == "forwarding" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Statistics()
    :
    summary_statistics(std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics>())
    , detail(std::make_shared<Controller::Switch::Oper::Statistics::Detail>())
{
    summary_statistics->parent = this;
    detail->parent = this;

    yang_name = "statistics"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Statistics::~Statistics()
{
}

bool Controller::Switch::Oper::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (summary_statistics !=  nullptr && summary_statistics->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Switch::Oper::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (summary_statistics !=  nullptr && summary_statistics->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Switch::Oper::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-statistics")
    {
        if(summary_statistics == nullptr)
        {
            summary_statistics = std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics>();
        }
        return summary_statistics;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Switch::Oper::Statistics::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary_statistics != nullptr)
    {
        _children["summary-statistics"] = summary_statistics;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Controller::Switch::Oper::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-statistics" || name == "detail")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::SummaryStatistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "summary-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Statistics::SummaryStatistics::~SummaryStatistics()
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::SummaryStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Statistics::SummaryStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Statistics::SummaryStatistics::get_children() const
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

void Controller::Switch::Oper::Statistics::SummaryStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "summary-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/statistics/summary-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter>();
        ent_->parent = this;
        port_iter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_iter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    phys_state{YType::enumeration, "phys-state"},
    state_changes{YType::uint32, "state-changes"},
    sw_sum_tx_packets{YType::uint64, "sw-sum-tx-packets"},
    sw_sum_rx_packets{YType::uint64, "sw-sum-rx-packets"},
    sw_sum_tx_drops_errors{YType::uint64, "sw-sum-tx-drops-errors"},
    sw_sum_rx_drops_errors{YType::uint64, "sw-sum-rx-drops-errors"},
    connects_to{YType::str, "connects-to"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| phys_state.is_set
	|| state_changes.is_set
	|| sw_sum_tx_packets.is_set
	|| sw_sum_rx_packets.is_set
	|| sw_sum_tx_drops_errors.is_set
	|| sw_sum_rx_drops_errors.is_set
	|| connects_to.is_set;
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| ydk::is_set(sw_sum_tx_packets.yfilter)
	|| ydk::is_set(sw_sum_rx_packets.yfilter)
	|| ydk::is_set(sw_sum_tx_drops_errors.yfilter)
	|| ydk::is_set(sw_sum_rx_drops_errors.yfilter)
	|| ydk::is_set(connects_to.yfilter);
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (sw_sum_tx_packets.is_set || is_set(sw_sum_tx_packets.yfilter)) leaf_name_data.push_back(sw_sum_tx_packets.get_name_leafdata());
    if (sw_sum_rx_packets.is_set || is_set(sw_sum_rx_packets.yfilter)) leaf_name_data.push_back(sw_sum_rx_packets.get_name_leafdata());
    if (sw_sum_tx_drops_errors.is_set || is_set(sw_sum_tx_drops_errors.yfilter)) leaf_name_data.push_back(sw_sum_tx_drops_errors.get_name_leafdata());
    if (sw_sum_rx_drops_errors.is_set || is_set(sw_sum_rx_drops_errors.yfilter)) leaf_name_data.push_back(sw_sum_rx_drops_errors.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
        state_changes.value_namespace = name_space;
        state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-tx-packets")
    {
        sw_sum_tx_packets = value;
        sw_sum_tx_packets.value_namespace = name_space;
        sw_sum_tx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-rx-packets")
    {
        sw_sum_rx_packets = value;
        sw_sum_rx_packets.value_namespace = name_space;
        sw_sum_rx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-tx-drops-errors")
    {
        sw_sum_tx_drops_errors = value;
        sw_sum_tx_drops_errors.value_namespace = name_space;
        sw_sum_tx_drops_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-rx-drops-errors")
    {
        sw_sum_rx_drops_errors = value;
        sw_sum_rx_drops_errors.value_namespace = name_space;
        sw_sum_rx_drops_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
    if(value_path == "sw-sum-tx-packets")
    {
        sw_sum_tx_packets.yfilter = yfilter;
    }
    if(value_path == "sw-sum-rx-packets")
    {
        sw_sum_rx_packets.yfilter = yfilter;
    }
    if(value_path == "sw-sum-tx-drops-errors")
    {
        sw_sum_tx_drops_errors.yfilter = yfilter;
    }
    if(value_path == "sw-sum-rx-drops-errors")
    {
        sw_sum_rx_drops_errors.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "phys-state" || name == "state-changes" || name == "sw-sum-tx-packets" || name == "sw-sum-rx-packets" || name == "sw-sum-tx-drops-errors" || name == "sw-sum-rx-drops-errors" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Detail()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "detail"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Statistics::Detail::~Detail()
{
}

bool Controller::Switch::Oper::Statistics::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Statistics::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Statistics::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Statistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Statistics::Detail::get_children() const
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

void Controller::Switch::Oper::Statistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Statistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Statistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Statistics::Detail::Location::~Location()
{
}

bool Controller::Switch::Oper::Statistics::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Statistics::Detail::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/statistics/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Statistics::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location::PortIter>();
        ent_->parent = this;
        port_iter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Statistics::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_iter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Statistics::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    phys_state{YType::enumeration, "phys-state"},
    port_speed{YType::str, "port-speed"},
    connects_to{YType::str, "connects-to"}
        ,
    counters(std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters>())
{
    counters->parent = this;

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| phys_state.is_set
	|| port_speed.is_set
	|| connects_to.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(connects_to.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "port" || name == "phys-state" || name == "port-speed" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::Counters()
    :
    sw_det_rx_ucast_packets{YType::uint64, "sw-det-rx-ucast-packets"},
    sw_det_rx_mcast_packets{YType::uint64, "sw-det-rx-mcast-packets"},
    sw_det_rx_bcast_packets{YType::uint64, "sw-det-rx-bcast-packets"},
    sw_det_rx_flow_control{YType::uint64, "sw-det-rx-flow-control"},
    sw_det_rx_good_octets{YType::uint64, "sw-det-rx-good-octets"},
    sw_det_rx_bad_octets{YType::uint64, "sw-det-rx-bad-octets"},
    sw_det_rx_fifo_overrun{YType::uint64, "sw-det-rx-fifo-overrun"},
    sw_det_rx_undersize{YType::uint64, "sw-det-rx-undersize"},
    sw_det_rx_fragments{YType::uint64, "sw-det-rx-fragments"},
    sw_det_rx_oversize{YType::uint64, "sw-det-rx-oversize"},
    sw_det_rx_jabber{YType::uint64, "sw-det-rx-jabber"},
    sw_det_rx_errors{YType::uint64, "sw-det-rx-errors"},
    sw_det_rx_bad_crc{YType::uint64, "sw-det-rx-bad-crc"},
    sw_det_rx_collisions{YType::uint64, "sw-det-rx-collisions"},
    sw_det_rx_policing_drops{YType::uint64, "sw-det-rx-policing-drops"},
    sw_det_tx_ucast_packets{YType::uint64, "sw-det-tx-ucast-packets"},
    sw_det_tx_mcast_packets{YType::uint64, "sw-det-tx-mcast-packets"},
    sw_det_tx_bcast_packets{YType::uint64, "sw-det-tx-bcast-packets"},
    sw_det_tx_flow_control{YType::uint64, "sw-det-tx-flow-control"},
    sw_det_tx_good_octets{YType::uint64, "sw-det-tx-good-octets"},
    sw_det_tx_deferred{YType::uint64, "sw-det-tx-deferred"},
    sw_det_tx_fifo_unrun{YType::uint64, "sw-det-tx-fifo-unrun"},
    sw_det_tx_mult_collision{YType::uint64, "sw-det-tx-mult-collision"},
    sw_det_tx_excess_collision{YType::uint64, "sw-det-tx-excess-collision"},
    sw_det_tx_late_collisions{YType::uint64, "sw-det-tx-late-collisions"},
    sw_det_tx_policing_drops{YType::uint64, "sw-det-tx-policing-drops"},
    sw_det_txq_drops{YType::uint64, "sw-det-txq-drops"},
    sw_det_rxtx_packets_64{YType::uint64, "sw-det-rxtx-packets-64"},
    sw_det_rxtx_packets_65_127{YType::uint64, "sw-det-rxtx-packets-65-127"},
    sw_det_rxtx_packets_128_255{YType::uint64, "sw-det-rxtx-packets-128-255"},
    sw_det_rxtx_packets_256_511{YType::uint64, "sw-det-rxtx-packets-256-511"},
    sw_det_rxtx_packets_512_1023{YType::uint64, "sw-det-rxtx-packets-512-1023"},
    sw_det_rxtx_packets_1024_max{YType::uint64, "sw-det-rxtx-packets-1024-max"}
{

    yang_name = "counters"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::~Counters()
{
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::has_data() const
{
    if (is_presence_container) return true;
    return sw_det_rx_ucast_packets.is_set
	|| sw_det_rx_mcast_packets.is_set
	|| sw_det_rx_bcast_packets.is_set
	|| sw_det_rx_flow_control.is_set
	|| sw_det_rx_good_octets.is_set
	|| sw_det_rx_bad_octets.is_set
	|| sw_det_rx_fifo_overrun.is_set
	|| sw_det_rx_undersize.is_set
	|| sw_det_rx_fragments.is_set
	|| sw_det_rx_oversize.is_set
	|| sw_det_rx_jabber.is_set
	|| sw_det_rx_errors.is_set
	|| sw_det_rx_bad_crc.is_set
	|| sw_det_rx_collisions.is_set
	|| sw_det_rx_policing_drops.is_set
	|| sw_det_tx_ucast_packets.is_set
	|| sw_det_tx_mcast_packets.is_set
	|| sw_det_tx_bcast_packets.is_set
	|| sw_det_tx_flow_control.is_set
	|| sw_det_tx_good_octets.is_set
	|| sw_det_tx_deferred.is_set
	|| sw_det_tx_fifo_unrun.is_set
	|| sw_det_tx_mult_collision.is_set
	|| sw_det_tx_excess_collision.is_set
	|| sw_det_tx_late_collisions.is_set
	|| sw_det_tx_policing_drops.is_set
	|| sw_det_txq_drops.is_set
	|| sw_det_rxtx_packets_64.is_set
	|| sw_det_rxtx_packets_65_127.is_set
	|| sw_det_rxtx_packets_128_255.is_set
	|| sw_det_rxtx_packets_256_511.is_set
	|| sw_det_rxtx_packets_512_1023.is_set
	|| sw_det_rxtx_packets_1024_max.is_set;
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sw_det_rx_ucast_packets.yfilter)
	|| ydk::is_set(sw_det_rx_mcast_packets.yfilter)
	|| ydk::is_set(sw_det_rx_bcast_packets.yfilter)
	|| ydk::is_set(sw_det_rx_flow_control.yfilter)
	|| ydk::is_set(sw_det_rx_good_octets.yfilter)
	|| ydk::is_set(sw_det_rx_bad_octets.yfilter)
	|| ydk::is_set(sw_det_rx_fifo_overrun.yfilter)
	|| ydk::is_set(sw_det_rx_undersize.yfilter)
	|| ydk::is_set(sw_det_rx_fragments.yfilter)
	|| ydk::is_set(sw_det_rx_oversize.yfilter)
	|| ydk::is_set(sw_det_rx_jabber.yfilter)
	|| ydk::is_set(sw_det_rx_errors.yfilter)
	|| ydk::is_set(sw_det_rx_bad_crc.yfilter)
	|| ydk::is_set(sw_det_rx_collisions.yfilter)
	|| ydk::is_set(sw_det_rx_policing_drops.yfilter)
	|| ydk::is_set(sw_det_tx_ucast_packets.yfilter)
	|| ydk::is_set(sw_det_tx_mcast_packets.yfilter)
	|| ydk::is_set(sw_det_tx_bcast_packets.yfilter)
	|| ydk::is_set(sw_det_tx_flow_control.yfilter)
	|| ydk::is_set(sw_det_tx_good_octets.yfilter)
	|| ydk::is_set(sw_det_tx_deferred.yfilter)
	|| ydk::is_set(sw_det_tx_fifo_unrun.yfilter)
	|| ydk::is_set(sw_det_tx_mult_collision.yfilter)
	|| ydk::is_set(sw_det_tx_excess_collision.yfilter)
	|| ydk::is_set(sw_det_tx_late_collisions.yfilter)
	|| ydk::is_set(sw_det_tx_policing_drops.yfilter)
	|| ydk::is_set(sw_det_txq_drops.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_64.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_65_127.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_128_255.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_256_511.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_512_1023.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_1024_max.yfilter);
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sw_det_rx_ucast_packets.is_set || is_set(sw_det_rx_ucast_packets.yfilter)) leaf_name_data.push_back(sw_det_rx_ucast_packets.get_name_leafdata());
    if (sw_det_rx_mcast_packets.is_set || is_set(sw_det_rx_mcast_packets.yfilter)) leaf_name_data.push_back(sw_det_rx_mcast_packets.get_name_leafdata());
    if (sw_det_rx_bcast_packets.is_set || is_set(sw_det_rx_bcast_packets.yfilter)) leaf_name_data.push_back(sw_det_rx_bcast_packets.get_name_leafdata());
    if (sw_det_rx_flow_control.is_set || is_set(sw_det_rx_flow_control.yfilter)) leaf_name_data.push_back(sw_det_rx_flow_control.get_name_leafdata());
    if (sw_det_rx_good_octets.is_set || is_set(sw_det_rx_good_octets.yfilter)) leaf_name_data.push_back(sw_det_rx_good_octets.get_name_leafdata());
    if (sw_det_rx_bad_octets.is_set || is_set(sw_det_rx_bad_octets.yfilter)) leaf_name_data.push_back(sw_det_rx_bad_octets.get_name_leafdata());
    if (sw_det_rx_fifo_overrun.is_set || is_set(sw_det_rx_fifo_overrun.yfilter)) leaf_name_data.push_back(sw_det_rx_fifo_overrun.get_name_leafdata());
    if (sw_det_rx_undersize.is_set || is_set(sw_det_rx_undersize.yfilter)) leaf_name_data.push_back(sw_det_rx_undersize.get_name_leafdata());
    if (sw_det_rx_fragments.is_set || is_set(sw_det_rx_fragments.yfilter)) leaf_name_data.push_back(sw_det_rx_fragments.get_name_leafdata());
    if (sw_det_rx_oversize.is_set || is_set(sw_det_rx_oversize.yfilter)) leaf_name_data.push_back(sw_det_rx_oversize.get_name_leafdata());
    if (sw_det_rx_jabber.is_set || is_set(sw_det_rx_jabber.yfilter)) leaf_name_data.push_back(sw_det_rx_jabber.get_name_leafdata());
    if (sw_det_rx_errors.is_set || is_set(sw_det_rx_errors.yfilter)) leaf_name_data.push_back(sw_det_rx_errors.get_name_leafdata());
    if (sw_det_rx_bad_crc.is_set || is_set(sw_det_rx_bad_crc.yfilter)) leaf_name_data.push_back(sw_det_rx_bad_crc.get_name_leafdata());
    if (sw_det_rx_collisions.is_set || is_set(sw_det_rx_collisions.yfilter)) leaf_name_data.push_back(sw_det_rx_collisions.get_name_leafdata());
    if (sw_det_rx_policing_drops.is_set || is_set(sw_det_rx_policing_drops.yfilter)) leaf_name_data.push_back(sw_det_rx_policing_drops.get_name_leafdata());
    if (sw_det_tx_ucast_packets.is_set || is_set(sw_det_tx_ucast_packets.yfilter)) leaf_name_data.push_back(sw_det_tx_ucast_packets.get_name_leafdata());
    if (sw_det_tx_mcast_packets.is_set || is_set(sw_det_tx_mcast_packets.yfilter)) leaf_name_data.push_back(sw_det_tx_mcast_packets.get_name_leafdata());
    if (sw_det_tx_bcast_packets.is_set || is_set(sw_det_tx_bcast_packets.yfilter)) leaf_name_data.push_back(sw_det_tx_bcast_packets.get_name_leafdata());
    if (sw_det_tx_flow_control.is_set || is_set(sw_det_tx_flow_control.yfilter)) leaf_name_data.push_back(sw_det_tx_flow_control.get_name_leafdata());
    if (sw_det_tx_good_octets.is_set || is_set(sw_det_tx_good_octets.yfilter)) leaf_name_data.push_back(sw_det_tx_good_octets.get_name_leafdata());
    if (sw_det_tx_deferred.is_set || is_set(sw_det_tx_deferred.yfilter)) leaf_name_data.push_back(sw_det_tx_deferred.get_name_leafdata());
    if (sw_det_tx_fifo_unrun.is_set || is_set(sw_det_tx_fifo_unrun.yfilter)) leaf_name_data.push_back(sw_det_tx_fifo_unrun.get_name_leafdata());
    if (sw_det_tx_mult_collision.is_set || is_set(sw_det_tx_mult_collision.yfilter)) leaf_name_data.push_back(sw_det_tx_mult_collision.get_name_leafdata());
    if (sw_det_tx_excess_collision.is_set || is_set(sw_det_tx_excess_collision.yfilter)) leaf_name_data.push_back(sw_det_tx_excess_collision.get_name_leafdata());
    if (sw_det_tx_late_collisions.is_set || is_set(sw_det_tx_late_collisions.yfilter)) leaf_name_data.push_back(sw_det_tx_late_collisions.get_name_leafdata());
    if (sw_det_tx_policing_drops.is_set || is_set(sw_det_tx_policing_drops.yfilter)) leaf_name_data.push_back(sw_det_tx_policing_drops.get_name_leafdata());
    if (sw_det_txq_drops.is_set || is_set(sw_det_txq_drops.yfilter)) leaf_name_data.push_back(sw_det_txq_drops.get_name_leafdata());
    if (sw_det_rxtx_packets_64.is_set || is_set(sw_det_rxtx_packets_64.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_64.get_name_leafdata());
    if (sw_det_rxtx_packets_65_127.is_set || is_set(sw_det_rxtx_packets_65_127.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_65_127.get_name_leafdata());
    if (sw_det_rxtx_packets_128_255.is_set || is_set(sw_det_rxtx_packets_128_255.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_128_255.get_name_leafdata());
    if (sw_det_rxtx_packets_256_511.is_set || is_set(sw_det_rxtx_packets_256_511.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_256_511.get_name_leafdata());
    if (sw_det_rxtx_packets_512_1023.is_set || is_set(sw_det_rxtx_packets_512_1023.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_512_1023.get_name_leafdata());
    if (sw_det_rxtx_packets_1024_max.is_set || is_set(sw_det_rxtx_packets_1024_max.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_1024_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sw-det-rx-ucast-packets")
    {
        sw_det_rx_ucast_packets = value;
        sw_det_rx_ucast_packets.value_namespace = name_space;
        sw_det_rx_ucast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-mcast-packets")
    {
        sw_det_rx_mcast_packets = value;
        sw_det_rx_mcast_packets.value_namespace = name_space;
        sw_det_rx_mcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-bcast-packets")
    {
        sw_det_rx_bcast_packets = value;
        sw_det_rx_bcast_packets.value_namespace = name_space;
        sw_det_rx_bcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-flow-control")
    {
        sw_det_rx_flow_control = value;
        sw_det_rx_flow_control.value_namespace = name_space;
        sw_det_rx_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-good-octets")
    {
        sw_det_rx_good_octets = value;
        sw_det_rx_good_octets.value_namespace = name_space;
        sw_det_rx_good_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-bad-octets")
    {
        sw_det_rx_bad_octets = value;
        sw_det_rx_bad_octets.value_namespace = name_space;
        sw_det_rx_bad_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-fifo-overrun")
    {
        sw_det_rx_fifo_overrun = value;
        sw_det_rx_fifo_overrun.value_namespace = name_space;
        sw_det_rx_fifo_overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-undersize")
    {
        sw_det_rx_undersize = value;
        sw_det_rx_undersize.value_namespace = name_space;
        sw_det_rx_undersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-fragments")
    {
        sw_det_rx_fragments = value;
        sw_det_rx_fragments.value_namespace = name_space;
        sw_det_rx_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-oversize")
    {
        sw_det_rx_oversize = value;
        sw_det_rx_oversize.value_namespace = name_space;
        sw_det_rx_oversize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-jabber")
    {
        sw_det_rx_jabber = value;
        sw_det_rx_jabber.value_namespace = name_space;
        sw_det_rx_jabber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-errors")
    {
        sw_det_rx_errors = value;
        sw_det_rx_errors.value_namespace = name_space;
        sw_det_rx_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-bad-crc")
    {
        sw_det_rx_bad_crc = value;
        sw_det_rx_bad_crc.value_namespace = name_space;
        sw_det_rx_bad_crc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-collisions")
    {
        sw_det_rx_collisions = value;
        sw_det_rx_collisions.value_namespace = name_space;
        sw_det_rx_collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-policing-drops")
    {
        sw_det_rx_policing_drops = value;
        sw_det_rx_policing_drops.value_namespace = name_space;
        sw_det_rx_policing_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-ucast-packets")
    {
        sw_det_tx_ucast_packets = value;
        sw_det_tx_ucast_packets.value_namespace = name_space;
        sw_det_tx_ucast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-mcast-packets")
    {
        sw_det_tx_mcast_packets = value;
        sw_det_tx_mcast_packets.value_namespace = name_space;
        sw_det_tx_mcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-bcast-packets")
    {
        sw_det_tx_bcast_packets = value;
        sw_det_tx_bcast_packets.value_namespace = name_space;
        sw_det_tx_bcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-flow-control")
    {
        sw_det_tx_flow_control = value;
        sw_det_tx_flow_control.value_namespace = name_space;
        sw_det_tx_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-good-octets")
    {
        sw_det_tx_good_octets = value;
        sw_det_tx_good_octets.value_namespace = name_space;
        sw_det_tx_good_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-deferred")
    {
        sw_det_tx_deferred = value;
        sw_det_tx_deferred.value_namespace = name_space;
        sw_det_tx_deferred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-fifo-unrun")
    {
        sw_det_tx_fifo_unrun = value;
        sw_det_tx_fifo_unrun.value_namespace = name_space;
        sw_det_tx_fifo_unrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-mult-collision")
    {
        sw_det_tx_mult_collision = value;
        sw_det_tx_mult_collision.value_namespace = name_space;
        sw_det_tx_mult_collision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-excess-collision")
    {
        sw_det_tx_excess_collision = value;
        sw_det_tx_excess_collision.value_namespace = name_space;
        sw_det_tx_excess_collision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-late-collisions")
    {
        sw_det_tx_late_collisions = value;
        sw_det_tx_late_collisions.value_namespace = name_space;
        sw_det_tx_late_collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-policing-drops")
    {
        sw_det_tx_policing_drops = value;
        sw_det_tx_policing_drops.value_namespace = name_space;
        sw_det_tx_policing_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-txq-drops")
    {
        sw_det_txq_drops = value;
        sw_det_txq_drops.value_namespace = name_space;
        sw_det_txq_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-64")
    {
        sw_det_rxtx_packets_64 = value;
        sw_det_rxtx_packets_64.value_namespace = name_space;
        sw_det_rxtx_packets_64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-65-127")
    {
        sw_det_rxtx_packets_65_127 = value;
        sw_det_rxtx_packets_65_127.value_namespace = name_space;
        sw_det_rxtx_packets_65_127.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-128-255")
    {
        sw_det_rxtx_packets_128_255 = value;
        sw_det_rxtx_packets_128_255.value_namespace = name_space;
        sw_det_rxtx_packets_128_255.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-256-511")
    {
        sw_det_rxtx_packets_256_511 = value;
        sw_det_rxtx_packets_256_511.value_namespace = name_space;
        sw_det_rxtx_packets_256_511.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-512-1023")
    {
        sw_det_rxtx_packets_512_1023 = value;
        sw_det_rxtx_packets_512_1023.value_namespace = name_space;
        sw_det_rxtx_packets_512_1023.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-1024-max")
    {
        sw_det_rxtx_packets_1024_max = value;
        sw_det_rxtx_packets_1024_max.value_namespace = name_space;
        sw_det_rxtx_packets_1024_max.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sw-det-rx-ucast-packets")
    {
        sw_det_rx_ucast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-mcast-packets")
    {
        sw_det_rx_mcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-bcast-packets")
    {
        sw_det_rx_bcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-flow-control")
    {
        sw_det_rx_flow_control.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-good-octets")
    {
        sw_det_rx_good_octets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-bad-octets")
    {
        sw_det_rx_bad_octets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-fifo-overrun")
    {
        sw_det_rx_fifo_overrun.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-undersize")
    {
        sw_det_rx_undersize.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-fragments")
    {
        sw_det_rx_fragments.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-oversize")
    {
        sw_det_rx_oversize.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-jabber")
    {
        sw_det_rx_jabber.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-errors")
    {
        sw_det_rx_errors.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-bad-crc")
    {
        sw_det_rx_bad_crc.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-collisions")
    {
        sw_det_rx_collisions.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-policing-drops")
    {
        sw_det_rx_policing_drops.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-ucast-packets")
    {
        sw_det_tx_ucast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-mcast-packets")
    {
        sw_det_tx_mcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-bcast-packets")
    {
        sw_det_tx_bcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-flow-control")
    {
        sw_det_tx_flow_control.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-good-octets")
    {
        sw_det_tx_good_octets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-deferred")
    {
        sw_det_tx_deferred.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-fifo-unrun")
    {
        sw_det_tx_fifo_unrun.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-mult-collision")
    {
        sw_det_tx_mult_collision.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-excess-collision")
    {
        sw_det_tx_excess_collision.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-late-collisions")
    {
        sw_det_tx_late_collisions.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-policing-drops")
    {
        sw_det_tx_policing_drops.yfilter = yfilter;
    }
    if(value_path == "sw-det-txq-drops")
    {
        sw_det_txq_drops.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-64")
    {
        sw_det_rxtx_packets_64.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-65-127")
    {
        sw_det_rxtx_packets_65_127.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-128-255")
    {
        sw_det_rxtx_packets_128_255.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-256-511")
    {
        sw_det_rxtx_packets_256_511.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-512-1023")
    {
        sw_det_rxtx_packets_512_1023.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-1024-max")
    {
        sw_det_rxtx_packets_1024_max.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sw-det-rx-ucast-packets" || name == "sw-det-rx-mcast-packets" || name == "sw-det-rx-bcast-packets" || name == "sw-det-rx-flow-control" || name == "sw-det-rx-good-octets" || name == "sw-det-rx-bad-octets" || name == "sw-det-rx-fifo-overrun" || name == "sw-det-rx-undersize" || name == "sw-det-rx-fragments" || name == "sw-det-rx-oversize" || name == "sw-det-rx-jabber" || name == "sw-det-rx-errors" || name == "sw-det-rx-bad-crc" || name == "sw-det-rx-collisions" || name == "sw-det-rx-policing-drops" || name == "sw-det-tx-ucast-packets" || name == "sw-det-tx-mcast-packets" || name == "sw-det-tx-bcast-packets" || name == "sw-det-tx-flow-control" || name == "sw-det-tx-good-octets" || name == "sw-det-tx-deferred" || name == "sw-det-tx-fifo-unrun" || name == "sw-det-tx-mult-collision" || name == "sw-det-tx-excess-collision" || name == "sw-det-tx-late-collisions" || name == "sw-det-tx-policing-drops" || name == "sw-det-txq-drops" || name == "sw-det-rxtx-packets-64" || name == "sw-det-rxtx-packets-65-127" || name == "sw-det-rxtx-packets-128-255" || name == "sw-det-rxtx-packets-256-511" || name == "sw-det-rxtx-packets-512-1023" || name == "sw-det-rxtx-packets-1024-max")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::Mac()
    :
    mac_statistics(std::make_shared<Controller::Switch::Oper::Mac::MacStatistics>())
{
    mac_statistics->parent = this;

    yang_name = "mac"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mac::~Mac()
{
}

bool Controller::Switch::Oper::Mac::has_data() const
{
    if (is_presence_container) return true;
    return (mac_statistics !=  nullptr && mac_statistics->has_data());
}

bool Controller::Switch::Oper::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (mac_statistics !=  nullptr && mac_statistics->has_operation());
}

std::string Controller::Switch::Oper::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-statistics")
    {
        if(mac_statistics == nullptr)
        {
            mac_statistics = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics>();
        }
        return mac_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_statistics != nullptr)
    {
        _children["mac-statistics"] = mac_statistics;
    }

    return _children;
}

void Controller::Switch::Oper::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-statistics")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::MacStatistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "mac-statistics"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mac::MacStatistics::~MacStatistics()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Mac::MacStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mac::MacStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Mac::MacStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Mac::MacStatistics::get_children() const
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

void Controller::Switch::Oper::Mac::MacStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mac::MacStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "mac-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mac::MacStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/mac/mac-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Mac::MacStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter>();
        ent_->parent = this;
        port_iter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Mac::MacStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_iter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
        ,
    mac_entry(this, {"id"})
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_entry.len(); index++)
    {
        if(mac_entry[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<mac_entry.len(); index++)
    {
        if(mac_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-entry")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry>();
        ent_->parent = this;
        mac_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-entry" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::MacEntry()
    :
    id{YType::uint32, "id"},
    base_reg{YType::str, "base-reg"},
    desc{YType::str, "desc"},
    value_{YType::str, "value"}
{

    yang_name = "mac-entry"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::~MacEntry()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| base_reg.is_set
	|| desc.is_set
	|| value_.is_set;
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(base_reg.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-entry";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (base_reg.is_set || is_set(base_reg.yfilter)) leaf_name_data.push_back(base_reg.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-reg")
    {
        base_reg = value;
        base_reg.value_namespace = name_space;
        base_reg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "base-reg")
    {
        base_reg.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "base-reg" || name == "desc" || name == "value")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Bridge()
    :
    statistics(std::make_shared<Controller::Switch::Oper::Bridge::Statistics>())
{
    statistics->parent = this;

    yang_name = "bridge"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Bridge::~Bridge()
{
}

bool Controller::Switch::Oper::Bridge::has_data() const
{
    if (is_presence_container) return true;
    return (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Switch::Oper::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Switch::Oper::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Switch::Oper::Bridge::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Controller::Switch::Oper::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Statistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "statistics"; yang_parent_name = "bridge"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Bridge::Statistics::~Statistics()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Bridge::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/bridge/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Bridge::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Bridge::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Bridge::Statistics::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Bridge::Statistics::get_children() const
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

void Controller::Switch::Oper::Bridge::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Bridge::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Bridge::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    ingress_set_id(this, {"ingress_set"})
    , egress_set_id(this, {"egress_set"})
{

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Bridge::Statistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ingress_set_id.len(); index++)
    {
        if(ingress_set_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<egress_set_id.len(); index++)
    {
        if(egress_set_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::has_operation() const
{
    for (std::size_t index=0; index<ingress_set_id.len(); index++)
    {
        if(ingress_set_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<egress_set_id.len(); index++)
    {
        if(egress_set_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/bridge/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Bridge::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-set-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId>();
        ent_->parent = this;
        ingress_set_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "egress-set-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId>();
        ent_->parent = this;
        egress_set_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Bridge::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ingress_set_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : egress_set_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Bridge::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Bridge::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-set-id" || name == "egress-set-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::IngressSetId()
    :
    ingress_set{YType::uint32, "ingress-set"},
    ingress_set_name{YType::str, "ingress-set-name"},
    ingress_frames{YType::uint64, "ingress-frames"},
    ingress_vlan_discards{YType::uint64, "ingress-vlan-discards"},
    ingress_security_discards{YType::uint64, "ingress-security-discards"},
    ingress_other_discards{YType::uint64, "ingress-other-discards"}
{

    yang_name = "ingress-set-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::~IngressSetId()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::has_data() const
{
    if (is_presence_container) return true;
    return ingress_set.is_set
	|| ingress_set_name.is_set
	|| ingress_frames.is_set
	|| ingress_vlan_discards.is_set
	|| ingress_security_discards.is_set
	|| ingress_other_discards.is_set;
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ingress_set.yfilter)
	|| ydk::is_set(ingress_set_name.yfilter)
	|| ydk::is_set(ingress_frames.yfilter)
	|| ydk::is_set(ingress_vlan_discards.yfilter)
	|| ydk::is_set(ingress_security_discards.yfilter)
	|| ydk::is_set(ingress_other_discards.yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-set-id";
    ADD_KEY_TOKEN(ingress_set, "ingress-set");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress_set.is_set || is_set(ingress_set.yfilter)) leaf_name_data.push_back(ingress_set.get_name_leafdata());
    if (ingress_set_name.is_set || is_set(ingress_set_name.yfilter)) leaf_name_data.push_back(ingress_set_name.get_name_leafdata());
    if (ingress_frames.is_set || is_set(ingress_frames.yfilter)) leaf_name_data.push_back(ingress_frames.get_name_leafdata());
    if (ingress_vlan_discards.is_set || is_set(ingress_vlan_discards.yfilter)) leaf_name_data.push_back(ingress_vlan_discards.get_name_leafdata());
    if (ingress_security_discards.is_set || is_set(ingress_security_discards.yfilter)) leaf_name_data.push_back(ingress_security_discards.get_name_leafdata());
    if (ingress_other_discards.is_set || is_set(ingress_other_discards.yfilter)) leaf_name_data.push_back(ingress_other_discards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress-set")
    {
        ingress_set = value;
        ingress_set.value_namespace = name_space;
        ingress_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-set-name")
    {
        ingress_set_name = value;
        ingress_set_name.value_namespace = name_space;
        ingress_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-frames")
    {
        ingress_frames = value;
        ingress_frames.value_namespace = name_space;
        ingress_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-vlan-discards")
    {
        ingress_vlan_discards = value;
        ingress_vlan_discards.value_namespace = name_space;
        ingress_vlan_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-security-discards")
    {
        ingress_security_discards = value;
        ingress_security_discards.value_namespace = name_space;
        ingress_security_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-other-discards")
    {
        ingress_other_discards = value;
        ingress_other_discards.value_namespace = name_space;
        ingress_other_discards.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress-set")
    {
        ingress_set.yfilter = yfilter;
    }
    if(value_path == "ingress-set-name")
    {
        ingress_set_name.yfilter = yfilter;
    }
    if(value_path == "ingress-frames")
    {
        ingress_frames.yfilter = yfilter;
    }
    if(value_path == "ingress-vlan-discards")
    {
        ingress_vlan_discards.yfilter = yfilter;
    }
    if(value_path == "ingress-security-discards")
    {
        ingress_security_discards.yfilter = yfilter;
    }
    if(value_path == "ingress-other-discards")
    {
        ingress_other_discards.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-set" || name == "ingress-set-name" || name == "ingress-frames" || name == "ingress-vlan-discards" || name == "ingress-security-discards" || name == "ingress-other-discards")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::EgressSetId()
    :
    egress_set{YType::uint32, "egress-set"},
    egress_set_name{YType::str, "egress-set-name"},
    egress_ucast_frames{YType::uint64, "egress-ucast-frames"},
    egress_mcast_frames{YType::uint64, "egress-mcast-frames"},
    egress_bcast_frames{YType::uint64, "egress-bcast-frames"},
    egress_discarded_frames{YType::uint64, "egress-discarded-frames"},
    egress_txq_congestion{YType::uint64, "egress-txq-congestion"},
    egress_ctrl_packets{YType::uint64, "egress-ctrl-packets"},
    egress_other_drops{YType::uint64, "egress-other-drops"}
{

    yang_name = "egress-set-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::~EgressSetId()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::has_data() const
{
    if (is_presence_container) return true;
    return egress_set.is_set
	|| egress_set_name.is_set
	|| egress_ucast_frames.is_set
	|| egress_mcast_frames.is_set
	|| egress_bcast_frames.is_set
	|| egress_discarded_frames.is_set
	|| egress_txq_congestion.is_set
	|| egress_ctrl_packets.is_set
	|| egress_other_drops.is_set;
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress_set.yfilter)
	|| ydk::is_set(egress_set_name.yfilter)
	|| ydk::is_set(egress_ucast_frames.yfilter)
	|| ydk::is_set(egress_mcast_frames.yfilter)
	|| ydk::is_set(egress_bcast_frames.yfilter)
	|| ydk::is_set(egress_discarded_frames.yfilter)
	|| ydk::is_set(egress_txq_congestion.yfilter)
	|| ydk::is_set(egress_ctrl_packets.yfilter)
	|| ydk::is_set(egress_other_drops.yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-set-id";
    ADD_KEY_TOKEN(egress_set, "egress-set");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_set.is_set || is_set(egress_set.yfilter)) leaf_name_data.push_back(egress_set.get_name_leafdata());
    if (egress_set_name.is_set || is_set(egress_set_name.yfilter)) leaf_name_data.push_back(egress_set_name.get_name_leafdata());
    if (egress_ucast_frames.is_set || is_set(egress_ucast_frames.yfilter)) leaf_name_data.push_back(egress_ucast_frames.get_name_leafdata());
    if (egress_mcast_frames.is_set || is_set(egress_mcast_frames.yfilter)) leaf_name_data.push_back(egress_mcast_frames.get_name_leafdata());
    if (egress_bcast_frames.is_set || is_set(egress_bcast_frames.yfilter)) leaf_name_data.push_back(egress_bcast_frames.get_name_leafdata());
    if (egress_discarded_frames.is_set || is_set(egress_discarded_frames.yfilter)) leaf_name_data.push_back(egress_discarded_frames.get_name_leafdata());
    if (egress_txq_congestion.is_set || is_set(egress_txq_congestion.yfilter)) leaf_name_data.push_back(egress_txq_congestion.get_name_leafdata());
    if (egress_ctrl_packets.is_set || is_set(egress_ctrl_packets.yfilter)) leaf_name_data.push_back(egress_ctrl_packets.get_name_leafdata());
    if (egress_other_drops.is_set || is_set(egress_other_drops.yfilter)) leaf_name_data.push_back(egress_other_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-set")
    {
        egress_set = value;
        egress_set.value_namespace = name_space;
        egress_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-set-name")
    {
        egress_set_name = value;
        egress_set_name.value_namespace = name_space;
        egress_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-ucast-frames")
    {
        egress_ucast_frames = value;
        egress_ucast_frames.value_namespace = name_space;
        egress_ucast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-mcast-frames")
    {
        egress_mcast_frames = value;
        egress_mcast_frames.value_namespace = name_space;
        egress_mcast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-bcast-frames")
    {
        egress_bcast_frames = value;
        egress_bcast_frames.value_namespace = name_space;
        egress_bcast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-discarded-frames")
    {
        egress_discarded_frames = value;
        egress_discarded_frames.value_namespace = name_space;
        egress_discarded_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-txq-congestion")
    {
        egress_txq_congestion = value;
        egress_txq_congestion.value_namespace = name_space;
        egress_txq_congestion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-ctrl-packets")
    {
        egress_ctrl_packets = value;
        egress_ctrl_packets.value_namespace = name_space;
        egress_ctrl_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-other-drops")
    {
        egress_other_drops = value;
        egress_other_drops.value_namespace = name_space;
        egress_other_drops.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-set")
    {
        egress_set.yfilter = yfilter;
    }
    if(value_path == "egress-set-name")
    {
        egress_set_name.yfilter = yfilter;
    }
    if(value_path == "egress-ucast-frames")
    {
        egress_ucast_frames.yfilter = yfilter;
    }
    if(value_path == "egress-mcast-frames")
    {
        egress_mcast_frames.yfilter = yfilter;
    }
    if(value_path == "egress-bcast-frames")
    {
        egress_bcast_frames.yfilter = yfilter;
    }
    if(value_path == "egress-discarded-frames")
    {
        egress_discarded_frames.yfilter = yfilter;
    }
    if(value_path == "egress-txq-congestion")
    {
        egress_txq_congestion.yfilter = yfilter;
    }
    if(value_path == "egress-ctrl-packets")
    {
        egress_ctrl_packets.yfilter = yfilter;
    }
    if(value_path == "egress-other-drops")
    {
        egress_other_drops.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-set" || name == "egress-set-name" || name == "egress-ucast-frames" || name == "egress-mcast-frames" || name == "egress-bcast-frames" || name == "egress-discarded-frames" || name == "egress-txq-congestion" || name == "egress-ctrl-packets" || name == "egress-other-drops")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Fdb()
    :
    vlan(std::make_shared<Controller::Switch::Oper::Fdb::Vlan>())
    , mac(std::make_shared<Controller::Switch::Oper::Fdb::Mac>())
    , port(std::make_shared<Controller::Switch::Oper::Fdb::Port>())
    , statistics(std::make_shared<Controller::Switch::Oper::Fdb::Statistics>())
    , switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon>())
{
    vlan->parent = this;
    mac->parent = this;
    port->parent = this;
    statistics->parent = this;
    switch_fdb_common->parent = this;

    yang_name = "fdb"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::~Fdb()
{
}

bool Controller::Switch::Oper::Fdb::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Controller::Switch::Oper::Fdb::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Controller::Switch::Oper::Fdb::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Controller::Switch::Oper::Fdb::Port>();
        }
        return port;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Switch::Oper::Fdb::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(switch_fdb_common != nullptr)
    {
        _children["switch-fdb-common"] = switch_fdb_common;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "mac" || name == "port" || name == "statistics" || name == "switch-fdb-common")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::Vlan()
    :
    vlan_iter(this, {"vlan"})
{

    yang_name = "vlan"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Vlan::~Vlan()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_iter.len(); index++)
    {
        if(vlan_iter[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_iter.len(); index++)
    {
        if(vlan_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-iter")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter>();
        ent_->parent = this;
        vlan_iter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_iter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-iter")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::VlanIter()
    :
    vlan{YType::uint16, "vlan"}
        ,
    switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon>())
{
    switch_fdb_common->parent = this;

    yang_name = "vlan-iter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::~VlanIter()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/fdb/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-iter";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switch_fdb_common != nullptr)
    {
        _children["switch-fdb-common"] = switch_fdb_common;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-fdb-common" || name == "vlan")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::SwitchFdbCommon()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "switch-fdb-common"; yang_parent_name = "vlan-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_children() const
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

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
        ,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fdb_block != nullptr)
    {
        _children["fdb-block"] = fdb_block;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
    :
    fdb_entry(this, {"fdb_index"})
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        ent_->parent = this;
        fdb_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fdb_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry";
    ADD_KEY_TOKEN(fdb_index, "fdb-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::Mac()
    :
    mac_iter(this, {"mac"})
{

    yang_name = "mac"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Mac::~Mac()
{
}

bool Controller::Switch::Oper::Fdb::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_iter.len(); index++)
    {
        if(mac_iter[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Mac::has_operation() const
{
    for (std::size_t index=0; index<mac_iter.len(); index++)
    {
        if(mac_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-iter")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter>();
        ent_->parent = this;
        mac_iter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_iter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-iter")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::MacIter()
    :
    mac{YType::str, "mac"}
        ,
    switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon>())
{
    switch_fdb_common->parent = this;

    yang_name = "mac-iter"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Mac::MacIter::~MacIter()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/fdb/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iter";
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switch_fdb_common != nullptr)
    {
        _children["switch-fdb-common"] = switch_fdb_common;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-fdb-common" || name == "mac")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::SwitchFdbCommon()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "switch-fdb-common"; yang_parent_name = "mac-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_children() const
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

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
        ,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fdb_block != nullptr)
    {
        _children["fdb-block"] = fdb_block;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
    :
    fdb_entry(this, {"fdb_index"})
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        ent_->parent = this;
        fdb_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fdb_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry";
    ADD_KEY_TOKEN(fdb_index, "fdb-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::Port()
    :
    port_iter(this, {"port"})
{

    yang_name = "port"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Port::~Port()
{
}

bool Controller::Switch::Oper::Fdb::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Port::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter>();
        ent_->parent = this;
        port_iter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_iter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::PortIter()
    :
    port{YType::int32, "port"}
        ,
    switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon>())
{
    switch_fdb_common->parent = this;

    yang_name = "port-iter"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Port::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/fdb/port/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Port::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switch_fdb_common != nullptr)
    {
        _children["switch-fdb-common"] = switch_fdb_common;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Port::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-fdb-common" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::SwitchFdbCommon()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "switch-fdb-common"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_children() const
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

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
        ,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fdb_block != nullptr)
    {
        _children["fdb-block"] = fdb_block;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
    :
    fdb_entry(this, {"fdb_index"})
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        ent_->parent = this;
        fdb_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fdb_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry";
    ADD_KEY_TOKEN(fdb_index, "fdb-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Statistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "statistics"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Statistics::~Statistics()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Statistics::get_children() const
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

void Controller::Switch::Oper::Fdb::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    counter_info(std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo>())
    , core_id(this, {"core"})
{
    counter_info->parent = this;

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Statistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_id.len(); index++)
    {
        if(core_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| (counter_info !=  nullptr && counter_info->has_data());
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::has_operation() const
{
    for (std::size_t index=0; index<core_id.len(); index++)
    {
        if(core_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| (counter_info !=  nullptr && counter_info->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/fdb/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter-info")
    {
        if(counter_info == nullptr)
        {
            counter_info = std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo>();
        }
        return counter_info;
    }

    if(child_yang_name == "core-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location::CoreId>();
        ent_->parent = this;
        core_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter_info != nullptr)
    {
        _children["counter-info"] = counter_info;
    }

    count_ = 0;
    for (auto ent_ : core_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-info" || name == "core-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::CounterInfo()
    :
    fdb_shadow_entries{YType::uint32, "fdb-shadow-entries"},
    fdb_max_shadow_entries{YType::uint32, "fdb-max-shadow-entries"},
    fdb_max_hash_chain{YType::uint32, "fdb-max-hash-chain"},
    fdb_entries_added{YType::uint32, "fdb-entries-added"},
    fdb_entries_deleted{YType::uint32, "fdb-entries-deleted"},
    fdb_entries_updated{YType::uint32, "fdb-entries-updated"},
    fdb_flushes{YType::uint32, "fdb-flushes"},
    fdb_address_updates{YType::uint32, "fdb-address-updates"},
    fdb_new_addresses{YType::uint32, "fdb-new-addresses"},
    fdb_aged_updates{YType::uint32, "fdb-aged-updates"},
    fdb_transplant_updates{YType::uint32, "fdb-transplant-updates"},
    fdb_forwarding_updates{YType::uint32, "fdb-forwarding-updates"},
    fdb_address_insert_errors{YType::uint32, "fdb-address-insert-errors"},
    fdb_address_update_errors{YType::uint32, "fdb-address-update-errors"},
    fdb_memory_errors{YType::uint32, "fdb-memory-errors"},
    fdb_allocation_errors{YType::uint32, "fdb-allocation-errors"},
    fdb_address_updates_queued{YType::uint32, "fdb-address-updates-queued"},
    fdb_address_queue_full{YType::enumeration, "fdb-address-queue-full"},
    fdb_forwarding_updates_queued{YType::uint32, "fdb-forwarding-updates-queued"},
    fdb_forwarding_queue_full{YType::enumeration, "fdb-forwarding-queue-full"}
{

    yang_name = "counter-info"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::~CounterInfo()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::has_data() const
{
    if (is_presence_container) return true;
    return fdb_shadow_entries.is_set
	|| fdb_max_shadow_entries.is_set
	|| fdb_max_hash_chain.is_set
	|| fdb_entries_added.is_set
	|| fdb_entries_deleted.is_set
	|| fdb_entries_updated.is_set
	|| fdb_flushes.is_set
	|| fdb_address_updates.is_set
	|| fdb_new_addresses.is_set
	|| fdb_aged_updates.is_set
	|| fdb_transplant_updates.is_set
	|| fdb_forwarding_updates.is_set
	|| fdb_address_insert_errors.is_set
	|| fdb_address_update_errors.is_set
	|| fdb_memory_errors.is_set
	|| fdb_allocation_errors.is_set
	|| fdb_address_updates_queued.is_set
	|| fdb_address_queue_full.is_set
	|| fdb_forwarding_updates_queued.is_set
	|| fdb_forwarding_queue_full.is_set;
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fdb_shadow_entries.yfilter)
	|| ydk::is_set(fdb_max_shadow_entries.yfilter)
	|| ydk::is_set(fdb_max_hash_chain.yfilter)
	|| ydk::is_set(fdb_entries_added.yfilter)
	|| ydk::is_set(fdb_entries_deleted.yfilter)
	|| ydk::is_set(fdb_entries_updated.yfilter)
	|| ydk::is_set(fdb_flushes.yfilter)
	|| ydk::is_set(fdb_address_updates.yfilter)
	|| ydk::is_set(fdb_new_addresses.yfilter)
	|| ydk::is_set(fdb_aged_updates.yfilter)
	|| ydk::is_set(fdb_transplant_updates.yfilter)
	|| ydk::is_set(fdb_forwarding_updates.yfilter)
	|| ydk::is_set(fdb_address_insert_errors.yfilter)
	|| ydk::is_set(fdb_address_update_errors.yfilter)
	|| ydk::is_set(fdb_memory_errors.yfilter)
	|| ydk::is_set(fdb_allocation_errors.yfilter)
	|| ydk::is_set(fdb_address_updates_queued.yfilter)
	|| ydk::is_set(fdb_address_queue_full.yfilter)
	|| ydk::is_set(fdb_forwarding_updates_queued.yfilter)
	|| ydk::is_set(fdb_forwarding_queue_full.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_shadow_entries.is_set || is_set(fdb_shadow_entries.yfilter)) leaf_name_data.push_back(fdb_shadow_entries.get_name_leafdata());
    if (fdb_max_shadow_entries.is_set || is_set(fdb_max_shadow_entries.yfilter)) leaf_name_data.push_back(fdb_max_shadow_entries.get_name_leafdata());
    if (fdb_max_hash_chain.is_set || is_set(fdb_max_hash_chain.yfilter)) leaf_name_data.push_back(fdb_max_hash_chain.get_name_leafdata());
    if (fdb_entries_added.is_set || is_set(fdb_entries_added.yfilter)) leaf_name_data.push_back(fdb_entries_added.get_name_leafdata());
    if (fdb_entries_deleted.is_set || is_set(fdb_entries_deleted.yfilter)) leaf_name_data.push_back(fdb_entries_deleted.get_name_leafdata());
    if (fdb_entries_updated.is_set || is_set(fdb_entries_updated.yfilter)) leaf_name_data.push_back(fdb_entries_updated.get_name_leafdata());
    if (fdb_flushes.is_set || is_set(fdb_flushes.yfilter)) leaf_name_data.push_back(fdb_flushes.get_name_leafdata());
    if (fdb_address_updates.is_set || is_set(fdb_address_updates.yfilter)) leaf_name_data.push_back(fdb_address_updates.get_name_leafdata());
    if (fdb_new_addresses.is_set || is_set(fdb_new_addresses.yfilter)) leaf_name_data.push_back(fdb_new_addresses.get_name_leafdata());
    if (fdb_aged_updates.is_set || is_set(fdb_aged_updates.yfilter)) leaf_name_data.push_back(fdb_aged_updates.get_name_leafdata());
    if (fdb_transplant_updates.is_set || is_set(fdb_transplant_updates.yfilter)) leaf_name_data.push_back(fdb_transplant_updates.get_name_leafdata());
    if (fdb_forwarding_updates.is_set || is_set(fdb_forwarding_updates.yfilter)) leaf_name_data.push_back(fdb_forwarding_updates.get_name_leafdata());
    if (fdb_address_insert_errors.is_set || is_set(fdb_address_insert_errors.yfilter)) leaf_name_data.push_back(fdb_address_insert_errors.get_name_leafdata());
    if (fdb_address_update_errors.is_set || is_set(fdb_address_update_errors.yfilter)) leaf_name_data.push_back(fdb_address_update_errors.get_name_leafdata());
    if (fdb_memory_errors.is_set || is_set(fdb_memory_errors.yfilter)) leaf_name_data.push_back(fdb_memory_errors.get_name_leafdata());
    if (fdb_allocation_errors.is_set || is_set(fdb_allocation_errors.yfilter)) leaf_name_data.push_back(fdb_allocation_errors.get_name_leafdata());
    if (fdb_address_updates_queued.is_set || is_set(fdb_address_updates_queued.yfilter)) leaf_name_data.push_back(fdb_address_updates_queued.get_name_leafdata());
    if (fdb_address_queue_full.is_set || is_set(fdb_address_queue_full.yfilter)) leaf_name_data.push_back(fdb_address_queue_full.get_name_leafdata());
    if (fdb_forwarding_updates_queued.is_set || is_set(fdb_forwarding_updates_queued.yfilter)) leaf_name_data.push_back(fdb_forwarding_updates_queued.get_name_leafdata());
    if (fdb_forwarding_queue_full.is_set || is_set(fdb_forwarding_queue_full.yfilter)) leaf_name_data.push_back(fdb_forwarding_queue_full.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-shadow-entries")
    {
        fdb_shadow_entries = value;
        fdb_shadow_entries.value_namespace = name_space;
        fdb_shadow_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-max-shadow-entries")
    {
        fdb_max_shadow_entries = value;
        fdb_max_shadow_entries.value_namespace = name_space;
        fdb_max_shadow_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-max-hash-chain")
    {
        fdb_max_hash_chain = value;
        fdb_max_hash_chain.value_namespace = name_space;
        fdb_max_hash_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-entries-added")
    {
        fdb_entries_added = value;
        fdb_entries_added.value_namespace = name_space;
        fdb_entries_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-entries-deleted")
    {
        fdb_entries_deleted = value;
        fdb_entries_deleted.value_namespace = name_space;
        fdb_entries_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-entries-updated")
    {
        fdb_entries_updated = value;
        fdb_entries_updated.value_namespace = name_space;
        fdb_entries_updated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-flushes")
    {
        fdb_flushes = value;
        fdb_flushes.value_namespace = name_space;
        fdb_flushes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-updates")
    {
        fdb_address_updates = value;
        fdb_address_updates.value_namespace = name_space;
        fdb_address_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-new-addresses")
    {
        fdb_new_addresses = value;
        fdb_new_addresses.value_namespace = name_space;
        fdb_new_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-aged-updates")
    {
        fdb_aged_updates = value;
        fdb_aged_updates.value_namespace = name_space;
        fdb_aged_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-transplant-updates")
    {
        fdb_transplant_updates = value;
        fdb_transplant_updates.value_namespace = name_space;
        fdb_transplant_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-forwarding-updates")
    {
        fdb_forwarding_updates = value;
        fdb_forwarding_updates.value_namespace = name_space;
        fdb_forwarding_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-insert-errors")
    {
        fdb_address_insert_errors = value;
        fdb_address_insert_errors.value_namespace = name_space;
        fdb_address_insert_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-update-errors")
    {
        fdb_address_update_errors = value;
        fdb_address_update_errors.value_namespace = name_space;
        fdb_address_update_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-memory-errors")
    {
        fdb_memory_errors = value;
        fdb_memory_errors.value_namespace = name_space;
        fdb_memory_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-allocation-errors")
    {
        fdb_allocation_errors = value;
        fdb_allocation_errors.value_namespace = name_space;
        fdb_allocation_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-updates-queued")
    {
        fdb_address_updates_queued = value;
        fdb_address_updates_queued.value_namespace = name_space;
        fdb_address_updates_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-queue-full")
    {
        fdb_address_queue_full = value;
        fdb_address_queue_full.value_namespace = name_space;
        fdb_address_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-forwarding-updates-queued")
    {
        fdb_forwarding_updates_queued = value;
        fdb_forwarding_updates_queued.value_namespace = name_space;
        fdb_forwarding_updates_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-forwarding-queue-full")
    {
        fdb_forwarding_queue_full = value;
        fdb_forwarding_queue_full.value_namespace = name_space;
        fdb_forwarding_queue_full.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-shadow-entries")
    {
        fdb_shadow_entries.yfilter = yfilter;
    }
    if(value_path == "fdb-max-shadow-entries")
    {
        fdb_max_shadow_entries.yfilter = yfilter;
    }
    if(value_path == "fdb-max-hash-chain")
    {
        fdb_max_hash_chain.yfilter = yfilter;
    }
    if(value_path == "fdb-entries-added")
    {
        fdb_entries_added.yfilter = yfilter;
    }
    if(value_path == "fdb-entries-deleted")
    {
        fdb_entries_deleted.yfilter = yfilter;
    }
    if(value_path == "fdb-entries-updated")
    {
        fdb_entries_updated.yfilter = yfilter;
    }
    if(value_path == "fdb-flushes")
    {
        fdb_flushes.yfilter = yfilter;
    }
    if(value_path == "fdb-address-updates")
    {
        fdb_address_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-new-addresses")
    {
        fdb_new_addresses.yfilter = yfilter;
    }
    if(value_path == "fdb-aged-updates")
    {
        fdb_aged_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-transplant-updates")
    {
        fdb_transplant_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-forwarding-updates")
    {
        fdb_forwarding_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-address-insert-errors")
    {
        fdb_address_insert_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-address-update-errors")
    {
        fdb_address_update_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-memory-errors")
    {
        fdb_memory_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-allocation-errors")
    {
        fdb_allocation_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-address-updates-queued")
    {
        fdb_address_updates_queued.yfilter = yfilter;
    }
    if(value_path == "fdb-address-queue-full")
    {
        fdb_address_queue_full.yfilter = yfilter;
    }
    if(value_path == "fdb-forwarding-updates-queued")
    {
        fdb_forwarding_updates_queued.yfilter = yfilter;
    }
    if(value_path == "fdb-forwarding-queue-full")
    {
        fdb_forwarding_queue_full.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-shadow-entries" || name == "fdb-max-shadow-entries" || name == "fdb-max-hash-chain" || name == "fdb-entries-added" || name == "fdb-entries-deleted" || name == "fdb-entries-updated" || name == "fdb-flushes" || name == "fdb-address-updates" || name == "fdb-new-addresses" || name == "fdb-aged-updates" || name == "fdb-transplant-updates" || name == "fdb-forwarding-updates" || name == "fdb-address-insert-errors" || name == "fdb-address-update-errors" || name == "fdb-memory-errors" || name == "fdb-allocation-errors" || name == "fdb-address-updates-queued" || name == "fdb-address-queue-full" || name == "fdb-forwarding-updates-queued" || name == "fdb-forwarding-queue-full")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::CoreId()
    :
    core{YType::int32, "core"},
    core_entries{YType::uint32, "core-entries"},
    core_static_entries{YType::uint32, "core-static-entries"}
{

    yang_name = "core-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::~CoreId()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::has_data() const
{
    if (is_presence_container) return true;
    return core.is_set
	|| core_entries.is_set
	|| core_static_entries.is_set;
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(core_entries.yfilter)
	|| ydk::is_set(core_static_entries.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-id";
    ADD_KEY_TOKEN(core, "core");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (core_entries.is_set || is_set(core_entries.yfilter)) leaf_name_data.push_back(core_entries.get_name_leafdata());
    if (core_static_entries.is_set || is_set(core_static_entries.yfilter)) leaf_name_data.push_back(core_static_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-entries")
    {
        core_entries = value;
        core_entries.value_namespace = name_space;
        core_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-static-entries")
    {
        core_static_entries = value;
        core_static_entries.value_namespace = name_space;
        core_static_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "core-entries")
    {
        core_entries.yfilter = yfilter;
    }
    if(value_path == "core-static-entries")
    {
        core_static_entries.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core" || name == "core-entries" || name == "core-static-entries")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::SwitchFdbCommon()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "switch-fdb-common"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_children() const
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

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
        ,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/fdb/switch-fdb-common/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fdb_block != nullptr)
    {
        _children["fdb-block"] = fdb_block;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
    :
    fdb_entry(this, {"fdb_index"})
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        ent_->parent = this;
        fdb_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fdb_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry";
    ADD_KEY_TOKEN(fdb_index, "fdb-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Vlan()
    :
    information(std::make_shared<Controller::Switch::Oper::Vlan::Information>())
    , membership(std::make_shared<Controller::Switch::Oper::Vlan::Membership>())
{
    information->parent = this;
    membership->parent = this;

    yang_name = "vlan"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::~Vlan()
{
}

bool Controller::Switch::Oper::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return (information !=  nullptr && information->has_data())
	|| (membership !=  nullptr && membership->has_data());
}

bool Controller::Switch::Oper::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation())
	|| (membership !=  nullptr && membership->has_operation());
}

std::string Controller::Switch::Oper::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Controller::Switch::Oper::Vlan::Information>();
        }
        return information;
    }

    if(child_yang_name == "membership")
    {
        if(membership == nullptr)
        {
            membership = std::make_shared<Controller::Switch::Oper::Vlan::Membership>();
        }
        return membership;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    if(membership != nullptr)
    {
        _children["membership"] = membership;
    }

    return _children;
}

void Controller::Switch::Oper::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "membership")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Information()
    :
    location(this, {"rack", "card", "switch_id"})
    , summary(std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary>())
{
    summary->parent = this;

    yang_name = "information"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Information::~Information()
{
}

bool Controller::Switch::Oper::Vlan::Information::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (summary !=  nullptr && summary->has_data());
}

bool Controller::Switch::Oper::Vlan::Information::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Controller::Switch::Oper::Vlan::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Vlan::Information::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::Information::get_children() const
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

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void Controller::Switch::Oper::Vlan::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "summary")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
        ,
    sdr_id(this, {"sdr"})
{

    yang_name = "location"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Information::Location::~Location()
{
}

bool Controller::Switch::Oper::Vlan::Information::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Location::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/vlan/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::Information::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Vlan::Information::Location::SdrId>();
        ent_->parent = this;
        sdr_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::Information::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sdr_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Vlan::Information::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"}
        ,
    vlan_id(this, {"vlan"})
{

    yang_name = "sdr-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id";
    ADD_KEY_TOKEN(sdr, "sdr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId>();
        ent_->parent = this;
        vlan_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "sdr" || name == "esd-sdr-name")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"},
    vlan_hex{YType::str, "vlan-hex"},
    vlan_use{YType::str, "vlan-use"}
{

    yang_name = "vlan-id"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| vlan_hex.is_set
	|| vlan_use.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(vlan_hex.yfilter)
	|| ydk::is_set(vlan_use.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vlan_hex.is_set || is_set(vlan_hex.yfilter)) leaf_name_data.push_back(vlan_hex.get_name_leafdata());
    if (vlan_use.is_set || is_set(vlan_use.yfilter)) leaf_name_data.push_back(vlan_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex = value;
        vlan_hex.value_namespace = name_space;
        vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-use")
    {
        vlan_use = value;
        vlan_use.value_namespace = name_space;
        vlan_use.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex.yfilter = yfilter;
    }
    if(value_path == "vlan-use")
    {
        vlan_use.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "vlan-hex" || name == "vlan-use")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Summary::Summary()
    :
    sdr_id(this, {"sdr"})
{

    yang_name = "summary"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Information::Summary::~Summary()
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::Information::Summary::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/vlan/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::Information::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary::SdrId>();
        ent_->parent = this;
        sdr_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::Information::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sdr_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Vlan::Information::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Information::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"}
        ,
    vlan_id(this, {"vlan"})
{

    yang_name = "sdr-id"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/vlan/information/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id";
    ADD_KEY_TOKEN(sdr, "sdr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId>();
        ent_->parent = this;
        vlan_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "sdr" || name == "esd-sdr-name")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"},
    vlan_hex{YType::str, "vlan-hex"},
    vlan_use{YType::str, "vlan-use"}
{

    yang_name = "vlan-id"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| vlan_hex.is_set
	|| vlan_use.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(vlan_hex.yfilter)
	|| ydk::is_set(vlan_use.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vlan_hex.is_set || is_set(vlan_hex.yfilter)) leaf_name_data.push_back(vlan_hex.get_name_leafdata());
    if (vlan_use.is_set || is_set(vlan_use.yfilter)) leaf_name_data.push_back(vlan_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex = value;
        vlan_hex.value_namespace = name_space;
        vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-use")
    {
        vlan_use = value;
        vlan_use.value_namespace = name_space;
        vlan_use.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex.yfilter = yfilter;
    }
    if(value_path == "vlan-use")
    {
        vlan_use.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "vlan-hex" || name == "vlan-use")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Membership::Membership()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "membership"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Membership::~Membership()
{
}

bool Controller::Switch::Oper::Vlan::Membership::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::Membership::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::Membership::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Membership::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "membership";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Membership::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::Membership::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Vlan::Membership::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::Membership::get_children() const
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

void Controller::Switch::Oper::Vlan::Membership::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Membership::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Membership::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Membership::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    vlan_id(this, {"vlan"})
{

    yang_name = "location"; yang_parent_name = "membership"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Membership::Location::~Location()
{
}

bool Controller::Switch::Oper::Vlan::Membership::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Vlan::Membership::Location::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Membership::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/vlan/membership/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Membership::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Membership::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::Membership::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Vlan::Membership::Location::VlanId>();
        ent_->parent = this;
        vlan_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::Membership::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Vlan::Membership::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Membership::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Membership::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Membership::Location::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"},
    vlan_hex{YType::str, "vlan-hex"},
    port{YType::uint8, "port"}
{

    yang_name = "vlan-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Membership::Location::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Membership::Location::VlanId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return vlan.is_set
	|| vlan_hex.is_set;
}

bool Controller::Switch::Oper::Vlan::Membership::Location::VlanId::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(vlan_hex.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vlan_hex.is_set || is_set(vlan_hex.yfilter)) leaf_name_data.push_back(vlan_hex.get_name_leafdata());

    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Vlan::Membership::Location::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex = value;
        vlan_hex.value_namespace = name_space;
        vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Controller::Switch::Oper::Vlan::Membership::Location::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Membership::Location::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "vlan-hex" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Trace()
    :
    location(this, {"location_str"})
{

    yang_name = "trace"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Trace::~Trace()
{
}

bool Controller::Switch::Oper::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::get_children() const
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

void Controller::Switch::Oper::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::Location()
    :
    location_str{YType::str, "location_str"}
        ,
    esd(std::make_shared<Controller::Switch::Oper::Trace::Location::Esd>())
    , esd_epc_sw(std::make_shared<Controller::Switch::Oper::Trace::Location::EsdEPCSW>())
    , esd_eobc_sw(std::make_shared<Controller::Switch::Oper::Trace::Location::EsdEOBCSW>())
{
    esd->parent = this;
    esd_epc_sw->parent = this;
    esd_eobc_sw->parent = this;

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Trace::Location::~Location()
{
}

bool Controller::Switch::Oper::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_str.is_set
	|| (esd !=  nullptr && esd->has_data())
	|| (esd_epc_sw !=  nullptr && esd_epc_sw->has_data())
	|| (esd_eobc_sw !=  nullptr && esd_eobc_sw->has_data());
}

bool Controller::Switch::Oper::Trace::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_str.yfilter)
	|| (esd !=  nullptr && esd->has_operation())
	|| (esd_epc_sw !=  nullptr && esd_epc_sw->has_operation())
	|| (esd_eobc_sw !=  nullptr && esd_eobc_sw->has_operation());
}

std::string Controller::Switch::Oper::Trace::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_str, "location_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_str.is_set || is_set(location_str.yfilter)) leaf_name_data.push_back(location_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esd")
    {
        if(esd == nullptr)
        {
            esd = std::make_shared<Controller::Switch::Oper::Trace::Location::Esd>();
        }
        return esd;
    }

    if(child_yang_name == "esd-EPC-SW")
    {
        if(esd_epc_sw == nullptr)
        {
            esd_epc_sw = std::make_shared<Controller::Switch::Oper::Trace::Location::EsdEPCSW>();
        }
        return esd_epc_sw;
    }

    if(child_yang_name == "esd-EOBC-SW")
    {
        if(esd_eobc_sw == nullptr)
        {
            esd_eobc_sw = std::make_shared<Controller::Switch::Oper::Trace::Location::EsdEOBCSW>();
        }
        return esd_eobc_sw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(esd != nullptr)
    {
        _children["esd"] = esd;
    }

    if(esd_epc_sw != nullptr)
    {
        _children["esd-EPC-SW"] = esd_epc_sw;
    }

    if(esd_eobc_sw != nullptr)
    {
        _children["esd-EOBC-SW"] = esd_eobc_sw;
    }

    return _children;
}

void Controller::Switch::Oper::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_str")
    {
        location_str = value;
        location_str.value_namespace = name_space;
        location_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_str")
    {
        location_str.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd" || name == "esd-EPC-SW" || name == "esd-EOBC-SW" || name == "location_str")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::Esd::Esd()
    :
    trace(this, {"buffer"})
{

    yang_name = "esd"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::Esd::~Esd()
{
}

bool Controller::Switch::Oper::Trace::Location::Esd::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Trace::Location::Esd::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::Esd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::Esd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::Esd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trace::Location::Esd::Trace_>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::Esd::get_children() const
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

void Controller::Switch::Oper::Trace::Location::Esd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Trace::Location::Esd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Trace::Location::Esd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::Esd::Trace_::Trace_()
    :
    buffer{YType::str, "buffer"}
        ,
    all_options(this, {"option"})
{

    yang_name = "trace"; yang_parent_name = "esd"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::Esd::Trace_::~Trace_()
{
}

bool Controller::Switch::Oper::Trace::Location::Esd::Trace_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::Trace::Location::Esd::Trace_::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::Esd::Trace_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::Esd::Trace_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::Esd::Trace_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::Esd::Trace_::get_children() const
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

void Controller::Switch::Oper::Trace::Location::Esd::Trace_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trace::Location::Esd::Trace_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trace::Location::Esd::Trace_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::get_children() const
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

void Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trace::Location::Esd::Trace_::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::EsdEPCSW::EsdEPCSW()
    :
    trace(this, {"buffer"})
{

    yang_name = "esd-EPC-SW"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::EsdEPCSW::~EsdEPCSW()
{
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::EsdEPCSW::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd-EPC-SW";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::EsdEPCSW::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::EsdEPCSW::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::EsdEPCSW::get_children() const
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

void Controller::Switch::Oper::Trace::Location::EsdEPCSW::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Trace::Location::EsdEPCSW::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::Trace_()
    :
    buffer{YType::str, "buffer"}
        ,
    all_options(this, {"option"})
{

    yang_name = "trace"; yang_parent_name = "esd-EPC-SW"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::~Trace_()
{
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::get_children() const
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

void Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::get_children() const
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

void Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trace::Location::EsdEPCSW::Trace_::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::EsdEOBCSW::EsdEOBCSW()
    :
    trace(this, {"buffer"})
{

    yang_name = "esd-EOBC-SW"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::EsdEOBCSW::~EsdEOBCSW()
{
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::EsdEOBCSW::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd-EOBC-SW";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::EsdEOBCSW::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::EsdEOBCSW::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::EsdEOBCSW::get_children() const
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

void Controller::Switch::Oper::Trace::Location::EsdEOBCSW::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Trace::Location::EsdEOBCSW::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::Trace_()
    :
    buffer{YType::str, "buffer"}
        ,
    all_options(this, {"option"})
{

    yang_name = "trace"; yang_parent_name = "esd-EOBC-SW"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::~Trace_()
{
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::get_children() const
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

void Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::get_children() const
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

void Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trace::Location::EsdEOBCSW::Trace_::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::MgmtAgent()
    :
    esdma(std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma>())
    , connections(std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections>())
{
    esdma->parent = this;
    connections->parent = this;

    yang_name = "mgmt-agent"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::~MgmtAgent()
{
}

bool Controller::Switch::Oper::MgmtAgent::has_data() const
{
    if (is_presence_container) return true;
    return (esdma !=  nullptr && esdma->has_data())
	|| (connections !=  nullptr && connections->has_data());
}

bool Controller::Switch::Oper::MgmtAgent::has_operation() const
{
    return is_set(yfilter)
	|| (esdma !=  nullptr && esdma->has_operation())
	|| (connections !=  nullptr && connections->has_operation());
}

std::string Controller::Switch::Oper::MgmtAgent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esdma")
    {
        if(esdma == nullptr)
        {
            esdma = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma>();
        }
        return esdma;
    }

    if(child_yang_name == "connections")
    {
        if(connections == nullptr)
        {
            connections = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections>();
        }
        return connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(esdma != nullptr)
    {
        _children["esdma"] = esdma;
    }

    if(connections != nullptr)
    {
        _children["connections"] = connections;
    }

    return _children;
}

void Controller::Switch::Oper::MgmtAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::MgmtAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::MgmtAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esdma" || name == "connections")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Esdma()
    :
    trace(this, {"buffer"})
{

    yang_name = "esdma"; yang_parent_name = "mgmt-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Esdma::~Esdma()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/mgmt-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esdma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::Esdma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::get_children() const
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

void Controller::Switch::Oper::MgmtAgent::Esdma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::MgmtAgent::Esdma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "esdma"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::~Trace()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/mgmt-agent/esdma/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_children() const
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

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::~Location()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_children() const
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

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_children() const
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

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::Connections()
    :
    sdr_nm_num_clients{YType::uint32, "sdr-nm-num-clients"},
    esd_client_num_clients{YType::uint32, "esd-client-num-clients"},
    mlap_client_num_clients{YType::uint32, "mlap-client-num-clients"}
        ,
    esdma_info(std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo>())
    , sdr_nm_client_id(this, {})
    , esd_client_id(this, {})
    , mlap_client_id(this, {})
{
    esdma_info->parent = this;

    yang_name = "connections"; yang_parent_name = "mgmt-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Connections::~Connections()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_nm_client_id.len(); index++)
    {
        if(sdr_nm_client_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<esd_client_id.len(); index++)
    {
        if(esd_client_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlap_client_id.len(); index++)
    {
        if(mlap_client_id[index]->has_data())
            return true;
    }
    return sdr_nm_num_clients.is_set
	|| esd_client_num_clients.is_set
	|| mlap_client_num_clients.is_set
	|| (esdma_info !=  nullptr && esdma_info->has_data());
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_operation() const
{
    for (std::size_t index=0; index<sdr_nm_client_id.len(); index++)
    {
        if(sdr_nm_client_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<esd_client_id.len(); index++)
    {
        if(esd_client_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlap_client_id.len(); index++)
    {
        if(mlap_client_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_nm_num_clients.yfilter)
	|| ydk::is_set(esd_client_num_clients.yfilter)
	|| ydk::is_set(mlap_client_num_clients.yfilter)
	|| (esdma_info !=  nullptr && esdma_info->has_operation());
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/mgmt-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_nm_num_clients.is_set || is_set(sdr_nm_num_clients.yfilter)) leaf_name_data.push_back(sdr_nm_num_clients.get_name_leafdata());
    if (esd_client_num_clients.is_set || is_set(esd_client_num_clients.yfilter)) leaf_name_data.push_back(esd_client_num_clients.get_name_leafdata());
    if (mlap_client_num_clients.is_set || is_set(mlap_client_num_clients.yfilter)) leaf_name_data.push_back(mlap_client_num_clients.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::Connections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esdma-info")
    {
        if(esdma_info == nullptr)
        {
            esdma_info = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo>();
        }
        return esdma_info;
    }

    if(child_yang_name == "sdr-nm-client-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId>();
        ent_->parent = this;
        sdr_nm_client_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "esd-client-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId>();
        ent_->parent = this;
        esd_client_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mlap-client-id")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId>();
        ent_->parent = this;
        mlap_client_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::Connections::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(esdma_info != nullptr)
    {
        _children["esdma-info"] = esdma_info;
    }

    count_ = 0;
    for (auto ent_ : sdr_nm_client_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : esd_client_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mlap_client_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-nm-num-clients")
    {
        sdr_nm_num_clients = value;
        sdr_nm_num_clients.value_namespace = name_space;
        sdr_nm_num_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-num-clients")
    {
        esd_client_num_clients = value;
        esd_client_num_clients.value_namespace = name_space;
        esd_client_num_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-num-clients")
    {
        mlap_client_num_clients = value;
        mlap_client_num_clients.value_namespace = name_space;
        mlap_client_num_clients.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-nm-num-clients")
    {
        sdr_nm_num_clients.yfilter = yfilter;
    }
    if(value_path == "esd-client-num-clients")
    {
        esd_client_num_clients.yfilter = yfilter;
    }
    if(value_path == "mlap-client-num-clients")
    {
        mlap_client_num_clients.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esdma-info" || name == "sdr-nm-client-id" || name == "esd-client-id" || name == "mlap-client-id" || name == "sdr-nm-num-clients" || name == "esd-client-num-clients" || name == "mlap-client-num-clients")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::EsdmaInfo()
    :
    active_esdma_address{YType::str, "active-esdma-address"}
{

    yang_name = "esdma-info"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::~EsdmaInfo()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_data() const
{
    if (is_presence_container) return true;
    return active_esdma_address.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_esdma_address.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esdma-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_esdma_address.is_set || is_set(active_esdma_address.yfilter)) leaf_name_data.push_back(active_esdma_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-esdma-address")
    {
        active_esdma_address = value;
        active_esdma_address.value_namespace = name_space;
        active_esdma_address.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-esdma-address")
    {
        active_esdma_address.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-esdma-address")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::SdrNmClientId()
    :
    sdr_nm_ip_address{YType::str, "sdr-nm-ip-address"},
    sdr_nm_port_num{YType::uint16, "sdr-nm-port-num"}
{

    yang_name = "sdr-nm-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::~SdrNmClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_data() const
{
    if (is_presence_container) return true;
    return sdr_nm_ip_address.is_set
	|| sdr_nm_port_num.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sdr_nm_ip_address.yfilter)
	|| ydk::is_set(sdr_nm_port_num.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-nm-client-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_nm_ip_address.is_set || is_set(sdr_nm_ip_address.yfilter)) leaf_name_data.push_back(sdr_nm_ip_address.get_name_leafdata());
    if (sdr_nm_port_num.is_set || is_set(sdr_nm_port_num.yfilter)) leaf_name_data.push_back(sdr_nm_port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-nm-ip-address")
    {
        sdr_nm_ip_address = value;
        sdr_nm_ip_address.value_namespace = name_space;
        sdr_nm_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-nm-port-num")
    {
        sdr_nm_port_num = value;
        sdr_nm_port_num.value_namespace = name_space;
        sdr_nm_port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-nm-ip-address")
    {
        sdr_nm_ip_address.yfilter = yfilter;
    }
    if(value_path == "sdr-nm-port-num")
    {
        sdr_nm_port_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-nm-ip-address" || name == "sdr-nm-port-num")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::EsdClientId()
    :
    esd_client_ip_address{YType::str, "esd-client-ip-address"},
    esd_client_port_num{YType::uint16, "esd-client-port-num"},
    esd_client_location{YType::str, "esd-client-location"},
    esd_client_switch_info_cached{YType::enumeration, "esd-client-switch-info-cached"},
    esd_client_sdr_info_cached{YType::enumeration, "esd-client-sdr-info-cached"}
{

    yang_name = "esd-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::~EsdClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_data() const
{
    if (is_presence_container) return true;
    return esd_client_ip_address.is_set
	|| esd_client_port_num.is_set
	|| esd_client_location.is_set
	|| esd_client_switch_info_cached.is_set
	|| esd_client_sdr_info_cached.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esd_client_ip_address.yfilter)
	|| ydk::is_set(esd_client_port_num.yfilter)
	|| ydk::is_set(esd_client_location.yfilter)
	|| ydk::is_set(esd_client_switch_info_cached.yfilter)
	|| ydk::is_set(esd_client_sdr_info_cached.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd-client-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esd_client_ip_address.is_set || is_set(esd_client_ip_address.yfilter)) leaf_name_data.push_back(esd_client_ip_address.get_name_leafdata());
    if (esd_client_port_num.is_set || is_set(esd_client_port_num.yfilter)) leaf_name_data.push_back(esd_client_port_num.get_name_leafdata());
    if (esd_client_location.is_set || is_set(esd_client_location.yfilter)) leaf_name_data.push_back(esd_client_location.get_name_leafdata());
    if (esd_client_switch_info_cached.is_set || is_set(esd_client_switch_info_cached.yfilter)) leaf_name_data.push_back(esd_client_switch_info_cached.get_name_leafdata());
    if (esd_client_sdr_info_cached.is_set || is_set(esd_client_sdr_info_cached.yfilter)) leaf_name_data.push_back(esd_client_sdr_info_cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esd-client-ip-address")
    {
        esd_client_ip_address = value;
        esd_client_ip_address.value_namespace = name_space;
        esd_client_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-port-num")
    {
        esd_client_port_num = value;
        esd_client_port_num.value_namespace = name_space;
        esd_client_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-location")
    {
        esd_client_location = value;
        esd_client_location.value_namespace = name_space;
        esd_client_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-switch-info-cached")
    {
        esd_client_switch_info_cached = value;
        esd_client_switch_info_cached.value_namespace = name_space;
        esd_client_switch_info_cached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-sdr-info-cached")
    {
        esd_client_sdr_info_cached = value;
        esd_client_sdr_info_cached.value_namespace = name_space;
        esd_client_sdr_info_cached.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esd-client-ip-address")
    {
        esd_client_ip_address.yfilter = yfilter;
    }
    if(value_path == "esd-client-port-num")
    {
        esd_client_port_num.yfilter = yfilter;
    }
    if(value_path == "esd-client-location")
    {
        esd_client_location.yfilter = yfilter;
    }
    if(value_path == "esd-client-switch-info-cached")
    {
        esd_client_switch_info_cached.yfilter = yfilter;
    }
    if(value_path == "esd-client-sdr-info-cached")
    {
        esd_client_sdr_info_cached.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-client-ip-address" || name == "esd-client-port-num" || name == "esd-client-location" || name == "esd-client-switch-info-cached" || name == "esd-client-sdr-info-cached")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::MlapClientId()
    :
    mlap_client_ip_address{YType::str, "mlap-client-ip-address"},
    mlap_client_port_num{YType::uint16, "mlap-client-port-num"},
    mlap_client_location{YType::str, "mlap-client-location"},
    mlap_client_switch_info_cached{YType::enumeration, "mlap-client-switch-info-cached"}
{

    yang_name = "mlap-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::~MlapClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_data() const
{
    if (is_presence_container) return true;
    return mlap_client_ip_address.is_set
	|| mlap_client_port_num.is_set
	|| mlap_client_location.is_set
	|| mlap_client_switch_info_cached.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mlap_client_ip_address.yfilter)
	|| ydk::is_set(mlap_client_port_num.yfilter)
	|| ydk::is_set(mlap_client_location.yfilter)
	|| ydk::is_set(mlap_client_switch_info_cached.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlap-client-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mlap_client_ip_address.is_set || is_set(mlap_client_ip_address.yfilter)) leaf_name_data.push_back(mlap_client_ip_address.get_name_leafdata());
    if (mlap_client_port_num.is_set || is_set(mlap_client_port_num.yfilter)) leaf_name_data.push_back(mlap_client_port_num.get_name_leafdata());
    if (mlap_client_location.is_set || is_set(mlap_client_location.yfilter)) leaf_name_data.push_back(mlap_client_location.get_name_leafdata());
    if (mlap_client_switch_info_cached.is_set || is_set(mlap_client_switch_info_cached.yfilter)) leaf_name_data.push_back(mlap_client_switch_info_cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mlap-client-ip-address")
    {
        mlap_client_ip_address = value;
        mlap_client_ip_address.value_namespace = name_space;
        mlap_client_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-port-num")
    {
        mlap_client_port_num = value;
        mlap_client_port_num.value_namespace = name_space;
        mlap_client_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-location")
    {
        mlap_client_location = value;
        mlap_client_location.value_namespace = name_space;
        mlap_client_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-switch-info-cached")
    {
        mlap_client_switch_info_cached = value;
        mlap_client_switch_info_cached.value_namespace = name_space;
        mlap_client_switch_info_cached.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mlap-client-ip-address")
    {
        mlap_client_ip_address.yfilter = yfilter;
    }
    if(value_path == "mlap-client-port-num")
    {
        mlap_client_port_num.yfilter = yfilter;
    }
    if(value_path == "mlap-client-location")
    {
        mlap_client_location.yfilter = yfilter;
    }
    if(value_path == "mlap-client-switch-info-cached")
    {
        mlap_client_switch_info_cached.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlap-client-ip-address" || name == "mlap-client-port-num" || name == "mlap-client-location" || name == "mlap-client-switch-info-cached")
        return true;
    return false;
}

Controller::Switch::Oper::PortState::PortState()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "port-state"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::PortState::~PortState()
{
}

bool Controller::Switch::Oper::PortState::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::PortState::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::PortState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::PortState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::PortState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::PortState::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::PortState::get_children() const
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

void Controller::Switch::Oper::PortState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::PortState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::PortState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::PortState::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "port-state"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::PortState::Location::~Location()
{
}

bool Controller::Switch::Oper::PortState::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::PortState::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::PortState::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/port-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::PortState::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::PortState::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::PortState::Location::PortIter>();
        ent_->parent = this;
        port_iter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::PortState::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_iter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::PortState::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::PortState::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::PortState::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::PortState::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::PortState::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::PortState::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Controller::Switch::Oper::PortState::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::PortState::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::PortState::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::PortState::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::PortState::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::PortState::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::PortState::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Trunk::Trunk()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "trunk"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Trunk::~Trunk()
{
}

bool Controller::Switch::Oper::Trunk::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Trunk::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Trunk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trunk::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trunk::get_children() const
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

void Controller::Switch::Oper::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Trunk::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    trunk_member_count{YType::uint32, "trunk-member-count"},
    trunk_name{YType::str, "trunk-name"}
        ,
    trunk_member_port_iter(this, {"trunk_member_port"})
{

    yang_name = "location"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Trunk::Location::~Location()
{
}

bool Controller::Switch::Oper::Trunk::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trunk_member_port_iter.len(); index++)
    {
        if(trunk_member_port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| trunk_member_count.is_set
	|| trunk_name.is_set;
}

bool Controller::Switch::Oper::Trunk::Location::has_operation() const
{
    for (std::size_t index=0; index<trunk_member_port_iter.len(); index++)
    {
        if(trunk_member_port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(trunk_member_count.yfilter)
	|| ydk::is_set(trunk_name.yfilter);
}

std::string Controller::Switch::Oper::Trunk::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/switch/oper/trunk/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Trunk::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trunk::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (trunk_member_count.is_set || is_set(trunk_member_count.yfilter)) leaf_name_data.push_back(trunk_member_count.get_name_leafdata());
    if (trunk_name.is_set || is_set(trunk_name.yfilter)) leaf_name_data.push_back(trunk_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trunk::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trunk-member-port-iter")
    {
        auto ent_ = std::make_shared<Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter>();
        ent_->parent = this;
        trunk_member_port_iter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trunk::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trunk_member_port_iter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Switch::Oper::Trunk::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-member-count")
    {
        trunk_member_count = value;
        trunk_member_count.value_namespace = name_space;
        trunk_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-name")
    {
        trunk_name = value;
        trunk_name.value_namespace = name_space;
        trunk_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trunk::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "trunk-member-count")
    {
        trunk_member_count.yfilter = yfilter;
    }
    if(value_path == "trunk-name")
    {
        trunk_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trunk::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-member-port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "trunk-member-count" || name == "trunk-name")
        return true;
    return false;
}

Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::TrunkMemberPortIter()
    :
    trunk_member_port{YType::uint32, "trunk-member-port"},
    trunk_member_status{YType::enumeration, "trunk-member-status"}
{

    yang_name = "trunk-member-port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::~TrunkMemberPortIter()
{
}

bool Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::has_data() const
{
    if (is_presence_container) return true;
    return trunk_member_port.is_set
	|| trunk_member_status.is_set;
}

bool Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk_member_port.yfilter)
	|| ydk::is_set(trunk_member_status.yfilter);
}

std::string Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk-member-port-iter";
    ADD_KEY_TOKEN(trunk_member_port, "trunk-member-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk_member_port.is_set || is_set(trunk_member_port.yfilter)) leaf_name_data.push_back(trunk_member_port.get_name_leafdata());
    if (trunk_member_status.is_set || is_set(trunk_member_status.yfilter)) leaf_name_data.push_back(trunk_member_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk-member-port")
    {
        trunk_member_port = value;
        trunk_member_port.value_namespace = name_space;
        trunk_member_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-member-status")
    {
        trunk_member_status = value;
        trunk_member_status.value_namespace = name_space;
        trunk_member_status.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk-member-port")
    {
        trunk_member_port.yfilter = yfilter;
    }
    if(value_path == "trunk-member-status")
    {
        trunk_member_status.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-member-port" || name == "trunk-member-status")
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/fabric_action/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/fabric_action/fabric/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/inventory/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/inventory/summary/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/inventory/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/inventory/detail/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/event-history/" << get_segment_path();
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5500:controller/card_mgr/event-history/brief/" << get_segment_path();
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


}
}

